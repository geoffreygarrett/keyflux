# WorkflowJob

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**check_run_url** | **String** |  | 
**completed_at** | Option<**String**> |  | 
**conclusion** | Option<**String**> |  | 
**created_at** | **String** | The time that the job created. | 
**head_sha** | **String** |  | 
**html_url** | **String** |  | 
**id** | **i32** |  | 
**labels** | **Vec<String>** | Custom labels for the job. Specified by the [`\"runs-on\"` attribute](https://docs.github.com/actions/reference/workflow-syntax-for-github-actions#jobsjob_idruns-on) in the workflow YAML. | 
**name** | **String** |  | 
**node_id** | **String** |  | 
**run_attempt** | **i32** |  | 
**run_id** | **f32** |  | 
**run_url** | **String** |  | 
**runner_group_id** | Option<**i32**> | The ID of the runner group that is running this job. This will be `null` as long as `workflow_job[status]` is `queued`. | 
**runner_group_name** | Option<**String**> | The name of the runner group that is running this job. This will be `null` as long as `workflow_job[status]` is `queued`. | 
**runner_id** | Option<**i32**> | The ID of the runner that is running this job. This will be `null` as long as `workflow_job[status]` is `queued`. | 
**runner_name** | Option<**String**> | The name of the runner that is running this job. This will be `null` as long as `workflow_job[status]` is `queued`. | 
**started_at** | **String** |  | 
**status** | **String** | The current status of the job. Can be `queued`, `in_progress`, `waiting`, or `completed`. | 
**head_branch** | Option<**String**> | The name of the current branch. | 
**workflow_name** | Option<**String**> | The name of the workflow. | 
**steps** | [**Vec<crate::models::WorkflowStep>**](Workflow_Step.md) |  | 
**url** | **String** |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


