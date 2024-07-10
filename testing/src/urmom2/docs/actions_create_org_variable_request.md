# actions_create_org_variable_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **char \*** | The name of the variable. | 
**value** | **char \*** | The value of the variable. | 
**visibility** | **github_v3_rest_api_actions_create_org_variable_request_VISIBILITY_e** | The type of repositories in the organization that can access the variable. &#x60;selected&#x60; means only the repositories specified by &#x60;selected_repository_ids&#x60; can access the variable. | 
**selected_repository_ids** | **list_t \*** | An array of repository ids that can access the organization variable. You can only provide a list of repository ids when the &#x60;visibility&#x60; is set to &#x60;selected&#x60;. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


