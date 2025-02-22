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
pub struct ProjectsDeleteCard403Response {
    #[serde(rename = "message", skip_serializing_if = "Option::is_none")]
    pub message: Option<String>,
    #[serde(rename = "documentation_url", skip_serializing_if = "Option::is_none")]
    pub documentation_url: Option<String>,
    #[serde(rename = "errors", skip_serializing_if = "Option::is_none")]
    pub errors: Option<Vec<String>>,
}

impl ProjectsDeleteCard403Response {
    pub fn new() -> ProjectsDeleteCard403Response {
        ProjectsDeleteCard403Response {
            message: None,
            documentation_url: None,
            errors: None,
        }
    }
}


