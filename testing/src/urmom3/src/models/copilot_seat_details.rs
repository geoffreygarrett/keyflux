/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// CopilotSeatDetails : Information about a Copilot Business seat assignment for a user, team, or organization.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct CopilotSeatDetails {
    #[serde(rename = "assignee")]
    pub assignee: Box<crate::models::CopilotSeatDetailsAssignee>,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::CopilotSeatDetailsOrganization>>,
    #[serde(rename = "assigning_team", skip_serializing_if = "Option::is_none")]
    pub assigning_team: Option<Box<crate::models::CopilotSeatDetailsAssigningTeam>>,
    /// The pending cancellation date for the seat, in `YYYY-MM-DD` format. This will be null unless the assignee's Copilot access has been canceled during the current billing cycle. If the seat has been cancelled, this corresponds to the start of the organization's next billing cycle.
    #[serde(rename = "pending_cancellation_date", skip_serializing_if = "Option::is_none")]
    pub pending_cancellation_date: Option<String>,
    /// Timestamp of user's last GitHub Copilot activity, in ISO 8601 format.
    #[serde(rename = "last_activity_at", skip_serializing_if = "Option::is_none")]
    pub last_activity_at: Option<String>,
    /// Last editor that was used by the user for a GitHub Copilot completion.
    #[serde(rename = "last_activity_editor", skip_serializing_if = "Option::is_none")]
    pub last_activity_editor: Option<String>,
    /// Timestamp of when the assignee was last granted access to GitHub Copilot, in ISO 8601 format.
    #[serde(rename = "created_at")]
    pub created_at: String,
    /// Timestamp of when the assignee's GitHub Copilot access was last updated, in ISO 8601 format.
    #[serde(rename = "updated_at", skip_serializing_if = "Option::is_none")]
    pub updated_at: Option<String>,
}

impl CopilotSeatDetails {
    /// Information about a Copilot Business seat assignment for a user, team, or organization.
    pub fn new(assignee: crate::models::CopilotSeatDetailsAssignee, created_at: String) -> CopilotSeatDetails {
        CopilotSeatDetails {
            assignee: Box::new(assignee),
            organization: None,
            assigning_team: None,
            pending_cancellation_date: None,
            last_activity_at: None,
            last_activity_editor: None,
            created_at,
            updated_at: None,
        }
    }
}


