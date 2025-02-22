/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */


use reqwest;

use crate::apis::ResponseContent;
use super::{Error, configuration};


/// struct for typed errors of method [`security_advisories_slash_create_fork`]
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum SecurityAdvisoriesSlashCreateForkError {
    Status400(crate::models::BasicError),
    Status422(crate::models::ValidationError),
    Status403(crate::models::BasicError),
    Status404(crate::models::BasicError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method [`security_advisories_slash_create_private_vulnerability_report`]
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum SecurityAdvisoriesSlashCreatePrivateVulnerabilityReportError {
    Status403(crate::models::BasicError),
    Status404(crate::models::BasicError),
    Status422(crate::models::ValidationError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method [`security_advisories_slash_create_repository_advisory`]
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum SecurityAdvisoriesSlashCreateRepositoryAdvisoryError {
    Status403(crate::models::BasicError),
    Status404(crate::models::BasicError),
    Status422(crate::models::ValidationError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method [`security_advisories_slash_create_repository_advisory_cve_request`]
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum SecurityAdvisoriesSlashCreateRepositoryAdvisoryCveRequestError {
    Status400(crate::models::BasicError),
    Status403(crate::models::BasicError),
    Status404(crate::models::BasicError),
    Status422(crate::models::ValidationError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method [`security_advisories_slash_get_global_advisory`]
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum SecurityAdvisoriesSlashGetGlobalAdvisoryError {
    Status404(crate::models::BasicError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method [`security_advisories_slash_get_repository_advisory`]
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum SecurityAdvisoriesSlashGetRepositoryAdvisoryError {
    Status403(crate::models::BasicError),
    Status404(crate::models::BasicError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method [`security_advisories_slash_list_global_advisories`]
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum SecurityAdvisoriesSlashListGlobalAdvisoriesError {
    Status429(crate::models::BasicError),
    Status422(crate::models::ValidationErrorSimple),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method [`security_advisories_slash_list_org_repository_advisories`]
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum SecurityAdvisoriesSlashListOrgRepositoryAdvisoriesError {
    Status400(crate::models::BasicError),
    Status404(crate::models::BasicError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method [`security_advisories_slash_list_repository_advisories`]
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum SecurityAdvisoriesSlashListRepositoryAdvisoriesError {
    Status400(crate::models::BasicError),
    Status404(crate::models::BasicError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method [`security_advisories_slash_update_repository_advisory`]
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum SecurityAdvisoriesSlashUpdateRepositoryAdvisoryError {
    Status403(crate::models::BasicError),
    Status404(crate::models::BasicError),
    Status422(crate::models::ValidationError),
    UnknownValue(serde_json::Value),
}


/// Create a temporary private fork to collaborate on fixing a security vulnerability in your repository.  **Note**: Forking a repository happens asynchronously. You may have to wait up to 5 minutes before you can access the fork.
pub async fn security_advisories_slash_create_fork(configuration: &configuration::Configuration, owner: &str, repo: &str, ghsa_id: &str) -> Result<crate::models::FullRepository, Error<SecurityAdvisoriesSlashCreateForkError>> {
    let local_var_configuration = configuration;

    let local_var_client = &local_var_configuration.client;

    let local_var_uri_str = format!("{}/repos/{owner}/{repo}/security-advisories/{ghsa_id}/forks", local_var_configuration.base_path, owner=crate::apis::urlencode(owner), repo=crate::apis::urlencode(repo), ghsa_id=crate::apis::urlencode(ghsa_id));
    let mut local_var_req_builder = local_var_client.request(reqwest::Method::POST, local_var_uri_str.as_str());

    if let Some(ref local_var_user_agent) = local_var_configuration.user_agent {
        local_var_req_builder = local_var_req_builder.header(reqwest::header::USER_AGENT, local_var_user_agent.clone());
    }

    let local_var_req = local_var_req_builder.build()?;
    let local_var_resp = local_var_client.execute(local_var_req).await?;

    let local_var_status = local_var_resp.status();
    let local_var_content = local_var_resp.text().await?;

    if !local_var_status.is_client_error() && !local_var_status.is_server_error() {
        serde_json::from_str(&local_var_content).map_err(Error::from)
    } else {
        let local_var_entity: Option<SecurityAdvisoriesSlashCreateForkError> = serde_json::from_str(&local_var_content).ok();
        let local_var_error = ResponseContent { status: local_var_status, content: local_var_content, entity: local_var_entity };
        Err(Error::ResponseError(local_var_error))
    }
}

/// Report a security vulnerability to the maintainers of the repository. See \"[Privately reporting a security vulnerability](https://docs.github.com/code-security/security-advisories/guidance-on-reporting-and-writing/privately-reporting-a-security-vulnerability)\" for more information about private vulnerability reporting.
pub async fn security_advisories_slash_create_private_vulnerability_report(configuration: &configuration::Configuration, owner: &str, repo: &str, private_vulnerability_report_create: crate::models::PrivateVulnerabilityReportCreate) -> Result<crate::models::RepositoryAdvisory, Error<SecurityAdvisoriesSlashCreatePrivateVulnerabilityReportError>> {
    let local_var_configuration = configuration;

    let local_var_client = &local_var_configuration.client;

    let local_var_uri_str = format!("{}/repos/{owner}/{repo}/security-advisories/reports", local_var_configuration.base_path, owner=crate::apis::urlencode(owner), repo=crate::apis::urlencode(repo));
    let mut local_var_req_builder = local_var_client.request(reqwest::Method::POST, local_var_uri_str.as_str());

    if let Some(ref local_var_user_agent) = local_var_configuration.user_agent {
        local_var_req_builder = local_var_req_builder.header(reqwest::header::USER_AGENT, local_var_user_agent.clone());
    }
    local_var_req_builder = local_var_req_builder.json(&private_vulnerability_report_create);

    let local_var_req = local_var_req_builder.build()?;
    let local_var_resp = local_var_client.execute(local_var_req).await?;

    let local_var_status = local_var_resp.status();
    let local_var_content = local_var_resp.text().await?;

    if !local_var_status.is_client_error() && !local_var_status.is_server_error() {
        serde_json::from_str(&local_var_content).map_err(Error::from)
    } else {
        let local_var_entity: Option<SecurityAdvisoriesSlashCreatePrivateVulnerabilityReportError> = serde_json::from_str(&local_var_content).ok();
        let local_var_error = ResponseContent { status: local_var_status, content: local_var_content, entity: local_var_entity };
        Err(Error::ResponseError(local_var_error))
    }
}

/// Creates a new repository security advisory.  In order to create a draft repository security advisory, the authenticated user must be a security manager or administrator of that repository.  OAuth app tokens and personal access tokens (classic) need the `repo` or `repository_advisories:write` scope to use this endpoint.
pub async fn security_advisories_slash_create_repository_advisory(configuration: &configuration::Configuration, owner: &str, repo: &str, repository_advisory_create: crate::models::RepositoryAdvisoryCreate) -> Result<crate::models::RepositoryAdvisory, Error<SecurityAdvisoriesSlashCreateRepositoryAdvisoryError>> {
    let local_var_configuration = configuration;

    let local_var_client = &local_var_configuration.client;

    let local_var_uri_str = format!("{}/repos/{owner}/{repo}/security-advisories", local_var_configuration.base_path, owner=crate::apis::urlencode(owner), repo=crate::apis::urlencode(repo));
    let mut local_var_req_builder = local_var_client.request(reqwest::Method::POST, local_var_uri_str.as_str());

    if let Some(ref local_var_user_agent) = local_var_configuration.user_agent {
        local_var_req_builder = local_var_req_builder.header(reqwest::header::USER_AGENT, local_var_user_agent.clone());
    }
    local_var_req_builder = local_var_req_builder.json(&repository_advisory_create);

    let local_var_req = local_var_req_builder.build()?;
    let local_var_resp = local_var_client.execute(local_var_req).await?;

    let local_var_status = local_var_resp.status();
    let local_var_content = local_var_resp.text().await?;

    if !local_var_status.is_client_error() && !local_var_status.is_server_error() {
        serde_json::from_str(&local_var_content).map_err(Error::from)
    } else {
        let local_var_entity: Option<SecurityAdvisoriesSlashCreateRepositoryAdvisoryError> = serde_json::from_str(&local_var_content).ok();
        let local_var_error = ResponseContent { status: local_var_status, content: local_var_content, entity: local_var_entity };
        Err(Error::ResponseError(local_var_error))
    }
}

/// If you want a CVE identification number for the security vulnerability in your project, and don't already have one, you can request a CVE identification number from GitHub. For more information see \"[Requesting a CVE identification number](https://docs.github.com/code-security/security-advisories/repository-security-advisories/publishing-a-repository-security-advisory#requesting-a-cve-identification-number-optional).\"  You may request a CVE for public repositories, but cannot do so for private repositories.  In order to request a CVE for a repository security advisory, the authenticated user must be a security manager or administrator of that repository.  OAuth app tokens and personal access tokens (classic) need the `repo` or `repository_advisories:write` scope to use this endpoint.
pub async fn security_advisories_slash_create_repository_advisory_cve_request(configuration: &configuration::Configuration, owner: &str, repo: &str, ghsa_id: &str) -> Result<serde_json::Value, Error<SecurityAdvisoriesSlashCreateRepositoryAdvisoryCveRequestError>> {
    let local_var_configuration = configuration;

    let local_var_client = &local_var_configuration.client;

    let local_var_uri_str = format!("{}/repos/{owner}/{repo}/security-advisories/{ghsa_id}/cve", local_var_configuration.base_path, owner=crate::apis::urlencode(owner), repo=crate::apis::urlencode(repo), ghsa_id=crate::apis::urlencode(ghsa_id));
    let mut local_var_req_builder = local_var_client.request(reqwest::Method::POST, local_var_uri_str.as_str());

    if let Some(ref local_var_user_agent) = local_var_configuration.user_agent {
        local_var_req_builder = local_var_req_builder.header(reqwest::header::USER_AGENT, local_var_user_agent.clone());
    }

    let local_var_req = local_var_req_builder.build()?;
    let local_var_resp = local_var_client.execute(local_var_req).await?;

    let local_var_status = local_var_resp.status();
    let local_var_content = local_var_resp.text().await?;

    if !local_var_status.is_client_error() && !local_var_status.is_server_error() {
        serde_json::from_str(&local_var_content).map_err(Error::from)
    } else {
        let local_var_entity: Option<SecurityAdvisoriesSlashCreateRepositoryAdvisoryCveRequestError> = serde_json::from_str(&local_var_content).ok();
        let local_var_error = ResponseContent { status: local_var_status, content: local_var_content, entity: local_var_entity };
        Err(Error::ResponseError(local_var_error))
    }
}

/// Gets a global security advisory using its GitHub Security Advisory (GHSA) identifier.
pub async fn security_advisories_slash_get_global_advisory(configuration: &configuration::Configuration, ghsa_id: &str) -> Result<crate::models::GlobalAdvisory, Error<SecurityAdvisoriesSlashGetGlobalAdvisoryError>> {
    let local_var_configuration = configuration;

    let local_var_client = &local_var_configuration.client;

    let local_var_uri_str = format!("{}/advisories/{ghsa_id}", local_var_configuration.base_path, ghsa_id=crate::apis::urlencode(ghsa_id));
    let mut local_var_req_builder = local_var_client.request(reqwest::Method::GET, local_var_uri_str.as_str());

    if let Some(ref local_var_user_agent) = local_var_configuration.user_agent {
        local_var_req_builder = local_var_req_builder.header(reqwest::header::USER_AGENT, local_var_user_agent.clone());
    }

    let local_var_req = local_var_req_builder.build()?;
    let local_var_resp = local_var_client.execute(local_var_req).await?;

    let local_var_status = local_var_resp.status();
    let local_var_content = local_var_resp.text().await?;

    if !local_var_status.is_client_error() && !local_var_status.is_server_error() {
        serde_json::from_str(&local_var_content).map_err(Error::from)
    } else {
        let local_var_entity: Option<SecurityAdvisoriesSlashGetGlobalAdvisoryError> = serde_json::from_str(&local_var_content).ok();
        let local_var_error = ResponseContent { status: local_var_status, content: local_var_content, entity: local_var_entity };
        Err(Error::ResponseError(local_var_error))
    }
}

/// Get a repository security advisory using its GitHub Security Advisory (GHSA) identifier.  Anyone can access any published security advisory on a public repository.  The authenticated user can access an unpublished security advisory from a repository if they are a security manager or administrator of that repository, or if they are a collaborator on the security advisory.  OAuth app tokens and personal access tokens (classic) need the `repo` or `repository_advisories:read` scope to to get a published security advisory in a private repository, or any unpublished security advisory that the authenticated user has access to.
pub async fn security_advisories_slash_get_repository_advisory(configuration: &configuration::Configuration, owner: &str, repo: &str, ghsa_id: &str) -> Result<crate::models::RepositoryAdvisory, Error<SecurityAdvisoriesSlashGetRepositoryAdvisoryError>> {
    let local_var_configuration = configuration;

    let local_var_client = &local_var_configuration.client;

    let local_var_uri_str = format!("{}/repos/{owner}/{repo}/security-advisories/{ghsa_id}", local_var_configuration.base_path, owner=crate::apis::urlencode(owner), repo=crate::apis::urlencode(repo), ghsa_id=crate::apis::urlencode(ghsa_id));
    let mut local_var_req_builder = local_var_client.request(reqwest::Method::GET, local_var_uri_str.as_str());

    if let Some(ref local_var_user_agent) = local_var_configuration.user_agent {
        local_var_req_builder = local_var_req_builder.header(reqwest::header::USER_AGENT, local_var_user_agent.clone());
    }

    let local_var_req = local_var_req_builder.build()?;
    let local_var_resp = local_var_client.execute(local_var_req).await?;

    let local_var_status = local_var_resp.status();
    let local_var_content = local_var_resp.text().await?;

    if !local_var_status.is_client_error() && !local_var_status.is_server_error() {
        serde_json::from_str(&local_var_content).map_err(Error::from)
    } else {
        let local_var_entity: Option<SecurityAdvisoriesSlashGetRepositoryAdvisoryError> = serde_json::from_str(&local_var_content).ok();
        let local_var_error = ResponseContent { status: local_var_status, content: local_var_content, entity: local_var_entity };
        Err(Error::ResponseError(local_var_error))
    }
}

/// Lists all global security advisories that match the specified parameters. If no other parameters are defined, the request will return only GitHub-reviewed advisories that are not malware.  By default, all responses will exclude advisories for malware, because malware are not standard vulnerabilities. To list advisories for malware, you must include the `type` parameter in your request, with the value `malware`. For more information about the different types of security advisories, see \"[About the GitHub Advisory database](https://docs.github.com/code-security/security-advisories/global-security-advisories/about-the-github-advisory-database#about-types-of-security-advisories).\"
pub async fn security_advisories_slash_list_global_advisories(configuration: &configuration::Configuration, ghsa_id: Option<&str>, r#type: Option<&str>, cve_id: Option<&str>, ecosystem: Option<SecurityAdvisoryEcosystems>, severity: Option<&str>, cwes: Option<SecurityAdvisoriesListGlobalAdvisoriesCwesParameter>, is_withdrawn: Option<bool>, affects: Option<SecurityAdvisoriesListGlobalAdvisoriesAffectsParameter>, published: Option<&str>, updated: Option<&str>, modified: Option<&str>, before: Option<&str>, after: Option<&str>, direction: Option<&str>, per_page: Option<i32>, sort: Option<&str>) -> Result<Vec<crate::models::GlobalAdvisory>, Error<SecurityAdvisoriesSlashListGlobalAdvisoriesError>> {
    let local_var_configuration = configuration;

    let local_var_client = &local_var_configuration.client;

    let local_var_uri_str = format!("{}/advisories", local_var_configuration.base_path);
    let mut local_var_req_builder = local_var_client.request(reqwest::Method::GET, local_var_uri_str.as_str());

    if let Some(ref local_var_str) = ghsa_id {
        local_var_req_builder = local_var_req_builder.query(&[("ghsa_id", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = r#type {
        local_var_req_builder = local_var_req_builder.query(&[("type", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = cve_id {
        local_var_req_builder = local_var_req_builder.query(&[("cve_id", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = ecosystem {
        local_var_req_builder = local_var_req_builder.query(&[("ecosystem", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = severity {
        local_var_req_builder = local_var_req_builder.query(&[("severity", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = cwes {
        local_var_req_builder = local_var_req_builder.query(&[("cwes", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = is_withdrawn {
        local_var_req_builder = local_var_req_builder.query(&[("is_withdrawn", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = affects {
        local_var_req_builder = local_var_req_builder.query(&[("affects", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = published {
        local_var_req_builder = local_var_req_builder.query(&[("published", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = updated {
        local_var_req_builder = local_var_req_builder.query(&[("updated", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = modified {
        local_var_req_builder = local_var_req_builder.query(&[("modified", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = before {
        local_var_req_builder = local_var_req_builder.query(&[("before", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = after {
        local_var_req_builder = local_var_req_builder.query(&[("after", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = direction {
        local_var_req_builder = local_var_req_builder.query(&[("direction", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = per_page {
        local_var_req_builder = local_var_req_builder.query(&[("per_page", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = sort {
        local_var_req_builder = local_var_req_builder.query(&[("sort", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_user_agent) = local_var_configuration.user_agent {
        local_var_req_builder = local_var_req_builder.header(reqwest::header::USER_AGENT, local_var_user_agent.clone());
    }

    let local_var_req = local_var_req_builder.build()?;
    let local_var_resp = local_var_client.execute(local_var_req).await?;

    let local_var_status = local_var_resp.status();
    let local_var_content = local_var_resp.text().await?;

    if !local_var_status.is_client_error() && !local_var_status.is_server_error() {
        serde_json::from_str(&local_var_content).map_err(Error::from)
    } else {
        let local_var_entity: Option<SecurityAdvisoriesSlashListGlobalAdvisoriesError> = serde_json::from_str(&local_var_content).ok();
        let local_var_error = ResponseContent { status: local_var_status, content: local_var_content, entity: local_var_entity };
        Err(Error::ResponseError(local_var_error))
    }
}

/// Lists repository security advisories for an organization.  The authenticated user must be an owner or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` or `repository_advisories:write` scope to use this endpoint.
pub async fn security_advisories_slash_list_org_repository_advisories(configuration: &configuration::Configuration, org: &str, direction: Option<&str>, sort: Option<&str>, before: Option<&str>, after: Option<&str>, per_page: Option<i32>, state: Option<&str>) -> Result<Vec<crate::models::RepositoryAdvisory>, Error<SecurityAdvisoriesSlashListOrgRepositoryAdvisoriesError>> {
    let local_var_configuration = configuration;

    let local_var_client = &local_var_configuration.client;

    let local_var_uri_str = format!("{}/orgs/{org}/security-advisories", local_var_configuration.base_path, org=crate::apis::urlencode(org));
    let mut local_var_req_builder = local_var_client.request(reqwest::Method::GET, local_var_uri_str.as_str());

    if let Some(ref local_var_str) = direction {
        local_var_req_builder = local_var_req_builder.query(&[("direction", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = sort {
        local_var_req_builder = local_var_req_builder.query(&[("sort", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = before {
        local_var_req_builder = local_var_req_builder.query(&[("before", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = after {
        local_var_req_builder = local_var_req_builder.query(&[("after", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = per_page {
        local_var_req_builder = local_var_req_builder.query(&[("per_page", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = state {
        local_var_req_builder = local_var_req_builder.query(&[("state", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_user_agent) = local_var_configuration.user_agent {
        local_var_req_builder = local_var_req_builder.header(reqwest::header::USER_AGENT, local_var_user_agent.clone());
    }

    let local_var_req = local_var_req_builder.build()?;
    let local_var_resp = local_var_client.execute(local_var_req).await?;

    let local_var_status = local_var_resp.status();
    let local_var_content = local_var_resp.text().await?;

    if !local_var_status.is_client_error() && !local_var_status.is_server_error() {
        serde_json::from_str(&local_var_content).map_err(Error::from)
    } else {
        let local_var_entity: Option<SecurityAdvisoriesSlashListOrgRepositoryAdvisoriesError> = serde_json::from_str(&local_var_content).ok();
        let local_var_error = ResponseContent { status: local_var_status, content: local_var_content, entity: local_var_entity };
        Err(Error::ResponseError(local_var_error))
    }
}

/// Lists security advisories in a repository.  The authenticated user can access unpublished security advisories from a repository if they are a security manager or administrator of that repository, or if they are a collaborator on any security advisory.  OAuth app tokens and personal access tokens (classic) need the `repo` or `repository_advisories:read` scope to to get a published security advisory in a private repository, or any unpublished security advisory that the authenticated user has access to.
pub async fn security_advisories_slash_list_repository_advisories(configuration: &configuration::Configuration, owner: &str, repo: &str, direction: Option<&str>, sort: Option<&str>, before: Option<&str>, after: Option<&str>, per_page: Option<i32>, state: Option<&str>) -> Result<Vec<crate::models::RepositoryAdvisory>, Error<SecurityAdvisoriesSlashListRepositoryAdvisoriesError>> {
    let local_var_configuration = configuration;

    let local_var_client = &local_var_configuration.client;

    let local_var_uri_str = format!("{}/repos/{owner}/{repo}/security-advisories", local_var_configuration.base_path, owner=crate::apis::urlencode(owner), repo=crate::apis::urlencode(repo));
    let mut local_var_req_builder = local_var_client.request(reqwest::Method::GET, local_var_uri_str.as_str());

    if let Some(ref local_var_str) = direction {
        local_var_req_builder = local_var_req_builder.query(&[("direction", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = sort {
        local_var_req_builder = local_var_req_builder.query(&[("sort", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = before {
        local_var_req_builder = local_var_req_builder.query(&[("before", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = after {
        local_var_req_builder = local_var_req_builder.query(&[("after", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = per_page {
        local_var_req_builder = local_var_req_builder.query(&[("per_page", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_str) = state {
        local_var_req_builder = local_var_req_builder.query(&[("state", &local_var_str.to_string())]);
    }
    if let Some(ref local_var_user_agent) = local_var_configuration.user_agent {
        local_var_req_builder = local_var_req_builder.header(reqwest::header::USER_AGENT, local_var_user_agent.clone());
    }

    let local_var_req = local_var_req_builder.build()?;
    let local_var_resp = local_var_client.execute(local_var_req).await?;

    let local_var_status = local_var_resp.status();
    let local_var_content = local_var_resp.text().await?;

    if !local_var_status.is_client_error() && !local_var_status.is_server_error() {
        serde_json::from_str(&local_var_content).map_err(Error::from)
    } else {
        let local_var_entity: Option<SecurityAdvisoriesSlashListRepositoryAdvisoriesError> = serde_json::from_str(&local_var_content).ok();
        let local_var_error = ResponseContent { status: local_var_status, content: local_var_content, entity: local_var_entity };
        Err(Error::ResponseError(local_var_error))
    }
}

/// Update a repository security advisory using its GitHub Security Advisory (GHSA) identifier.  In order to update any security advisory, the authenticated user must be a security manager or administrator of that repository, or a collaborator on the repository security advisory.  OAuth app tokens and personal access tokens (classic) need the `repo` or `repository_advisories:write` scope to use this endpoint.
pub async fn security_advisories_slash_update_repository_advisory(configuration: &configuration::Configuration, owner: &str, repo: &str, ghsa_id: &str, repository_advisory_update: crate::models::RepositoryAdvisoryUpdate) -> Result<crate::models::RepositoryAdvisory, Error<SecurityAdvisoriesSlashUpdateRepositoryAdvisoryError>> {
    let local_var_configuration = configuration;

    let local_var_client = &local_var_configuration.client;

    let local_var_uri_str = format!("{}/repos/{owner}/{repo}/security-advisories/{ghsa_id}", local_var_configuration.base_path, owner=crate::apis::urlencode(owner), repo=crate::apis::urlencode(repo), ghsa_id=crate::apis::urlencode(ghsa_id));
    let mut local_var_req_builder = local_var_client.request(reqwest::Method::PATCH, local_var_uri_str.as_str());

    if let Some(ref local_var_user_agent) = local_var_configuration.user_agent {
        local_var_req_builder = local_var_req_builder.header(reqwest::header::USER_AGENT, local_var_user_agent.clone());
    }
    local_var_req_builder = local_var_req_builder.json(&repository_advisory_update);

    let local_var_req = local_var_req_builder.build()?;
    let local_var_resp = local_var_client.execute(local_var_req).await?;

    let local_var_status = local_var_resp.status();
    let local_var_content = local_var_resp.text().await?;

    if !local_var_status.is_client_error() && !local_var_status.is_server_error() {
        serde_json::from_str(&local_var_content).map_err(Error::from)
    } else {
        let local_var_entity: Option<SecurityAdvisoriesSlashUpdateRepositoryAdvisoryError> = serde_json::from_str(&local_var_content).ok();
        let local_var_error = ResponseContent { status: local_var_status, content: local_var_content, entity: local_var_entity };
        Err(Error::ResponseError(local_var_error))
    }
}

