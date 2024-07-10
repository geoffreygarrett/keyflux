# apps_scope_token_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**access_token** | **char \*** | The access token used to authenticate to the GitHub API. | 
**target** | **char \*** | The name of the user or organization to scope the user access token to. **Required** unless &#x60;target_id&#x60; is specified. | [optional] 
**target_id** | **int** | The ID of the user or organization to scope the user access token to. **Required** unless &#x60;target&#x60; is specified. | [optional] 
**repositories** | **list_t \*** | The list of repository names to scope the user access token to. &#x60;repositories&#x60; may not be specified if &#x60;repository_ids&#x60; is specified. | [optional] 
**repository_ids** | **list_t \*** | The list of repository IDs to scope the user access token to. &#x60;repository_ids&#x60; may not be specified if &#x60;repositories&#x60; is specified. | [optional] 
**permissions** | [**app_permissions_t**](app_permissions.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


