// =============================================================================
// Reconstructed: programs/arb-bot/src/cpi/mod.rs
// =============================================================================
// From Ghidra decompilation: 7 CPI handler functions identified for different
// DEX architectures. The bot uses invoke() (not invoke_signed()) since the
// authority is a direct signer, not a PDA.

pub mod system;

// CPI architecture (from Ghidra function analysis):
//
// 1. FUN_ram_00005620 (1,792B) — Dedicated Meteora DLMM handler
//    Unique: variable bin array accounts (21-23 total), Swap2 instruction
//
// 2. FUN_ram_00005fe8 (2,904B) — Shared 10-account token-swap handler
//    Serves: Orca Token Swap V2, Fluxbeam, Saber, Saros, StepN/Dooar, Penguin/Phoenix
//    All use the standard spl-token-swap interface layout
//
// 3. Orca Whirlpool handler (~11 accounts)
//    Serves: Orca Whirlpool (current) + Orca Whirlpool (legacy/DjVE6)
//    Includes tick_array accounts for concentrated liquidity
//
// 4. Raydium CLMM handler (~13 accounts)
//    Serves: Raydium CLMM, CLMM-openbook, CAMM V2 (all share the interface)
//
// 5. Raydium AMM V4 handler (~17 accounts)
//    Includes OpenBook/Serum market accounts (bids, asks, event_queue, vaults)
//
// 6. Raydium CPMM handler (~16 accounts)
//    Serves: Raydium CPMM + Raydium CP-AMM new
//
// 7. Individual handlers for: Pump.fun AMM (15), PancakeSwap (16),
//    Byreal CLMM (12), Futarchy AMM (15), Fusion AMM (15),
//    Meteora Dynamic AMM (15)
//
// All handlers:
//   - Build AccountMeta vectors from remaining_accounts slice
//   - Construct instruction data with swap parameters
//   - Call solana_program::program::invoke()
//   - Advance the account_offset by the consumed account count
