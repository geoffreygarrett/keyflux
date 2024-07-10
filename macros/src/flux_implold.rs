//! # keyflux Macro Package
//!
//! The `keyflux` macro package provides a set of macros to facilitate the creation of proxy methods
//! and inner structs for Rust structs. This is particularly useful when dealing with nested or
//! complex data structures, allowing for cleaner and more manageable code.
//!
//! ## Features
//!
//! - Automatically generates an inner struct with the suffix `Inner`.
//! - Creates proxy methods for accessing fields of the inner struct.
//! - Allows for custom prefixes and suffixes for the proxy methods.
//!
//! ## Usage
//!
//! To use the `keyflux` macros, you need to annotate your struct with the `#[derive(Flux)]` attribute
//! and optionally provide `#[flux(...)]` attributes to customize the behavior.
//!
//! ### Example
//!
//! ```rust
//! use keyflux_macros::flux;
//!
//! #[flux]
//! struct MyStruct {
//!     #[flux(proxy_name = "custom_field")]
//!     field1: String,
//!     field2: i32,
//! }
//! ```
//!
//! This will generate an inner struct `MyStructInner` and proxy methods `custom_field` and `field2_field`
//! to access the respective fields.
//!
//! ## Attributes
//!
//! - `#[flux(proxy_name = "name")]`: Specifies a custom name for the proxy method.
//!
//! ## Implementation Details
//!
//! The implementation relies on the `darling` crate to parse and process the macro attributes,
//! and uses the `proc_macro2`, `quote`, and `syn` crates to generate the necessary code.

#![allow(dead_code)]

use darling::FromMeta;

/// Represents the main derive input for the Flux macro.
#[derive(Debug, FromMeta)]
pub struct FluxImplArgs {
    pub(crate) name: Option<String>,
}

