/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// CodespacesPermissionsCheckForDevcontainer : Permission check result for a given devcontainer config.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct CodespacesPermissionsCheckForDevcontainer {
    /// Whether the user has accepted the permissions defined by the devcontainer config
    #[serde(rename = "accepted")]
    pub accepted: bool,
}

impl CodespacesPermissionsCheckForDevcontainer {
    /// Permission check result for a given devcontainer config.
    pub fn new(accepted: bool) -> CodespacesPermissionsCheckForDevcontainer {
        CodespacesPermissionsCheckForDevcontainer {
            accepted,
        }
    }
}

