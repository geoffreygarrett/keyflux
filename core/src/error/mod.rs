//! Error module
//!
//! This module defines the different types of errors that can occur in the application.
//! It includes submodules for specific error types and re-exports commonly used errors.

/// Re-export of `ConfigError` from the `config` submodule.
pub use crate::error::config::ConfigError;
/// Re-export of `FluxError` from the `flux` submodule.
pub use crate::error::flux::FluxError;
/// Re-export of `KeyError` from the `key` submodule.
pub use crate::error::key::KeyError;

/// Submodule for errors related to keys.
pub mod key;

/// Submodule for errors related to flux operations.
pub mod flux;

/// Submodule for errors related to configuration handling.
pub mod config;

