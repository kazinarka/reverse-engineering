#!/usr/bin/env python3
"""
Reverse engineering analysis of the arb-bot BPF binary.
Parses the disassembly to find function boundaries, the entrypoint/dispatch,
call graph, string references, and key logic patterns.
"""
import re
import struct
import json
from collections import defaultdict

DISASM_FILE = "/Users/illiafedotov/CLionProjects/helpers/G2E4_disassembly.txt"
BINARY_FILE = "/Users/illiafedotov/CLionProjects/helpers/G2E4_program.so"

# Parse disassembly
instructions = []
with open(DISASM_FILE) as f:
    for line in f:
        line = line.strip()
        # Match lines like: "    123:  <hex>  <asm>"
        m = re.match(r'(\d+):\s+((?:[0-9a-f]{2}\s)+)\s*(.*)', line)
        if m:
            addr = int(m.group(1))
            raw_hex = m.group(2).strip()
            asm = m.group(3).strip()
            instructions.append((addr, raw_hex, asm))

print(f"Total instructions parsed: {len(instructions)}")

# Load binary for .rodata extraction
with open(BINARY_FILE, "rb") as f:
    binary = f.read()

# Find .rodata section (strings are referenced with addresses like 0x20d80)
# In SBF ELF, the virtual address offset for .rodata is typically 0x100000000
# but the references we see are direct offsets into the binary
# Let's find the rodata by looking at the ELF sections
def read_elf_sections(data):
    """Parse ELF64 section headers."""
    if data[:4] != b'\x7fELF':
        return {}
    e_shoff = struct.unpack_from('<Q', data, 40)[0]
    e_shentsize = struct.unpack_from('<H', data, 58)[0]
    e_shnum = struct.unpack_from('<H', data, 60)[0]
    e_shstrndx = struct.unpack_from('<H', data, 62)[0]
    
    sections = {}
    for i in range(e_shnum):
        off = e_shoff + i * e_shentsize
        sh_name = struct.unpack_from('<I', data, off)[0]
        sh_type = struct.unpack_from('<I', data, off + 4)[0]
        sh_flags = struct.unpack_from('<Q', data, off + 8)[0]
        sh_addr = struct.unpack_from('<Q', data, off + 16)[0]
        sh_offset = struct.unpack_from('<Q', data, off + 24)[0]
        sh_size = struct.unpack_from('<Q', data, off + 32)[0]
        sections[i] = {
            'name_off': sh_name, 'type': sh_type, 'flags': sh_flags,
            'addr': sh_addr, 'offset': sh_offset, 'size': sh_size
        }
    
    # Resolve section names
    if e_shstrndx < len(sections):
        strtab_off = sections[e_shstrndx]['offset']
        for i, sec in sections.items():
            name_start = strtab_off + sec['name_off']
            name_end = data.index(b'\x00', name_start)
            sec['name'] = data[name_start:name_end].decode('ascii', errors='replace')
    
    return sections

sections = read_elf_sections(binary)
print("\nELF Sections:")
for i, sec in sections.items():
    if sec.get('size', 0) > 0:
        print(f"  [{i}] {sec.get('name','?'):20s} offset=0x{sec['offset']:06x} size=0x{sec['size']:06x} addr=0x{sec['addr']:08x}")

# Find .rodata
rodata_sec = None
text_sec = None
for i, sec in sections.items():
    if sec.get('name') == '.rodata':
        rodata_sec = sec
    if sec.get('name') == '.text':
        text_sec = sec

if rodata_sec:
    print(f"\n.rodata: file_offset=0x{rodata_sec['offset']:x}, vaddr=0x{rodata_sec['addr']:x}, size=0x{rodata_sec['size']:x}")

# Function to read string from rodata by virtual address
def read_rodata_string(vaddr, max_len=200):
    if rodata_sec is None:
        return None
    file_off = vaddr - rodata_sec['addr'] + rodata_sec['offset']
    if file_off < 0 or file_off >= len(binary):
        return None
    end = binary.index(b'\x00', file_off) if b'\x00' in binary[file_off:file_off+max_len] else file_off+max_len
    s = binary[file_off:end]
    try:
        return s.decode('utf-8')
    except:
        return s.hex()

