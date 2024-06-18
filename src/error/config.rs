use thiserror::Error;
use serde_json;
use serde_yaml;
use toml;
use rust_i18n::t;

/// Errors related to configuration handling in the application.
///
/// This enum defines various errors that can occur while handling configuration files,
/// such as reading files, parsing different formats, and dealing with environment variables.
#[derive(Error, Debug)]
pub enum ConfigError {
    /// Error that occurs when reading a file fails.
    #[error("{0}")]
    ReadFileError(String),

    /// Error that occurs when parsing a YAML file fails.
    #[error("{0}")]
    ParseYamlError(String),

    /// Error that occurs when parsing a JSON file fails.
    #[error("{0}")]
    ParseJsonError(String),

    /// Error that occurs when parsing a TOML file fails.
    #[error("{0}")]
    ParseTomlError(String),

    /// Error that occurs when an environment variable is not found.
    #[error("{0}")]
    EnvVarError(String),

    /// Error that occurs when an unknown flux type is encountered.
    #[error("{0}")]
    UnknownFluxType(String),

    /// Error that occurs when the configuration is invalid.
    #[error("{0}")]
    InvalidConfig(String),
}

impl From<std::io::Error> for ConfigError {
    /// Converts a `std::io::Error` into a `ConfigError::ReadFileError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The I/O error to be converted.
    fn from(error: std::io::Error) -> Self {
        ConfigError::ReadFileError(t!("errors.config.read_file_error", error = error.to_string()))
    }
}

impl From<serde_yaml::Error> for ConfigError {
    /// Converts a `serde_yaml::Error` into a `ConfigError::ParseYamlError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The YAML parsing error to be converted.
    fn from(error: serde_yaml::Error) -> Self {
        ConfigError::ParseYamlError(t!("errors.config.parse_yaml_error", error = error.to_string()))
    }
}

impl From<serde_json::Error> for ConfigError {
    /// Converts a `serde_json::Error` into a `ConfigError::ParseJsonError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The JSON parsing error to be converted.
    fn from(error: serde_json::Error) -> Self {
        ConfigError::ParseJsonError(t!("errors.config.parse_json_error", error = error.to_string()))
    }
}

impl From<toml::de::Error> for ConfigError {
    /// Converts a `toml::de::Error` into a `ConfigError::ParseTomlError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The TOML parsing error to be converted.
    fn from(error: toml::de::Error) -> Self {
        ConfigError::ParseTomlError(t!("errors.config.parse_toml_error", error = error.to_string()))
    }
}

impl From<std::env::VarError> for ConfigError {
    /// Converts a `std::env::VarError` into a `ConfigError::EnvVarError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The environment variable error to be converted.
    fn from(error: std::env::VarError) -> Self {
        ConfigError::EnvVarError(t!("errors.config.env_var_error", error = error.to_string()))
    }
}
