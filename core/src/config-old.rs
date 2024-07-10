use std::{fmt, fs};
use std::collections::HashMap;
use std::fmt::Display;
use std::path::PathBuf;

use lazy_static::lazy_static;
use log::{error, info, warn};
use regex::Regex;
use serde::{Deserialize, Serialize};
use toml;

use crate::traits::Flux;

mod env_string;
mod utils;

#[derive(Serialize, Deserialize, Debug)]
pub struct Configs {
    pub env: Option<Vec<EnvConfig>>,
    pub configs: Vec<Config>,
}


/// Represents the configuration for environment variables.
#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "lowercase")]
pub enum EnvConfig {
    /// A single environment variable entry with a name and value.
    Variable {
        name: String,
        value: String,
    },
    /// A file containing environment variables.
    File(String),
    /// A group of environment variable configurations.
    Group {
        name: String,
        env: Vec<EnvConfig>,
    },
}


#[derive(Serialize, Deserialize)]
pub struct Config {
    pub env: String,
    // Using Box to store objects that implement the Flux trait
    pub fluxes: Vec<Box<dyn Flux>>,
    pub keys: HashMap<String, EnvString>,
}

impl fmt::Debug for Config {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.debug_struct("Config")
            .field("env", &self.env)
            .field("fluxes", &format!("[{} fluxes]", self.fluxes.len()))
            .field("keys", &self.keys)
            .finish()
    }
}


// #[derive(Serialize, Deserialize, Debug)]
// #[serde(untagged)]
// pub enum SecretConfig {
//     Direct(String),
//     Structured {
//         #[serde(skip_serializing_if = "Option::is_none")]
//         value: Option<String>,
//         #[serde(skip_serializing_if = "Option::is_none")]
//         key: Option<String>,
//     },
// }

impl Configs {
    pub fn from_json(file_path: &PathBuf) -> Result<Self, Box<dyn std::error::Error>> {
        let file_content = fs::read_to_string(file_path)?;
        let config = serde_json::from_str(&file_content)?;
        Ok(config)
    }

    pub fn from_yaml(file_path: &PathBuf) -> Result<Self, Box<dyn std::error::Error>> {
        let file_content = fs::read_to_string(file_path)?;
        let config = serde_yaml::from_str(&file_content)?;
        Ok(config)
    }

    pub fn from_toml(file_path: &PathBuf) -> Result<Self, Box<dyn std::error::Error>> {
        let file_content = fs::read_to_string(file_path)?;
        let config = toml::from_str(&file_content)?;
        Ok(config)
    }

    pub fn from_file(file_path: &PathBuf) -> Result<Self, Box<dyn std::error::Error>> {
        info!("Loading configuration from file: {}", file_path.display());
        // Convert the file extension to lowercase for case-insensitive comparison
        let file_extension = file_path.extension()
            .and_then(std::ffi::OsStr::to_str)
            .map(|s| s.to_lowercase());

        info!("File extension: {:?}", file_extension);
        match file_extension.as_deref() {
            Some("json") | Some("jsonc") => Self::from_json(file_path),
            Some("yaml") | Some("yml") => Self::from_yaml(file_path),
            Some("toml") => Self::from_toml(file_path),
            _ => {
                error!("Unsupported file format for file: {}", file_path.display());
                Err("Unsupported file format".into())
            }
        }
    }
}
