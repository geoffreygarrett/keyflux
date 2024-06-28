#![allow(warnings)]
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
// pub mod config;  // Make sure src/action/config.rs exists or mod.rs within src/action/
pub mod api;
pub mod cli; // Make sure src/action/cli.rs exists or mod.rs within src/action/
pub mod command;
pub mod config;
pub mod core; // Make sure src/action/core.rs exists or mod.rs within src/action/
pub mod error; // Make sure src/action/error.rs exists or mod.rs within src/action/
pub mod file;
pub mod flux;
pub mod flux_registry;
pub mod http;
pub mod key;
pub mod key_manager; // Make sure src/action/manager.rs exists or mod.rs within src/action/
pub mod macros;
mod re;
pub mod test_utils;
pub mod traits; // Make sure src/action/config.rs exists or mod.rs within src/action/
pub mod utils;
// mod internal; // Make sure src/action/utils.rs exists or mod.rs within src/action/

include!(concat!(env!("OUT_DIR"), "/locales.rs"));

// pub use crate::config::Config;  // Correctly reference Config from your crate
// pub use crate::config::Configs; // Correctly reference Configs from your crate
pub use crate::error::ConfigError;
pub use crate::key_manager::KeyManager; // Correctly reference SecretManager from your crate // Correctly reference ConfigError from your crate

// Load I18n macro, for allow you use `t!` macro in anywhere.
#[macro_use]
extern crate rust_i18n;

#[macro_use]
extern crate prettytable;

#[macro_use]
extern crate keyflux_macros;

mod internal;

pub use internal::{FluxContext, FluxInner, Fluxed};

// Re-export other necessary modules and items
pub use keyflux_macros::{flux_config, flux_define, flux, ProxyMethods};
pub use schemars::{schema_for, JsonSchema};

// Initialize translations for the current crate.
i18n!("i18n", fallback = "en");
