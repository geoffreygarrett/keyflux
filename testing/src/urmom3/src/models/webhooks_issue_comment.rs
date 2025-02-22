/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// WebhooksIssueComment : The [comment](https://docs.github.com/rest/issues/comments#get-an-issue-comment) itself.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct WebhooksIssueComment {
    /// How the author is associated with the repository.
    #[serde(rename = "author_association")]
    pub author_association: AuthorAssociation,
    /// Contents of the issue comment
    #[serde(rename = "body")]
    pub body: String,
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "html_url")]
    pub html_url: String,
    /// Unique identifier of the issue comment
    #[serde(rename = "id")]
    pub id: i64,
    #[serde(rename = "issue_url")]
    pub issue_url: String,
    #[serde(rename = "node_id")]
    pub node_id: String,
    #[serde(rename = "performed_via_github_app")]
    pub performed_via_github_app: Option<Box<crate::models::Integration>>,
    #[serde(rename = "reactions")]
    pub reactions: Box<crate::models::Reactions>,
    #[serde(rename = "updated_at")]
    pub updated_at: String,
    /// URL for the issue comment
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "user")]
    pub user: Option<Box<crate::models::User2>>,
}

impl WebhooksIssueComment {
    /// The [comment](https://docs.github.com/rest/issues/comments#get-an-issue-comment) itself.
    pub fn new(author_association: AuthorAssociation, body: String, created_at: String, html_url: String, id: i64, issue_url: String, node_id: String, performed_via_github_app: Option<crate::models::Integration>, reactions: crate::models::Reactions, updated_at: String, url: String, user: Option<crate::models::User2>) -> WebhooksIssueComment {
        WebhooksIssueComment {
            author_association,
            body,
            created_at,
            html_url,
            id,
            issue_url,
            node_id,
            performed_via_github_app: if let Some(x) = performed_via_github_app {Some(Box::new(x))} else {None},
            reactions: Box::new(reactions),
            updated_at,
            url,
            user: if let Some(x) = user {Some(Box::new(x))} else {None},
        }
    }
}

/// How the author is associated with the repository.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum AuthorAssociation {
    #[serde(rename = "COLLABORATOR")]
    Collaborator,
    #[serde(rename = "CONTRIBUTOR")]
    Contributor,
    #[serde(rename = "FIRST_TIMER")]
    FirstTimer,
    #[serde(rename = "FIRST_TIME_CONTRIBUTOR")]
    FirstTimeContributor,
    #[serde(rename = "MANNEQUIN")]
    Mannequin,
    #[serde(rename = "MEMBER")]
    Member,
    #[serde(rename = "NONE")]
    None,
    #[serde(rename = "OWNER")]
    Owner,
}

impl Default for AuthorAssociation {
    fn default() -> AuthorAssociation {
        Self::Collaborator
    }
}

