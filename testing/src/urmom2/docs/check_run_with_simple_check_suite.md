# check_run_with_simple_check_suite_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**app** | [**nullable_integration_t**](nullable_integration.md) \* |  | 
**check_suite** | [**simple_check_suite_t**](simple_check_suite.md) \* |  | 
**completed_at** | **char \*** |  | 
**conclusion** | **github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_e** |  | 
**deployment** | [**deployment_simple_t**](deployment_simple.md) \* |  | [optional] 
**details_url** | **char \*** |  | 
**external_id** | **char \*** |  | 
**head_sha** | **char \*** | The SHA of the commit that is being checked. | 
**html_url** | **char \*** |  | 
**id** | **int** | The id of the check. | 
**name** | **char \*** | The name of the check. | 
**node_id** | **char \*** |  | 
**output** | [**check_run_with_simple_check_suite_output_t**](check_run_with_simple_check_suite_output.md) \* |  | 
**pull_requests** | [**list_t**](pull_request_minimal.md) \* |  | 
**started_at** | **char \*** |  | 
**status** | **github_v3_rest_api_check_run_with_simple_check_suite_STATUS_e** | The phase of the lifecycle that the check is currently in. | 
**url** | **char \*** |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


