use reqwest::{Client, Response};
use async_trait::async_trait;
use serde::Serialize;
use std::collections::HashMap;
use std::env;
// use log::debug;
// use serde_json::json;
use crate::api::traits::Fetch;
use crate::api::vercel::{VERCEL_ACCESS_TOKEN};
use crate::error::FluxError;


//
// #[derive(Debug, Clone, PartialEq, Eq, Hash, Serialize, Deserialize)]
// pub enum VariableType {
//     #[serde(rename = "system")]
//     System,
//     #[serde(rename = "secret")]
//     Secret,
//     #[serde(rename = "encrypted")]
//     Encrypted,
//     #[serde(rename = "plain")]
//     Plain,
//     #[serde(rename = "sensitive")]
//     Sensitive,
// }


/// Represents a request to upsert an environment variable in a Vercel project.
///
/// This structure encapsulates all necessary parameters for making an API request to Vercel to
/// either create or update an environment variable. It includes optional fields for further
/// specification, such as git branch or environment targets.
#[derive(Serialize, Debug)]
pub struct VercelEnvironmentUpsert {
    /// Unique identifier or name of the Vercel project.
    pub id_or_name: String,
    /// Optional access token for authentication. If not set, it defaults to the `VERCEL_ACCESS_TOKEN`
    /// environment variable if available.
    pub token: Option<String>,
    /// Key name of the environment variable to be upserted.
    pub key: String,
    /// Value of the environment variable.
    pub value: String,
    /// Type of the variable, such as 'secret' or 'plain'.
    #[serde(rename = "type")]
    pub var_type: String,
    // pub var_type: VariableType,
    /// List of environments (e.g., production, development) where the variable should apply.
    pub target: Vec<String>,
    /// Optional git branch to which the environment variable is linked.
    #[serde(skip_serializing_if = "Option::is_none")]
    pub git_branch: Option<String>,
    /// Optional comment describing the purpose or use of the environment variable.
    #[serde(skip_serializing_if = "Option::is_none")]
    pub comment: Option<String>,
    /// Optional slug of the project.
    #[serde(skip_serializing_if = "Option::is_none")]
    pub slug: Option<String>,
    /// Optional team ID, useful for requests across different team resources.
    #[serde(skip_serializing_if = "Option::is_none")]
    pub team_id: Option<String>,
    /// Indicates whether to upsert (update existing or create new) the variable.
    pub upsert: bool,
}

#[async_trait]
impl Fetch for VercelEnvironmentUpsert {
    /// Asynchronously sends a POST request to upsert an environment variable in a Vercel project.
    ///
    /// Constructs and sends a POST request using the provided HTTP client with authorization,
    /// content type set to JSON, and necessary query parameters. Handles constructing the
    /// request body as JSON from the struct's fields and manages the response.
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
        if let Some(slug) = &self.slug {
            query_params.insert("slug", slug.clone());
        }
        if let Some(team_id) = &self.team_id {
            query_params.insert("teamId", team_id.clone());
        }
        query_params.insert("upsert", self.upsert.to_string());
        let response = client.post(&format!("https://api.vercel.com/v10/projects/{}/env", self.id_or_name))
            .bearer_auth(env::var(VERCEL_ACCESS_TOKEN).unwrap_or_else(|_| self.token.clone().unwrap_or_default()))
            .query(&query_params)
            .json(&self)
            .send()
            .await
            .map_err(FluxError::from_reqwest_error)?; // Note the use of '?' for error handling

        if !response.status().is_success() {
            let error_text = response.text().await.unwrap_or_default();
            println!("Error response: {}", error_text); // Logging the error response
            return Err(FluxError::BadRequest(format!("Bad request: {}", error_text)));
        }
        Ok(response)
    }
}


// let mut query_params = HashMap::new();
// if let Some(slug) = &self.slug {
// query_params.insert("slug", slug.clone());
// }
// if let Some(team_id) = &self.team_id {
// query_params.insert("teamId", team_id.clone());
// }
// query_params.insert("upsert", self.upsert.to_string());
//
// client.post(&format!("https://api.vercel.com/v10/projects/{}/env", self.id_or_name))
// .bearer_auth(env::var(VERCEL_ACCESS_TOKEN).unwrap_or_else(|_| self.token.clone().unwrap_or_default()))
// .query(&query_params)
// .json(&self)
// .send()
// .await
// .map_err(FluxError::from_reqwest_error) // Convert reqwest::Error to FluxError
