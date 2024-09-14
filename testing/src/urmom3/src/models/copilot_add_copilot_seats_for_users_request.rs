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
pub struct CopilotAddCopilotSeatsForUsersRequest {
    /// The usernames of the organization members to be granted access to GitHub Copilot.
    #[serde(rename = "selected_usernames")]
    pub selected_usernames: Vec<String>,
}

impl CopilotAddCopilotSeatsForUsersRequest {
    pub fn new(selected_usernames: Vec<String>) -> CopilotAddCopilotSeatsForUsersRequest {
        CopilotAddCopilotSeatsForUsersRequest {
            selected_usernames,
        }
    }
}

