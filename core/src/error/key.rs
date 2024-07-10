use rust_i18n::t;
use thiserror::Error;

use crate::error::config::ConfigError;

/// Errors related to key management operations in the application.
///
/// This enum defines various errors that can occur during key management operations,
/// such as key not found, invalid key, resolving key errors, unsupported key type, and IO errors.
#[derive(Error, Debug)]
pub enum KeyError {
    /// Error that occurs when a key is not found.
    #[error("{0}")]
    KeyNotFound(String),

    /// Error that occurs when an invalid key is encountered.
    #[error("{0}")]
    InvalidKey(String),

    /// Error that occurs when resolving a key fails.
    #[error("{0}")]
    ResolveKeyError(String),

    /// Error that occurs when an unsupported key type is encountered.
    #[error("{0}")]
    UnsupportedKeyType(String),

    /// Error that occurs when an IO operation fails.
    #[error("{0}")]
    IoError(String),
}

impl From<std::io::Error> for KeyError {
    /// Converts a `std::io::Error` into a `KeyError::IoError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The I/O error to be converted.
    fn from(error: std::io::Error) -> Self {
        KeyError::IoError(t!("errors.key.io_error", error = error.to_string()).to_string())
    }
}

impl From<ConfigError> for KeyError {
    /// Converts a `ConfigError` into a `KeyError::ResolveKeyError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The configuration error to be converted.
    fn from(error: ConfigError) -> Self {
        KeyError::ResolveKeyError(t!(
            "errors.key.resolve_key_error",
            error = error.to_string()
        ).to_string())
    }
}
