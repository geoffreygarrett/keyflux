# OpenapiClient::CheckSuite

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **head_branch** | **String** |  |  |
| **head_sha** | **String** | The SHA of the head commit that is being checked. |  |
| **status** | **String** | The phase of the lifecycle that the check suite is currently in. Statuses of waiting, requested, and pending are reserved for GitHub Actions check suites. |  |
| **conclusion** | **String** |  |  |
| **url** | **String** |  |  |
| **before** | **String** |  |  |
| **after** | **String** |  |  |
| **pull_requests** | [**Array&lt;PullRequestMinimal&gt;**](PullRequestMinimal.md) |  |  |
| **app** | [**NullableIntegration**](NullableIntegration.md) |  |  |
| **repository** | [**MinimalRepository**](MinimalRepository.md) |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **head_commit** | [**SimpleCommit**](SimpleCommit.md) |  |  |
| **latest_check_runs_count** | **Integer** |  |  |
| **check_runs_url** | **String** |  |  |
| **rerequestable** | **Boolean** |  | [optional] |
| **runs_rerequestable** | **Boolean** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CheckSuite.new(
  id: 5,
  node_id: MDEwOkNoZWNrU3VpdGU1,
  head_branch: master,
  head_sha: 009b8a3a9ccbb128af87f9b1c0f4c62e8a304f6d,
  status: completed,
  conclusion: neutral,
  url: https://api.github.com/repos/github/hello-world/check-suites/5,
  before: 146e867f55c26428e5f9fade55a9bbf5e95a7912,
  after: d6fde92930d4715a2b49857d24b940956b26d2d3,
  pull_requests: null,
  app: null,
  repository: null,
  created_at: null,
  updated_at: null,
  head_commit: null,
  latest_check_runs_count: null,
  check_runs_url: null,
  rerequestable: null,
  runs_rerequestable: null
)
```

