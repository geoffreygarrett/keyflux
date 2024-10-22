/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// IssueEventMilestone : Issue Event Milestone



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct IssueEventMilestone {
    #[serde(rename = "title")]
    pub title: String,
}

impl IssueEventMilestone {
    /// Issue Event Milestone
    pub fn new(title: String) -> IssueEventMilestone {
        IssueEventMilestone {
            title,
        }
    }
}


