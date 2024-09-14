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
pub struct ProjectsMoveCard503ResponseErrorsInner {
    #[serde(rename = "code", skip_serializing_if = "Option::is_none")]
    pub code: Option<String>,
    #[serde(rename = "message", skip_serializing_if = "Option::is_none")]
    pub message: Option<String>,
}

impl ProjectsMoveCard503ResponseErrorsInner {
    pub fn new() -> ProjectsMoveCard503ResponseErrorsInner {
        ProjectsMoveCard503ResponseErrorsInner {
            code: None,
            message: None,
        }
    }
}

