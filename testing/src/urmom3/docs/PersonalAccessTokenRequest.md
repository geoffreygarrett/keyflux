# PersonalAccessTokenRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **i32** | Unique identifier of the request for access via fine-grained personal access token. Used as the `pat_request_id` parameter in the list and review API calls. | 
**owner** | [**crate::models::SimpleUser**](simple-user.md) |  | 
**permissions_added** | [**crate::models::PersonalAccessTokenRequestPermissionsAdded**](personal_access_token_request_permissions_added.md) |  | 
**permissions_upgraded** | [**crate::models::PersonalAccessTokenRequestPermissionsUpgraded**](personal_access_token_request_permissions_upgraded.md) |  | 
**permissions_result** | [**crate::models::PersonalAccessTokenRequestPermissionsResult**](personal_access_token_request_permissions_result.md) |  | 
**repository_selection** | **String** | Type of repository selection requested. | 
**repository_count** | Option<**i32**> | The number of repositories the token is requesting access to. This field is only populated when `repository_selection` is `subset`. | 
**repositories** | Option<[**Vec<crate::models::WebhooksRepositoriesInner>**](webhooks_repositories_inner.md)> | An array of repository objects the token is requesting access to. This field is only populated when `repository_selection` is `subset`. | 
**created_at** | **String** | Date and time when the request for access was created. | 
**token_expired** | **bool** | Whether the associated fine-grained personal access token has expired. | 
**token_expires_at** | Option<**String**> | Date and time when the associated fine-grained personal access token expires. | 
**token_last_used_at** | Option<**String**> | Date and time when the associated fine-grained personal access token was last used for authentication. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


