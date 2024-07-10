# WebhookCreate

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**description** | Option<**String**> | The repository's current description. | 
**enterprise** | Option<[**crate::models::EnterpriseWebhooks**](enterprise-webhooks.md)> |  | [optional]
**installation** | Option<[**crate::models::SimpleInstallation**](simple-installation.md)> |  | [optional]
**master_branch** | **String** | The name of the repository's default branch (usually `main`). | 
**organization** | Option<[**crate::models::OrganizationSimpleWebhooks**](organization-simple-webhooks.md)> |  | [optional]
**pusher_type** | **String** | The pusher type for the event. Can be either `user` or a deploy key. | 
**r#ref** | **String** | The [`git ref`](https://docs.github.com/rest/git/refs#get-a-reference) resource. | 
**ref_type** | **String** | The type of Git ref object created in the repository. | 
**repository** | [**crate::models::RepositoryWebhooks**](repository-webhooks.md) |  | 
**sender** | [**crate::models::SimpleUserWebhooks**](simple-user-webhooks.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


