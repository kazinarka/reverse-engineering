// =============================================================================
// RECONSTRUCTED SOURCE CODE for program G2E4eoenFMirpFKRfHNo2koDP7mrhnNWVwxyHASSpjQD
// =============================================================================
// This is a REVERSE-ENGINEERED APPROXIMATION, NOT the original source code.
// Reconstructed from:
//   - Ghidra sBPF decompilation (137/138 functions, 10,460 lines of C pseudocode)
//   - BPF binary string analysis (file paths, error messages, log strings)
//   - On-chain transaction analysis (instruction data formats, account layouts)
//   - 34 hardcoded program IDs extracted from .rodata and identified on Solscan
//   - Anchor framework error enum (full Anchor 0.31.x error set found in binary)
//
// Key Ghidra findings:
//   FUN_ram_000026c0 (11.6KB) = Swap Router: dispatches to 21 DEXes via memcmp
//   FUN_ram_00002368 (856B)   = Execute Swap + Tip: profit check + tip payment
//   FUN_ram_00005620 (1.8KB)  = Meteora DLMM CPI (dedicated, 21-23 accounts)
//   FUN_ram_00005fe8 (2.9KB)  = Shared 10-account CPI (6 DEXes)
//   FUN_ram_0000e1c0 (5KB)    = Instruction data deserializer
//   FUN_ram_00010b78 (3.4KB)  = Hop type expander (compound→atomic, 27 types)
//
// Dispatch: Custom single-byte instruction index (NOT Anchor 8-byte discriminators)
//   0x00 = arb_swap, 0x02 = create_token_account
//
// Integrated DEXes (21 total):
//   Meteora DLMM, Meteora Dynamic AMM, Raydium AMM V4, Raydium CLMM,
//   Raydium CLMM-openbook, Raydium CAMM V2, Raydium CPMM, Raydium CP-AMM new,
//   Orca Whirlpool, Orca Whirlpool Legacy, Orca Token Swap V2,
//   Pump.fun AMM, PancakeSwap, Byreal CLMM, Futarchy AMM, Fusion AMM,
//   Fluxbeam, Saber Stable Swap, Saros Swap, StepN/Dooar, Penguin/Phoenix
// =============================================================================

use anchor_lang::prelude::*;

pub mod cpi;
pub mod processor;
pub mod state;

declare_id!("G2E4eoenFMirpFKRfHNo2koDP7mrhnNWVwxyHASSpjQD");

#[program]
pub mod arb_bot {
    use super::*;

    /// Instruction 0x00: Execute a multi-hop arbitrage swap.
    ///
    /// Custom dispatch (NOT Anchor): single-byte instruction index.
    ///
    /// Data format (from Ghidra FUN_ram_0000e1c0 — instruction deserializer):
    ///   [0]    : instruction index (0x00)
    ///   [1]    : num_hops (u8)
    ///   [2..10]: amount (u64 LE) — input amount in smallest token unit
    ///   [10..12]: flags (u16 LE) — low byte = tip percentage (0-255)
    ///   [12..N]: nibble-packed hop types (4-bit each, 2 per byte)
    ///
    /// Hop types (27 total, 0x00-0x1a) are expanded by FUN_ram_00010b78:
    ///   Some compound types expand to pairs of atomic swaps:
    ///     0x09 → [0x0d, 0x07], 0x0e → [0x0f, 0x05], etc.
    ///
    /// After all hops execute, checks profit and sends a tip:
    ///   tip = profit * (flags & 0xFF) / 100, minimum 1000 lamports
    pub fn arb_swap<'info>(
        ctx: Context<'_, '_, 'info, 'info, ArbSwap<'info>>,
        num_hops: u8,
        amount: u64,
        flags: u16,
    ) -> Result<()> {
        processor::process_arb_swap(ctx, num_hops, amount, flags)
    }

    /// Instruction 0x02: Create a token account with a deterministic seed.
    ///
    /// Uses createAccountWithSeed + initializeAccount3 via CPI.
    /// Seed is a 32-char hex string derived from the mint address.
    /// This allows the bot to predict token account addresses off-chain.
    ///
    /// Ghidra (FUN_ram_00001ff0): also handles conditional tip transfer
    /// when payer matches authority (+ 0xdab88 lamport adjustment).
    pub fn create_token_account(ctx: Context<CreateTokenAccount>) -> Result<()> {
        processor::process_create_token_account(ctx)
    }
}

