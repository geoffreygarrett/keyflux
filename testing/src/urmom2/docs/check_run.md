# check_run_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** | The id of the check. | 
**head_sha** | **char \*** | The SHA of the commit that is being checked. | 
**node_id** | **char \*** |  | 
**external_id** | **char \*** |  | 
**url** | **char \*** |  | 
**html_url** | **char \*** |  | 
**details_url** | **char \*** |  | 
**status** | **github_v3_rest_api_check_run_STATUS_e** | The phase of the lifecycle that the check is currently in. Statuses of waiting, requested, and pending are reserved for GitHub Actions check runs. | 
**conclusion** | **github_v3_rest_api_check_run_CONCLUSION_e** |  | 
**started_at** | **char \*** |  | 
**completed_at** | **char \*** |  | 
**output** | [**check_run_output_t**](check_run_output.md) \* |  | 
**name** | **char \*** | The name of the check. | 
**check_suite** | [**check_run_check_suite_t**](check_run_check_suite.md) \* |  | 
**app** | [**nullable_integration_t**](nullable_integration.md) \* |  | 
**pull_requests** | [**list_t**](pull_request_minimal.md) \* | Pull requests that are open with a &#x60;head_sha&#x60; or &#x60;head_branch&#x60; that matches the check. The returned pull requests do not necessarily indicate pull requests that triggered the check. | 
**deployment** | [**deployment_simple_t**](deployment_simple.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


