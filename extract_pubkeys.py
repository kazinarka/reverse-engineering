"""Extract hardcoded public keys from the Solana program binary."""
import struct
import base58

with open('/Users/illiafedotov/CLionProjects/helpers/G2E4_program.so', 'rb') as f:
    data = f.read()

# Parse ELF to find .rodata section
e_shoff = struct.unpack('<Q', data[0x28:0x30])[0]
e_shentsize = struct.unpack('<H', data[0x3a:0x3c])[0]
e_shnum = struct.unpack('<H', data[0x3c:0x3e])[0]
e_shstrndx = struct.unpack('<H', data[0x3e:0x40])[0]

shstrtab_off = e_shoff + e_shstrndx * e_shentsize
shstrtab_offset = struct.unpack('<Q', data[shstrtab_off + 0x18:shstrtab_off + 0x20])[0]

sections = {}
for i in range(e_shnum):
    sh_off = e_shoff + i * e_shentsize
    sh_name_idx = struct.unpack('<I', data[sh_off:sh_off+4])[0]
    sh_addr = struct.unpack('<Q', data[sh_off+0x10:sh_off+0x18])[0]
    sh_offset = struct.unpack('<Q', data[sh_off+0x18:sh_off+0x20])[0]
    sh_size = struct.unpack('<Q', data[sh_off+0x20:sh_off+0x28])[0]
    name_end = data.index(b'\x00', shstrtab_offset + sh_name_idx)
    name = data[shstrtab_offset + sh_name_idx:name_end].decode('ascii', errors='replace')
    sections[name] = (sh_addr, sh_offset, sh_size)

rodata_addr, rodata_off, rodata_size = sections['.rodata']
print(f".rodata: addr=0x{rodata_addr:x}, offset=0x{rodata_off:x}, size=0x{rodata_size:x}")

def read_bytes_at(vaddr, length=32):
    offset = rodata_off + (vaddr - rodata_addr)
    return data[offset:offset+length]

# All DAT_ram_ addresses used in FUN_ram_000026c0 (swap router) for memcmp
# These are program IDs compared against to determine which DEX handler to use
addrs = [
    0x00020900, 0x00020920, 0x00020940, 0x00020960,
    0x00020980, 0x000209a0, 0x000209c0, 0x000209e0,
    0x00020a00, 0x00020a20, 0x00020a40, 0x00020a60,
    0x00020a80, 0x00020aa0, 0x00020ac0, 0x00020ae0,
    0x00020b00, 0x00020b20, 0x00020b40, 0x00020b60,
    0x00020b80, 0x00020ba0, 0x00020bc0, 0x00020be0,
    # Group addresses from the multi-DEX check
    0x000210e4, 0x00021104, 0x00021124, 0x00021144, 0x00021164,
    # Other addresses
    0x000211c8, 0x000211e8, 0x00021208, 0x00021228,
    0x000212a6,
]

print("\n=== Hardcoded Public Keys (Program IDs) ===\n")
seen = set()
for addr in addrs:
    try:
        pk_bytes = read_bytes_at(addr)
        pk_b58 = base58.b58encode(pk_bytes).decode()
        if pk_b58 not in seen:
            seen.add(pk_b58)
            print(f"0x{addr:06x}: {pk_b58}")
    except Exception as e:
        print(f"0x{addr:06x}: ERROR - {e}")
