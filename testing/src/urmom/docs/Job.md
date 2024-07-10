# OpenapiClient::Job

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The id of the job. |  |
| **run_id** | **Integer** | The id of the associated workflow run. |  |
| **run_url** | **String** |  |  |
| **run_attempt** | **Integer** | Attempt number of the associated workflow run, 1 for first attempt and higher if the workflow was re-run. | [optional] |
| **node_id** | **String** |  |  |
| **head_sha** | **String** | The SHA of the commit that is being run. |  |
| **url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **status** | **String** | The phase of the lifecycle that the job is currently in. |  |
| **conclusion** | **String** | The outcome of the job. |  |
| **created_at** | **Time** | The time that the job created, in ISO 8601 format. |  |
| **started_at** | **Time** | The time that the job started, in ISO 8601 format. |  |
| **completed_at** | **Time** | The time that the job finished, in ISO 8601 format. |  |
| **name** | **String** | The name of the job. |  |
| **steps** | [**Array&lt;JobStepsInner&gt;**](JobStepsInner.md) | Steps in this job. | [optional] |
| **check_run_url** | **String** |  |  |
| **labels** | **Array&lt;String&gt;** | Labels for the workflow job. Specified by the \&quot;runs_on\&quot; attribute in the action&#39;s workflow file. |  |
| **runner_id** | **Integer** | The ID of the runner to which this job has been assigned. (If a runner hasn&#39;t yet been assigned, this will be null.) |  |
| **runner_name** | **String** | The name of the runner to which this job has been assigned. (If a runner hasn&#39;t yet been assigned, this will be null.) |  |
| **runner_group_id** | **Integer** | The ID of the runner group to which this job has been assigned. (If a runner hasn&#39;t yet been assigned, this will be null.) |  |
| **runner_group_name** | **String** | The name of the runner group to which this job has been assigned. (If a runner hasn&#39;t yet been assigned, this will be null.) |  |
| **workflow_name** | **String** | The name of the workflow. |  |
| **head_branch** | **String** | The name of the current branch. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Job.new(
  id: 21,
  run_id: 5,
  run_url: https://api.github.com/repos/github/hello-world/actions/runs/5,
  run_attempt: 1,
  node_id: MDg6Q2hlY2tSdW40,
  head_sha: 009b8a3a9ccbb128af87f9b1c0f4c62e8a304f6d,
  url: https://api.github.com/repos/github/hello-world/actions/jobs/21,
  html_url: https://github.com/github/hello-world/runs/4,
  status: queued,
  conclusion: success,
  created_at: 2019-08-08T08:00-07:00,
  started_at: 2019-08-08T08:00-07:00,
  completed_at: 2019-08-08T08:00-07:00,
  name: test-coverage,
  steps: null,
  check_run_url: https://api.github.com/repos/github/hello-world/check-runs/4,
  labels: [&quot;self-hosted&quot;,&quot;foo&quot;,&quot;bar&quot;],
  runner_id: 1,
  runner_name: my runner,
  runner_group_id: 2,
  runner_group_name: my runner group,
  workflow_name: Build,
  head_branch: main
)
```

