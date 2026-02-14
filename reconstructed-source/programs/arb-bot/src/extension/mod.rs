// =============================================================================
// Reconstructed: src/extension/mod.rs (likely programs/arb-bot/src/extension/mod.rs)
// =============================================================================
// Evidence: "src/extension/mod.rs" string found in binary (referenced twice).
// Evidence from binary strings: "Failed to get mint extensions",
//   "mint extensions", "account extensions", "length of input"
//
// This module handles Token-2022 (Token Extensions) specific logic.
// The program supports both SPL Token and Token-2022 tokens, and needs
// to handle transfer hooks, metadata pointers, and other extensions.
//
// The Anchor constraint strings in the binary include ALL Token Extension
// constraint types (TransferHook, PermanentDelegate, CloseAuthority,
// MetadataPointer, GroupMemberPointer, GroupPointer), indicating the program
// is built to handle any Token-2022 token.
// =============================================================================

use anchor_lang::prelude::*;

/// Check if a mint account uses Token-2022 (Token Extensions program).
pub fn is_token_2022(token_program: &Pubkey) -> bool {
    *token_program == spl_token_2022::id()
}

/// Get the transfer hook program ID from a Token-2022 mint, if any.
///
/// Binary evidence: "Failed to get mint extensions", "nt extensions" (token extensions)
///
/// When swapping Token-2022 tokens with transfer hooks, the bot must
/// include the hook program and its required accounts in the CPI call.
pub fn get_transfer_hook_program_id(mint_data: &[u8]) -> Result<Option<Pubkey>> {
    // Token-2022 mint has extensions after the base 82 bytes
    if mint_data.len() <= 82 {
        return Ok(None);
    }

    // Parse extensions TLV (Type-Length-Value) format
    // Transfer Hook extension type = 13
    let mut offset = 82;

    // Skip padding to reach TLV area
    // The actual TLV parsing depends on spl-token-2022 layout
    while offset + 4 <= mint_data.len() {
        let ext_type = u16::from_le_bytes(
            mint_data[offset..offset + 2].try_into().unwrap()
        );
        let ext_len = u16::from_le_bytes(
            mint_data[offset + 2..offset + 4].try_into().unwrap()
        ) as usize;

        if ext_type == 13 && ext_len >= 64 {
            // Transfer Hook extension: authority (32 bytes) + program_id (32 bytes)
            let program_id_start = offset + 4 + 32;
            if program_id_start + 32 <= mint_data.len() {
                let hook_program = Pubkey::try_from(
                    &mint_data[program_id_start..program_id_start + 32]
                ).unwrap();

                if hook_program != Pubkey::default() {
                    return Ok(Some(hook_program));
                }
            }
        }

        offset += 4 + ext_len;
    }

    Ok(None)
}

/// Determine the correct token program to use for a given mint.
///
/// The bot checks the owner of the mint account to determine whether to
/// use SPL Token or Token-2022. This is important because the two programs
/// have different program IDs and the CPI call must target the correct one.
pub fn get_token_program_for_mint(mint_account: &AccountInfo) -> Pubkey {
    *mint_account.owner
}

/// Get the number of decimals from a mint account, handling both
/// SPL Token and Token-2022 mints.
pub fn get_mint_decimals(mint_data: &[u8]) -> Result<u8> {
    if mint_data.len() < 45 {
        msg!("Unexpected length of input: {}", mint_data.len());
        return Err(ProgramError::InvalidAccountData.into());
    }
    Ok(mint_data[44])
}
