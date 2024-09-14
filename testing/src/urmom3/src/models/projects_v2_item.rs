/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// ProjectsV2Item : An item belonging to a project



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct ProjectsV2Item {
    #[serde(rename = "id")]
    pub id: f32,
    #[serde(rename = "node_id", skip_serializing_if = "Option::is_none")]
    pub node_id: Option<String>,
    #[serde(rename = "project_node_id", skip_serializing_if = "Option::is_none")]
    pub project_node_id: Option<String>,
    #[serde(rename = "content_node_id")]
    pub content_node_id: String,
    #[serde(rename = "content_type")]
    pub content_type: crate::models::ProjectsV2ItemContentType,
    #[serde(rename = "creator", skip_serializing_if = "Option::is_none")]
    pub creator: Option<Box<crate::models::SimpleUser>>,
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "updated_at")]
    pub updated_at: String,
    #[serde(rename = "archived_at")]
    pub archived_at: Option<String>,
}

impl ProjectsV2Item {
    /// An item belonging to a project
    pub fn new(id: f32, content_node_id: String, content_type: crate::models::ProjectsV2ItemContentType, created_at: String, updated_at: String, archived_at: Option<String>) -> ProjectsV2Item {
        ProjectsV2Item {
            id,
            node_id: None,
            project_node_id: None,
            content_node_id,
            content_type,
            creator: None,
            created_at,
            updated_at,
            archived_at,
        }
    }
}

