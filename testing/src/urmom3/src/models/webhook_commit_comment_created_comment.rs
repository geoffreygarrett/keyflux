/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// WebhookCommitCommentCreatedComment : The [commit comment](https://docs.github.com/rest/commits/comments#get-a-commit-comment) resource.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct WebhookCommitCommentCreatedComment {
    /// How the author is associated with the repository.
    #[serde(rename = "author_association")]
    pub author_association: AuthorAssociation,
    /// The text of the comment.
    #[serde(rename = "body")]
    pub body: String,
    /// The SHA of the commit to which the comment applies.
    #[serde(rename = "commit_id")]
    pub commit_id: String,
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "html_url")]
    pub html_url: String,
    /// The ID of the commit comment.
    #[serde(rename = "id")]
    pub id: i32,
    /// The line of the blob to which the comment applies. The last line of the range for a multi-line comment
    #[serde(rename = "line")]
    pub line: Option<i32>,
    /// The node ID of the commit comment.
    #[serde(rename = "node_id")]
    pub node_id: String,
    /// The relative path of the file to which the comment applies.
    #[serde(rename = "path")]
    pub path: Option<String>,
    /// The line index in the diff to which the comment applies.
    #[serde(rename = "position")]
    pub position: Option<i32>,
    #[serde(rename = "reactions", skip_serializing_if = "Option::is_none")]
    pub reactions: Option<Box<crate::models::Reactions>>,
    #[serde(rename = "updated_at")]
    pub updated_at: String,
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "user")]
    pub user: Option<Box<crate::models::User1>>,
}

impl WebhookCommitCommentCreatedComment {
    /// The [commit comment](https://docs.github.com/rest/commits/comments#get-a-commit-comment) resource.
    pub fn new(author_association: AuthorAssociation, body: String, commit_id: String, created_at: String, html_url: String, id: i32, line: Option<i32>, node_id: String, path: Option<String>, position: Option<i32>, updated_at: String, url: String, user: Option<crate::models::User1>) -> WebhookCommitCommentCreatedComment {
        WebhookCommitCommentCreatedComment {
            author_association,
            body,
            commit_id,
            created_at,
            html_url,
            id,
            line,
            node_id,
            path,
            position,
            reactions: None,
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

