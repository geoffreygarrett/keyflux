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
pub struct ChecksSetSuitesPreferencesRequest {
    /// Enables or disables automatic creation of CheckSuite events upon pushes to the repository. Enabled by default.
    #[serde(rename = "auto_trigger_checks", skip_serializing_if = "Option::is_none")]
    pub auto_trigger_checks: Option<Vec<crate::models::ChecksSetSuitesPreferencesRequestAutoTriggerChecksInner>>,
}

impl ChecksSetSuitesPreferencesRequest {
    pub fn new() -> ChecksSetSuitesPreferencesRequest {
        ChecksSetSuitesPreferencesRequest {
            auto_trigger_checks: None,
        }
    }
}

