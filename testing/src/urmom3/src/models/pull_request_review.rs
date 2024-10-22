/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// PullRequestReview : Pull Request Reviews are reviews on pull requests.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct PullRequestReview {
    /// Unique identifier of the review
    #[serde(rename = "id")]
    pub id: i32,
    #[serde(rename = "node_id")]
    pub node_id: String,
    #[serde(rename = "user")]
    pub user: Option<Box<crate::models::NullableSimpleUser>>,
    /// The text of the review.
    #[serde(rename = "body")]
    pub body: String,
    #[serde(rename = "state")]
    pub state: String,
    #[serde(rename = "html_url")]
    pub html_url: String,
    #[serde(rename = "pull_request_url")]
    pub pull_request_url: String,
    #[serde(rename = "_links")]
    pub _links: Box<crate::models::TimelineReviewedEventLinks>,
    #[serde(rename = "submitted_at", skip_serializing_if = "Option::is_none")]
    pub submitted_at: Option<String>,
    /// A commit SHA for the review. If the commit object was garbage collected or forcibly deleted, then it no longer exists in Git and this value will be `null`.
    #[serde(rename = "commit_id")]
    pub commit_id: Option<String>,
    #[serde(rename = "body_html", skip_serializing_if = "Option::is_none")]
    pub body_html: Option<String>,
    #[serde(rename = "body_text", skip_serializing_if = "Option::is_none")]
    pub body_text: Option<String>,
    #[serde(rename = "author_association")]
    pub author_association: crate::models::AuthorAssociation,
}

impl PullRequestReview {
    /// Pull Request Reviews are reviews on pull requests.
    pub fn new(id: i32, node_id: String, user: Option<crate::models::NullableSimpleUser>, body: String, state: String, html_url: String, pull_request_url: String, _links: crate::models::TimelineReviewedEventLinks, commit_id: Option<String>, author_association: crate::models::AuthorAssociation) -> PullRequestReview {
        PullRequestReview {
            id,
            node_id,
            user: if let Some(x) = user {Some(Box::new(x))} else {None},
            body,
            state,
            html_url,
            pull_request_url,
            _links: Box::new(_links),
            submitted_at: None,
            commit_id,
            body_html: None,
            body_text: None,
            author_association,
        }
    }
}


