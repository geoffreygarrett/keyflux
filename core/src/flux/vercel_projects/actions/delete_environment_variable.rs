use log::debug;
use reqwest::Client;
use serde::{Deserialize, Serialize};

use keyflux_common::prelude::*;

// Assuming these models are defined elsewhere in your project
use crate::flux::vercel_projects::models::{DeleteEnvironmentVariableErrorResponse};

pub(crate) async fn delete_environment_variable(
    client: &Client,
    id_or_name: &str,
    id: &str,
    token: &str,
) -> Result<DeleteEnvironmentVariableErrorResponse> {
    let url = format!("https://api.vercel.com/v9/projects/{}/env/{}", id_or_name, id);
    let response = client
        .delete(&url)
        .bearer_auth(token)
        .send()
        .await
        .context(RequestSnafu { message: "Failed to send request".to_string() })?;

    debug!("delete_environment_variable response: {:#?}", response);

    let parsed = response
        .json::<DeleteEnvironmentVariableErrorResponse>()
        .await
        .context(TextParseSnafu { message: "Failed to parse response body".to_string() })?;

    Ok(parsed)
}
