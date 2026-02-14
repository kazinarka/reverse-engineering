"""Identify all extracted program IDs."""
import json

# From the binary extraction
programs = {
    "FLUXubRmkEi2q6K3Y9kBPg9248ggaZVsoSFhtJHSrm1X": "Fluxbeam DEX",
    "REALQqNEomY6cQGZJUGwywTBD2UmDT32rZcNnfxQ5N2": "Byreal CLMM",
    "6gVaJHAiTxGpDupK8Hiardpt6BD3BiLyegB1u4FUC5ue": "Empty account (on-curve) - PDA/seed",
    "7h9vitALcvFXZYJu3A5HtXGWWEfp6con8R3V7osGcePU": "Empty account (off-curve) - PDA/seed",
    "SSwpkEEcbUqx4vtoEByFjSkhKdCT862DNVb52nZg1UZ": "Saros Swap (SSwap)",
    "86ZSW2TEKjvnXN7ZULx4Fpwwv3iy2HEBjwNvbsXK7mH1": "Empty account (off-curve) - PDA/seed",
    "TokenkegQfeZyiNwAJbNbGKPFXCWuBvf9Ss623VQ5DA": "SPL Token Program",
    "HpNfyc2Saw7RKkQd8nEL4khUcuPhQ7WwY1B2qjx8jxFq": "PancakeSwap AMM",
    "5QFQCXDVUFoLxiCFdHkiAhwMwCSMa8QWZmkLZwDbDFoH": "Empty account (off-curve) - PDA/seed",
    "675kPX9MHTjS2zt1qfr1NYHuzeLXfQM9H24wFSUt1Mp8": "Raydium AMM V4",
    "11111111111111111111111111111111": "System Program",
    "FUTARELBfJfQ8RDGhg1wdhddq1odMAJUePHFuBYfUxKq": "Futarchy AMM",
    "T1pyyaTNZsKv2WcRAB8oVnk93mLJw2XzjtVYqCsaHqt": "Raydium CLMM (openbook)",
    "fUSioN9YKKSa3CUC2YUc4tPkHJ5Y6XW1yz8y6F7qWz9": "Fusion AMM",
    "5PECbuLwKRdB8iNocpkJ2vWXTxetSRuWZKHgdzAtu5WK": "Empty account (off-curve) - PDA/seed",
    "2wT8Yq49kHgDzXuPxZSaeLaH1qbmGXtEyPy64bL7aD3c": "Raydium CLMM",
    "So11111111111111111111111111111111111111112": "Wrapped SOL (Native Mint)",
    "TokenzQdBNbLqP5VEhdkAS6EPFLC1PHnBqCXEpPxuEb": "SPL Token-2022 Program",
    "5QQu2Q2GDhuo2m8YwbWN2MgbBPAgiTpvDADxGDSU5CG3": "Empty account (on-curve) - PDA/seed",
    "EPjFWdd5AufqSSqeM2qN1xzybapC8G4wEGGkZwyTDt1v": "USDC Mint",
    "LBUZKhRxPF3XUpBCjp4YzTKgLccjZhTSDM9YuVaPwxo": "Meteora DLMM",
    "pAMMBay6oceH9fJKBRHGP5D4bD4sWpmSwMn52FMfXEA": "Pump.fun AMM (PumpSwap)",
    "5YEsFCJ6CeC8gEok8SZVEe9Ps5ojBKYbDt7d4dYZ4eJD": "Empty account (on-curve) - PDA/seed",
    "7ZJSMD7ouQGUkx1ZJeJgkWj16ZV1fEataxSHTxySy2Z1": "Empty account (off-curve) - PDA/seed",
    "DjVE6JNiYqPL2QXyCUUh8rNjHrbz9hXHNYt99MQ59qw1": "Orca Whirlpool (old/legacy)",
    "9W959DqEETiGZocYWCQPaJ6sBmUzgfxXfqGeTEdp3aQP": "Orca Token Swap V2",
    "SSwapUtytfBdBn1b9NUGG6foMVPtcWgpRU32HToDUZr": "Saber Stable Swap",
    "Dooar9JkhdZ7J3LHN3A7YCuoGRUggXhQaG4kijfLGU2j": "StepN DEX (Dooar)",
    "PSwapMdSai8tjrEXcxFeQth87xC4rRsa4VA5mhGhXkP": "Penguin Swap / Phoenix",
    "whirLbMiicVdio4qvUfM5KAg6Ct8VwpYzGff3uctyCc": "Orca Whirlpool",
    "CPMMoo8L3F4NbTegBCKVNunggL7H1ZpdTHKxQB5qKP1C": "Raydium CPMM",
    "CAMMCzo5YL8w4VFF8KVHrK22GGUsp5VTaW7grrKgrWqK": "Raydium CLMM V2 (CAMM)",
    "cpamdpZCGKUy5JxQXB4dcpGPiikHawvSWAd6mEn1sGG": "Raydium CP-AMM (new)",
    "Eo7WjKq67rjJQSZxS6z3YkapzY3eMj6Xy8X5EQVn5UaB": "Meteora Dynamic AMM (or Pools)",
}

print("=== Identified DEX Programs ===\n")
dex_count = 0
for pid, name in sorted(programs.items(), key=lambda x: x[1]):
    marker = ""
    if any(kw in name.lower() for kw in ["dex", "swap", "amm", "whirl", "dlmm", "cpmm", "clmm", "meteora", "raydium", "orca", "pump", "saber", "flux"]):
        marker = " [DEX]"
        dex_count += 1
    elif any(kw in name.lower() for kw in ["token", "system", "sol", "usdc", "mint"]):
        marker = " [INFRA]"
    elif "unknown" in name.lower():
        marker = " [?]"
    print(f"  {name:45s} {pid}{marker}")

print(f"\nTotal programs: {len(programs)}")
print(f"Identified DEXes: {dex_count}")
print(f"Infrastructure: {sum(1 for n in programs.values() if any(k in n.lower() for k in ['token', 'system', 'sol', 'usdc', 'mint']))}")
print(f"Unknown: {sum(1 for n in programs.values() if 'unknown' in n.lower())}")