# ====================================================================
# 1. Find all CALL targets and build call graph
# ====================================================================
call_targets = defaultdict(list)  # target -> [callers]
function_entries = set()

for addr, raw, asm in instructions:
    # call instructions: "call 0xNNNN" 
    m = re.match(r'call (0x[0-9a-f]+)', asm)
    if m:
        target = int(m.group(1), 16)
        call_targets[target].append(addr)
        function_entries.add(target)

# Also find all "exit" instructions (function returns)
exit_addrs = [addr for addr, _, asm in instructions if asm == 'exit']

print(f"\nFunction call targets found: {len(function_entries)}")
print(f"Exit (return) instructions: {len(exit_addrs)}")

# Known syscalls (high addresses)
SYSCALLS = {
    0x2ea0: "sol_alloc_free_ (heap alloc)",
    0x2d0d: "sol_log_ (log message)",
    0x348f: "sol_panic (panic/abort)",
    0x34f0: "sol_panic (panic variant 2)",
    0x34d7: "sol_memset_",
    0x310e: "sol_memcpy_",
    0x2b4b: "sol_invoke_signed_c",
    0x3062: "sol_log_compute_units_",
    0x2f8f: "sol_memcmp_",
    0x307b: "sol_get_rent_sysvar",
}

# Separate internal functions from syscalls
internal_funcs = sorted([t for t in function_entries if t < 0x2000])
syscall_funcs = sorted([t for t in function_entries if t >= 0x2000])

print(f"\nInternal functions: {len(internal_funcs)}")
for f in internal_funcs:
    callers = call_targets[f]
    print(f"  func_0x{f:04x} (addr {f}) - called {len(callers)} times from: {[hex(c) for c in callers[:5]]}")

print(f"\nSyscalls/library calls: {len(syscall_funcs)}")
for f in syscall_funcs:
    callers = call_targets[f]
    name = SYSCALLS.get(f, "unknown")
    print(f"  0x{f:04x} ({name}) - called {len(callers)} times")

# ====================================================================
# 2. Find the entrypoint function
# ====================================================================
# In Solana BPF, the entrypoint is at the start of .text
# r1 = pointer to input data (accounts, instruction data, program_id)
print("\n" + "="*70)
print("ENTRYPOINT ANALYSIS")
print("="*70)

# The entrypoint starts at the beginning of .text
# In Anchor programs, the entrypoint:
# 1. Deserializes accounts from input buffer
# 2. Reads instruction data
# 3. Dispatches based on 8-byte discriminator (or raw index)
# Let's trace the first ~200 instructions

# Find string references (loads of rodata addresses)
print("\n=== String references in code ===")
string_refs = {}
for addr, raw, asm in instructions[:500]:  # Focus on early code
    # Pattern: r2 = 0xNNNNN ll (loading rodata address)
    m = re.match(r'r\d+ = (0x[0-9a-f]+) ll', asm)
    if m:
        vaddr = int(m.group(1), 16)
        # Check if this is in rodata range
        if rodata_sec and rodata_sec['addr'] <= vaddr < rodata_sec['addr'] + rodata_sec['size']:
            s = read_rodata_string(vaddr)
            if s and len(s) > 2:
                string_refs[addr] = (vaddr, s)
                # Only print first 50 for clarity
                if len(string_refs) <= 50:
                    print(f"  @{addr}: 0x{vaddr:x} -> \"{s[:80]}\"")

# ====================================================================
# 3. Analyze function boundaries more precisely
# ====================================================================
# A function starts at a call target or at instruction 36 (entrypoint)
# A function ends at an 'exit' instruction

print("\n" + "="*70)
print("FUNCTION MAP")
print("="*70)

# Build instruction address -> index mapping
addr_to_idx = {inst[0]: i for i, inst in enumerate(instructions)}

