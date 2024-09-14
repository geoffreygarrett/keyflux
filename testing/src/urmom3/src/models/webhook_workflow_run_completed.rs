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
pub struct WebhookWorkflowRunCompleted {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::OrganizationSimpleWebhooks>>,
    #[serde(rename = "repository")]
    pub repository: Box<crate::models::RepositoryWebhooks>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
    #[serde(rename = "workflow")]
    pub workflow: Option<Box<crate::models::WebhooksWorkflow>>,
    #[serde(rename = "workflow_run")]
    pub workflow_run: Box<crate::models::WorkflowRun>,
}

impl WebhookWorkflowRunCompleted {
    pub fn new(action: Action, repository: crate::models::RepositoryWebhooks, sender: crate::models::SimpleUserWebhooks, workflow: Option<crate::models::WebhooksWorkflow>, workflow_run: crate::models::WorkflowRun) -> WebhookWorkflowRunCompleted {
        WebhookWorkflowRunCompleted {
            action,
            enterprise: None,
            installation: None,
            organization: None,
            repository: Box::new(repository),
            sender: Box::new(sender),
            workflow: if let Some(x) = workflow {Some(Box::new(x))} else {None},
            workflow_run: Box::new(workflow_run),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "completed")]
    Completed,
}

impl Default for Action {
    fn default() -> Action {
        Self::Completed
    }
}
