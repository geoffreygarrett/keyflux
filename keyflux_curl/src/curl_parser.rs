use std::cmp::PartialEq;
use crate::{HttpRequest, HttpMethod, HttpHeader, QueryParams, RequestBody};
use base64::prelude::*;
use pest::Parser;
use pest_derive::Parser;
use snafu::{Snafu, ResultExt};
use std::str::FromStr;
use crate::curl_parser::ParseError::{HttpMethodParseError, ParseRuleError};
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



pub fn parse_curl_command(input: &str) -> Result<HttpRequest, ParseError> {
    let pairs = CurlParser::parse(Rule::input, input).context(ParseRuleSnafu)?;
    let mut request = HttpRequest::default();
    let mut is_json_body = false;
    let mut json_body: Option<String> = None;
    let mut form_data: Vec<FormDataField> = Vec::new();

    for pair in pairs {
        match pair.as_rule() {
            Rule::method => {
                let method = HttpMethod::from_str(pair.as_str().trim()).context(HttpMethodParseSnafu)?;
                request.method = method;
            }
            Rule::url => {
                let mut inner_pairs = pair.into_inner();
                let url_str = remove_quote(inner_pairs.next().expect("URL must be present").as_str());
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
                if name.to_lowercase() == "content-type" && value.to_lowercase() == "application/json" {
                    is_json_body = true;
                }
            }
            Rule::auth => {
                let auth_str = remove_quote(pair.as_str());
                let encoded = base64::encode(auth_str);
                request.headers.add("Authorization", &format!("Basic {}", encoded));
            }
            Rule::body => {
                let body_content = remove_quote(pair.as_str().trim());
                if is_json_body {
                    if let Some(ref mut json_body) = json_body {
                        json_body.push_str(&body_content);
                    } else {
                        json_body = Some(body_content.to_string());
                    }
                } else {
                    if body_content.contains('=') {
                        let parts: Vec<_> = body_content.splitn(2, '=').map(str::trim).collect();
                        if parts.len() == 2 {
                            form_data.push(FormDataField::Text(parts[0].to_owned(), parts[1].to_owned()));
                        } else {
                            return Err(ParseError::GeneralError { msg: "Form data parsing failed".to_string() });
                        }
                    } else {
                        if let Some(RequestBody::Text(ref mut text)) = request.body {
                            text.push_str(&body_content);
                        } else {
                            request.body = Some(RequestBody::Text(body_content.to_string()));
                        }
                    }
                }
            }
            Rule::form_data => {
                let content = remove_quote(pair.as_str().trim());
                let parts: Vec<_> = content.splitn(2, '=').map(str::trim).collect();
                if parts.len() == 2 {
                    form_data.push(FormDataField::Text(parts[0].to_owned(), parts[1].to_owned()));
                } else {
                    return Err(ParseError::GeneralError { msg: "Form data parsing failed".to_string() });
                }
            }
            Rule::query_param => {
                let parts: Vec<_> = pair.as_str().splitn(2, '=').map(str::trim).collect();
                if parts.len() == 2 {
                    request.query_params.add(parts[0], parts[1]);
                } else {
                    return Err(ParseError::GeneralError { msg: "Query parameter parsing failed".to_string() });
                }
            }
            Rule::compressed_option => {
                request.headers.add("Accept-Encoding", "gzip, deflate");
            }
            Rule::get_option => {
                if request.method == HttpMethod::Get && request.body.is_some() {
                    request.method = HttpMethod::Post;  // Switch to POST if GET with body is indicated
                }
            }
            _ => {}
        }
    }

    // Handle body assignment
    if let Some(json_body) = json_body {
        request.body = Some(RequestBody::Text(json_body));
    } else if !form_data.is_empty() {
        request.body = Some(RequestBody::FormData(form_data));
    }

    Ok(request)
}

fn remove_quote(s: &str) -> &str {
    if (s.starts_with('"') && s.ends_with('"')) || (s.starts_with('\'') && s.ends_with('\'')) {
        &s[1..s.len() - 1]
    } else {
        s
    }
}
