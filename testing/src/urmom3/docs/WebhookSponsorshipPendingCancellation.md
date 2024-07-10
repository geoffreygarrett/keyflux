# WebhookSponsorshipPendingCancellation

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**action** | **String** |  | 
**effective_date** | Option<**String**> | The `pending_cancellation` and `pending_tier_change` event types will include the date the cancellation or tier change will take effect. | [optional]
**enterprise** | Option<[**crate::models::EnterpriseWebhooks**](enterprise-webhooks.md)> |  | [optional]
**installation** | Option<[**crate::models::SimpleInstallation**](simple-installation.md)> |  | [optional]
**organization** | Option<[**crate::models::OrganizationSimpleWebhooks**](organization-simple-webhooks.md)> |  | [optional]
**repository** | Option<[**crate::models::RepositoryWebhooks**](repository-webhooks.md)> |  | [optional]
**sender** | [**crate::models::SimpleUserWebhooks**](simple-user-webhooks.md) |  | 
**sponsorship** | [**crate::models::WebhooksSponsorship**](webhooks_sponsorship.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


