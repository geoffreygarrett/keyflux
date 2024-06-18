//! Module for Vercel-related functionality and implementations.
//!
//! This module contains submodules for handling Vercel-specific operations
//! and their implementations.

/// Submodule for Vercel-related API interactions and operations.
pub mod vercel;

/// Submodule for implementation details of various functionalities.
mod r#impl;

/// Submodule for handling GitHub API requests.
pub mod github;

/// Submodule for files.
pub mod file;
pub mod supabase;
mod postgres;
pub mod supabase_vault;


use log::trace;
use crate::ConfigError;
use crate::flux::file::FileFlux;
use crate::flux::github::GitHubFlux;
use crate::flux::supabase::SupabaseFlux;
use crate::flux::supabase_vault::SupabaseVaultFlux;
use crate::flux::vercel::VercelEnvironmentFlux;
use crate::flux_registry::FLUX_REGISTRY;

static VERCEL: &str = "vercel";
static FILE: &str = "file";
static SUPABASE: &str = "supabase";
static SUPABASE_VAULT: &str = "supabase_vault";
static GITHUB: &str = "github";

pub fn register_all_fluxes() {
    let mut registry = FLUX_REGISTRY.lock().unwrap();

    //////////////////////////
    // VERCEL FLUX
    //////////////////////////
    registry.register(VERCEL, Box::new(|config| {
        trace!("{}", t!("trace.creating_vercel_flux", config = format!("{:?}", config)));
        let flux: VercelEnvironmentFlux = serde_json::from_value(config.clone())
            .map_err(|e| ConfigError::InvalidConfig(format!("{}", t!("error.parsing_vercel_flux", error = format!("{:?}", e)))))?;
        Ok(Box::new(flux))
    }));

    //////////////////////////
    // FILE FLUX
    //////////////////////////
    registry.register(FILE, Box::new(|config| {
        trace!("{}", t!("trace.creating_file_flux", config = format!("{:?}", config)));
        let flux: FileFlux = serde_json::from_value(config.clone())
            .map_err(|e| ConfigError::InvalidConfig(format!("{}", t!("error.parsing_file_flux", error = format!("{:?}", e)))))?;
        Ok(Box::new(flux))
    }));

    //////////////////////////
    // SUPABASE FLUX
    //////////////////////////
    registry.register(SUPABASE, Box::new(|config| {
        trace!("{}", t!("trace.creating_supabase_flux", config = format!("{:?}", config)));
        let flux: SupabaseFlux = serde_json::from_value(config.clone())
            .map_err(|e| ConfigError::InvalidConfig(format!("{}", t!("error.parsing_supabase_flux", error = format!("{:?}", e)))))?;
        Ok(Box::new(flux))
    }));

    //////////////////////////
    // SUPABASE VAULT FLUX
    //////////////////////////
    registry.register(SUPABASE_VAULT, Box::new(|config| {
        trace!("{}", t!("trace.creating_supabase_vault_flux", config = format!("{:?}", config)));
        let flux: SupabaseVaultFlux = serde_json::from_value(config.clone())
            .map_err(|e| ConfigError::InvalidConfig(format!("{}", t!("error.parsing_supabase_vault_flux", error = format!("{:?}", e)))))?;
        Ok(Box::new(flux))
    }));

    //////////////////////////
    // GITHUB FLUX
    //////////////////////////
    registry.register(GITHUB, Box::new(|config| {
        trace!("{}", t!("trace.creating_github_flux", config = format!("{:?}", config)));
        let flux: GitHubFlux = serde_json::from_value(config.clone())
            .map_err(|e| ConfigError::InvalidConfig(format!("{}", t!("error.parsing_github_flux", error = format!("{:?}", e)))))?;
        Ok(Box::new(flux))
    }));
}

