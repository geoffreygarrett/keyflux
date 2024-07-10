# OpenapiClient::WorkflowJob1

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
| **labels** | **Array&lt;String&gt;** | Custom labels for the job. Specified by the [&#x60;\&quot;runs-on\&quot;&#x60; attribute](https://docs.github.com/actions/reference/workflow-syntax-for-github-actions#jobsjob_idruns-on) in the workflow YAML. |  |
| **name** | **String** |  |  |
| **node_id** | **String** |  |  |
| **run_attempt** | **Integer** |  |  |
| **run_id** | **Float** |  |  |
| **run_url** | **String** |  |  |
| **runner_group_id** | **Integer** | The ID of the runner group that is running this job. This will be &#x60;null&#x60; as long as &#x60;workflow_job[status]&#x60; is &#x60;queued&#x60;. |  |
| **runner_group_name** | **String** | The name of the runner group that is running this job. This will be &#x60;null&#x60; as long as &#x60;workflow_job[status]&#x60; is &#x60;queued&#x60;. |  |
| **runner_id** | **Integer** | The ID of the runner that is running this job. This will be &#x60;null&#x60; as long as &#x60;workflow_job[status]&#x60; is &#x60;queued&#x60;. |  |
| **runner_name** | **String** | The name of the runner that is running this job. This will be &#x60;null&#x60; as long as &#x60;workflow_job[status]&#x60; is &#x60;queued&#x60;. |  |
| **started_at** | **String** |  |  |
| **status** | **String** | The current status of the job. Can be &#x60;queued&#x60;, &#x60;in_progress&#x60;, or &#x60;completed&#x60;. |  |
| **head_branch** | **String** | The name of the current branch. |  |
| **workflow_name** | **String** | The name of the workflow. |  |
| **steps** | [**Array&lt;WorkflowStep1&gt;**](WorkflowStep1.md) |  |  |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WorkflowJob1.new(
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

