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
pub struct ProjectsUpdateCardRequest {
    /// The project card's note
    #[serde(rename = "note", skip_serializing_if = "Option::is_none")]
    pub note: Option<String>,
    /// Whether or not the card is archived
    #[serde(rename = "archived", skip_serializing_if = "Option::is_none")]
    pub archived: Option<bool>,
}

impl ProjectsUpdateCardRequest {
    pub fn new() -> ProjectsUpdateCardRequest {
        ProjectsUpdateCardRequest {
            note: None,
            archived: None,
        }
    }
}

