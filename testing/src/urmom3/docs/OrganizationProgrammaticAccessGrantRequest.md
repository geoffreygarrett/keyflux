# OrganizationProgrammaticAccessGrantRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **i32** | Unique identifier of the request for access via fine-grained personal access token. The `pat_request_id` used to review PAT requests. | 
**reason** | Option<**String**> | Reason for requesting access. | 
**owner** | [**crate::models::SimpleUser**](simple-user.md) |  | 
**repository_selection** | **String** | Type of repository selection requested. | 
**repositories_url** | **String** | URL to the list of repositories requested to be accessed via fine-grained personal access token. Should only be followed when `repository_selection` is `subset`. | 
**permissions** | [**crate::models::OrganizationProgrammaticAccessGrantRequestPermissions**](organization_programmatic_access_grant_request_permissions.md) |  | 
**created_at** | **String** | Date and time when the request for access was created. | 
**token_expired** | **bool** | Whether the associated fine-grained personal access token has expired. | 
**token_expires_at** | Option<**String**> | Date and time when the associated fine-grained personal access token expires. | 
**token_last_used_at** | Option<**String**> | Date and time when the associated fine-grained personal access token was last used for authentication. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


