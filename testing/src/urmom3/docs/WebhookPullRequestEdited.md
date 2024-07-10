# WebhookPullRequestEdited

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**action** | **String** |  | 
**changes** | [**crate::models::WebhookPullRequestEditedChanges**](webhook_pull_request_edited_changes.md) |  | 
**enterprise** | Option<[**crate::models::EnterpriseWebhooks**](enterprise-webhooks.md)> |  | [optional]
**installation** | Option<[**crate::models::SimpleInstallation**](simple-installation.md)> |  | [optional]
**number** | **i32** | The pull request number. | 
**organization** | Option<[**crate::models::OrganizationSimpleWebhooks**](organization-simple-webhooks.md)> |  | [optional]
**pull_request** | [**crate::models::PullRequestWebhook**](pull-request-webhook.md) |  | 
**repository** | [**crate::models::RepositoryWebhooks**](repository-webhooks.md) |  | 
**sender** | Option<[**crate::models::SimpleUserWebhooks**](simple-user-webhooks.md)> |  | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


