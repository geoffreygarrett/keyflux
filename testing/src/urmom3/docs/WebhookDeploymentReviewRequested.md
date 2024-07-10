# WebhookDeploymentReviewRequested

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**action** | **String** |  | 
**enterprise** | Option<[**crate::models::EnterpriseWebhooks**](enterprise-webhooks.md)> |  | [optional]
**environment** | **String** |  | 
**installation** | Option<[**crate::models::SimpleInstallation**](simple-installation.md)> |  | [optional]
**organization** | [**crate::models::OrganizationSimpleWebhooks**](organization-simple-webhooks.md) |  | 
**repository** | [**crate::models::RepositoryWebhooks**](repository-webhooks.md) |  | 
**requestor** | Option<[**crate::models::WebhooksUser**](webhooks_user.md)> |  | 
**reviewers** | [**Vec<crate::models::WebhookDeploymentReviewRequestedReviewersInner>**](webhook_deployment_review_requested_reviewers_inner.md) |  | 
**sender** | [**crate::models::SimpleUserWebhooks**](simple-user-webhooks.md) |  | 
**since** | **String** |  | 
**workflow_job_run** | [**crate::models::WebhookDeploymentReviewRequestedWorkflowJobRun**](webhook_deployment_review_requested_workflow_job_run.md) |  | 
**workflow_run** | Option<[**crate::models::DeploymentWorkflowRun3**](Deployment_Workflow_Run_3.md)> |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


