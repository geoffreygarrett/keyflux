use reqwest::Client;

use keyflux_common::prelude::*;

use crate::flux::supabase_secrets::models::PgsodiumConfig;

pub async fn get_pgsodium_config(client: &Client, project_ref: &str) -> Result<PgsodiumConfig> {
    let url = format!("https://api.supabase.com/v1/projects/{}/pgsodium", project_ref);

    let response = client
        .get(&url)
        .send()
        .await
        .context(RequestSnafu { message: "Failed to send request".to_string() })?
        .json::<PgsodiumConfig>()
        .context(JsonResponseSnafu { message: "Failed to parse response body".to_string() })
        .await?;

    Ok(response)
}
