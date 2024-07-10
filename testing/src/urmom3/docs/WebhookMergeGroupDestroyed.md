# WebhookMergeGroupDestroyed

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**action** | **String** |  | 
**reason** | Option<**String**> | Explains why the merge group is being destroyed. The group could have been merged, removed from the queue (dequeued), or invalidated by an earlier queue entry being dequeued (invalidated). | [optional]
**installation** | Option<[**crate::models::SimpleInstallation**](simple-installation.md)> |  | [optional]
**merge_group** | [**crate::models::MergeGroup**](merge-group.md) |  | 
**organization** | Option<[**crate::models::OrganizationSimpleWebhooks**](organization-simple-webhooks.md)> |  | [optional]
**repository** | Option<[**crate::models::RepositoryWebhooks**](repository-webhooks.md)> |  | [optional]
**sender** | Option<[**crate::models::SimpleUserWebhooks**](simple-user-webhooks.md)> |  | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


