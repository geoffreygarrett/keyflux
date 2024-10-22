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
pub struct ProjectsCreateForAuthenticatedUserRequest {
    /// Name of the project
    #[serde(rename = "name")]
    pub name: String,
    /// Body of the project
    #[serde(rename = "body", skip_serializing_if = "Option::is_none")]
    pub body: Option<String>,
}

impl ProjectsCreateForAuthenticatedUserRequest {
    pub fn new(name: String) -> ProjectsCreateForAuthenticatedUserRequest {
        ProjectsCreateForAuthenticatedUserRequest {
            name,
            body: None,
        }
    }
}