# Build function ranges
all_func_starts = sorted(set([36] + list(internal_funcs)))  # 36 = entrypoint
func_ranges = []
for i, start in enumerate(all_func_starts):
    # Find the last 'exit' before the next function start
    if i + 1 < len(all_func_starts):
        next_start = all_func_starts[i + 1]
    else:
        next_start = instructions[-1][0] + 1
    
    # Find exits within this range
    func_exits = [a for a in exit_addrs if start <= a < next_start]
    end = max(func_exits) if func_exits else next_start - 1
    
    # Count instructions
    n_instr = sum(1 for a, _, _ in instructions if start <= a <= end)
    func_ranges.append((start, end, n_instr))

for start, end, n in func_ranges:
    callers = call_targets.get(start, [])
    caller_str = f" called_from={[hex(c) for c in callers[:3]]}" if callers else " (entrypoint)"
    print(f"  func_{start:04x}: {start}-{end} ({n} instructions){caller_str}")

# ====================================================================
# 4. Deep analysis of entrypoint dispatch
# ====================================================================
print("\n" + "="*70)
print("INSTRUCTION DISPATCH ANALYSIS")
print("="*70)

# Find conditional branches that compare against constants
# This reveals the instruction dispatch logic
for addr, raw, asm in instructions[:800]:
    # Look for comparisons with immediate values
    if re.search(r'if r\d+ [!=<>]+ 0x[0-9a-f]+', asm):
        print(f"  @{addr}: {asm}")
    # Look for comparisons between registers followed by branches
    elif re.search(r'if r\d+ [!=<>]+ r\d+', asm):
        # Check if preceded by loading a constant
        idx = addr_to_idx.get(addr, -1)
        if idx > 0:
            prev = instructions[idx-1]
            if 'll' in prev[2] or re.match(r'r\d+ = 0x', prev[2]):
                print(f"  @{prev[0]}: {prev[2]}")
                print(f"  @{addr}: {asm}")

# ====================================================================
# 5. Find all string references across the entire binary
# ====================================================================
print("\n" + "="*70)
print("ALL RODATA STRING REFERENCES")
print("="*70)

all_string_refs = {}
for addr, raw, asm in instructions:
    m = re.match(r'r\d+ = (0x[0-9a-f]+) ll', asm)
    if m:
        vaddr = int(m.group(1), 16)
        if rodata_sec and rodata_sec['addr'] <= vaddr < rodata_sec['addr'] + rodata_sec['size']:
            s = read_rodata_string(vaddr)
            if s and len(s) > 3 and s.isprintable():
                all_string_refs[addr] = (vaddr, s)

print(f"Total string references: {len(all_string_refs)}")
for addr in sorted(all_string_refs.keys()):
    vaddr, s = all_string_refs[addr]
    # Find which function this is in
    func_name = "unknown"
    for start, end, _ in func_ranges:
        if start <= addr <= end:
            func_name = f"func_{start:04x}"
            break
    print(f"  @{addr} [{func_name}]: \"{s[:100]}\"")

# ====================================================================
# 6. Save full analysis
# ====================================================================
analysis = {
    "total_instructions": len(instructions),
    "elf_sections": {sec.get('name','?'): {
        'offset': hex(sec['offset']), 'size': hex(sec['size']), 'addr': hex(sec['addr'])
    } for i, sec in sections.items() if sec.get('size', 0) > 0},
    "functions": [{
        "name": f"func_{s:04x}",
        "start": s, "end": e, "instruction_count": n,
        "callers": [hex(c) for c in call_targets.get(s, [])]
    } for s, e, n in func_ranges],
    "syscalls_used": {hex(k): {"name": v, "call_count": len(call_targets[k])} for k, v in SYSCALLS.items() if k in function_entries},
    "string_references": {str(addr): {"rodata_addr": hex(vaddr), "string": s} for addr, (vaddr, s) in all_string_refs.items()},
}

with open("/Users/illiafedotov/CLionProjects/helpers/G2E4_re_analysis.json", "w") as f:
    json.dump(analysis, f, indent=2)
print(f"\nSaved analysis to G2E4_re_analysis.json")
