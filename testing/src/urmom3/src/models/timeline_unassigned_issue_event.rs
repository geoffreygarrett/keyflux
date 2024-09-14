/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// TimelineUnassignedIssueEvent : Timeline Unassigned Issue Event



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct TimelineUnassignedIssueEvent {
    #[serde(rename = "id")]
    pub id: i32,
    #[serde(rename = "node_id")]
    pub node_id: String,
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "actor")]
    pub actor: Box<crate::models::SimpleUser>,
    #[serde(rename = "event")]
    pub event: String,
    #[serde(rename = "commit_id")]
    pub commit_id: Option<String>,
    #[serde(rename = "commit_url")]
    pub commit_url: Option<String>,
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "performed_via_github_app")]
    pub performed_via_github_app: Option<Box<crate::models::NullableIntegration>>,
    #[serde(rename = "assignee")]
    pub assignee: Box<crate::models::SimpleUser>,
}

impl TimelineUnassignedIssueEvent {
    /// Timeline Unassigned Issue Event
    pub fn new(id: i32, node_id: String, url: String, actor: crate::models::SimpleUser, event: String, commit_id: Option<String>, commit_url: Option<String>, created_at: String, performed_via_github_app: Option<crate::models::NullableIntegration>, assignee: crate::models::SimpleUser) -> TimelineUnassignedIssueEvent {
        TimelineUnassignedIssueEvent {
            id,
            node_id,
            url,
            actor: Box::new(actor),
            event,
            commit_id,
            commit_url,
            created_at,
            performed_via_github_app: if let Some(x) = performed_via_github_app {Some(Box::new(x))} else {None},
            assignee: Box::new(assignee),
        }
    }
}

