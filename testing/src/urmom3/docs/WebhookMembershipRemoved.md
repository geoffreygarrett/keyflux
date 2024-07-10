# WebhookMembershipRemoved

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**action** | **String** |  | 
**enterprise** | Option<[**crate::models::EnterpriseWebhooks**](enterprise-webhooks.md)> |  | [optional]
**installation** | Option<[**crate::models::SimpleInstallation**](simple-installation.md)> |  | [optional]
**member** | Option<[**crate::models::WebhooksUser**](webhooks_user.md)> |  | 
**organization** | [**crate::models::OrganizationSimpleWebhooks**](organization-simple-webhooks.md) |  | 
**repository** | Option<[**crate::models::RepositoryWebhooks**](repository-webhooks.md)> |  | [optional]
**scope** | **String** | The scope of the membership. Currently, can only be `team`. | 
**sender** | Option<[**crate::models::User**](User.md)> |  | 
**team** | [**crate::models::WebhooksTeam**](webhooks_team.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


