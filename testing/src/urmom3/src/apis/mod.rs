use std::error;
use std::fmt;

#[derive(Debug, Clone)]
pub struct ResponseContent<T> {
    pub status: reqwest::StatusCode,
    pub content: String,
    pub entity: Option<T>,
}

#[derive(Debug)]
pub enum Error<T> {
    Reqwest(reqwest::Error),
    Serde(serde_json::Error),
    Io(std::io::Error),
    ResponseError(ResponseContent<T>),
}

impl <T> fmt::Display for Error<T> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let (module, e) = match self {
            Error::Reqwest(e) => ("reqwest", e.to_string()),
            Error::Serde(e) => ("serde", e.to_string()),
            Error::Io(e) => ("IO", e.to_string()),
            Error::ResponseError(e) => ("response", format!("status code {}", e.status)),
        };
        write!(f, "error in {}: {}", module, e)
    }
}

impl <T: fmt::Debug> error::Error for Error<T> {
    fn source(&self) -> Option<&(dyn error::Error + 'static)> {
        Some(match self {
            Error::Reqwest(e) => e,
            Error::Serde(e) => e,
            Error::Io(e) => e,
            Error::ResponseError(_) => return None,
        })
    }
}

impl <T> From<reqwest::Error> for Error<T> {
    fn from(e: reqwest::Error) -> Self {
        Error::Reqwest(e)
    }
}

impl <T> From<serde_json::Error> for Error<T> {
    fn from(e: serde_json::Error) -> Self {
        Error::Serde(e)
    }
}

impl <T> From<std::io::Error> for Error<T> {
    fn from(e: std::io::Error) -> Self {
        Error::Io(e)
    }
}

pub fn urlencode<T: AsRef<str>>(s: T) -> String {
    ::url::form_urlencoded::byte_serialize(s.as_ref().as_bytes()).collect()
}

pub mod actions_api;
pub mod activity_api;
pub mod apps_api;
pub mod billing_api;
pub mod checks_api;
pub mod classroom_api;
pub mod code_scanning_api;
pub mod code_security_api;
pub mod codes_of_conduct_api;
pub mod codespaces_api;
pub mod copilot_api;
pub mod dependabot_api;
pub mod dependency_graph_api;
pub mod emojis_api;
pub mod gists_api;
pub mod git_api;
pub mod gitignore_api;
pub mod interactions_api;
pub mod issues_api;
pub mod licenses_api;
pub mod markdown_api;
pub mod meta_api;
pub mod migrations_api;
pub mod oidc_api;
pub mod orgs_api;
pub mod packages_api;
pub mod projects_api;
pub mod pulls_api;
pub mod rate_limit_api;
pub mod reactions_api;
pub mod repos_api;
pub mod search_api;
pub mod secret_scanning_api;
pub mod security_advisories_api;
pub mod teams_api;
pub mod users_api;

pub mod configuration;
