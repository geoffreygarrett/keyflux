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

// impl KeyFluxConfig {
//     pub fn from_json(file_path: &PathBuf) -> Result<Self, Box<dyn std::error::Error>> {
//         let file_content = fs::read_to_string(file_path)?;
//         let config = serde_json::from_str(&file_content)?;
//         Ok(config)
//     }
//
//     pub fn from_yaml(file_path: &PathBuf) -> Result<Self, Box<dyn std::error::Error>> {
//         let file_content = fs::read_to_string(file_path)?;
//         let config = serde_yaml::from_str(&file_content)?;
//         Ok(config)
//     }
//
//     pub fn from_toml(file_path: &PathBuf) -> Result<Self, Box<dyn std::error::Error>> {
//         let file_content = fs::read_to_string(file_path)?;
//         let config = toml::from_str(&file_content)?;
//         Ok(config)
//     }
//
//     pub fn from_file(file_path: &PathBuf) -> Result<Self, Box<dyn Error>> {
//         // trace!("{}", t!("trace.loading_env_file", file = file_path.display()));
//
//         // Convert the file extension to lowercase for case-insensitive comparison
//         let file_extension = file_path.extension()
//             .and_then(std::ffi::OsStr::to_str)
//             .map(|s| s.to_lowercase());
//
//
//         info!("File extension: {}", file_extension.clone().unwrap_or_default().as_str().yellow());
//         match file_extension.as_deref() {
//             Some("json") | Some("jsonc") => Self::from_json(file_path),
//             Some("yaml") | Some("yml") => Self::from_yaml(file_path),
//             Some("toml") => Self::from_toml(file_path),
//             _ => {
//                 error!("Unsupported file format for file: {}", file_path.display().to_string().red());
//                 Err("Unsupported file format".into())
//             }
//         }
//     }
//
//
//     pub fn process(&self) {
//         match self {
//             KeyFluxConfig::V1(_config) => {
//                 // Process V1 configuration
//                 println!("Processing version 1 configuration");
//                 // Add your V1 specific logic here
//             }
//             // Add cases for other versions as needed
//         }
//     }
//
//     pub fn default() -> Self {
//         KeyFluxConfig::V1(KeyFluxConfigV1 {
//             version: 1,
//             env: None,
//             groups: vec![],
//         })
//     }
//
//
//     pub fn load_config(config_path: Option<PathBuf>) -> Result<Self, ConfigError> {
//         let package_name = env!("CARGO_PKG_NAME").to_string();
//         let regex_pattern = format!(r"^\.{}\.(.+)\.yaml$", regex::escape(&package_name));
//         let regex = Regex::new(&regex_pattern).unwrap();
//
//         if let Some(config_path) = config_path {
//             if config_path.is_file() {
//                 // Directly read the provided file
//                 return Self::load_from_file(&config_path);
//             } else if config_path.is_dir() {
//                 // Search within the provided directory
//                 return Self::search_directory(&config_path, &regex);
//             } else {
//                 return Err(ConfigError::ConfigArgError(config_path.display().to_string().yellow().to_string()));
//             }
//         }
//
//         // Fallback to default paths
//         let default_paths = vec![
//             dirs::home_dir(),
//             Some(PathBuf::from(".")),
//         ]
//             .into_iter()
//             .filter_map(|p| p)
//             .collect::<Vec<PathBuf>>();
//
//         for base_path in default_paths {
//             if let Ok(config) = Self::search_directory(&base_path, &regex) {
//                 return Ok(config);
//             }
//         }
//
//         Err(ConfigError::NotFound)
//     }
//
//     fn load_from_file(path: &PathBuf) -> Result<Self, ConfigError> {
//         let config_contents = fs::read_to_string(path)?;
//         serde_yaml::from_str::<KeyFluxConfig>(&config_contents).map_err(ConfigError::ParseError)
//     }
//
//     fn search_directory(dir: &PathBuf, regex: &Regex) -> Result<Self, ConfigError> {
//         let mut matching_files = vec![];
//
//         if let Ok(entries) = fs::read_dir(dir) {
//             for entry in entries {
//                 if let Ok(entry) = entry {
//                     let path = entry.path();
//                     if let Some(filename) = path.file_name().and_then(|s| s.to_str()) {
//                         if regex.is_match(filename) {
//                             matching_files.push(path);
//                         }
//                     }
//                 }
//             }
//         }
//
//         if matching_files.is_empty() {
//             return Err(ConfigError::NotFound);
//         } else if matching_files.len() == 1 {
//             return Self::load_from_file(&matching_files[0]);
//         } else {
//             let choices: Vec<String> = matching_files.iter()
//                 .map(|path| path.display().to_string())
//                 .collect();
//
//             let selection = Select::with_theme(&ColorfulTheme::default())
//                 .with_prompt("Multiple configuration files found. Please select one:")
//                 .items(&choices)
//                 .default(0)
//                 .interact()
//                 .map_err(|err| ConfigError::SelectionError(format!("{}", err)))?;
//
//             return Self::load_from_file(&matching_files[selection]);
//         }
//     }
//
//     // fn search_directory(dir: &PathBuf, regex: &Regex) -> Result<Self, ConfigError> {
//     //     if let Ok(entries) = fs::read_dir(dir) {
//     //         for entry in entries {
//     //             if let Ok(entry) = entry {
//     //                 let path = entry.path();
//     //                 if let Some(filename) = path.file_name().and_then(|s| s.to_str()) {
//     //                     if regex.is_match(filename) {
//     //                         if let Ok(config) = Self::load_from_file(&path) {
//     //                             info!("Loaded configuration file: {}", path.display());
//     //                             return Ok(config);
//     //                         }
//     //                     }
//     //                 }
//     //             }
//     //         }
//     //     }
//     //     Err(ConfigError::NotFound)
//     // }
// }
//
//
// #[derive(Error, Debug)]
// pub enum ConfigError {
//     #[error("Failed to read configuration file: {0}")]
//     ReadError(#[from] std::io::Error),
//
//     #[error("Failed to parse configuration file: {0}")]
//     ParseError(#[from] serde_yaml::Error),
//
//     #[error("No configuration file found.")]
//     NotFound,
//
//     #[error("-c {0} did not point to a valid config file or directory containing a config file.")]
//     ConfigArgError(String),
//
//     #[error("Failed to select configuration file: {0}")]
//     SelectionError(String),
// }
//
// pub fn search_directory_for_configs(dir: &PathBuf, regex: &Regex) -> Result<Vec<PathBuf>, ConfigError> {
//     let mut matching_files = vec![];
//
//     if let Ok(entries) = fs::read_dir(dir) {
//         for entry in entries {
//             if let Ok(entry) = entry {
//                 let path = entry.path();
//                 if let Some(filename) = path.file_name().and_then(|s| s.to_str()) {
//                     if regex.is_match(filename) {
//                         matching_files.push(path);
//                     }
//                 }
//             }
//         }
//     }
//
//     if matching_files.is_empty() {
//         return Err(ConfigError::NotFound);
//     }
//
//     Ok(matching_files)
// }
//
// pub fn select_config_file(files: Vec<PathBuf>) -> Result<PathBuf, ConfigError> {
//     let choices: Vec<String> = files.iter()
//         .map(|path| path.display().to_string())
//         .collect();
//
//     let selection = Select::with_theme(&ColorfulTheme::default())
//         .with_prompt("Multiple configuration files found. Please select one:")
//         .items(&choices)
//         .default(0)
//         .interact()
//         .map_err(|err| ConfigError::SelectionError(format!("{}", err)))?;
//
//     Ok(files[selection].clone())
// }
