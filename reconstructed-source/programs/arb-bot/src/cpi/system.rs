// =============================================================================
// Reconstructed: programs/arb-bot/src/cpi/system.rs
// =============================================================================
// Evidence: "programs/arb-bot/src/cpi/system.rs" string found in binary.
// This module handles CPI calls to the System Program, specifically:
//   - createAccountWithSeed (for token account creation)
//   - transfer (for SOL transfers / tips)
// =============================================================================

use anchor_lang::prelude::*;
use anchor_lang::solana_program::{
    program::invoke,
    system_instruction,
};

/// Transfer SOL from the authority to a tip/fee account.
///
/// Binary string evidence: "tip amount:" found in processor.rs context.
/// This is likely used to send Jito tips or priority fee payments.
pub fn transfer_sol<'info>(
    from: &AccountInfo<'info>,
    to: &AccountInfo<'info>,
    lamports: u64,
    system_program: &AccountInfo<'info>,
) -> Result<()> {
    msg!("tip amount: {}", lamports);

    let ix = system_instruction::transfer(from.key, to.key, lamports);
    invoke(
        &ix,
        &[
            from.clone(),
            to.clone(),
            system_program.clone(),
        ],
    )?;

    Ok(())
}

/// Create a new account with a deterministic seed.
///
/// Used by the create_token_account instruction to create SPL Token accounts
/// with predictable addresses derived from the mint.
pub fn create_account_with_seed<'info>(
    payer: &AccountInfo<'info>,
    new_account: &AccountInfo<'info>,
    base: &Pubkey,
    seed: &str,
    lamports: u64,
    space: u64,
    owner: &Pubkey,
    system_program: &AccountInfo<'info>,
) -> Result<()> {
    let ix = system_instruction::create_account_with_seed(
        payer.key,
        new_account.key,
        base,
        seed,
        lamports,
        space,
        owner,
    );

    invoke(
        &ix,
        &[
            payer.clone(),
            new_account.clone(),
            system_program.clone(),
        ],
    )?;

    Ok(())
}
