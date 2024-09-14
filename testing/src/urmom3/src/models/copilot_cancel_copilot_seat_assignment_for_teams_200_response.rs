/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// CopilotCancelCopilotSeatAssignmentForTeams200Response : The total number of seat assignments cancelled.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct CopilotCancelCopilotSeatAssignmentForTeams200Response {
    #[serde(rename = "seats_cancelled")]
    pub seats_cancelled: i32,
}

impl CopilotCancelCopilotSeatAssignmentForTeams200Response {
    /// The total number of seat assignments cancelled.
    pub fn new(seats_cancelled: i32) -> CopilotCancelCopilotSeatAssignmentForTeams200Response {
        CopilotCancelCopilotSeatAssignmentForTeams200Response {
            seats_cancelled,
        }
    }
}

