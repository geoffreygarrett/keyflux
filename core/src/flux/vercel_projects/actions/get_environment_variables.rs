use log::debug;
use reqwest::Client;

use keyflux_common::prelude::*;
use crate::flux::vercel_projects::models::GetEnvironmentVariablesResponse;

pub(crate) async fn get_environment_variables(
    client: &Client,
    id_or_name: &str,
    token: &str,
    team_id: Option<&str>,
    slug: Option<&str>,
    git_branch: Option<&str>,
    decrypt: Option<&str>,
    source: Option<&str>,
) -> Result<GetEnvironmentVariablesResponse> {
    let mut url = format!("https://api.vercel.com/v9/projects/{}/env", id_or_name);

    let mut query_params = vec![];
    if let Some(team_id) = team_id {
        query_params.push(format!("teamId={}", team_id));
    }
    if let Some(slug) = slug {
        query_params.push(format!("slug={}", slug));
    }
    if let Some(git_branch) = git_branch {
        query_params.push(format!("gitBranch={}", git_branch));
    }
    if let Some(decrypt) = decrypt {
        query_params.push(format!("decrypt={}", decrypt));
    }
    if let Some(source) = source {
        query_params.push(format!("source={}", source));
    }
    if !query_params.is_empty() {
        url = format!("{}?{}", url, query_params.join("&"));
    }

    let response = client
        .get(&url)
        .bearer_auth(token)
        .send()
        .await
        .context(RequestSnafu { message: "Failed to send request".to_string() })?;

    debug!("get_environment_variables response: {:#?}", response);

    let parsed = response
        .json::<GetEnvironmentVariablesResponse>()
        .context(RequestJsonParseSnafu { message: "Failed to parse response body".to_string() })
        .await?;

    debug!("get_environment_variables parsed: {:#?}", parsed);

    Ok(parsed)
}
