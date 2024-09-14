//! # Keyflux
//!
//! `keyflux` is a CLI tool and library for synchronizing environment secrets across multiple platforms including local files, GitHub Secrets, Supabase Vault, and Vercel Secrets. It facilitates secure management and automation of sensitive data.
//!
//! ## Features
//!
//! - **Multi-platform support**: Sync secrets between local files, GitHub, Supabase, and Vercel.
//! - **Secure management**: Automate and manage sensitive data securely.
//! - **Customizable configuration**: Flexible configuration options through various file formats.
//! - **CLI and library**: Use as a standalone CLI tool or integrate into your Rust project as a library.
//! - **Real-time synchronization**: Watch for changes and automatically sync secrets.
//!
//! ## Modules
//!
//! - `config`: Contains configuration structures and functions.
//! - `manager`: Manages secret synchronization.
//! - `error`: Defines error types used throughout the crate.
//! - `action`: Contains actions for the CLI.
//! - `cli`: Handles command-line interface parsing and arguments.
//! - `core`: Core functionality of the crate.
//! - `utils`: Utility functions used by various modules.
//!
//! ## Usage
//!
//! Add `keyflux` to your `Cargo.toml`:
//!
//! ```toml
//! [dependencies]
//! keyflux = "0.1.1"
//! ```
//!
#![allow(warnings)]

#[macro_use]
extern crate keyflux_macros;
#[macro_use]
extern crate rust_i18n;
// pub use keyflux_macros::{flux, flux_config, flux_define, ProxyMethods};
pub use schemars::{JsonSchema, schema_for};

// Re-export other necessary modules and items
pub use keyflux_macros::{flux_impl, flux_struct};

// pub use crate::config::Config;  // Correctly reference Config from your crate
// pub use crate::config::Configs; // Correctly reference Configs from your crate
pub use crate::error::ConfigError;
pub use crate::key_manager::KeyManager;

// pub mod config;  // Make sure src/action/config.rs exists or mod.rs within src/action/
pub mod config;
pub mod error; // Make sure src/action/error.rs exists or mod.rs within src/action/
pub mod file;
pub mod flux;
pub mod key;
pub mod key_manager; // Make sure src/action/manager.rs exists or mod.rs within src/action/
pub mod traits; // Make sure src/action/config.rs exists or mod.rs within src/action/
pub mod utils;
// mod internal; // Make sure src/action/utils.rs exists or mod.rs within src/action/

include!(concat!(env!("OUT_DIR"), "/locales.rs"));

// Correctly reference SecretManager from your crate // Correctly reference ConfigError from your crate

mod internal;
mod models;

// Initialize translations for the current crate.
i18n!("i18n", fallback = "en");
