use reqwest::Client;

use keyflux_common::prelude::*;

use crate::flux::supabase_secrets::models::DeletePayload;

pub async fn delete_secrets(client: &Client, project_ref: &str, names: Vec<String>) -> Result<()> {
    let url = format!("https://api.supabase.com/v1/projects/{}/secrets", project_ref);
    let payload = DeletePayload { names };

    client
        .delete(&url)
        .json(&payload)
        .send()
        .context(RequestSnafu { message: "Failed to send request".to_string() })
        .await?;

    Ok(())
}
