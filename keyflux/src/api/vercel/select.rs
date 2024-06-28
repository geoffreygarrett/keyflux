use crate::api::traits::Fetch;
use crate::api::vercel::VERCEL_ACCESS_TOKEN;
use crate::error::FluxError;
use async_trait::async_trait;
use reqwest::{Client, Response};
use serde::Serialize;
use std::collections::HashMap;
use std::env;

/// Represents a request to retrieve environment variables for a Vercel project.
///
/// This structure encapsulates all necessary parameters for making an API request to Vercel to
/// fetch environment variables associated with a specific project. It includes optional fields
/// for further specification, such as git branch or decryption flag.
#[derive(Serialize)]
pub struct VercelEnvironmentSelect {
    /// Unique identifier or name of the Vercel project.
    pub id_or_name: String,
    /// Optional access token for authentication. If not set, it defaults to the `VERCEL_ACCESS_TOKEN`
    /// environment variable if available.
    pub token: Option<String>,
    /// Optional flag to indicate if the environment variables should be decrypted.
    pub decrypt: Option<bool>,
    /// Optional git branch to filter the environment variables.
    pub git_branch: Option<String>,
    /// Optional slug of the project.
    pub slug: Option<String>,
    /// Optional team ID, useful for requests across different team resources.
    pub team_id: Option<String>,
    /// Optional source string for identifying the request source.
    pub source: Option<String>,
}

// type
//
// string of the following
//
// Required
// The type of environment variable
// Example:
// plain
// Allowed values:
// system
// secret
// encrypted
// plain
// sensitive

#[async_trait]
impl Fetch for VercelEnvironmentSelect {
    /// Asynchronously sends a GET request to retrieve environment variables for a Vercel project.
    ///
    /// Constructs and sends a GET request using the provided HTTP client with authorization,
    /// and necessary query parameters. Manages the response from the API.
    ///
    /// # Arguments
    ///
    /// * `client` - The HTTP client used to send the request.
    ///
    /// # Returns
    ///
    /// This method returns a `Result` containing a `reqwest::Response` if the request
    /// is successful, or a `reqwest::Error` if an error occurs during the request.
    ///
    async fn fetch(&self, client: &Client) -> Result<Response, FluxError> {
        let mut query_params = HashMap::new();
        if let Some(decrypt) = self.decrypt {
            query_params.insert("decrypt", decrypt.to_string());
        }
        if let Some(git_branch) = &self.git_branch {
            query_params.insert("gitBranch", git_branch.clone());
        }
        if let Some(slug) = &self.slug {
            query_params.insert("slug", slug.clone());
        }
        if let Some(team_id) = &self.team_id {
            query_params.insert("teamId", team_id.clone());
        }
        if let Some(source) = &self.source {
            query_params.insert("source", source.clone());
        }

        client
            .get(&format!(
                "https://api.vercel.com/v9/projects/{}/env",
                self.id_or_name
            ))
            .bearer_auth(
                env::var(VERCEL_ACCESS_TOKEN)
                    .unwrap_or_else(|_| self.token.clone().unwrap_or_default()),
            )
            .query(&query_params)
            .send()
            .await
            .map_err(FluxError::from_reqwest_error)
    }
}
