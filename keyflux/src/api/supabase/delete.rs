use crate::api::supabase::{SupabaseApi, SUPABASE_API_ENDPOINT_V1};
use crate::api::traits::{BearerToken, Fetch};
use crate::error::FluxError;
use async_trait::async_trait;
use reqwest::{Client, Response};
use serde::{Deserialize, Serialize};

/// Represents a request to delete secrets in a Supabase project.
///
/// This structure encapsulates the necessary parameters for making an API request to Supabase
/// to delete multiple secrets from a specified project.
///
/// # Fields
///
/// * `ref_id` - The unique identifier or reference ID of the Supabase project.
/// * `token` - An optional authentication token for accessing the Supabase API. If not provided,
///             the `SUPABASE_TOKEN` environment variable will be used.
/// * `names` - A list of secret names to be deleted from the project.
///
/// # Example
///
/// ```
/// use async_trait::async_trait;
/// use reqwest::Client;
/// use serde::{Deserialize, Serialize};
/// use keyflux::api::supabase::delete::SupabaseDelete;
/// use keyflux::api::traits::Fetch;
/// use keyflux::error::FluxError;
///
/// #[tokio::main]
/// async fn main() -> Result<(), FluxError> {
///     let delete_request = SupabaseDelete {
///         ref_id: "your-project-ref".to_string(),
///         token: Some("your-supabase-token".to_string()),
///         names: vec!["SECRET_NAME_1".to_string(), "SECRET_NAME_2".to_string()],
///     };
///
///     let client = Client::new();
///     let response = delete_request.fetch(&client).await?;
///
///     if response.status().is_success() {
///         println!("Successfully deleted secrets.");
///     } else {
///         println!("Failed to delete secrets. Status: {:?}", response.status());
///     }
///
///     Ok(())
/// }
/// ```
#[derive(Serialize, Deserialize, Debug)]
pub struct SupabaseDelete {
    pub ref_id: String,
    pub token: Option<String>,
    pub names: Vec<String>,
}

impl BearerToken for SupabaseDelete {
    fn bearer_token(&self) -> Option<String> {
        self.token.clone()
    }
}

impl SupabaseApi for SupabaseDelete {}

#[async_trait]
impl Fetch for SupabaseDelete {
    /// Sends a DELETE request to the Supabase API to delete the specified secrets.
    ///
    /// # Arguments
    ///
    /// * `client` - The HTTP client used to send the request.
    ///
    /// # Returns
    ///
    /// This method returns a `Result` containing a `reqwest::Response` if the request
    /// is successful, or a `reqwest::Error` if an error occurs during the request.
    async fn fetch(&self, client: &Client) -> Result<Response, FluxError> {
        let token = self.resolve_token()?;
        let url = format!(
            "{}/projects/{}/secrets",
            SUPABASE_API_ENDPOINT_V1, self.ref_id
        );

        client
            .delete(&url)
            .bearer_auth(token)
            .json(&self.names)
            .send()
            .await
            .map_err(FluxError::from_reqwest_error)
    }
}
