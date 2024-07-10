# WebhookInstallationRepositoriesAdded

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**action** | **String** |  | 
**enterprise** | Option<[**crate::models::EnterpriseWebhooks**](enterprise-webhooks.md)> |  | [optional]
**installation** | [**crate::models::Installation**](installation.md) |  | 
**organization** | Option<[**crate::models::OrganizationSimpleWebhooks**](organization-simple-webhooks.md)> |  | [optional]
**repositories_added** | [**Vec<crate::models::WebhooksRepositoriesInner>**](webhooks_repositories_inner.md) | An array of repository objects, which were added to the installation. | 
**repositories_removed** | [**Vec<crate::models::WebhookInstallationRepositoriesAddedRepositoriesRemovedInner>**](webhook_installation_repositories_added_repositories_removed_inner.md) | An array of repository objects, which were removed from the installation. | 
**repository** | Option<[**crate::models::RepositoryWebhooks**](repository-webhooks.md)> |  | [optional]
**repository_selection** | [**crate::models::WebhooksRepositorySelection**](webhooks_repository_selection.md) |  | 
**requester** | Option<[**crate::models::WebhooksUser**](webhooks_user.md)> |  | 
**sender** | [**crate::models::SimpleUserWebhooks**](simple-user-webhooks.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


