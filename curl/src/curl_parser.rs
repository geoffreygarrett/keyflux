use std::cmp::PartialEq;
use std::str::FromStr;

use lazy_static::lazy_static;
use pest::Parser;
use pest_derive::Parser;
use regex::Regex;
use snafu::{ResultExt, Snafu};

use crate::{HttpMethod, HttpRequest, RequestBody};
use crate::http_request::{FormDataField, ParseHttpMethodError};

#[derive(Debug, Parser)]
#[grammar = "src/curl.pest"]
pub struct CurlParser;

#[derive(Debug, Snafu)]
pub enum ParseError {
    #[snafu(display("Failed to parse rules: {}", source))]
    ParseRuleError { source: pest::error::Error<Rule> },
    #[snafu(display("URL parsing failed: {}", source))]
    UrlParseError { source: url::ParseError },
    #[snafu(display("Header parsing failed: {}", source))]
    HeaderParseError { source: std::str::Utf8Error },
    #[snafu(display("Invalid HTTP method: {}", source))]
    HttpMethodParseError { source: ParseHttpMethodError },
    #[snafu(display("Base64 encoding error"))]
    Base64EncodingError,
    #[snafu(display("General error: {}", msg))]
    GeneralError { msg: String },
}

lazy_static! {
   static ref MULTIPART_FORM_DATA: Regex = Regex::new(r#"application/x-www-form-urlencoded"#).unwrap();
   static ref JSON: Regex = Regex::new(r#"application/json"#).unwrap();
}

#[derive(Debug)]
enum ContentType {
    // Text Content Types
    PlainText,
    Html,
    Css,
    JavaScript,
    Calendar,

    // Application Content Types
    Json,
    Xml,
    Pdf,
    Zip,
    OctetStream,
    FormDataUrlEncoded,

    // Image Content Types
    Jpeg,
    Png,
    Gif,
    Svg,

    // Audio/Video Content Types
    MpegAudio,
    WavAudio,
    Mp4Video,
    MpegVideo,

    // Multipart Content Types
    MultipartFormData,
    MultipartByteRanges,

    // Other Content Types
    RssXml,
    SoapXml,
    XhtmlXml,
    Excel,

    // Placeholder for other content types not listed explicitly
    #[allow(dead_code)]
    Other(String),
}

impl ContentType {
    fn from_mime(mime_type: &str) -> Self {
        match mime_type.to_lowercase().as_str() {
            // Text Content Types
            "text/plain" => ContentType::PlainText,
            "text/html" => ContentType::Html,
            "text/css" => ContentType::Css,
            "text/javascript" | "application/javascript" => ContentType::JavaScript,
            "text/calendar" => ContentType::Calendar,

            // Application Content Types
            "application/json" => ContentType::Json,
            "application/xml" | "text/xml" => ContentType::Xml,
            "application/pdf" => ContentType::Pdf,
            "application/zip" => ContentType::Zip,
            "application/octet-stream" => ContentType::OctetStream,
            "application/x-www-form-urlencoded" => ContentType::FormDataUrlEncoded,

            // Image Content Types
            "image/jpeg" => ContentType::Jpeg,
            "image/png" => ContentType::Png,
            "image/gif" => ContentType::Gif,
            "image/svg+xml" => ContentType::Svg,

            // Audio/Video Content Types
            "audio/mpeg" => ContentType::MpegAudio,
            "audio/wav" => ContentType::WavAudio,
            "video/mp4" => ContentType::Mp4Video,
            "video/mpeg" => ContentType::MpegVideo,

            // Multipart Content Types
            "multipart/form-data" => ContentType::MultipartFormData,
            "multipart/byteranges" => ContentType::MultipartByteRanges,

            // Other Content Types
            "application/rss+xml" => ContentType::RssXml,
            "application/soap+xml" => ContentType::SoapXml,
            "application/xhtml+xml" => ContentType::XhtmlXml,
            "application/vnd.ms-excel" => ContentType::Excel,

            // Default for any unrecognized type
            _ => ContentType::Other(mime_type.to_string()),
        }
    }
}



pub fn parse_curl_command(input: &str) -> Result<HttpRequest, ParseError> {
    let pairs = CurlParser::parse(Rule::input, input).context(ParseRuleSnafu)?;
    println!("pairs = {:?}", pairs);
    let mut request = HttpRequest::default();
    let mut is_json_body = false;
    let mut json_body: Option<String> = None;
    let mut form_data: Vec<FormDataField> = Vec::new();
    let mut content_type: Option<ContentType> = None;
    for pair in pairs {
        println!("pair = {:#?}", pair);
        match pair.as_rule() {
            Rule::method => {
                let method =
                    HttpMethod::from_str(pair.as_str().trim()).context(HttpMethodParseSnafu)?;
                request.method = method;
            }
            Rule::url => {
                let mut inner_pairs = pair.into_inner();
                println!("inner_pairs = {:#?}", inner_pairs);
                let url_str =
                    remove_quote(inner_pairs.next().expect("URL must be present").as_str());
                let url = url::Url::parse(&url_str).context(UrlParseSnafu)?;
                request.url = url_str.to_owned();
                for (key, value) in url.query_pairs() {
                    request.query_params.add(&key, &value);
                }
            }
            Rule::header => {
                let mut parts = remove_quote(pair.as_str()).splitn(2, ':').map(str::trim);
                let name = parts.next().expect("Header name missing");
                let value = parts.next().expect("Header value missing");
                request.headers.add(name, value);
                if name.to_lowercase() == "content-type" {
                    content_type = Some(ContentType::from_mime(value));
                }
            }
            Rule::auth => {
                let auth_str = remove_quote(pair.as_str());
                let encoded = base64::encode(auth_str);
                request
                    .headers
                    .add("Authorization", &format!("Basic {}", encoded));
            }
            Rule::body => {
                let body_content = remove_quote(pair.as_str().trim());
                println!("body_content = {}", body_content);
                request.body = Some(RequestBody::Text(body_content.to_string()));
            }
            Rule::form_data => {
                let content = remove_quote(pair.as_str().trim());
                let parts: Vec<_> = content.splitn(2, '=').map(str::trim).collect();
                if parts.len() == 2 {
                    form_data.push(FormDataField::Text(
                        parts[0].to_owned(),
                        parts[1].to_owned(),
                    ));
                } else {
                    return Err(ParseError::GeneralError {
                        msg: "Form data parsing failed".to_string(),
                    });
                }
            }
            Rule::query_param => {
                let parts: Vec<_> = pair.as_str().splitn(2, '=').map(str::trim).collect();
                if parts.len() == 2 {
                    request.query_params.add(parts[0], parts[1]);
                } else {
                    return Err(ParseError::GeneralError {
                        msg: "Query parameter parsing failed".to_string(),
                    });
                }
            }
            Rule::compressed_option => {
                request.headers.add("Accept-Encoding", "gzip, deflate");
            }
            Rule::get_option => {
                if request.method == HttpMethod::Get && request.body.is_some() {
                    request.method = HttpMethod::Post; // Switch to POST if GET with body is indicated
                }
            }
            _ => {}
        }
    }
    if let Some(content_type) = content_type {
        match content_type {
            ContentType::Json => {
                handle_json_body(&mut request)?;
            }
            ContentType::FormDataUrlEncoded => {
                request.body = Some(RequestBody::FormData(form_data));
            }
            _ => {}
        }
    }
    Ok(request)
}

#[cfg(feature = "json_support")]
fn handle_json_body(request: &mut HttpRequest) -> Result<(), ParseError> {
    request.body = Some(RequestBody::Json(serde_json::from_str(request.body.as_ref().unwrap().text().unwrap().as_str())?));
    Ok(())
}

#[cfg(not(feature = "json_support"))]
fn handle_json_body(_request: &mut HttpRequest) -> Result<(), ParseError> {
    Ok(())
}

impl From<serde_json::Error> for ParseError {
    fn from(error: serde_json::Error) -> Self {
        ParseError::GeneralError {
            msg: error.to_string(),
        }
    }
}



fn remove_quote(s: &str) -> &str {
    if (s.starts_with('"') && s.ends_with('"')) || (s.starts_with('\'') && s.ends_with('\'')) {
        &s[1..s.len() - 1]
    } else {
        s
    }
}
