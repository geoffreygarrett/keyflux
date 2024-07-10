use std::str::FromStr;
pub use curl_parser::{parse_curl_command, ParseError};
pub use http_cookies::HttpCookies;
pub use http_header::HttpHeader;
pub use http_request::{FormDataField, HttpMethod, HttpRequest, RequestBody};
pub use query_params::QueryParams;

mod curl_parser;
mod http_cookies;
mod http_header;
mod http_request;
mod query_params;

pub mod feature;
mod error;

#[cfg(feature = "reqwest_support")]
pub use feature::reqwest::*;

#[cfg(feature = "handlebars_support")]
extern crate keyflux_template;
#[cfg(feature = "handlebars_support")]
pub use keyflux_template::*;

