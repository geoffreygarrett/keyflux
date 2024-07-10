use snafu::{Snafu, futures::TryFutureExt, prelude::*};
use snafu::ResultExt;
use std::fmt::Display;
use reqwest::*;
pub use futures::future::TryFuture;
use serde::de::StdError;

#[derive(Debug, Snafu)]
#[snafu(visibility(pub))] // Sets the default visibility for these context selector
#[derive(Default)]
pub enum Error {
    #[snafu(display("Initialization Error: {message}"))]
    InitializeError {
        message: String,
        #[snafu(source)]
        source: reqwest::Error,
    },

    ApiError {
        message: String,
    },

    NotInitializedError {
        message: String,
    },

    #[snafu(display("Sqlx Error: {message}, {source}"))]
    SqlxExecutionError {
        message: String,
        #[snafu(source)]
        source: sqlx::Error,
    },

    #[snafu(display("Sqlx Pool Error: {message}"))]
    SqlxPoolError {
        message: String,
        #[snafu(source)]
        source: sqlx::Error,
    },

    #[snafu(display("Runtime Error: {message}"))]
    RuntimeError {
        message: String,
        #[snafu(source(from(Error, Box::new)))]
        source: Box<Error>,
    },

    #[snafu(display("Request Error: {message}"))]
    RequestError {
        message: String,
        #[snafu(source)]
        source: reqwest::Error,
    },

    #[snafu(display("Json Parse Error: {message}"))]
    JsonResponseError {
        message: String,
        #[snafu(source)]
        source: reqwest::Error,
    },

    #[snafu(display("Json Parse Error: {message}"))]
    RequestJsonParseError {
        message: String,
        #[snafu(source)]
        source: reqwest::Error,
    },

    #[snafu(display("Json Parse Error: {message}"))]
    SerdeJsonParseError {
        message: String,
        #[snafu(source)]
        source: serde_json::Error,
    },

    #[snafu(display("Text parse Error: {message}"))]
    TextParseError {
        message: String,
        #[snafu(source)]
        source: reqwest::Error,
    },

    #[snafu(display("Request Error: {message}"))]
    ResponseError {
        message: String,
        status: u16,
        #[snafu(source)]
        source: reqwest::Error,
    },

    #[snafu(display("Unauthorized Error: {message}"))]
    UnauthorizedError {
        message: String
    },

    #[snafu(display("Update Error: {message}"))]
    UpdateError {
        message: String,
        #[snafu(source(from(Error, Box::new)))]
        source: Box<Error>,
    },

    #[snafu(display("Delete Error: {message}"))]
    DeleteError {
        message: String,
        #[snafu(source(from(Error, Box::new)))]
        source: Box<Error>,
    },

    #[snafu(display("Insert Error: {message}"))]
    InsertError {
        message: String,
        #[snafu(source(from(Error, Box::new)))]
        source: Box<Error>,
    },

    #[snafu(display("Select Error: {message}"))]
    SelectError {
        message: String,
        #[snafu(source(from(Error, Box::new)))]
        source: Box<Error>,
    },

    #[snafu(display("Upsert Error: {message}"))]
    UpsertError {
        message: String,
        #[snafu(source(from(Error, Box::new)))]
        source: Box<Error>,
    },

    #[snafu(display("General Error: {message}"))]
    General { message: String },

    #[snafu(display("IO Error: {source}"))]
    Io { source: std::io::Error },

    #[snafu(display("Not defined error: {message}"))]
    NotDefinedError { message: String },

    #[snafu(display("Not implemented error: {message}"))]
    NotImplementedError { message: String },

    #[snafu(display("Undefined error occurred: {}", message))]
    Undefined { message: String },

    /// default
    #[snafu(display("Default error"))]
    #[default]
    Default,

    #[snafu(display("Tokio error: {source}"))]
    TokioError { source: tokio::io::Error },

    #[snafu(display("No result error: {message}"))]
    NoResultError { message: String },

    #[snafu(display("Encryption error: {message}"))]
    EncryptionError {
        message: String,
        #[snafu(source(from(Error, Box::new)))]
        source: Box<Error>,
    },
    CryptoInitError,

    #[snafu(display("SealBox error: {message}"))]
    SealBoxError {
        message: String,
    },
}



pub type Result<T, E = Error> = std::result::Result<T, E>;

#[cfg(test)]
mod tests {
    use super::*;
    #[derive(Debug, Snafu)]
    #[snafu(display("ID may not be less than 10, but it was {id}"))]
    struct InvalidIdError {
        id: u16,
    }

    fn is_valid_id(id: u16) -> Result<(), InvalidIdError> {
        ensure!(id >= 10, InvalidIdSnafu { id });
        Ok(())
    }
    #[test]
    fn test_is_valid_id() {
        let id = 5;
        let result = is_valid_id(id);
        assert_eq!(result.is_err(), true);
        assert_eq!(result.unwrap_err().to_string(), "ID may not be less than 10, but it was 5");

        let id = 10;
        let result = is_valid_id(id);
        assert_eq!(result.is_ok(), true);
    }
    #[test]
    fn test_flux_error() {
        let error = FluxError::Initialization { message: "Initialization error".to_string() };
        assert_eq!(error.to_string(), "Initialization Error: Initialization error");

        let error = FluxError::Request { message: "Request error".to_string() };
        assert_eq!(error.to_string(), "Request Error: Request error");

        let error = FluxError::Update { message: "Update error".to_string() };
        assert_eq!(error.to_string(), "Update Error: Update error");

        let error = FluxError::Delete { message: "Delete error".to_string() };
        assert_eq!(error.to_string(), "Delete Error: Delete error");

        let error = FluxError::Insert { message: "Insert error".to_string() };
        assert_eq!(error.to_string(), "Insert Error: Insert error");

        let error = FluxError::Select { message: "Select error".to_string() };
        assert_eq!(error.to_string(), "Select Error: Select error");

        let error = FluxError::Upsert { message: "Upsert error".to_string() };
        assert_eq!(error.to_string(), "Upsert Error: Upsert error");

        let error = FluxError::General { message: "General error".to_string() };
        assert_eq!(error.to_string(), "General Error: General error");

        let error = FluxError::Io { source: std::io::Error::new(std::io::ErrorKind::Other, "IO error") };
        assert_eq!(error.to_string(), "IO Error: IO error");

        let error = FluxError::NotDefined { message: "Not defined error".to_string() };
        assert_eq!(error.to_string(), "Not defined error: Not defined error");

        let error = FluxError::Default;
        assert_eq!(error.to_string(), "Default error");
    }
}