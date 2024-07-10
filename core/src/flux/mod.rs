//! Module for Vercel-related functionality and implementations.
//!
//! This module contains submodules for handling Vercel-specific operations
//! and their implementations.

pub use github_environment_secrets::*;
pub use postgres_sql::*;
pub use supabase_secrets::*;
pub use supabase_vault::*;
pub use vercel_projects::*;

/// Submodule for Vercel-related API interactions and operations.


/// Submodule for handling GitHub API requests.
pub mod github_environment_secrets;

/// Submodule for files.
mod vercel_projects;
mod postgres_sql;
mod supabase_vault;
mod supabase_secrets;

mod file;

