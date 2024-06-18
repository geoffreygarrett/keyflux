pub mod upsert;
pub mod delete;
pub mod select;

use std::format;
use crate::api::traits::{Fetch, BearerToken};
use crate::error::FluxError;


/// Static API endpoint for Supabase
pub const SUPABASE_API_ENDPOINT_V1: &str = "https://api.supabase.com/v1";
/// Environment variable key for Supabase token
pub const SUPABASE_ACCESS_TOKEN: &str = "SUPABASE_ACCESS_TOKEN";


/// A trait for Supabase API requests that require a token.
pub trait SupabaseApi: Fetch + BearerToken {
    /// Retrieves the authentication token for the Supabase API.
    ///
    /// This method first checks if a token is provided within the struct. If not,
    /// it attempts to retrieve the token from the `SUPABASE_ACCESS_TOKEN` environment variable.
    ///
    /// # Returns
    ///
    /// This method returns a `Result` containing the token as a `String` if successful,
    /// or a `FluxError` if the token is not found.
    fn resolve_token(&self) -> Result<String, FluxError> {
        if let Some(token) = self.bearer_token() {
            Ok(token)
        } else {
            std::env::var(SUPABASE_ACCESS_TOKEN).map_err(|_| {
                FluxError::Unauthorized(format!(
                    "Supabase token not found in environment variable '{}'",
                    SUPABASE_ACCESS_TOKEN
                ))
            })
        }
    }
}

