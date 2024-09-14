/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// PersonalAccessTokenRequestPermissionsUpgraded : Requested permissions that elevate access for a previously approved request for access, categorized by type of permission.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct PersonalAccessTokenRequestPermissionsUpgraded {
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<::std::collections::HashMap<String, String>>,
    #[serde(rename = "repository", skip_serializing_if = "Option::is_none")]
    pub repository: Option<::std::collections::HashMap<String, String>>,
    #[serde(rename = "other", skip_serializing_if = "Option::is_none")]
    pub other: Option<::std::collections::HashMap<String, String>>,
}

impl PersonalAccessTokenRequestPermissionsUpgraded {
    /// Requested permissions that elevate access for a previously approved request for access, categorized by type of permission.
    pub fn new() -> PersonalAccessTokenRequestPermissionsUpgraded {
        PersonalAccessTokenRequestPermissionsUpgraded {
            organization: None,
            repository: None,
            other: None,
        }
    }
}

