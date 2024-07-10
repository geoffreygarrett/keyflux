# WebhookDeploymentReviewApproved

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**action** | **String** |  | 
**approver** | Option<[**crate::models::WebhooksApprover**](webhooks_approver.md)> |  | [optional]
**comment** | Option<**String**> |  | [optional]
**enterprise** | Option<[**crate::models::EnterpriseWebhooks**](enterprise-webhooks.md)> |  | [optional]
**installation** | Option<[**crate::models::SimpleInstallation**](simple-installation.md)> |  | [optional]
**organization** | [**crate::models::OrganizationSimpleWebhooks**](organization-simple-webhooks.md) |  | 
**repository** | [**crate::models::RepositoryWebhooks**](repository-webhooks.md) |  | 
**reviewers** | Option<[**Vec<crate::models::WebhooksReviewersInner>**](webhooks_reviewers_inner.md)> |  | [optional]
**sender** | [**crate::models::SimpleUserWebhooks**](simple-user-webhooks.md) |  | 
**since** | **String** |  | 
**workflow_job_run** | Option<[**crate::models::WebhooksWorkflowJobRun**](webhooks_workflow_job_run.md)> |  | [optional]
**workflow_job_runs** | Option<[**Vec<crate::models::WebhookDeploymentReviewApprovedWorkflowJobRunsInner>**](webhook_deployment_review_approved_workflow_job_runs_inner.md)> |  | [optional]
**workflow_run** | Option<[**crate::models::DeploymentWorkflowRun1**](Deployment_Workflow_Run_1.md)> |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


