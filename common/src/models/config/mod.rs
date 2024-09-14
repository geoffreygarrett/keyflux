use std::{fmt, fs};
use std::collections::HashMap;
use std::error::Error;
use std::path::PathBuf;

use colored::*;
use dialoguer::{Select, theme::ColorfulTheme};
use log::{error, info};
use regex::Regex;
use serde::{Deserialize, Serialize};
use thiserror::Error;

// use std::collections::HashMap;
use crate::config::env::{EnvConfig, EnvConfigList};
use crate::config::group::GroupConfig;
use crate::config::utils::{search_directory_for_configs, select_config_file};
use crate::config::v1::KeyFluxConfigV1;
use crate::ConfigError;
use crate::key::Key;
use keyflux_common::prelude::*;

pub mod env;
pub(crate) mod group;
pub mod tags;
pub mod utils;
pub mod v1;

#[derive(Deserialize, Serialize, Debug)]
#[serde(tag = "version")]
pub enum KeyFluxConfig {
    #[serde(rename = "1")]
    V1(KeyFluxConfigV1),
    // Future versions can be added here
}

#[derive(Debug, Deserialize, Serialize)]
pub struct ConfigHolder {
    pub path: PathBuf,
    pub config: KeyFluxConfig,
}

impl ConfigHolder {
    pub fn new(path: PathBuf, config: KeyFluxConfig) -> Self {
        ConfigHolder { path, config }
    }

    pub fn path(&self) -> &PathBuf {
        &self.path
    }

    pub fn config(&self) -> &KeyFluxConfig {
        &self.config
    }

    pub fn config_mut(&mut self) -> &mut KeyFluxConfig {
        &mut self.config
    }

    pub fn from_json(file_path: &PathBuf) -> Result<Self, Box<dyn std::error::Error>> {
        let file_content = fs::read_to_string(file_path)?;
        let config: KeyFluxConfig = serde_json::from_str(&file_content)?;
        Ok(Self::new(fs::canonicalize(file_path)?, config))
    }

    pub fn from_yaml(file_path: &PathBuf) -> Result<Self, Box<dyn std::error::Error>> {
        let file_content = fs::read_to_string(file_path)?;
        let config: KeyFluxConfig = serde_yaml::from_str(&file_content)?;
        Ok(Self::new(fs::canonicalize(file_path)?, config))
    }

    pub fn from_toml(file_path: &PathBuf) -> Result<Self, Box<dyn std::error::Error>> {
        let file_content = fs::read_to_string(file_path)?;
        let config: KeyFluxConfig = toml::from_str(&file_content)?;
        Ok(Self::new(fs::canonicalize(file_path)?, config))
    }

    pub fn from_file(file_path: &PathBuf) -> Result<Self, Box<dyn Error>> {
        let file_extension = file_path
            .extension()
            .and_then(std::ffi::OsStr::to_str)
            .map(|s| s.to_lowercase());

        info!(
            "File extension: {}",
            file_extension.clone().unwrap_or_default().as_str().yellow()
        );
        match file_extension.as_deref() {
            Some("json") | Some("jsonc") => Self::from_json(file_path),
            Some("yaml") | Some("yml") => Self::from_yaml(file_path),
            Some("toml") => Self::from_toml(file_path),
            _ => {
                error!(
                    "Unsupported file format for file: {}",
                    file_path.display().to_string().red()
                );
                Err("Unsupported file format".into())
            }
        }
    }

    pub fn default() -> Self {
        let cwd = std::env::current_dir().unwrap();
        ConfigHolder::new(cwd, KeyFluxConfig::V1(KeyFluxConfigV1::default()))
    }

    pub fn load_config(config_path: Option<PathBuf>) -> Result<Self, ConfigError> {
        let package_name = env!("CARGO_PKG_NAME").to_string();
        let regex_pattern = format!(r"^\.{}\.(.+)\.yaml$", regex::escape(&package_name));
        let regex = Regex::new(&regex_pattern).unwrap();

        if let Some(config_path) = config_path {
            if config_path.is_file() {
                return Self::from_file(&config_path)
                    .map_err(|err| ConfigError::FileReadError(err.to_string()));
            } else if config_path.is_dir() {
                let matching_files = search_directory_for_configs(&config_path, &regex)?;
                if matching_files.len() == 1 {
                    return Self::from_file(&matching_files[0])
                        .map_err(|err| ConfigError::FileReadError(err.to_string()));
                }
                return Err(ConfigError::SelectionError(
                    "Multiple configuration files found. Please select one using the CLI.".into(),
                ));
            } else {
                return Err(ConfigError::ConfigArgError(
                    config_path.display().to_string().yellow().to_string(),
                ));
            }
        }

        let default_paths = vec![dirs::home_dir(), Some(PathBuf::from("."))]
            .into_iter()
            .filter_map(|p| p)
            .collect::<Vec<PathBuf>>();

        for base_path in default_paths {
            let matching_files = search_directory_for_configs(&base_path, &regex)?;
            if matching_files.len() == 1 {
                return Self::from_file(&matching_files[0])
                    .map_err(|err| ConfigError::FileReadError(err.to_string()));
            }
            if !matching_files.is_empty() {
                select_config_file(matching_files)
                    .map_err(ConfigError::from)
                    .expect("TODO: panic message");
                // return Err(ConfigError::SelectionError(
                //     "Multiple configuration files found. Please select one using the CLI.".into(),
                // ));
            }
        }

        Ok(Self::default())
    }
}

impl KeyFluxConfig {
    pub fn env(&self) -> Option<&EnvConfigList> {
        match self {
            KeyFluxConfig::V1(config) => config.env(),
        }
    }

    pub fn groups(&self) -> &Vec<GroupConfig> {
        match self {
            KeyFluxConfig::V1(config) => &config.groups,
        }
    }

    pub fn groups_mut(&mut self) -> &mut Vec<GroupConfig> {
        match self {
            KeyFluxConfig::V1(config) => &mut config.groups,
        }
    }
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(untagged)]
pub enum KeyEnum {
    Value(String),
    Key(Key),
}
