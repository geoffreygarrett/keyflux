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
pub struct ActionsSetGithubActionsPermissionsOrganizationRequest {
    #[serde(rename = "enabled_repositories")]
    pub enabled_repositories: crate::models::EnabledRepositories,
    #[serde(rename = "allowed_actions", skip_serializing_if = "Option::is_none")]
    pub allowed_actions: Option<crate::models::AllowedActions>,
}

impl ActionsSetGithubActionsPermissionsOrganizationRequest {
    pub fn new(enabled_repositories: crate::models::EnabledRepositories) -> ActionsSetGithubActionsPermissionsOrganizationRequest {
        ActionsSetGithubActionsPermissionsOrganizationRequest {
            enabled_repositories,
            allowed_actions: None,
        }
    }
}


