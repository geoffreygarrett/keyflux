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
pub struct DeploymentWorkflowRun2 {
    #[serde(rename = "actor")]
    pub actor: Option<Box<crate::models::User>>,
    #[serde(rename = "artifacts_url", skip_serializing_if = "Option::is_none")]
    pub artifacts_url: Option<String>,
    #[serde(rename = "cancel_url", skip_serializing_if = "Option::is_none")]
    pub cancel_url: Option<String>,
    #[serde(rename = "check_suite_id")]
    pub check_suite_id: i32,
    #[serde(rename = "check_suite_node_id")]
    pub check_suite_node_id: String,
    #[serde(rename = "check_suite_url", skip_serializing_if = "Option::is_none")]
    pub check_suite_url: Option<String>,
    #[serde(rename = "conclusion")]
    pub conclusion: Option<Conclusion>,
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "event")]
    pub event: String,
    #[serde(rename = "head_branch")]
    pub head_branch: String,
    #[serde(rename = "head_commit", skip_serializing_if = "Option::is_none")]
    pub head_commit: Option<serde_json::Value>,
    #[serde(rename = "head_repository", skip_serializing_if = "Option::is_none")]
    pub head_repository: Option<Box<crate::models::DeploymentWorkflowRun1HeadRepository>>,
    #[serde(rename = "head_sha")]
    pub head_sha: String,
    #[serde(rename = "html_url")]
    pub html_url: String,
    #[serde(rename = "id")]
    pub id: i32,
    #[serde(rename = "jobs_url", skip_serializing_if = "Option::is_none")]
    pub jobs_url: Option<String>,
    #[serde(rename = "logs_url", skip_serializing_if = "Option::is_none")]
    pub logs_url: Option<String>,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "node_id")]
    pub node_id: String,
    #[serde(rename = "path")]
    pub path: String,
    #[serde(rename = "previous_attempt_url", skip_serializing_if = "Option::is_none")]
    pub previous_attempt_url: Option<String>,
    #[serde(rename = "pull_requests")]
    pub pull_requests: Vec<crate::models::CheckRunPullRequest>,
    #[serde(rename = "referenced_workflows", skip_serializing_if = "Option::is_none")]
    pub referenced_workflows: Option<Vec<crate::models::DeploymentWorkflowRunReferencedWorkflowsInner>>,
    #[serde(rename = "repository", skip_serializing_if = "Option::is_none")]
    pub repository: Option<Box<crate::models::DeploymentWorkflowRun1HeadRepository>>,
    #[serde(rename = "rerun_url", skip_serializing_if = "Option::is_none")]
    pub rerun_url: Option<String>,
    #[serde(rename = "run_attempt")]
    pub run_attempt: i32,
    #[serde(rename = "run_number")]
    pub run_number: i32,
    #[serde(rename = "run_started_at")]
    pub run_started_at: String,
    #[serde(rename = "status")]
    pub status: Status,
    #[serde(rename = "triggering_actor")]
    pub triggering_actor: Option<Box<crate::models::User>>,
    #[serde(rename = "updated_at")]
    pub updated_at: String,
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "workflow_id")]
    pub workflow_id: i32,
    #[serde(rename = "workflow_url", skip_serializing_if = "Option::is_none")]
    pub workflow_url: Option<String>,
    #[serde(rename = "display_title")]
    pub display_title: String,
}

impl DeploymentWorkflowRun2 {
    pub fn new(actor: Option<crate::models::User>, check_suite_id: i32, check_suite_node_id: String, conclusion: Option<Conclusion>, created_at: String, event: String, head_branch: String, head_sha: String, html_url: String, id: i32, name: String, node_id: String, path: String, pull_requests: Vec<crate::models::CheckRunPullRequest>, run_attempt: i32, run_number: i32, run_started_at: String, status: Status, triggering_actor: Option<crate::models::User>, updated_at: String, url: String, workflow_id: i32, display_title: String) -> DeploymentWorkflowRun2 {
        DeploymentWorkflowRun2 {
            actor: if let Some(x) = actor {Some(Box::new(x))} else {None},
            artifacts_url: None,
            cancel_url: None,
            check_suite_id,
            check_suite_node_id,
            check_suite_url: None,
            conclusion,
            created_at,
            event,
            head_branch,
            head_commit: None,
            head_repository: None,
            head_sha,
            html_url,
            id,
            jobs_url: None,
            logs_url: None,
            name,
            node_id,
            path,
            previous_attempt_url: None,
            pull_requests,
            referenced_workflows: None,
            repository: None,
            rerun_url: None,
            run_attempt,
            run_number,
            run_started_at,
            status,
            triggering_actor: if let Some(x) = triggering_actor {Some(Box::new(x))} else {None},
            updated_at,
            url,
            workflow_id,
            workflow_url: None,
            display_title,
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Conclusion {
    #[serde(rename = "success")]
    Success,
    #[serde(rename = "failure")]
    Failure,
    #[serde(rename = "neutral")]
    Neutral,
    #[serde(rename = "cancelled")]
    Cancelled,
    #[serde(rename = "timed_out")]
    TimedOut,
    #[serde(rename = "action_required")]
    ActionRequired,
    #[serde(rename = "stale")]
    Stale,
    #[serde(rename = "null")]
    Null,
}

impl Default for Conclusion {
    fn default() -> Conclusion {
        Self::Success
    }
}
/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Status {
    #[serde(rename = "requested")]
    Requested,
    #[serde(rename = "in_progress")]
    InProgress,
    #[serde(rename = "completed")]
    Completed,
    #[serde(rename = "queued")]
    Queued,
    #[serde(rename = "waiting")]
    Waiting,
}

impl Default for Status {
    fn default() -> Status {
        Self::Requested
    }
}

