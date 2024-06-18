use async_trait::async_trait;
use reqwest::{Client, Response};
use serde::{Serialize, Deserialize};
use crate::api::traits::{BearerToken, Fetch};
use crate::api::supabase::{SUPABASE_API_ENDPOINT_V1, SupabaseApi};
use crate::error::FluxError;

/// Represents a request to list secrets in a Supabase project.
///
/// This structure encapsulates the necessary parameters for making an API request to Supabase
/// to list all secrets in a specified project.
///
/// # Fields
///
/// * `ref_id` - The unique identifier or reference ID of the Supabase project.
/// * `token` - An optional authentication token for accessing the Supabase API. If not provided,
///             the `SUPABASE_TOKEN` environment variable will be used.
///
/// # Example
///
/// ```
/// use async_trait::async_trait;
/// use reqwest::Client;
/// use serde::{Deserialize, Serialize};
/// use keyflux::api::supabase::select::SupabaseSelect;
/// use keyflux::api::traits::Fetch;
/// use keyflux::error::FluxError;
///
///
/// #[tokio::main]
/// async fn main() -> Result<(), FluxError> {
/// let list_request = SupabaseSelect {
///         ref_id: "your-project-ref".to_string(),
///         token: Some("your-supabase-token".to_string()),
///     };
///
///     let client = Client::new();
///     let response = list_request.fetch(&client).await?;
///
///     if response.status().is_success() {
///         let secrets: Vec<SupabaseSelect> = response.json().await.unwrap();
///         for secret in secrets {
///             println!("Secret name: {}, Secret value: {}", secret.name, secret.value);
///         }
///     } else {
///         println!("Failed to list secrets. Status: {:?}", response.status());
///     }
///
///     Ok(())
/// }
/// ```
#[derive(Serialize, Deserialize, Debug)]
pub struct SupabaseSelect {
    pub ref_id: String,
    pub token: Option<String>,
}

#[derive(Serialize, Deserialize, Debug)]
pub struct SupabaseSecret {
    pub name: String,
    pub value: String,
}

impl BearerToken for SupabaseSelect {
    fn bearer_token(&self) -> Option<String> {
        self.token.clone()
    }
}


impl SupabaseApi for SupabaseSelect {}

#[async_trait]
impl Fetch for SupabaseSelect {
    /// Sends a GET request to the Supabase API to list the secrets.
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
        let url = format!("{}/projects/{}/secrets", SUPABASE_API_ENDPOINT_V1, self.ref_id);
        client.get(&url)
            .bearer_auth(token)
            .send()
            .await
            .map_err(FluxError::from_reqwest_error)
    }
}
