# OrganizationProgrammaticAccessGrant

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **i32** | Unique identifier of the fine-grained personal access token. The `pat_id` used to get details about an approved fine-grained personal access token. | 
**owner** | [**crate::models::SimpleUser**](simple-user.md) |  | 
**repository_selection** | **String** | Type of repository selection requested. | 
**repositories_url** | **String** | URL to the list of repositories the fine-grained personal access token can access. Only follow when `repository_selection` is `subset`. | 
**permissions** | [**crate::models::OrganizationProgrammaticAccessGrantRequestPermissions**](organization_programmatic_access_grant_request_permissions.md) |  | 
**access_granted_at** | **String** | Date and time when the fine-grained personal access token was approved to access the organization. | 
**token_expired** | **bool** | Whether the associated fine-grained personal access token has expired. | 
**token_expires_at** | Option<**String**> | Date and time when the associated fine-grained personal access token expires. | 
**token_last_used_at** | Option<**String**> | Date and time when the associated fine-grained personal access token was last used for authentication. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

