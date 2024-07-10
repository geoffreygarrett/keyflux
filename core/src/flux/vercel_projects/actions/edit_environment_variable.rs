use log::debug;
use reqwest::Client;
use serde::{Deserialize, Serialize};

use keyflux_common::prelude::*;

// Assuming these models are defined elsewhere in your project
use crate::flux::vercel_projects::models::{EditEnvironmentVariableRequest, EnvironmentVariable};

pub(crate) async fn edit_environment_variable(
    client: &Client,
    id_or_name: &str,
    id: &str,
    token: &str,
    edit_request: EditEnvironmentVariableRequest,
) -> Result<EnvironmentVariable> {
    let url = format!("https://api.vercel.com/v9/projects/{}/env/{}", id_or_name, id);
    let response = client
        .patch(&url)
        .bearer_auth(token)
        .json(&edit_request)
        .send()
        .await
        .context(RequestSnafu { message: "Failed to send request".to_string() })?;

    debug!("edit_environment_variable response: {:#?}", response);

    let parsed_response = response
        .json::<EnvironmentVariable>()
        .context(RequestJsonParseSnafu { message: "Failed to parse response body".to_string() })
        .await?;

    debug!("edit_environment_variable parsed_response: {:#?}", parsed_response);

    Ok(parsed_response)
}
