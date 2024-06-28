use crate::api::supabase::SupabaseApi;
use crate::api::supabase::*;
use crate::key::Key;
use async_trait::async_trait;
use reqwest::{Client, Response};
use serde::{Deserialize, Serialize};

/// Static API endpoint for Supabase
pub const SUPABASE_API_ENDPOINT_V1: &str = "https://api.supabase.com/v1";
/// Environment variable key for Supabase token
pub const SUPABASE_ACCESS_TOKEN: &str = "SUPABASE_TOKEN";

/// Represents a request to upsert secrets in a Supabase project.
///
/// This structure encapsulates the necessary parameters for making an API request to Supabase
/// to create or update multiple secrets in a specified project.
///
/// # Fields
///
/// * `ref_id` - The unique identifier or reference ID of the Supabase project.
/// * `token` - An optional authentication token for accessing the Supabase API. If not provided,
///             the `SUPABASE_TOKEN` environment variable will be used.
/// * `keys` - A list of secrets to be upserted in the project, where each secret is represented by a `Key`.
///
/// # Example
///
/// ```
/// use async_trait::async_trait;
/// use reqwest::Client;
/// use serde::{Deserialize, Serialize};
/// use keyflux::api::supabase::upsert::SupabaseUpsert;
/// use keyflux::api::traits::Fetch;
/// use keyflux::key::Key;
/// use keyflux::error::FluxError;
///
/// #[tokio::main]
/// async fn main() -> Result<(), FluxError> {
///     use keyflux::api::supabase::SupabaseApi;
/// let upsert_request = SupabaseUpsert {
///         ref_id: "your-project-ref".to_string(),
///         token: Some("your-supabase-token".to_string()),
///         keys: vec![
///             Key { name: "SECRET_NAME_1".to_string(), value: "SECRET_VALUE_1".to_string(), attributes: Default::default() },
///             Key { name: "SECRET_NAME_2".to_string(), value: "SECRET_VALUE_2".to_string(), attributes: Default::default() },
///         ],
///     };
///
///     let client = Client::new();
///     let response = upsert_request.fetch(&client).await?;
///
///     if response.status().is_success() {
///         println!("Successfully upserted secrets.");
///     } else {
///         println!("Failed to upsert secrets. Status: {:?}", response.status());
///     }
///
///     Ok(())
/// }
/// ```
#[derive(Serialize, Deserialize, Debug)]
pub struct SupabaseUpsert {
    pub ref_id: String,
    pub token: Option<String>,
    pub keys: Vec<Key>,
}

impl BearerToken for SupabaseUpsert {
    fn bearer_token(&self) -> Option<String> {
        self.token.clone()
    }
}

impl SupabaseApi for SupabaseUpsert {}

#[async_trait]
impl Fetch for SupabaseUpsert {
    /// Sends a POST request to the Supabase API to upsert the specified secrets.
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
            .post(&url)
            .bearer_auth(token)
            .json(&self.keys)
            .send()
            .await
            .map_err(FluxError::from_reqwest_error) // Convert reqwest::Error to FluxError
    }
}
