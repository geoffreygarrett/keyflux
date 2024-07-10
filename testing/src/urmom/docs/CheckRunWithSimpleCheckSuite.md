# OpenapiClient::CheckRunWithSimpleCheckSuite

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **app** | [**NullableIntegration**](NullableIntegration.md) |  |  |
| **check_suite** | [**SimpleCheckSuite**](SimpleCheckSuite.md) |  |  |
| **completed_at** | **Time** |  |  |
| **conclusion** | **String** |  |  |
| **deployment** | [**DeploymentSimple**](DeploymentSimple.md) |  | [optional] |
| **details_url** | **String** |  |  |
| **external_id** | **String** |  |  |
| **head_sha** | **String** | The SHA of the commit that is being checked. |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** | The id of the check. |  |
| **name** | **String** | The name of the check. |  |
| **node_id** | **String** |  |  |
| **output** | [**CheckRunWithSimpleCheckSuiteOutput**](CheckRunWithSimpleCheckSuiteOutput.md) |  |  |
| **pull_requests** | [**Array&lt;PullRequestMinimal&gt;**](PullRequestMinimal.md) |  |  |
| **started_at** | **Time** |  |  |
| **status** | **String** | The phase of the lifecycle that the check is currently in. |  |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CheckRunWithSimpleCheckSuite.new(
  app: null,
  check_suite: null,
  completed_at: 2018-05-04T01:14:52Z,
  conclusion: neutral,
  deployment: null,
  details_url: https://example.com,
  external_id: 42,
  head_sha: 009b8a3a9ccbb128af87f9b1c0f4c62e8a304f6d,
  html_url: https://github.com/github/hello-world/runs/4,
  id: 21,
  name: test-coverage,
  node_id: MDg6Q2hlY2tSdW40,
  output: null,
  pull_requests: null,
  started_at: 2018-05-04T01:14:52Z,
  status: queued,
  url: https://api.github.com/repos/github/hello-world/check-runs/4
)
```

