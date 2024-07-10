# WebhookCustomPropertyValuesUpdated

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**action** | **String** |  | 
**enterprise** | Option<[**crate::models::EnterpriseWebhooks**](enterprise-webhooks.md)> |  | [optional]
**installation** | Option<[**crate::models::SimpleInstallation**](simple-installation.md)> |  | [optional]
**repository** | [**crate::models::RepositoryWebhooks**](repository-webhooks.md) |  | 
**organization** | [**crate::models::OrganizationSimpleWebhooks**](organization-simple-webhooks.md) |  | 
**sender** | Option<[**crate::models::SimpleUserWebhooks**](simple-user-webhooks.md)> |  | [optional]
**new_property_values** | [**Vec<crate::models::CustomPropertyValue>**](custom-property-value.md) | The new custom property values for the repository. | 
**old_property_values** | [**Vec<crate::models::CustomPropertyValue>**](custom-property-value.md) | The old custom property values for the repository. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