// =============================================================================
// Instruction 0x00: ArbSwap accounts
// =============================================================================
// remaining_accounts carry all DEX-specific accounts for each hop.
// The swap_router (FUN_ram_000026c0) reads the DEX program ID from
// remaining_accounts and dispatches to the correct CPI handler.

#[derive(Accounts)]
pub struct ArbSwap<'info> {
    /// The bot authority / payer. Must be the upgrade authority.
    #[account(mut)]
    pub authority: Signer<'info>,

    /// The bot's source token account (input token).
    /// The swap_executor reads balance before/after to determine profit.
    /// If mint == WSOL (So111...), reads lamports directly instead.
    /// CHECK: Validated in processor via token account layout reads.
    #[account(mut)]
    pub source_token_account: UncheckedAccount<'info>,

    /// The bot's destination token account (output token).
    /// May be the same as source for circular arbs (SOL→X→Y→SOL).
    /// CHECK: Validated in processor.
    #[account(mut)]
    pub destination_token_account: UncheckedAccount<'info>,

    // remaining_accounts layout (variable, per hop):
    //   For each hop: [dex_program, pool_accounts..., token_accounts..., signer]
    //   Account count varies: 10 (token-swap DEXes), 11 (Orca), 13 (Raydium CLMM),
    //   15 (Pump.fun/Meteora Pools), 16 (CPMM/PancakeSwap), 17 (Raydium V4),
    //   21-23 (Meteora DLMM with variable bin arrays)
    //
    // Last 2 accounts: system_program + tip_recipient (for tip transfer)
}

// =============================================================================
// Instruction 0x02: CreateTokenAccount accounts
// =============================================================================

#[derive(Accounts)]
pub struct CreateTokenAccount<'info> {
    /// The payer and owner of the new token account.
    #[account(mut)]
    pub payer: Signer<'info>,

    /// The new token account to be created (writable, derived with seed).
    /// CHECK: Created via CPI to system program.
    #[account(mut)]
    pub new_account: UncheckedAccount<'info>,

    /// The mint for the token account.
    /// CHECK: Validated by SPL Token during initializeAccount3.
    pub mint: UncheckedAccount<'info>,

    /// SPL Token program.
    pub token_program: Program<'info, anchor_spl::token::Token>,

    /// System program for account creation.
    pub system_program: Program<'info, System>,
}

// =============================================================================
// Custom errors (from Ghidra return code analysis)
// =============================================================================
// Error codes are 6000-based (Anchor custom error offset).
// In the binary, these appear as return values:
//   0x1770 = 6000, 0x1771 = 6001, 0x1772 = 6002, etc.
//
// FUN_ram_000026c0 (swap_router) returns:
//   0x1771 → success path (confusingly named — actually means "completed with profit")
//   0x1773 → not enough accounts
//   0x1776 → hop completed (intermediate)
//   0x1777 → configuration error
//   5999   → continue to next hop (sentinel value, not an error)
//   6000   → unknown DEX program

#[error_code]
pub enum ArbBotError {
    /// 6000 (0x1770) — Unknown DEX program ID in swap_router memcmp chain
    #[msg("Invalid instruction data")]
    InvalidInstructionData,

    /// 6001 (0x1771) — Most common error (39/44 failures in tx history)
    /// Swap completed but final_balance <= initial_balance.
    /// The route was not profitable after all hops.
    #[msg("Arbitrage not profitable")]
    NotProfitable,

    /// 6002 (0x1772) — Invalid hop configuration
    /// Bad hop type index or compound expansion failure.
    #[msg("Invalid hop configuration")]
    InvalidHopConfig,

    /// 6003 (0x1773) — Not enough remaining_accounts for this hop's DEX
    #[msg("Failed to calculate swap amount")]
    CalculationError,

    /// 6004 (0x1774) — Token account data too short or invalid layout
    #[msg("Invalid account state")]
    InvalidAccountState,

    /// 6005 (0x1775) — Failed to unpack mint data (Token-2022 handling)
    #[msg("Failed to unpack mint state")]
    MintUnpackError,

    /// 6006 (0x1776) — Token-2022 extension read failure
    #[msg("Failed to get mint extensions")]
    MintExtensionError,

    // 6007..6035 — Unknown intermediate errors (not observed in tx history)

    /// 6036 (0x1794) — Seen 3 times in tx history
    /// Related to Token-2022 transfer hook or constraint check.
    /// Binary contains ALL Anchor Token Extension constraint types:
    ///   TransferHook, PermanentDelegate, CloseAuthority,
    ///   MetadataPointer, GroupMemberPointer, GroupPointer
    #[msg("Token constraint violation")]
    TokenConstraintViolation,
}
