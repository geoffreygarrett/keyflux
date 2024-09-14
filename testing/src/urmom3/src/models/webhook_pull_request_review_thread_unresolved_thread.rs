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
pub struct WebhookPullRequestReviewThreadUnresolvedThread {
    #[serde(rename = "comments")]
    pub comments: Vec<crate::models::PullRequestReviewComment2>,
    #[serde(rename = "node_id")]
    pub node_id: String,
}

impl WebhookPullRequestReviewThreadUnresolvedThread {
    pub fn new(comments: Vec<crate::models::PullRequestReviewComment2>, node_id: String) -> WebhookPullRequestReviewThreadUnresolvedThread {
        WebhookPullRequestReviewThreadUnresolvedThread {
            comments,
            node_id,
        }
    }
}

