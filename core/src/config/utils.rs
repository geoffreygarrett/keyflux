use std::fs;
use std::path::PathBuf;

use dialoguer::{Select, theme::ColorfulTheme};
use lazy_static::lazy_static;
use log::warn;
use regex::Regex;
use thiserror::Error;

use crate::error::config::ConfigError;

lazy_static! {
    static ref RE: Regex = Regex::new(r"\$\{([^}]+)}").unwrap();
}

/// Replaces all occurrences of environment variables in the given string.
pub fn replace_env_vars(input: &str) -> String {
    RE.replace_all(input, |caps: &regex::Captures| {
        std::env::var(&caps[1]).unwrap_or_else(|_| {
            warn!("Environment variable {} not found", &caps[1]);
            caps[0].to_string()
        })
    })
        .to_string()
}

pub fn search_directory_for_configs(
    dir: &PathBuf,
    regex: &Regex,
) -> Result<Vec<PathBuf>, ConfigError> {
    let mut matching_files = vec![];

    if let Ok(entries) = fs::read_dir(dir) {
        for entry in entries {
            if let Ok(entry) = entry {
                let path = entry.path();
                if let Some(filename) = path.file_name().and_then(|s| s.to_str()) {
                    if regex.is_match(filename) {
                        matching_files.push(path);
                    }
                }
            }
        }
    }

    Ok(matching_files)
}

pub fn select_config_file(files: Vec<PathBuf>) -> Result<PathBuf, ConfigError> {
    let choices: Vec<String> = files
        .iter()
        .map(|path| path.display().to_string())
        .collect();

    let selection = Select::with_theme(&ColorfulTheme::default())
        .with_prompt("Multiple configuration files found. Please select one:")
        .items(&choices)
        .default(0)
        .interact()
        .map_err(|err| ConfigError::SelectionError(format!("{}", err)))?;

    Ok(files[selection].clone())
}
