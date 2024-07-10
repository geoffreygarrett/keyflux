use std::collections::HashMap;
use std::fmt::Debug;

use async_trait::async_trait;
use log::{debug, error, trace};
use reqwest::Response;
use serde_json::Value;

use crate::errors::{Error, Result};
use crate::prelude::*;

#[derive(Debug, Serialize, Deserialize, Clone)]
enum Status {
    Success,
    Failure,
}

#[derive(Debug, Serialize, Deserialize, Clone)]
pub struct KeyResponseStruct {
    key: String,
    operation: String,
    status: Status,
    #[serde(skip_serializing_if = "Option::is_none", flatten)]
    extra: Option<HashMap<String, Value>>,
}

pub trait KeyResponseT: Send + Sync + Debug {}

#[derive(Debug)]
pub struct KeyResponse {
    inner: Box<dyn KeyResponseT>,
}

impl KeyResponseT for KeyResponseStruct {}
impl KeyResponse {
    pub fn success(key: &str, operation: &str, extra: Option<HashMap<String, Value>>) -> Self {
        KeyResponse {
            inner: Box::new(KeyResponseStruct::success(key, operation, extra))
        }
    }
    pub fn failure(key: &str, operation: &str, extra: Option<HashMap<String, Value>>) -> Self {
        KeyResponse {
            inner: Box::new(KeyResponseStruct::failure(key, operation, extra))
        }
    }
    pub fn with_extra(key: &str, operation: &str, status: Status, extra: HashMap<String, Value>) -> Self {
        KeyResponse {
            inner: Box::new(KeyResponseStruct::with_extra(key, operation, status, extra))
        }
    }
    pub fn new(key: &str, operation: &str, status: Status) -> Self {
        KeyResponse {
            inner: Box::new(KeyResponseStruct::new(key, operation, status))
        }
    }
}

impl KeyResponseStruct {
    pub fn new(key: &str, operation: &str, status: Status) -> Self {
        KeyResponseStruct {
            key: key.to_string(),
            operation: operation.to_string(),
            status,
            extra: None,
        }
    }

    pub fn success(key: &str, operation: &str, extra: Option<HashMap<String, Value>>) -> Self {
        KeyResponseStruct {
            key: key.to_string(),
            operation: operation.to_string(),
            status: Status::Success,
            extra,
        }
    }

    pub fn failure(key: &str, operation: &str, extra: Option<HashMap<String, Value>>) -> Self {
        KeyResponseStruct {
            key: key.to_string(),
            operation: operation.to_string(),
            status: Status::Failure,
            extra,
        }
    }

    pub fn with_extra(key: &str, operation: &str, status: Status, extra: HashMap<String, Value>) -> Self {
        KeyResponseStruct {
            key: key.to_string(),
            operation: operation.to_string(),
            status,
            extra: Some(extra),
        }
    }
}

#[flux_main(
    ops = [
    "upsert",
    "insert", "delete", "update", "select"
    ],
)]
#[async_trait]
#[typetag::serde(tag = "type")]
pub trait Flux {}
