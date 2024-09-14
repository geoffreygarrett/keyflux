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
pub struct CodeSecuritySetConfigurationAsDefault200Response {
    /// Specifies which types of repository this security configuration is applied to by default.
    #[serde(rename = "default_for_new_repos", skip_serializing_if = "Option::is_none")]
    pub default_for_new_repos: Option<DefaultForNewRepos>,
    #[serde(rename = "configuration", skip_serializing_if = "Option::is_none")]
    pub configuration: Option<Box<crate::models::CodeSecurityConfiguration>>,
}

impl CodeSecuritySetConfigurationAsDefault200Response {
    pub fn new() -> CodeSecuritySetConfigurationAsDefault200Response {
        CodeSecuritySetConfigurationAsDefault200Response {
            default_for_new_repos: None,
            configuration: None,
        }
    }
}

/// Specifies which types of repository this security configuration is applied to by default.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum DefaultForNewRepos {
    #[serde(rename = "all")]
    All,
    #[serde(rename = "none")]
    None,
    #[serde(rename = "private_and_internal")]
    PrivateAndInternal,
    #[serde(rename = "public")]
    Public,
}

impl Default for DefaultForNewRepos {
    fn default() -> DefaultForNewRepos {
        Self::All
    }
}
