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
pub struct ReposRenameBranchRequest {
    /// The new name of the branch.
    #[serde(rename = "new_name")]
    pub new_name: String,
}

impl ReposRenameBranchRequest {
    pub fn new(new_name: String) -> ReposRenameBranchRequest {
        ReposRenameBranchRequest {
            new_name,
        }
    }
}

