# WebhookRepositoryDispatchSample

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**action** | **String** | The `event_type` that was specified in the `POST /repos/{owner}/{repo}/dispatches` request body. | 
**branch** | **String** |  | 
**client_payload** | Option<[**::std::collections::HashMap<String, serde_json::Value>**](serde_json::Value.md)> | The `client_payload` that was specified in the `POST /repos/{owner}/{repo}/dispatches` request body. | 
**enterprise** | Option<[**crate::models::EnterpriseWebhooks**](enterprise-webhooks.md)> |  | [optional]
**installation** | [**crate::models::SimpleInstallation**](simple-installation.md) |  | 
**organization** | Option<[**crate::models::OrganizationSimpleWebhooks**](organization-simple-webhooks.md)> |  | [optional]
**repository** | [**crate::models::RepositoryWebhooks**](repository-webhooks.md) |  | 
**sender** | [**crate::models::SimpleUserWebhooks**](simple-user-webhooks.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


