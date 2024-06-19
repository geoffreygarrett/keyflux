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


use serde_json::Value;
use std::env;
use std::error::Error;
use serde::de::DeserializeOwned;
use crate::config::utils::replace_env_vars;
use crate::error::FluxError;
use crate::key::Key;

pub fn replace_vars_in_json(value: &mut Value) {
    match value {
        Value::String(s) => *s = replace_env_vars(s),
        Value::Array(vec) => {
            for v in vec {
                replace_vars_in_json(v);
            }
        }
        Value::Object(map) => {
            for v in map.values_mut() {
                replace_vars_in_json(v);
            }
        }
        _ => {} // Do nothing for Null, Bool, or Number
    }
}

pub fn merge(a: &mut Value, b: Value) {
    if let Value::Object(a) = a {
        if let Value::Object(b) = b {
            for (k, v) in b {
                if v.is_null() {
                    a.remove(&k);
                } else {
                    merge(a.entry(k).or_insert(Value::Null), v);
                }
            }

            return;
        }
    }

    *a = b;
}


/// Merges inputs from two sources, modifies the JSON, and parses it into a specified generic struct.
/// Merges inputs from two sources and applies variable replacements within the merged JSON.
fn merge_and_return_json(
    input1: Option<Value>,
    input2: Option<Value>,
) -> Result<Value, Box<dyn Error>> {
    let mut merged = match (input1, input2) {
        (Some(a), Some(b)) => {
            let mut merged = a.clone();
            merge(&mut merged, b.clone()); // Ensure the `merge` function is correctly defined to handle merging two JSON objects.
            merged
        },
        (Some(a), None) => a.clone(),
        (None, Some(b)) => b.clone(),
        (None, None) => {
            return Err(Box::new(FluxError::BadRequest("Input must be provided for merging".into())));
        }
    };

    // Replace variables in the JSON structure
    replace_vars_in_json(&mut merged);

    Ok(merged)
}
