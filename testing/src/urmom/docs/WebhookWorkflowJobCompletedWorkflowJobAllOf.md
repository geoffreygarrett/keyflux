# OpenapiClient::WebhookWorkflowJobCompletedWorkflowJobAllOf

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **check_run_url** | **String** |  | [optional] |
| **completed_at** | **String** |  | [optional] |
| **conclusion** | **String** |  |  |
| **created_at** | **String** | The time that the job created. | [optional] |
| **head_sha** | **String** |  | [optional] |
| **html_url** | **String** |  | [optional] |
| **id** | **Integer** |  | [optional] |
| **labels** | **Array&lt;String&gt;** |  | [optional] |
| **name** | **String** |  | [optional] |
| **node_id** | **String** |  | [optional] |
| **run_attempt** | **Integer** |  | [optional] |
| **run_id** | **Integer** |  | [optional] |
| **run_url** | **String** |  | [optional] |
| **runner_group_id** | **Float** |  | [optional] |
| **runner_group_name** | **String** |  | [optional] |
| **runner_id** | **Float** |  | [optional] |
| **runner_name** | **String** |  | [optional] |
| **started_at** | **String** |  | [optional] |
| **status** | **String** |  | [optional] |
| **head_branch** | **String** | The name of the current branch. | [optional] |
| **workflow_name** | **String** | The name of the workflow. | [optional] |
| **steps** | **Array&lt;Object&gt;** |  | [optional] |
| **url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookWorkflowJobCompletedWorkflowJobAllOf.new(
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

