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
pub struct CodespacesRepoMachinesForAuthenticatedUser200Response {
    #[serde(rename = "total_count")]
    pub total_count: i32,
    #[serde(rename = "machines")]
    pub machines: Vec<crate::models::CodespaceMachine>,
}

impl CodespacesRepoMachinesForAuthenticatedUser200Response {
    pub fn new(total_count: i32, machines: Vec<crate::models::CodespaceMachine>) -> CodespacesRepoMachinesForAuthenticatedUser200Response {
        CodespacesRepoMachinesForAuthenticatedUser200Response {
            total_count,
            machines,
        }
    }
}

