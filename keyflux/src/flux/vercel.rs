use std::collections::HashMap;
use std::env;
use crate::api::traits::Fetch;
use crate::api::vercel::{VariableType, VERCEL_ACCESS_TOKEN};
// use crate::api::vercel::{VariableType, VercelEnvironmentUpsert};
use crate::error::FluxError;
use crate::file::key_collection::KeyCollection;
use crate::flux::merge;
use crate::flux::replace_vars_in_json;
use crate::key::Key;
use crate::traits::Flux;
use async_trait::async_trait;
use log::{debug, info, trace};
use reqwest::Client;
use serde::{Deserialize, Serialize};
use serde_json::{json, Value};
use tokio::task::JoinError;
use crate::FluxContext;


/// Represents the configuration necessary to manage environment variables in Vercel for a specific project.
/// It holds the project ID and authentication token required for Vercel API requests.
#[flux_define]
pub struct VercelFlux {
    // #[serde(flatten)]
    // pub input: Option<Value>
    /// Unique identifier or name of the Vercel project.
    pub id_or_name: String,
    /// Optional access token for authentication. If not set, it defaults to the `VERCEL_ACCESS_TOKEN`
    /// environment variable if available.
    pub token: Option<String>,
    /// Key name of the environment variable to be upserted.
    // pub key: String,
    // /// Value of the environment variable.
    // pub value: String,
    /// Type of the variable, such as 'secret' or 'plain'.
    #[serde(rename = "type")]
    pub var_type: VariableType,
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

impl VercelFlux {
    pub async fn single(&self, key: &Key) -> Result<(), FluxError> {
        let client = Client::new();
        let mut query_params = HashMap::new();

        if let Some(slug) = self.slug_field() {
            query_params.insert("slug", slug);
        }
        if let Some(team_id) = self.team_id_field() {
            query_params.insert("teamId", team_id);
        }

        let upsert = self.upsert_field().clone().to_string();
        query_params.insert("upsert", &upsert);

        let mut body = json!({
            "key": key.name(),
            "value": key.value(),
            "target": self.target_field(),
            "type": self.var_type_field(),
        });

        if let Some(git_branch) = self.git_branch_field() {
            body["gitBranch"] = serde_json::to_value(git_branch).unwrap();
        }
        if let Some(comment) = self.comment_field() {
            body["comment"] = serde_json::to_value(comment).unwrap();
        }

        trace!("Sending request to Vercel API: {:?}", body);

        let response = client
            .post(&format!("https://api.vercel.com/v10/projects/{}/env", self.id_or_name_field()))
            .bearer_auth(
                env::var(VERCEL_ACCESS_TOKEN).unwrap_or_else(|_| self.token_field().clone().unwrap_or_default())
            )
            .query(&query_params)
            .json(&body)
            .send()
            .await
            .map_err(FluxError::from_reqwest_error)?;

        trace!("Received response from Vercel API: {:?}", response);

        match response.status() {
            reqwest::StatusCode::CREATED => {
                debug!("Environment variable '{}' upserted successfully.", key.name());
                Ok(())
            }
            reqwest::StatusCode::BAD_REQUEST => Err(FluxError::BadRequest("Invalid request parameters.".to_string())),
            reqwest::StatusCode::UNAUTHORIZED => Err(FluxError::Unauthorized("Unauthorized access.".to_string())),
            reqwest::StatusCode::PAYMENT_REQUIRED => Err(FluxError::PaymentRequired("Payment required.".to_string())),
            reqwest::StatusCode::FORBIDDEN => Err(FluxError::Forbidden("Access forbidden.".to_string())),
            reqwest::StatusCode::CONFLICT => Err(FluxError::Conflict("Conflict: Project is being transferred.".to_string())),
            _ => Err(FluxError::UnsupportedFormat("Unsupported response format.".to_string())),
        }
    }
}

impl From<JoinError> for FluxError {
    fn from(error: JoinError) -> Self {
        // Depending on the specifics of FluxError, you might want to handle this differently
        if error.is_panic() {
            // Handle the case where the task panicked
            FluxError::new("Task panicked")
        } else if error.is_cancelled() {
            // Handle the case where the task was cancelled
            FluxError::new("Task was cancelled")
        } else {
            // Generic handler for other kinds of join errors
            FluxError::new("Task failed unexpectedly")
        }
    }
}

#[async_trait]
#[flux_config(name = "vercel")]
impl Flux for VercelFlux {
    async fn initialize(&mut self, _context: &FluxContext) -> Result<(), FluxError> {
        Ok(())
    }

    async fn finalize(&self, _context: &FluxContext) -> Result<(), FluxError> {
        Ok(())
    }

    async fn batch(&self, context: &FluxContext) -> Result<(), FluxError> {
        let mut tasks = vec![];
        for key in context.keys().clone() {
            let self_clone = self.clone();
            let key_clone = key.clone(); // Clone key here
            tasks.push(tokio::spawn(async move {
                self_clone.single(&key_clone).await
            }));
        }
        // Wait for all tasks to complete
        for task in tasks {
            task.await??; // Handle errors properly
        }
        Ok(())
    }
}
