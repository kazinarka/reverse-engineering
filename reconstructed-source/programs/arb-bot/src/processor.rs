// =============================================================================
// Reconstructed: programs/arb-bot/src/processor.rs
// =============================================================================
// Evidence from binary: "programs/arb-bot/src/processor.rs" string found.
// Evidence from logs: "hop: N amount: X", "tip amount: X"
// Evidence from transactions: CPI calls to Meteora DLMM (Swap2), Pump.fun AMM (Sell),
//   SPL Token (TransferChecked), Token-2022 (TransferChecked)
// =============================================================================

use anchor_lang::prelude::*;
use anchor_lang::solana_program::{
    program::invoke_signed,
    program::invoke,
    system_instruction,
};

use crate::{ArbSwap, CreateTokenAccount, ArbBotError};

/// Processes the multi-hop arbitrage swap.
///
/// Execution flow (reconstructed from transaction logs):
/// 1. Parse instruction data: num_hops, initial amount, flags
/// 2. Record initial balance of the source token account
/// 3. For each hop (0..num_hops):
///    a. Determine which DEX to use (from remaining_accounts layout)
///    b. Build CPI instruction for that DEX
///    c. Execute the swap via CPI
///    d. Log "hop: {i} amount: {output_amount}"
/// 4. Check final balance vs initial balance
/// 5. If profit < min_threshold (from flags), return Err(NotProfitable)
/// 6. Optionally send tip (Jito or priority fee)
pub fn process_arb_swap<'info>(
    ctx: Context<'_, '_, 'info, 'info, ArbSwap<'info>>,
    num_hops: u8,
    amount: u64,
    flags: u16,
) -> Result<()> {
    let authority = &ctx.accounts.authority;
    let remaining = ctx.remaining_accounts;

    // Track the current amount through each hop
    let mut current_amount = amount;

    // Record starting balance for profit check
    let initial_balance = get_token_balance(&ctx.accounts.source_token_account)?;

    // Execute each hop
    let mut account_offset = 0;
    for hop_index in 0..num_hops {
        // Each hop consumes a variable number of remaining_accounts
        // depending on the DEX type. The first account in each hop's
        // slice is typically the DEX program ID, which we use to
        // determine the routing.
        let hop_result = execute_hop(
            authority,
            remaining,
            &mut account_offset,
            current_amount,
            hop_index,
        )?;

        current_amount = hop_result;
        msg!("hop: {} amount: {}", hop_index, current_amount);
    }

    // Profit check: final balance must exceed initial balance
    let final_balance = get_token_balance(&ctx.accounts.source_token_account)?;

    // The flags field likely encodes the minimum profit threshold
    let min_profit = flags as u64;

    if final_balance < initial_balance.checked_add(min_profit).unwrap_or(u64::MAX) {
        return Err(ArbBotError::NotProfitable.into());
    }

    Ok(())
}

/// Execute a single swap hop via CPI to the appropriate DEX program.
///
/// Known DEX integrations (from transaction analysis):
/// - Meteora DLMM: LBUZKhRxPF3XUpBCjp4YzTKgLccjZhTSDM9YuVaPwxo (calls "Swap2")
/// - Pump.fun AMM: pAMMBay6oceH9fJKBRHGP5D4bD4sWpmSwMn52FMfXEA (calls "Sell")
///
/// The account layout for each hop varies by DEX. The program determines
/// which DEX to use by checking the program ID in the remaining accounts.
fn execute_hop<'info>(
    authority: &Signer<'info>,
    remaining_accounts: &[AccountInfo<'info>],
    account_offset: &mut usize,
    amount: u64,
    _hop_index: u8,
) -> Result<u64> {
    // The DEX program ID is at a known offset in the remaining accounts
    // for this hop. The exact layout depends on the DEX type.

    // Determine DEX type from program ID
    let dex_program = &remaining_accounts[*account_offset];
    let dex_program_id = dex_program.key();

    // Known program IDs
    let meteora_dlmm = pubkey!("LBUZKhRxPF3XUpBCjp4YzTKgLccjZhTSDM9YuVaPwxo");
    let pumpfun_amm = pubkey!("pAMMBay6oceH9fJKBRHGP5D4bD4sWpmSwMn52FMfXEA");

    let output_amount = if dex_program_id == meteora_dlmm {
        execute_meteora_swap(authority, remaining_accounts, account_offset, amount)?
    } else if dex_program_id == pumpfun_amm {
        execute_pumpfun_swap(authority, remaining_accounts, account_offset, amount)?
    } else {
        // Generic swap fallback or other DEXes
        return Err(ArbBotError::InvalidHopConfig.into());
    };

    Ok(output_amount)
}

