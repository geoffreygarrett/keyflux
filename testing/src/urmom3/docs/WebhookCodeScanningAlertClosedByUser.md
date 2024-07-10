# WebhookCodeScanningAlertClosedByUser

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**action** | **String** |  | 
**alert** | [**crate::models::WebhookCodeScanningAlertClosedByUserAlert**](webhook_code_scanning_alert_closed_by_user_alert.md) |  | 
**commit_oid** | **String** | The commit SHA of the code scanning alert. When the action is `reopened_by_user` or `closed_by_user`, the event was triggered by the `sender` and this value will be empty. | 
**enterprise** | Option<[**crate::models::EnterpriseWebhooks**](enterprise-webhooks.md)> |  | [optional]
**installation** | Option<[**crate::models::SimpleInstallation**](simple-installation.md)> |  | [optional]
**organization** | Option<[**crate::models::OrganizationSimpleWebhooks**](organization-simple-webhooks.md)> |  | [optional]
**r#ref** | **String** | The Git reference of the code scanning alert. When the action is `reopened_by_user` or `closed_by_user`, the event was triggered by the `sender` and this value will be empty. | 
**repository** | [**crate::models::RepositoryWebhooks**](repository-webhooks.md) |  | 
**sender** | [**crate::models::SimpleUserWebhooks**](simple-user-webhooks.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


