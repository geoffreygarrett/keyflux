/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// NullableIssue : Issues are a great way to keep track of tasks, enhancements, and bugs for your projects.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct NullableIssue {
    #[serde(rename = "id")]
    pub id: i64,
    #[serde(rename = "node_id")]
    pub node_id: String,
    /// URL for the issue
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "repository_url")]
    pub repository_url: String,
    #[serde(rename = "labels_url")]
    pub labels_url: String,
    #[serde(rename = "comments_url")]
    pub comments_url: String,
    #[serde(rename = "events_url")]
    pub events_url: String,
    #[serde(rename = "html_url")]
    pub html_url: String,
    /// Number uniquely identifying the issue within its repository
    #[serde(rename = "number")]
    pub number: i32,
    /// State of the issue; either 'open' or 'closed'
    #[serde(rename = "state")]
    pub state: String,
    /// The reason for the current state
    #[serde(rename = "state_reason", skip_serializing_if = "Option::is_none")]
    pub state_reason: Option<StateReason>,
    /// Title of the issue
    #[serde(rename = "title")]
    pub title: String,
    /// Contents of the issue
    #[serde(rename = "body", skip_serializing_if = "Option::is_none")]
    pub body: Option<String>,
    #[serde(rename = "user")]
    pub user: Option<Box<crate::models::NullableSimpleUser>>,
    /// Labels to associate with this issue; pass one or more label names to replace the set of labels on this issue; send an empty array to clear all labels from the issue; note that the labels are silently dropped for users without push access to the repository
    #[serde(rename = "labels")]
    pub labels: Vec<crate::models::IssueLabelsInner>,
    #[serde(rename = "assignee")]
    pub assignee: Option<Box<crate::models::NullableSimpleUser>>,
    #[serde(rename = "assignees", skip_serializing_if = "Option::is_none")]
    pub assignees: Option<Vec<crate::models::SimpleUser>>,
    #[serde(rename = "milestone")]
    pub milestone: Option<Box<crate::models::NullableMilestone>>,
    #[serde(rename = "locked")]
    pub locked: bool,
    #[serde(rename = "active_lock_reason", skip_serializing_if = "Option::is_none")]
    pub active_lock_reason: Option<String>,
    #[serde(rename = "comments")]
    pub comments: i32,
    #[serde(rename = "pull_request", skip_serializing_if = "Option::is_none")]
    pub pull_request: Option<Box<crate::models::IssuePullRequest>>,
    #[serde(rename = "closed_at")]
    pub closed_at: Option<String>,
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "updated_at")]
    pub updated_at: String,
    #[serde(rename = "draft", skip_serializing_if = "Option::is_none")]
    pub draft: Option<bool>,
    #[serde(rename = "closed_by", skip_serializing_if = "Option::is_none")]
    pub closed_by: Option<Box<crate::models::NullableSimpleUser>>,
    #[serde(rename = "body_html", skip_serializing_if = "Option::is_none")]
    pub body_html: Option<String>,
    #[serde(rename = "body_text", skip_serializing_if = "Option::is_none")]
    pub body_text: Option<String>,
    #[serde(rename = "timeline_url", skip_serializing_if = "Option::is_none")]
    pub timeline_url: Option<String>,
    #[serde(rename = "repository", skip_serializing_if = "Option::is_none")]
    pub repository: Option<Box<crate::models::Repository>>,
    #[serde(rename = "performed_via_github_app", skip_serializing_if = "Option::is_none")]
    pub performed_via_github_app: Option<Box<crate::models::NullableIntegration>>,
    #[serde(rename = "author_association")]
    pub author_association: crate::models::AuthorAssociation,
    #[serde(rename = "reactions", skip_serializing_if = "Option::is_none")]
    pub reactions: Option<Box<crate::models::ReactionRollup>>,
}

impl NullableIssue {
    /// Issues are a great way to keep track of tasks, enhancements, and bugs for your projects.
    pub fn new(id: i64, node_id: String, url: String, repository_url: String, labels_url: String, comments_url: String, events_url: String, html_url: String, number: i32, state: String, title: String, user: Option<crate::models::NullableSimpleUser>, labels: Vec<crate::models::IssueLabelsInner>, assignee: Option<crate::models::NullableSimpleUser>, milestone: Option<crate::models::NullableMilestone>, locked: bool, comments: i32, closed_at: Option<String>, created_at: String, updated_at: String, author_association: crate::models::AuthorAssociation) -> NullableIssue {
        NullableIssue {
            id,
            node_id,
            url,
            repository_url,
            labels_url,
            comments_url,
            events_url,
            html_url,
            number,
            state,
            state_reason: None,
            title,
            body: None,
            user: if let Some(x) = user {Some(Box::new(x))} else {None},
            labels,
            assignee: if let Some(x) = assignee {Some(Box::new(x))} else {None},
            assignees: None,
            milestone: if let Some(x) = milestone {Some(Box::new(x))} else {None},
            locked,
            active_lock_reason: None,
            comments,
            pull_request: None,
            closed_at,
            created_at,
            updated_at,
            draft: None,
            closed_by: None,
            body_html: None,
            body_text: None,
            timeline_url: None,
            repository: None,
            performed_via_github_app: None,
            author_association,
            reactions: None,
        }
    }
}

/// The reason for the current state
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum StateReason {
    #[serde(rename = "completed")]
    Completed,
    #[serde(rename = "reopened")]
    Reopened,
    #[serde(rename = "not_planned")]
    NotPlanned,
}

impl Default for StateReason {
    fn default() -> StateReason {
        Self::Completed
    }
}
