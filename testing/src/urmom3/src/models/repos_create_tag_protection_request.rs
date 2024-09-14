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
pub struct ReposCreateTagProtectionRequest {
    /// An optional glob pattern to match against when enforcing tag protection.
    #[serde(rename = "pattern")]
    pub pattern: String,
}

impl ReposCreateTagProtectionRequest {
    pub fn new(pattern: String) -> ReposCreateTagProtectionRequest {
        ReposCreateTagProtectionRequest {
            pattern,
        }
    }
}

