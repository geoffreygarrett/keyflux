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
pub struct RepositoryRuleRequiredStatusChecksParameters {
    /// Status checks that are required.
    #[serde(rename = "required_status_checks")]
    pub required_status_checks: Vec<crate::models::RepositoryRuleParamsStatusCheckConfiguration>,
    /// Whether pull requests targeting a matching branch must be tested with the latest code. This setting will not take effect unless at least one status check is enabled.
    #[serde(rename = "strict_required_status_checks_policy")]
    pub strict_required_status_checks_policy: bool,
}

impl RepositoryRuleRequiredStatusChecksParameters {
    pub fn new(required_status_checks: Vec<crate::models::RepositoryRuleParamsStatusCheckConfiguration>, strict_required_status_checks_policy: bool) -> RepositoryRuleRequiredStatusChecksParameters {
        RepositoryRuleRequiredStatusChecksParameters {
            required_status_checks,
            strict_required_status_checks_policy,
        }
    }
}


