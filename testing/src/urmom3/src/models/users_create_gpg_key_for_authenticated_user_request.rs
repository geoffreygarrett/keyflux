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
pub struct UsersCreateGpgKeyForAuthenticatedUserRequest {
    /// A descriptive name for the new key.
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    /// A GPG key in ASCII-armored format.
    #[serde(rename = "armored_public_key")]
    pub armored_public_key: String,
}

impl UsersCreateGpgKeyForAuthenticatedUserRequest {
    pub fn new(armored_public_key: String) -> UsersCreateGpgKeyForAuthenticatedUserRequest {
        UsersCreateGpgKeyForAuthenticatedUserRequest {
            name: None,
            armored_public_key,
        }
    }
}

