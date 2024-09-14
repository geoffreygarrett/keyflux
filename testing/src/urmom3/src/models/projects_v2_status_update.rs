/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// ProjectsV2StatusUpdate : An status update belonging to a project



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct ProjectsV2StatusUpdate {
    #[serde(rename = "id")]
    pub id: f32,
    #[serde(rename = "node_id")]
    pub node_id: String,
    #[serde(rename = "project_node_id", skip_serializing_if = "Option::is_none")]
    pub project_node_id: Option<String>,
    #[serde(rename = "creator", skip_serializing_if = "Option::is_none")]
    pub creator: Option<Box<crate::models::SimpleUser>>,
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "updated_at")]
    pub updated_at: String,
    #[serde(rename = "status", skip_serializing_if = "Option::is_none")]
    pub status: Option<Status>,
    #[serde(rename = "start_date", skip_serializing_if = "Option::is_none")]
    pub start_date: Option<String>,
    #[serde(rename = "target_date", skip_serializing_if = "Option::is_none")]
    pub target_date: Option<String>,
    /// Body of the status update
    #[serde(rename = "body", skip_serializing_if = "Option::is_none")]
    pub body: Option<String>,
}

impl ProjectsV2StatusUpdate {
    /// An status update belonging to a project
    pub fn new(id: f32, node_id: String, created_at: String, updated_at: String) -> ProjectsV2StatusUpdate {
        ProjectsV2StatusUpdate {
            id,
            node_id,
            project_node_id: None,
            creator: None,
            created_at,
            updated_at,
            status: None,
            start_date: None,
            target_date: None,
            body: None,
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Status {
    #[serde(rename = "INACTIVE")]
    Inactive,
    #[serde(rename = "ON_TRACK")]
    OnTrack,
    #[serde(rename = "AT_RISK")]
    AtRisk,
    #[serde(rename = "OFF_TRACK")]
    OffTrack,
    #[serde(rename = "COMPLETE")]
    Complete,
}

impl Default for Status {
    fn default() -> Status {
        Self::Inactive
    }
}
