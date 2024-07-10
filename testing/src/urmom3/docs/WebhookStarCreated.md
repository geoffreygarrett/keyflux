# WebhookStarCreated

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**action** | **String** |  | 
**enterprise** | Option<[**crate::models::EnterpriseWebhooks**](enterprise-webhooks.md)> |  | [optional]
**installation** | Option<[**crate::models::SimpleInstallation**](simple-installation.md)> |  | [optional]
**organization** | Option<[**crate::models::OrganizationSimpleWebhooks**](organization-simple-webhooks.md)> |  | [optional]
**repository** | [**crate::models::RepositoryWebhooks**](repository-webhooks.md) |  | 
**sender** | [**crate::models::SimpleUserWebhooks**](simple-user-webhooks.md) |  | 
**starred_at** | Option<**String**> | The time the star was created. This is a timestamp in ISO 8601 format: `YYYY-MM-DDTHH:MM:SSZ`. Will be `null` for the `deleted` action. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


