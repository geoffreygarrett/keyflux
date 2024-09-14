/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct ReposCreateDeploymentRequest {
    /// The ref to deploy. This can be a branch, tag, or SHA.
    #[serde(rename = "ref")]
    pub r#ref: String,
    /// Specifies a task to execute (e.g., `deploy` or `deploy:migrations`).
    #[serde(rename = "task", skip_serializing_if = "Option::is_none")]
    pub task: Option<String>,
    /// Attempts to automatically merge the default branch into the requested ref, if it's behind the default branch.
    #[serde(rename = "auto_merge", skip_serializing_if = "Option::is_none")]
    pub auto_merge: Option<bool>,
    /// The [status](https://docs.github.com/rest/commits/statuses) contexts to verify against commit status checks. If you omit this parameter, GitHub verifies all unique contexts before creating a deployment. To bypass checking entirely, pass an empty array. Defaults to all unique contexts.
    #[serde(rename = "required_contexts", skip_serializing_if = "Option::is_none")]
    pub required_contexts: Option<Vec<String>>,
    #[serde(rename = "payload", skip_serializing_if = "Option::is_none")]
    pub payload: Option<Box<crate::models::ReposCreateDeploymentRequestPayload>>,
    /// Name for the target deployment environment (e.g., `production`, `staging`, `qa`).
    #[serde(rename = "environment", skip_serializing_if = "Option::is_none")]
    pub environment: Option<String>,
    /// Short description of the deployment.
    #[serde(rename = "description", skip_serializing_if = "Option::is_none")]
    pub description: Option<String>,
    /// Specifies if the given environment is specific to the deployment and will no longer exist at some point in the future. Default: `false`
    #[serde(rename = "transient_environment", skip_serializing_if = "Option::is_none")]
    pub transient_environment: Option<bool>,
    /// Specifies if the given environment is one that end-users directly interact with. Default: `true` when `environment` is `production` and `false` otherwise.
    #[serde(rename = "production_environment", skip_serializing_if = "Option::is_none")]
    pub production_environment: Option<bool>,
}

impl ReposCreateDeploymentRequest {
    pub fn new(r#ref: String) -> ReposCreateDeploymentRequest {
        ReposCreateDeploymentRequest {
            r#ref,
            task: None,
            auto_merge: None,
            required_contexts: None,
            payload: None,
            environment: None,
            description: None,
            transient_environment: None,
            production_environment: None,
        }
    }
}

