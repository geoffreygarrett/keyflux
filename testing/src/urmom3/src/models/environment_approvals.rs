/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// EnvironmentApprovals : An entry in the reviews log for environment deployments



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct EnvironmentApprovals {
    /// The list of environments that were approved or rejected
    #[serde(rename = "environments")]
    pub environments: Vec<crate::models::EnvironmentApprovalsEnvironmentsInner>,
    /// Whether deployment to the environment(s) was approved or rejected or pending (with comments)
    #[serde(rename = "state")]
    pub state: State,
    #[serde(rename = "user")]
    pub user: Box<crate::models::SimpleUser>,
    /// The comment submitted with the deployment review
    #[serde(rename = "comment")]
    pub comment: String,
}

impl EnvironmentApprovals {
    /// An entry in the reviews log for environment deployments
    pub fn new(environments: Vec<crate::models::EnvironmentApprovalsEnvironmentsInner>, state: State, user: crate::models::SimpleUser, comment: String) -> EnvironmentApprovals {
        EnvironmentApprovals {
            environments,
            state,
            user: Box::new(user),
            comment,
        }
    }
}

/// Whether deployment to the environment(s) was approved or rejected or pending (with comments)
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum State {
    #[serde(rename = "approved")]
    Approved,
    #[serde(rename = "rejected")]
    Rejected,
    #[serde(rename = "pending")]
    Pending,
}

impl Default for State {
    fn default() -> State {
        Self::Approved
    }
}

