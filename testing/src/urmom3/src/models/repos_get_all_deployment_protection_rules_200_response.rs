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
pub struct ReposGetAllDeploymentProtectionRules200Response {
    /// The number of enabled custom deployment protection rules for this environment
    #[serde(rename = "total_count", skip_serializing_if = "Option::is_none")]
    pub total_count: Option<i32>,
    #[serde(rename = "custom_deployment_protection_rules", skip_serializing_if = "Option::is_none")]
    pub custom_deployment_protection_rules: Option<Vec<crate::models::DeploymentProtectionRule>>,
}

impl ReposGetAllDeploymentProtectionRules200Response {
    pub fn new() -> ReposGetAllDeploymentProtectionRules200Response {
        ReposGetAllDeploymentProtectionRules200Response {
            total_count: None,
            custom_deployment_protection_rules: None,
        }
    }
}


