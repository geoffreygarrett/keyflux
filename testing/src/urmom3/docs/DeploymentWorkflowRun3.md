# DeploymentWorkflowRun3

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**actor** | Option<[**crate::models::User**](User.md)> |  | 
**artifacts_url** | Option<**String**> |  | [optional]
**cancel_url** | Option<**String**> |  | [optional]
**check_suite_id** | **i32** |  | 
**check_suite_node_id** | **String** |  | 
**check_suite_url** | Option<**String**> |  | [optional]
**conclusion** | Option<**String**> |  | 
**created_at** | **String** |  | 
**event** | **String** |  | 
**head_branch** | **String** |  | 
**head_commit** | Option<[**serde_json::Value**](.md)> |  | [optional]
**head_repository** | Option<[**crate::models::DeploymentWorkflowRun1HeadRepository**](Deployment_Workflow_Run_1_head_repository.md)> |  | [optional]
**head_sha** | **String** |  | 
**html_url** | **String** |  | 
**id** | **i32** |  | 
**jobs_url** | Option<**String**> |  | [optional]
**logs_url** | Option<**String**> |  | [optional]
**name** | **String** |  | 
**node_id** | **String** |  | 
**path** | **String** |  | 
**previous_attempt_url** | Option<**String**> |  | [optional]
**pull_requests** | [**Vec<crate::models::CheckRunPullRequest>**](Check_Run_Pull_Request.md) |  | 
**referenced_workflows** | Option<[**Vec<crate::models::DeploymentWorkflowRunReferencedWorkflowsInner>**](Deployment_Workflow_Run_referenced_workflows_inner.md)> |  | [optional]
**repository** | Option<[**crate::models::DeploymentWorkflowRun1HeadRepository**](Deployment_Workflow_Run_1_head_repository.md)> |  | [optional]
**rerun_url** | Option<**String**> |  | [optional]
**run_attempt** | **i32** |  | 
**run_number** | **i32** |  | 
**run_started_at** | **String** |  | 
**status** | **String** |  | 
**triggering_actor** | Option<[**crate::models::User**](User.md)> |  | 
**updated_at** | **String** |  | 
**url** | **String** |  | 
**workflow_id** | **i32** |  | 
**workflow_url** | Option<**String**> |  | [optional]
**display_title** | **String** |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


