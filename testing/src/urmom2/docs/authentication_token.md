# authentication_token_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**token** | **char \*** | The token used for authentication | 
**expires_at** | **char \*** | The time this token expires | 
**permissions** | [**object_t**](.md) \* |  | [optional] 
**repositories** | [**list_t**](repository.md) \* | The repositories this token has access to | [optional] 
**single_file** | **char \*** |  | [optional] 
**repository_selection** | **github_v3_rest_api_authentication_token_REPOSITORYSELECTION_e** | Describe whether all repositories have been selected or there&#39;s a selection involved | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


