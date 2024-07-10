use reqwest::Client;
use serde::Serialize;

use keyflux_common::prelude::*;

use crate::flux::supabase_secrets::models::Secret;

#[derive(Debug, Serialize)]
struct CreateSecretsPayload {
    secrets: Vec<Secret>,
}

pub async fn upsert_secrets(client: &Client, project_ref: &str, secrets: Vec<Secret>) -> Result<()> {
    let url = format!("https://api.supabase.com/v1/projects/{}/secrets", project_ref);
    let payload = CreateSecretsPayload { secrets };

    client
        .post(&url)
        .json(&payload)
        .send()
        .await
        .context(RequestSnafu { message: "Failed to send request".to_string() })?;

    Ok(())
}
