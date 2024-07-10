# activity_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** |  | 
**node_id** | **char \*** |  | 
**before** | **char \*** | The SHA of the commit before the activity. | 
**after** | **char \*** | The SHA of the commit after the activity. | 
**ref** | **char \*** | The full Git reference, formatted as &#x60;refs/heads/&lt;branch name&gt;&#x60;. | 
**timestamp** | **char \*** | The time when the activity occurred. | 
**activity_type** | **github_v3_rest_api_activity_ACTIVITYTYPE_e** | The type of the activity that was performed. | 
**actor** | [**nullable_simple_user_t**](nullable_simple_user.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


