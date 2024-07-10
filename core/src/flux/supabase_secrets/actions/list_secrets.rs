use reqwest::Client;
use keyflux_common::prelude::*;
use crate::flux::supabase_secrets::models::Secret;

pub async fn list_secrets(client: &Client, project_ref: &str, token: &str) -> Result<Vec<Secret>> {
    let url = format!("https://api.supabase.com/v1/projects/{}/secrets", project_ref);

    let response = client
        .get(&url)
        .bearer_auth(token)
        .send()
        .await
        .context(RequestSnafu { message: "Failed to send request".to_string() })?;

    if response.status().is_success() {
        let secrets = response
            .json::<Vec<Secret>>()
            .await
            .context(JsonResponseSnafu { message: "Failed to parse response body".to_string() })?;
        Ok(secrets)
    } else {
        let status = response.status();
        let text = response.text().await.unwrap_or_else(|_| "Failed to retrieve error text".to_string());
        Err(Error::ApiError { message: format!("API request failed with status {}: {}", status, text) })
    }
}
