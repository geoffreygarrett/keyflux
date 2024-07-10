# OpenapiClient::WebhookWorkflowJobQueuedWorkflowJob

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **check_run_url** | **String** |  |  |
| **completed_at** | **String** |  |  |
| **conclusion** | **String** |  |  |
| **created_at** | **String** | The time that the job created. |  |
| **head_sha** | **String** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **labels** | **Array&lt;String&gt;** |  |  |
| **name** | **String** |  |  |
| **node_id** | **String** |  |  |
| **run_attempt** | **Integer** |  |  |
| **run_id** | **Float** |  |  |
| **run_url** | **String** |  |  |
| **runner_group_id** | **Integer** |  |  |
| **runner_group_name** | **String** |  |  |
| **runner_id** | **Integer** |  |  |
| **runner_name** | **String** |  |  |
| **started_at** | **Time** |  |  |
| **status** | **String** |  |  |
| **head_branch** | **String** | The name of the current branch. |  |
| **workflow_name** | **String** | The name of the workflow. |  |
| **steps** | [**Array&lt;WorkflowStep3&gt;**](WorkflowStep3.md) |  |  |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookWorkflowJobQueuedWorkflowJob.new(
  check_run_url: null,
  completed_at: null,
  conclusion: null,
  created_at: null,
  head_sha: null,
  html_url: null,
  id: null,
  labels: null,
  name: null,
  node_id: null,
  run_attempt: null,
  run_id: null,
  run_url: null,
  runner_group_id: null,
  runner_group_name: null,
  runner_id: null,
  runner_name: null,
  started_at: null,
  status: null,
  head_branch: null,
  workflow_name: null,
  steps: null,
  url: null
)
```

