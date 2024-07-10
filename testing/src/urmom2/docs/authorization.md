# authorization_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **long** |  | 
**url** | **char \*** |  | 
**scopes** | **list_t \*** | A list of scopes that this authorization is in. | 
**token** | **char \*** |  | 
**token_last_eight** | **char \*** |  | 
**hashed_token** | **char \*** |  | 
**app** | [**authorization_app_t**](authorization_app.md) \* |  | 
**note** | **char \*** |  | 
**note_url** | **char \*** |  | 
**updated_at** | **char \*** |  | 
**created_at** | **char \*** |  | 
**fingerprint** | **char \*** |  | 
**user** | [**nullable_simple_user_t**](nullable_simple_user.md) \* |  | [optional] 
**installation** | [**nullable_scoped_installation_t**](nullable_scoped_installation.md) \* |  | [optional] 
**expires_at** | **char \*** |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


