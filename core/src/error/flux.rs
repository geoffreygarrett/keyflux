use reqwest::StatusCode;
use rust_i18n::t;
use thiserror::Error;

use crate::error::config::ConfigError;

/// Errors related to flux operations in the application.
///
/// This enum defines various errors that can occur during flux operations,
/// such as HTTP requests, unauthorized access, key handling, and serialization.
#[derive(Error, Debug)]
pub enum FluxError {
    /// Error that occurs when an HTTP request fails.
    #[error("{0}")]
    HttpRequestError(String),

    /// Error that occurs when unauthorized access is encountered.
    #[error("{0}")]
    UnauthorizedError(String),

    /// Error that occurs when an invalid key ID is encountered.
    #[error("{0}")]
    InvalidKeyId(String),

    /// Error that occurs when an invalid key is encountered.
    #[error("{0}")]
    InvalidKey(String),

    /// Error that occurs when key decoding fails.
    #[error("{0}")]
    DecodeKeyError(String),

    /// Error that occurs when creating a public key fails.
    #[error("{0}")]
    CreatePublicKeyError(String),

    /// Error that occurs when getting a public key fails.
    #[error("{0}")]
    GetPublicKeyError(String),

    /// Error that occurs when an IO operation fails.
    #[error("{0}")]
    IoError(String),

    /// Error that occurs when serialization fails.
    #[error("{0}")]
    SerializeError(String),

    /// Error that occurs when an unsupported file format is encountered.
    #[error("{0}")]
    UnsupportedFormat(String),

    /// Error for unimplemented functionality.
    #[error("{0}")]
    NotImplementedError(String),

    /// Error that occurs when a flux operation fails.
    #[error("{0}")]
    FluxFailed(String),

    /// Error that occurs when an invalid nonce is encountered.
    #[error("{0}")]
    InvalidNonce(String),

    /// Error that occurs when an invalid ciphertext is encountered.
    #[error("{0}")]
    InvalidCiphertext(String),

    /// Error that occurs when decryption fails.
    #[error("{0}")]
    DecryptionFailed(String),

    /// Error that occurs when invalid UTF-8 is encountered.
    #[error("{0}")]
    InvalidUTF8(String),

    ///////
    // #[error("Not implemented: {0}")]
    // NotImplementedError(String),
    // #[error("Invalid key: {0}")]
    // InvalidKey(String),
    #[error("Bad request: {0}")]
    BadRequest(String),
    #[error("Unauthorized: {0}")]
    Unauthorized(String),
    #[error("Payment required: {0}")]
    PaymentRequired(String),
    #[error("Forbidden: {0}")]
    Forbidden(String),
    #[error("Conflict: {0}")]
    Conflict(String),
    #[error(transparent)]
    ReqwestError(#[from] reqwest::Error),
    // Add other error variants as needed
    #[error("{0}")]
    WatchError(String),
    #[error("{0}")]
    DatabaseError(String),

    #[error("{0}")]
    NotFound(String),

    #[error("{0}")]
    InvalidPath(String),

    #[error("{0}")]
    Other(String),

    //
    //     EnvParseError::IoError(err) => FluxError::ReadError(err.to_string()),
    // EnvParseError::MalformedLine(line) => FluxError::ParseError(format!("Malformed line: {}", line)),
    #[error("{0}")]
    ReadError(String),

    #[error("{0}")]
    ParseError(String),

    #[error("{0}")]
    IOError(String),

    #[error("{0}")]
    GeneralError(String),

    #[error("{0}")]
    NetworkError(String),
}

impl FluxError {
    pub fn new(message: &str) -> Self {
        FluxError::Other(message.to_string())
    }

    pub(crate) fn from_reqwest_error(error: reqwest::Error) -> Self {
        if let Some(status) = error.status() {
            match status {
                StatusCode::BAD_REQUEST => FluxError::BadRequest(format!("{}", error)),
                StatusCode::UNAUTHORIZED => FluxError::Unauthorized(format!("{}", error)),
                StatusCode::PAYMENT_REQUIRED => FluxError::PaymentRequired(format!("{}", error)),
                StatusCode::FORBIDDEN => FluxError::Forbidden(format!("{}", error)),
                StatusCode::CONFLICT => FluxError::Conflict(format!("{}", error)),
                _ => FluxError::ReqwestError(error),
            }
        } else {
            FluxError::ReqwestError(error)
        }
    }
}
// impl From<reqwest::Error> for FluxError {
//     /// Converts a `reqwest::Error` into a `FluxError::HttpRequestError`.
//     ///
//     /// This implementation uses the `t!` macro to fetch the localized error message.
//     ///
//     /// # Arguments
//     ///
//     /// * `error` - The HTTP request error to be converted.
//     fn from(error: reqwest::Error) -> Self {
//         FluxError::HttpRequestError(t!("errors.flux.http_request_error", error = error.to_string()))
//     }
// }

impl From<ConfigError> for FluxError {
    /// Converts a `ConfigError` into a `FluxError::UnauthorizedError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The configuration error to be converted.
    fn from(error: ConfigError) -> Self {
        FluxError::UnauthorizedError(t!(
            "errors.flux.unauthorized_error",
            error = error.to_string()
        ).to_string())
    }
}

impl From<std::io::Error> for FluxError {
    /// Converts a `std::io::Error` into a `FluxError::IoError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The I/O error to be converted.
    fn from(error: std::io::Error) -> Self {
        FluxError::IoError(t!("errors.flux.io_error", error = error.to_string()).to_string())
    }
}

impl From<serde_json::Error> for FluxError {
    /// Converts a `serde_json::Error` into a `FluxError::SerializeError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The JSON serialization error to be converted.
    fn from(error: serde_json::Error) -> Self {
        FluxError::SerializeError(t!("errors.flux.serialize_error", error = error.to_string()).to_string())
    }
}

impl From<serde_yaml::Error> for FluxError {
    /// Converts a `serde_yaml::Error` into a `FluxError::SerializeError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The YAML serialization error to be converted.
    fn from(error: serde_yaml::Error) -> Self {
        FluxError::SerializeError(t!("errors.flux.serialize_error", error = error.to_string()).to_string())
    }
}

impl From<toml::ser::Error> for FluxError {
    /// Converts a `toml::ser::Error` into a `FluxError::SerializeError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The TOML serialization error to be converted.
    fn from(error: toml::ser::Error) -> Self {
        FluxError::SerializeError(t!("errors.flux.serialize_error", error = error.to_string()).to_string())
    }
}

impl From<toml::de::Error> for FluxError {
    /// Converts a `toml::de::Error` into a `FluxError::SerializeError`.
    ///
    /// This implementation uses the `t!` macro to fetch the localized error message.
    ///
    /// # Arguments
    ///
    /// * `error` - The TOML deserialization error to be converted.
    fn from(error: toml::de::Error) -> Self {
        FluxError::SerializeError(t!("errors.flux.serialize_error", error = error.to_string()).to_string())
    }
}
