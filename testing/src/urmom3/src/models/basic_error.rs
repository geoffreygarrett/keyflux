/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// BasicError : Basic Error



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct BasicError {
    #[serde(rename = "message", skip_serializing_if = "Option::is_none")]
    pub message: Option<String>,
    #[serde(rename = "documentation_url", skip_serializing_if = "Option::is_none")]
    pub documentation_url: Option<String>,
    #[serde(rename = "url", skip_serializing_if = "Option::is_none")]
    pub url: Option<String>,
    #[serde(rename = "status", skip_serializing_if = "Option::is_none")]
    pub status: Option<String>,
}

impl BasicError {
    /// Basic Error
    pub fn new() -> BasicError {
        BasicError {
            message: None,
            documentation_url: None,
            url: None,
            status: None,
        }
    }
}

