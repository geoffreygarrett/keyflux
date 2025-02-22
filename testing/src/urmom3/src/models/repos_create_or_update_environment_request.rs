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
pub struct ReposCreateOrUpdateEnvironmentRequest {
    /// The amount of time to delay a job after the job is initially triggered. The time (in minutes) must be an integer between 0 and 43,200 (30 days).
    #[serde(rename = "wait_timer", skip_serializing_if = "Option::is_none")]
    pub wait_timer: Option<i32>,
    /// Whether or not a user who created the job is prevented from approving their own job.
    #[serde(rename = "prevent_self_review", skip_serializing_if = "Option::is_none")]
    pub prevent_self_review: Option<bool>,
    /// The people or teams that may review jobs that reference the environment. You can list up to six users or teams as reviewers. The reviewers must have at least read access to the repository. Only one of the required reviewers needs to approve the job for it to proceed.
    #[serde(rename = "reviewers", skip_serializing_if = "Option::is_none")]
    pub reviewers: Option<Vec<crate::models::ReposCreateOrUpdateEnvironmentRequestReviewersInner>>,
    #[serde(rename = "deployment_branch_policy", skip_serializing_if = "Option::is_none")]
    pub deployment_branch_policy: Option<Box<crate::models::DeploymentBranchPolicySettings>>,
}

impl ReposCreateOrUpdateEnvironmentRequest {
    pub fn new() -> ReposCreateOrUpdateEnvironmentRequest {
        ReposCreateOrUpdateEnvironmentRequest {
            wait_timer: None,
            prevent_self_review: None,
            reviewers: None,
            deployment_branch_policy: None,
        }
    }
}


