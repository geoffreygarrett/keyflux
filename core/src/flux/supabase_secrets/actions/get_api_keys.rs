use reqwest::Client;

use keyflux_common::prelude::*;

use crate::flux::supabase_secrets::models::ApiKey;

pub async fn get_api_keys(client: &Client, project_ref: &str) -> Result<Vec<ApiKey>> {
    let url = format!("https://api.supabase.com/v1/projects/{}/api-keys", project_ref);

    let response = client
        .get(&url)
        .send()
        .await
        .context(RequestSnafu { message: "Failed to send request".to_string() })?
        .json::<Vec<ApiKey>>()
        .context(JsonResponseSnafu { message: "Failed to parse response body".to_string() })
        .await?;

    Ok(response)
}
