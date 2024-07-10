# apps_create_from_manifest_201_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** | Unique identifier of the GitHub app | 
**slug** | **char \*** | The slug name of the GitHub app | [optional] 
**node_id** | **char \*** |  | 
**owner** | [**nullable_simple_user_t**](nullable_simple_user.md) \* |  | 
**name** | **char \*** | The name of the GitHub app | 
**description** | **char \*** |  | 
**external_url** | **char \*** |  | 
**html_url** | **char \*** |  | 
**created_at** | **char \*** |  | 
**updated_at** | **char \*** |  | 
**permissions** | **integration_permissions_t \*** |  | 
**events** | **list_t \*** | The list of events for the GitHub app | 
**installations_count** | **int** | The number of installations associated with the GitHub app | [optional] 
**client_id** | **char \*** |  | 
**client_secret** | **char \*** |  | 
**webhook_secret** | **char \*** |  | 
**pem** | **char \*** |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


