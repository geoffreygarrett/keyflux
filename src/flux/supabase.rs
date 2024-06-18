use async_trait::async_trait;
use reqwest::Client;
use log::{info, error, warn};
use serde::{Deserialize, Serialize};

use crate::error::FluxError;
use crate::traits::Flux;
use crate::key::{Key};
use crate::api::supabase::upsert::SupabaseUpsert;
// use crate::api::supabase::delete::SupabaseDelete;
use crate::api::supabase::select::SupabaseSelect;
use crate::api::traits::Fetch;

/// Represents a Supabase Flux for managing environment secrets.
///
/// This structure encapsulates the necessary parameters for making API requests to Supabase
/// to list, upsert, and manage secrets in a specified project.
///
/// # Fields
///
/// * `ref_id` - The unique identifier or reference ID of the Supabase project.
/// * `token` - An optional authentication token for accessing the Supabase API. If not provided,
///             the `SUPABASE_ACCESS_TOKEN` environment variable will be used.
///
/// # Example
///
/// ```rust
/// use async_trait::async_trait;
/// use reqwest::Client;
/// use serde::{Deserialize, Serialize};
/// use keyflux::flux::supabase::SupabaseFlux;
/// use keyflux::traits::Flux;
/// use keyflux::error::FluxError;
/// use keyflux::key::Key;
///
/// #[tokio::main]
/// async fn main() -> Result<(), FluxError> {
///     let flux = SupabaseFlux {
///         ref_id: "your-project-ref".to_string(),
///         token: Some("your-supabase-token".to_string()),
///     };
///
///     flux.initialize().await?;
///
///     let key = Key {
///         name: "SECRET_NAME".to_string(),
///         value: "SECRET_VALUE".to_string(),
///         attributes: Default::default(),
///     };
///
///     flux.single(&key).await?;
///
///     Ok(())
/// }
/// ```
#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct SupabaseFlux {
    #[serde(rename = "ref")]
    pub ref_id: String,
    pub token: Option<String>,
}

#[derive(Serialize, Deserialize, Debug)]
struct TempSecret {
    name: String,
    value: String,
}


#[async_trait]
impl Flux for SupabaseFlux {
    /// Initializes the Supabase Flux by listing existing secrets in the project.
    async fn initialize(&self) -> Result<(), FluxError> {
        let list_request = SupabaseSelect {
            ref_id: self.ref_id.clone(),
            token: self.token.clone(),
        };

        let client = Client::new();
        match list_request.fetch(&client).await {
            Ok(response) => {
                if response.status().is_success() {
                    let secrets: Vec<TempSecret> = response.json().await.map_err(|e| {
                        error!("Failed to deserialize Supabase secrets JSON: {}", e);
                        FluxError::FluxFailed("Failed to deserialize Supabase secrets JSON".to_string())
                    })?;
                    for secret in &secrets {
                        info!("Found secret - name: {}, value: {}", secret.name, secret.value);
                    }
                    Ok(())
                } else {
                    error!("Failed to list Supabase secrets: {:?}", response.status());
                    Err(FluxError::FluxFailed("Failed to list Supabase secrets".to_string()))
                }
            }
            Err(e) => {
                error!("Failed to fetch existing secrets: {}", e);
                Err(FluxError::FluxFailed(format!("Failed to fetch existing secrets: {}", e)))
            }
        }
    }

    /// Finalizes the Supabase Flux. Currently, no specific finalization logic is needed.
    async fn finalize(&self) -> Result<(), FluxError> {
        Ok(())
    }

    /// Processes a single key by calling the `batch` method with a single-element array.
    async fn single(&self, key: &Key) -> Result<(), FluxError> {
        self.batch(&[key.clone()]).await
    }

    /// Processes a batch of keys by upserting them as secrets in the Supabase project.
    async fn batch(&self, keys: &[Key]) -> Result<(), FluxError> {
        let client = Client::new();
        let filtered_keys: Vec<Key> = keys.iter()
            .filter_map(|key| {
                if key.name.starts_with("SUPABASE_") {
                    warn!("Secret name '{}' is not allowed to start with 'SUPABASE_'. Skipping this key.", key.name);
                    None
                } else {
                    Some(key.clone())
                }
            })
            .collect();

        if filtered_keys.is_empty() {
            warn!("No valid keys provided for upserting secrets.");
            return Err(FluxError::FluxFailed("No valid keys provided for upserting secrets.".to_string()));
        }

        let upsert_request = SupabaseUpsert {
            ref_id: self.ref_id.clone(),
            token: self.token.clone(),
            keys: filtered_keys,
        };

        match upsert_request.fetch(&client).await {
            Ok(response) => {
                if response.status().is_success() {
                    info!("Successfully set Supabase secrets.");
                    Ok(())
                } else {
                    let status = response.status();
                    let text = response.text().await.unwrap_or_default();
                    error!("Failed to set Supabase secrets: {} - {}", status, text);
                    Err(FluxError::FluxFailed("Failed to set Supabase secrets".to_string()))
                }
            }
            Err(e) => {
                error!("Failed to upsert secrets: {}", e);
                Err(FluxError::FluxFailed(format!("Failed to upsert secrets: {}", e)))
            }
        }
    }

    /// Checks the status of a single key. Currently, this is not implemented and returns `None`.
    async fn check(&self, _key: &Key) -> Result<Option<String>, FluxError> {
        Ok(None)
    }

    /// Reverts a single key. Currently, this is not implemented.
    async fn revert(&self, _key: &Key) -> Result<(), FluxError> {
        Ok(())
    }

    /// Calculates the difference for a single key. Currently, this is not implemented and returns an error.
    async fn diff(&self, _key: &Key) -> Result<String, FluxError> {
        Err(FluxError::NotImplementedError("diff".into()))
    }
}
