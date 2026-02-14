// =============================================================================
// RECONSTRUCTED SOURCE CODE for program G2E4eoenFMirpFKRfHNo2koDP7mrhnNWVwxyHASSpjQD
// =============================================================================
// This is a REVERSE-ENGINEERED APPROXIMATION, NOT the original source code.
// Reconstructed from:
//   - BPF binary string analysis (programs/arb-bot/src/processor.rs, cpi/system.rs, state.rs, etc.)
//   - On-chain transaction analysis (instruction data formats, account layouts, CPI calls)
//   - Program log messages ("hop: N amount: X", "tip amount: X")
//   - Error code patterns (6001 = unprofitable, 6036 = constraint, 6004 = custom)
//   - Anchor framework error enum (full Anchor 0.31.x error set found in binary)
//   - Integrated programs: Meteora DLMM, Pump.fun AMM, SPL Token, Token-2022
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
    /// Data format (12 bytes):
    ///   [0]    : instruction index (0x00) - handled by Anchor dispatch
    ///   [0]    : num_hops (u8) - number of swap hops
    ///   [1..9] : amount (u64 LE) - input amount in smallest token unit
    ///   [9..11]: flags (u16 LE) - min profit threshold or routing flags
    ///
    /// The program iterates over `num_hops` swap legs, calling into various DEX
    /// programs via CPI (Meteora DLMM, Pump.fun AMM, etc.). After all hops, it
    /// checks that the output amount exceeds the input (profit check). If not
    /// profitable, it reverts with error 6001.
    ///
    /// Logs "hop: N amount: X" after each successful hop.
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
    /// Data format (1 byte):
    ///   [0]: instruction index (0x02) - handled by Anchor dispatch
    ///
    /// Uses createAccountWithSeed + initializeAccount3 via CPI to the System
    /// Program and SPL Token program. The seed is deterministic (likely a hash
    /// of the mint address) so the bot can predict token account addresses
    /// off-chain without needing PDAs.
    pub fn create_token_account(ctx: Context<CreateTokenAccount>) -> Result<()> {
        processor::process_create_token_account(ctx)
    }
}

// =============================================================================
// Instruction 0x00: ArbSwap accounts
// =============================================================================
// The arb swap instruction uses a variable number of remaining_accounts to
// pass DEX-specific accounts for each hop. The base accounts are fixed.

#[derive(Accounts)]
pub struct ArbSwap<'info> {
    /// The bot authority / payer. Must be the upgrade authority.
    #[account(mut)]
    pub authority: Signer<'info>,

    /// The bot's source token account for the input token.
    /// CHECK: Validated in processor via token account checks.
    #[account(mut)]
    pub source_token_account: UncheckedAccount<'info>,

    /// The bot's destination token account for the output token
    /// (may be the same as source for circular arbs).
    /// CHECK: Validated in processor.
    #[account(mut)]
    pub destination_token_account: UncheckedAccount<'info>,

    // Remaining accounts are passed dynamically and contain:
    // - DEX program IDs
    // - Pool/pair accounts
    // - Token accounts (vaults, fee accounts)
    // - Oracle accounts
    // - Token program(s) (SPL Token / Token-2022)
    // - Memo program (for Pump.fun)
    // - System program
    // - ATA program
    // These are parsed per-hop in the processor based on the DEX type.
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
// Custom errors
// =============================================================================

#[error_code]
pub enum ArbBotError {
    /// 6000 (0x1770)
    #[msg("Invalid instruction data")]
    InvalidInstructionData,

    /// 6001 (0x1771) - Most common error (39/44 failures)
    /// Arb swap was not profitable. The output amount did not exceed
    /// the input amount by the required minimum profit threshold.
    #[msg("Arbitrage not profitable")]
    NotProfitable,

    /// 6002 (0x1772)
    #[msg("Invalid hop configuration")]
    InvalidHopConfig,

    /// 6003 (0x1773)
    #[msg("Failed to calculate swap amount")]
    CalculationError,

    /// 6004 (0x1774) - Seen 1 time in transaction history
    #[msg("Invalid account state")]
    InvalidAccountState,

    /// 6005 (0x1775)
    #[msg("Failed to unpack mint state")]
    MintUnpackError,

    /// 6006 (0x1776)
    #[msg("Failed to get mint extensions")]
    MintExtensionError,

    /// 6007..6035 - Placeholder for unknown intermediate errors

    /// 6036 (0x1794) - Seen 3 times
    /// Likely related to token mint or transfer hook constraint.
    #[msg("Token constraint violation")]
    TokenConstraintViolation,
}
