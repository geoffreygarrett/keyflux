# OpenapiClient::CheckRun

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The id of the check. |  |
| **head_sha** | **String** | The SHA of the commit that is being checked. |  |
| **node_id** | **String** |  |  |
| **external_id** | **String** |  |  |
| **url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **details_url** | **String** |  |  |
| **status** | **String** | The phase of the lifecycle that the check is currently in. Statuses of waiting, requested, and pending are reserved for GitHub Actions check runs. |  |
| **conclusion** | **String** |  |  |
| **started_at** | **Time** |  |  |
| **completed_at** | **Time** |  |  |
| **output** | [**CheckRunOutput**](CheckRunOutput.md) |  |  |
| **name** | **String** | The name of the check. |  |
| **check_suite** | [**CheckRunCheckSuite**](CheckRunCheckSuite.md) |  |  |
| **app** | [**NullableIntegration**](NullableIntegration.md) |  |  |
| **pull_requests** | [**Array&lt;PullRequestMinimal&gt;**](PullRequestMinimal.md) | Pull requests that are open with a &#x60;head_sha&#x60; or &#x60;head_branch&#x60; that matches the check. The returned pull requests do not necessarily indicate pull requests that triggered the check. |  |
| **deployment** | [**DeploymentSimple**](DeploymentSimple.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CheckRun.new(
  id: 21,
  head_sha: 009b8a3a9ccbb128af87f9b1c0f4c62e8a304f6d,
  node_id: MDg6Q2hlY2tSdW40,
  external_id: 42,
  url: https://api.github.com/repos/github/hello-world/check-runs/4,
  html_url: https://github.com/github/hello-world/runs/4,
  details_url: https://example.com,
  status: queued,
  conclusion: neutral,
  started_at: 2018-05-04T01:14:52Z,
  completed_at: 2018-05-04T01:14:52Z,
  output: null,
  name: test-coverage,
  check_suite: null,
  app: null,
  pull_requests: null,
  deployment: null
)
```

