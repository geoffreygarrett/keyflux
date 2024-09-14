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
pub struct WebhookDeploymentReviewRequested {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "environment")]
    pub environment: String,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization")]
    pub organization: Box<crate::models::OrganizationSimpleWebhooks>,
    #[serde(rename = "repository")]
    pub repository: Box<crate::models::RepositoryWebhooks>,
    #[serde(rename = "requestor")]
    pub requestor: Option<Box<crate::models::WebhooksUser>>,
    #[serde(rename = "reviewers")]
    pub reviewers: Vec<crate::models::WebhookDeploymentReviewRequestedReviewersInner>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
    #[serde(rename = "since")]
    pub since: String,
    #[serde(rename = "workflow_job_run")]
    pub workflow_job_run: Box<crate::models::WebhookDeploymentReviewRequestedWorkflowJobRun>,
    #[serde(rename = "workflow_run")]
    pub workflow_run: Option<Box<crate::models::DeploymentWorkflowRun3>>,
}

impl WebhookDeploymentReviewRequested {
    pub fn new(action: Action, environment: String, organization: crate::models::OrganizationSimpleWebhooks, repository: crate::models::RepositoryWebhooks, requestor: Option<crate::models::WebhooksUser>, reviewers: Vec<crate::models::WebhookDeploymentReviewRequestedReviewersInner>, sender: crate::models::SimpleUserWebhooks, since: String, workflow_job_run: crate::models::WebhookDeploymentReviewRequestedWorkflowJobRun, workflow_run: Option<crate::models::DeploymentWorkflowRun3>) -> WebhookDeploymentReviewRequested {
        WebhookDeploymentReviewRequested {
            action,
            enterprise: None,
            environment,
            installation: None,
            organization: Box::new(organization),
            repository: Box::new(repository),
            requestor: if let Some(x) = requestor {Some(Box::new(x))} else {None},
            reviewers,
            sender: Box::new(sender),
            since,
            workflow_job_run: Box::new(workflow_job_run),
            workflow_run: if let Some(x) = workflow_run {Some(Box::new(x))} else {None},
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "requested")]
    Requested,
}

impl Default for Action {
    fn default() -> Action {
        Self::Requested
    }
}
