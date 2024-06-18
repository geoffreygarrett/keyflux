pub mod utils;
pub mod tags; // src/config.rs
use serde::{Deserialize, Serialize};
// use std::collections::HashMap;
use std::{fmt, fs};
use std::collections::HashMap;
use std::error::Error;
use std::path::{PathBuf};
use log::{error, info};
use crate::key::Key;
use crate::traits::Flux;
use colored::*;

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "lowercase")]
pub enum EnvConfig {
    Variable { name: String, value: String },
    File(String),
}


#[derive(Deserialize, Debug)]
#[serde(tag = "version")]
pub enum KeyFluxConfig {
    V1(KeyFluxConfigV1),
    // Future versions can be added here
}

impl KeyFluxConfig {
    pub fn env(&self) -> Option<&Vec<EnvConfig>> {
        match self {
            KeyFluxConfig::V1(config) => {
                match &config.env {
                    Some(env) => Some(env),
                    None => None,
                }
            }
        }
    }
    // Now explicitly returns a reference
    pub fn groups(&self) -> &Vec<GroupConfig> {
        match self {
            KeyFluxConfig::V1(config) => &config.groups,
        }
    }
}

#[derive(Deserialize, Debug)]
pub struct KeyFluxConfigV1 {
    #[serde(default = "default_version_v1")]
    pub version: i32,
    pub env: Option<Vec<EnvConfig>>,
    pub groups: Vec<GroupConfig>,
}

// Function that returns the default version
fn default_version_v1() -> i32 {
    1
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(untagged)]
pub enum KeyEnum {
    Value(String),
    Key(Key),
}

#[derive(Deserialize)]
pub struct GroupConfig {
    pub env: Option<EnvConfig>,
    pub fluxes: Vec<Box<dyn Flux>>,
    pub keys: HashMap<String, KeyEnum>,
}

//
impl fmt::Debug for GroupConfig {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.debug_struct("EnvironmentConfig")
            .field("env", &self.env)
            .field("fluxes", &format!("[{} fluxes]", self.fluxes.len()))
            .field("keys", &self.keys)
            .finish()
    }
}


impl KeyFluxConfig {
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

    pub fn from_file(file_path: &PathBuf) -> Result<Self, Box<dyn Error>> {
        // trace!("{}", t!("trace.loading_env_file", file = file_path.display()));

        // Convert the file extension to lowercase for case-insensitive comparison
        let file_extension = file_path.extension()
            .and_then(std::ffi::OsStr::to_str)
            .map(|s| s.to_lowercase());


        info!("File extension: {}", file_extension.clone().unwrap_or_default().as_str().yellow());
        match file_extension.as_deref() {
            Some("json") | Some("jsonc") => Self::from_json(file_path),
            Some("yaml") | Some("yml") => Self::from_yaml(file_path),
            Some("toml") => Self::from_toml(file_path),
            _ => {
                error!("Unsupported file format for file: {}", file_path.display().to_string().red());
                Err("Unsupported file format".into())
            }
        }
    }


    pub fn process(&self) {
        match self {
            KeyFluxConfig::V1(_config) => {
                // Process V1 configuration
                println!("Processing version 1 configuration");
                // Add your V1 specific logic here
            }
            // Add cases for other versions as needed
        }
    }

    pub fn default() -> Self {
        KeyFluxConfig::V1(KeyFluxConfigV1 {
            version: 1,
            env: None,
            groups: vec![],
        })
    }

    pub fn load_config(config_path: Option<PathBuf>) -> Result<Self, Box<dyn std::error::Error>> {
        let package_name = env!("CARGO_PKG_NAME").to_string();
        let package_version = env!("CARGO_PKG_VERSION").to_string();
        let versioned_config_dir = format!("{}.{}", package_name, package_version);

        let paths_to_try = vec![
            config_path.map(PathBuf::from),
            dirs::home_dir().map(|p| p.join(format!(".{}/config.json", versioned_config_dir))),
            Some(PathBuf::from(format!("./{}/config.json", versioned_config_dir))),
            dirs::home_dir().map(|p| p.join(".keyflux/config.json")),
            Some(PathBuf::from("./config.json")),
        ];

        for path_option in paths_to_try {
            if let Some(path) = path_option {
                if path.exists() {
                    let config_contents = fs::read_to_string(path)?;
                    let config: KeyFluxConfig = serde_json::from_str(&config_contents)?;
                    return Ok(config);
                }
            }
        }

        // If no configuration file is found, return the default configuration
        Ok(Self::default())
    }
}
