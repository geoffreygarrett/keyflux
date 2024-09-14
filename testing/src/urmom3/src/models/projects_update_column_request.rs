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
pub struct ProjectsUpdateColumnRequest {
    /// Name of the project column
    #[serde(rename = "name")]
    pub name: String,
}

impl ProjectsUpdateColumnRequest {
    pub fn new(name: String) -> ProjectsUpdateColumnRequest {
        ProjectsUpdateColumnRequest {
            name,
        }
    }
}

