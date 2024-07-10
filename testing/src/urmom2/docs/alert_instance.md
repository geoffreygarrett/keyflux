# alert_instance_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**analysis_key** | **char \*** | Identifies the configuration under which the analysis was executed. For example, in GitHub Actions this includes the workflow filename and job name. | 
**category** | **char \*** | Identifies the configuration under which the analysis was executed. | [optional] 
**classifications** | **list_t \*** |  | [optional] 
**commit_sha** | **char \*** |  | [optional] 
**environment** | **char \*** | Identifies the variable values associated with the environment in which the analysis that generated this alert instance was performed, such as the language that was analyzed. | 
**location** | [**alert_instance_location_t**](alert_instance_location.md) \* |  | [optional] 
**message** | [**code_scanning_alert_instance_message_t**](code_scanning_alert_instance_message.md) \* |  | [optional] 
**ref** | **char \*** | The full Git reference, formatted as &#x60;refs/heads/&lt;branch name&gt;&#x60;. | 
**state** | **github_v3_rest_api_alert_instance_STATE_e** | State of a code scanning alert. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


