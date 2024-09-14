/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// TimelineLineCommentedEvent : Timeline Line Commented Event



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct TimelineLineCommentedEvent {
    #[serde(rename = "event", skip_serializing_if = "Option::is_none")]
    pub event: Option<String>,
    #[serde(rename = "node_id", skip_serializing_if = "Option::is_none")]
    pub node_id: Option<String>,
    #[serde(rename = "comments", skip_serializing_if = "Option::is_none")]
    pub comments: Option<Vec<crate::models::PullRequestReviewComment>>,
}

impl TimelineLineCommentedEvent {
    /// Timeline Line Commented Event
    pub fn new() -> TimelineLineCommentedEvent {
        TimelineLineCommentedEvent {
            event: None,
            node_id: None,
            comments: None,
        }
    }
}

