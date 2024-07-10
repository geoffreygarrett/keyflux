# OpenapiClient::DeploymentWorkflowRun4

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **actor** | [**User**](User.md) |  |  |
| **artifacts_url** | **String** |  | [optional] |
| **cancel_url** | **String** |  | [optional] |
| **check_suite_id** | **Integer** |  |  |
| **check_suite_node_id** | **String** |  |  |
| **check_suite_url** | **String** |  | [optional] |
| **conclusion** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **display_title** | **String** |  |  |
| **event** | **String** |  |  |
| **head_branch** | **String** |  |  |
| **head_commit** | **Object** |  | [optional] |
| **head_repository** | [**DeploymentWorkflowRunHeadRepository**](DeploymentWorkflowRunHeadRepository.md) |  | [optional] |
| **head_sha** | **String** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **jobs_url** | **String** |  | [optional] |
| **logs_url** | **String** |  | [optional] |
| **name** | **String** |  |  |
| **node_id** | **String** |  |  |
| **path** | **String** |  |  |
| **previous_attempt_url** | **Object** |  | [optional] |
| **pull_requests** | [**Array&lt;CheckRunPullRequest&gt;**](CheckRunPullRequest.md) |  |  |
| **referenced_workflows** | [**Array&lt;DeploymentWorkflowRunReferencedWorkflowsInner&gt;**](DeploymentWorkflowRunReferencedWorkflowsInner.md) |  | [optional] |
| **repository** | [**DeploymentWorkflowRunHeadRepository**](DeploymentWorkflowRunHeadRepository.md) |  | [optional] |
| **rerun_url** | **String** |  | [optional] |
| **run_attempt** | **Integer** |  |  |
| **run_number** | **Integer** |  |  |
| **run_started_at** | **Time** |  |  |
| **status** | **String** |  |  |
| **triggering_actor** | [**User**](User.md) |  |  |
| **updated_at** | **Time** |  |  |
| **url** | **String** |  |  |
| **workflow_id** | **Integer** |  |  |
| **workflow_url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DeploymentWorkflowRun4.new(
  actor: null,
  artifacts_url: null,
  cancel_url: null,
  check_suite_id: null,
  check_suite_node_id: null,
  check_suite_url: null,
  conclusion: null,
  created_at: null,
  display_title: null,
  event: null,
  head_branch: null,
  head_commit: null,
  head_repository: null,
  head_sha: null,
  html_url: null,
  id: null,
  jobs_url: null,
  logs_url: null,
  name: null,
  node_id: null,
  path: null,
  previous_attempt_url: null,
  pull_requests: null,
  referenced_workflows: null,
  repository: null,
  rerun_url: null,
  run_attempt: null,
  run_number: null,
  run_started_at: null,
  status: null,
  triggering_actor: null,
  updated_at: null,
  url: null,
  workflow_id: null,
  workflow_url: null
)
```