/// Execute a swap on Meteora DLMM (LB CLMM).
///
/// From transaction logs, calls the "Swap2" instruction.
/// Account layout (reconstructed from tx analysis, ~13 accounts per hop):
///   [0] lb_pair
///   [1] bin_array_bitmap_extension (optional)
///   [2] reserve_x
///   [3] reserve_y
///   [4] user_token_x
///   [5] user_token_y
///   [6] oracle
///   [7] host_fee_in (optional)
///   [8] token_x_mint
///   [9] token_y_mint
///   [10] token_program (SPL Token or Token-2022)
///   [11] event_authority
///   [12] program (Meteora DLMM)
fn execute_meteora_swap<'info>(
    _authority: &Signer<'info>,
    _remaining_accounts: &[AccountInfo<'info>],
    account_offset: &mut usize,
    amount: u64,
) -> Result<u64> {
    // Build CPI to Meteora DLMM Swap2
    // The exact instruction data and account layout depend on the
    // Meteora DLMM version. The bot constructs the CPI dynamically.

    // Advance account_offset past this hop's accounts
    // Meteora DLMM Swap2 uses approximately 13 accounts
    *account_offset += 13;

    // The actual output amount is determined by reading the token
    // account balance after the CPI call.
    // Placeholder - actual implementation reads post-swap balance
    Ok(amount) // replaced by actual balance diff
}

/// Execute a swap on Pump.fun AMM.
///
/// From transaction logs, calls the "Sell" instruction.
/// Also invokes the Pump.fun fee program (pfeeUxB6jkeY1Hxd7CsFCAjcbHA9rWtchMGdZ6VojVZ)
/// via the AMM's internal "GetFees" CPI.
///
/// Account layout (reconstructed, ~15 accounts per hop):
///   [0] pool
///   [1] user_token_account
///   [2] user_sol_account
///   [3] pool_token_vault
///   [4] pool_sol_vault
///   [5] fee_account
///   [6] fee_program (pfeeUxB6...)
///   [7] token_mint
///   [8] token_program
///   [9] system_program
///   [10] associated_token_program
///   [11] event_authority
///   [12] program (pAMMBay6...)
fn execute_pumpfun_swap<'info>(
    _authority: &Signer<'info>,
    _remaining_accounts: &[AccountInfo<'info>],
    account_offset: &mut usize,
    amount: u64,
) -> Result<u64> {
    // Build CPI to Pump.fun AMM Sell
    // Advance past this hop's accounts
    *account_offset += 15;

    Ok(amount) // replaced by actual balance diff
}

/// Process creating a new token account with a deterministic seed.
///
/// From transaction analysis:
/// - Uses createAccountWithSeed (not createAccount or ATA)
/// - Seed example: "cc1272054f1bc5c43250c6f70d6a81ad" (32-char hex string)
/// - This suggests the seed is derived from the mint address (md5 or truncated hash)
/// - Account space = 165 bytes (standard SPL Token account)
/// - Then calls initializeAccount3 to set owner and mint
pub fn process_create_token_account(ctx: Context<CreateTokenAccount>) -> Result<()> {
    let payer = &ctx.accounts.payer;
    let new_account = &ctx.accounts.new_account;
    let mint = &ctx.accounts.mint;
    let token_program = &ctx.accounts.token_program;
    let system_program = &ctx.accounts.system_program;

    // Derive seed from mint address (likely MD5 or truncated SHA256 of mint pubkey)
    let mint_key = mint.key();
    let seed = derive_account_seed(&mint_key);

    // Calculate rent
    let rent = Rent::get()?;
    let lamports = rent.minimum_balance(165); // SPL Token account size

    // Create account with seed
    let create_ix = system_instruction::create_account_with_seed(
        &payer.key(),
        &new_account.key(),
        &payer.key(),
        &seed,
        lamports,
        165,
        &token_program.key(),
    );

    invoke(
        &create_ix,
        &[
            payer.to_account_info(),
            new_account.to_account_info(),
            system_program.to_account_info(),
        ],
    )?;

    // Initialize account with initializeAccount3 (no rent sysvar needed)
    let init_ix = spl_token::instruction::initialize_account3(
        &token_program.key(),
        &new_account.key(),
        &mint_key,
        &payer.key(),
    )?;

    invoke(
        &init_ix,
        &[
            new_account.to_account_info(),
            mint.to_account_info(),
            token_program.to_account_info(),
        ],
    )?;

    Ok(())
}

/// Derive a deterministic seed string from a mint address.
/// From observed transaction: seed = "cc1272054f1bc5c43250c6f70d6a81ad" (32 hex chars).
/// This looks like an MD5 hash of the mint pubkey bytes.
fn derive_account_seed(mint: &Pubkey) -> String {
    // Most likely implementation: hex-encode a hash of the mint pubkey
    // The seed format is a 32-char lowercase hex string
    let hash = anchor_lang::solana_program::hash::hash(mint.as_ref());
    hex::encode(&hash.to_bytes()[..16]) // first 16 bytes = 32 hex chars
}

/// Get the token balance from a token account.
fn get_token_balance(account: &AccountInfo) -> Result<u64> {
    let data = account.try_borrow_data()?;
    // SPL Token account layout: amount is at bytes 64..72
    if data.len() < 72 {
        return Err(ArbBotError::InvalidAccountState.into());
    }
    let amount = u64::from_le_bytes(data[64..72].try_into().unwrap());
    Ok(amount)
}
