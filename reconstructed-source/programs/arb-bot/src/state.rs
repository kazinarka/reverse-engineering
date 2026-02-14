// =============================================================================
// Reconstructed: src/state.rs (likely programs/arb-bot/src/state.rs)
// =============================================================================
// Evidence: "src/state.rs" string found in binary.
// Evidence from binary strings about state: "account state", "mint state",
//   "unpack", "extensions", "length of input"
// This module likely defines the state/data structures used by the program.
//
// Since this is an arb bot that doesn't store persistent state (no PDA data
// accounts visible in transactions), this module likely contains helpers for
// deserializing external account state (token accounts, mint accounts, pools).
// =============================================================================

use anchor_lang::prelude::*;

/// Minimal deserialized SPL Token account data.
/// Used to read token balances without full spl-token dependency.
#[derive(Clone, Debug)]
pub struct TokenAccountState {
    pub mint: Pubkey,
    pub owner: Pubkey,
    pub amount: u64,
}

impl TokenAccountState {
    pub const LEN: usize = 165;

    /// Unpack a token account from raw account data.
    ///
    /// Binary evidence: "Failed to unpack" and "account state" strings.
    pub fn unpack(data: &[u8]) -> Result<Self> {
        if data.len() < Self::LEN {
            msg!("Unexpected length of input: {}", data.len());
            return Err(ProgramError::InvalidAccountData.into());
        }

        let mint = Pubkey::try_from(&data[0..32]).unwrap();
        let owner = Pubkey::try_from(&data[32..64]).unwrap();
        let amount = u64::from_le_bytes(data[64..72].try_into().unwrap());

        Ok(Self {
            mint,
            owner,
            amount,
        })
    }
}

/// Minimal deserialized SPL Mint data.
/// Used to read mint info (decimals, supply, freeze authority, etc.)
#[derive(Clone, Debug)]
pub struct MintState {
    pub mint_authority: Option<Pubkey>,
    pub supply: u64,
    pub decimals: u8,
    pub is_initialized: bool,
    pub freeze_authority: Option<Pubkey>,
}

impl MintState {
    pub const LEN: usize = 82;

    /// Unpack a mint from raw account data.
    ///
    /// Binary evidence: "Failed to unpack mint state", "mint state"
    pub fn unpack(data: &[u8]) -> Result<Self> {
        if data.len() < Self::LEN {
            msg!("Unexpected length of input: {}", data.len());
            return Err(ProgramError::InvalidAccountData.into());
        }

        let mint_authority_tag = u32::from_le_bytes(data[0..4].try_into().unwrap());
        let mint_authority = if mint_authority_tag == 1 {
            Some(Pubkey::try_from(&data[4..36]).unwrap())
        } else {
            None
        };

        let supply = u64::from_le_bytes(data[36..44].try_into().unwrap());
        let decimals = data[44];
        let is_initialized = data[45] != 0;

        let freeze_authority_tag = u32::from_le_bytes(data[46..50].try_into().unwrap());
        let freeze_authority = if freeze_authority_tag == 1 {
            Some(Pubkey::try_from(&data[50..82]).unwrap())
        } else {
            None
        };

        Ok(Self {
            mint_authority,
            supply,
            decimals,
            is_initialized,
            freeze_authority,
        })
    }
}

/// Represents the configuration for a single swap hop.
///
/// This is likely parsed from remaining_accounts at runtime rather than
/// stored on-chain, but the struct helps document the expected layout.
#[derive(Clone, Debug)]
pub struct HopConfig {
    /// Index into remaining_accounts where this hop's accounts start
    pub account_offset: usize,
    /// Number of accounts consumed by this hop
    pub num_accounts: usize,
    /// The DEX program to call
    pub dex_program: Pubkey,
}
