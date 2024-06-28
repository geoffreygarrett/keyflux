use crate::http_header::HttpHeader;
use crate::query_params::QueryParams;
use crate::http_cookies::HttpCookies;
use std::collections::HashMap;
use std::fmt;
use std::path::PathBuf;
use std::str::FromStr;
use url::Url;
use base64;


#[derive(Debug)]
pub struct ParseHttpMethodError;

impl fmt::Display for ParseHttpMethodError {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "invalid HTTP method")
    }
}

impl std::error::Error for ParseHttpMethodError {}


#[derive(Debug, Clone)]
pub struct HttpRequest {
    pub url: String,
    pub method: HttpMethod,
    pub headers: HttpHeader,
    pub body: Option<RequestBody>,
    pub query_params: QueryParams,
    pub cookies: HttpCookies,
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

#[derive(Debug, Clone, PartialEq)]
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

#[derive(Debug, Clone)]
pub enum RequestBody {
    Json(String),
    Text(String),
    Binary(Vec<u8>),
    FormData(Vec<FormDataField>),
}

#[derive(Debug, Clone, PartialEq)]
pub enum FormDataField {
    Text(String, String), // field name, value
    File(String, PathBuf), // field name, file path
}
// #[derive(Debug, Clone)]
// pub enum FormDataField {
//     Text(String, String),
//     // File(String, PathBuf), // Example for file handling, uncomment or modify as necessary
// }

#[cfg(feature = "reqwest_support")]
impl From<HttpRequest> for reqwest::Result<reqwest::RequestBuilder> {
    fn from(request: HttpRequest) -> Self {
        let client = reqwest::Client::new();
        let url = Url::parse_with_params(&request.url, request.query_params.encode().as_str())
            .map_err(|e| reqwest::Error::new(reqwest::ErrorKind::Url, e))?;

        let mut req_builder = client.request(request.method.into(), url);

        for (key, value) in &request.headers.headers {
            req_builder = req_builder.header(key, value);
        }

        if !request.cookies.to_header().is_empty() {
            req_builder = req_builder.header("Cookie", request.cookies.to_header());
        }

        match &request.body {
            Some(RequestBody::Json(data)) => req_builder = req_builder.json(data),
            Some(RequestBody::Text(data)) => req_builder = req_builder.body(data.clone()),
            Some(RequestBody::Binary(data)) => req_builder = req_builder.body(data.clone()),
            None => (),
            _ => {}
        }

        Ok(req_builder)
    }
}

impl HttpRequest {
    pub fn set_basic_auth(&mut self, username: &str, password: &str) {
        let encoded = base64::encode(format!("{}:{}", username, password));
        self.headers.add("Authorization", &format!("Basic {}", encoded));
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
