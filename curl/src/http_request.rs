use std::fmt;
use std::path::PathBuf;
use std::str::FromStr;

use base64;
use serde::{Deserialize, Serialize};
use url::Url;

use crate::http_cookies::HttpCookies;
use crate::http_header::HttpHeader;
use crate::{parse_curl_command, ParseError};
use crate::query_params::QueryParams;

#[cfg(feature = "json_support")]
use serde_json::Value;

#[derive(Debug)]
pub struct ParseHttpMethodError;

impl fmt::Display for ParseHttpMethodError {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "invalid HTTP method")
    }
}

impl std::error::Error for ParseHttpMethodError {}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct HttpRequest {
    pub url: String,
    pub method: HttpMethod,
    pub headers: HttpHeader,
    pub body: Option<RequestBody>,
    pub query_params: QueryParams,
    pub cookies: HttpCookies,
}
impl FromStr for HttpRequest {
    type Err = ParseError;

    fn from_str(s: &str) -> Result<Self, Self::Err> {
        parse_curl_command(s)
    }
}



impl FromStr for HttpMethod {
    type Err = ParseHttpMethodError;

    fn from_str(s: &str) -> Result<Self, Self::Err> {
        match s.to_uppercase().as_str() {
            "GET" => Ok(HttpMethod::Get),
            "POST" => Ok(HttpMethod::Post),
            "PUT" => Ok(HttpMethod::Put),
            "DELETE" => Ok(HttpMethod::Delete),
            "PATCH" => Ok(HttpMethod::Patch),
            "HEAD" => Ok(HttpMethod::Head),
            "OPTIONS" => Ok(HttpMethod::Options),
            method => Ok(HttpMethod::Custom(method.to_string())),
            _ => Err(ParseHttpMethodError),
        }
    }
}

impl HttpMethod {
    pub fn as_str(&self) -> &str {
        match self {
            HttpMethod::Get => "GET",
            HttpMethod::Post => "POST",
            HttpMethod::Put => "PUT",
            HttpMethod::Delete => "DELETE",
            HttpMethod::Patch => "PATCH",
            HttpMethod::Head => "HEAD",
            HttpMethod::Options => "OPTIONS",
            HttpMethod::Custom(ref method) => method.as_str(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Serialize, Deserialize)]
pub enum HttpMethod {
    Get,
    Post,
    Put,
    Delete,
    Patch,
    Head,
    Options,
    Custom(String),
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub enum RequestBody {
    #[cfg(feature = "json_support")]
    Json(Value),
    Text(String),
    Binary(Vec<u8>),
    FormData(Vec<FormDataField>),
}

impl RequestBody {
    pub fn contains(&self, s: &str) -> bool {
        match self {
            RequestBody::Json(body) => body.to_string().contains(s),
            RequestBody::Text(body) => body.contains(s),
            RequestBody::Binary(body) => {
                // Search for the byte slice within the binary data
                body.windows(s.len()).any(|window| window == s.as_bytes())
            }
            RequestBody::FormData(_) => false, // FormData searching might require different logic
        }
    }

    #[cfg(feature = "json_support")]
    pub fn json(&self) -> Option<Value> {
        match self {
            RequestBody::Json(body) => {
                Some(body.clone())
            }
            _ => None,
        }
    }

    pub fn text(&self) -> Option<String> {
        match self {
            RequestBody::Text(body) => Some(body.clone()),
            _ => None,
        }
    }

    pub fn binary(&self) -> Option<Vec<u8>> {
        match self {
            RequestBody::Binary(body) => Some(body.clone()),
            _ => None,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Serialize, Deserialize)]
pub enum FormDataField {
    Text(String, String),  // field name, value
    File(String, PathBuf), // field name, file path
}

impl HttpRequest {
    pub fn set_basic_auth(&mut self, username: &str, password: &str) {
        let encoded = base64::encode(format!("{}:{}", username, password));
        self.headers
            .add("Authorization", &format!("Basic {}", encoded));
    }
    pub fn set_compressed(&mut self) {
        self.headers.add("Accept-Encoding", "gzip, deflate");
    }

    pub fn default() -> Self {
        HttpRequest {
            url: String::new(),
            method: HttpMethod::Get,
            headers: HttpHeader::new(),
            body: None,
            query_params: QueryParams::new(),
            cookies: HttpCookies::new(),
        }
    }
}

#[cfg(feature = "reqwest_support")]
impl From<HttpMethod> for reqwest::Method {
    fn from(method: HttpMethod) -> Self {
        match method {
            HttpMethod::Get => reqwest::Method::GET,
            HttpMethod::Post => reqwest::Method::POST,
            HttpMethod::Put => reqwest::Method::PUT,
            HttpMethod::Delete => reqwest::Method::DELETE,
            HttpMethod::Patch => reqwest::Method::PATCH,
            HttpMethod::Head => reqwest::Method::HEAD,
            HttpMethod::Options => reqwest::Method::OPTIONS,
            HttpMethod::Custom(method) => reqwest::Method::from_bytes(method.as_bytes()).unwrap(),
        }
    }
}
