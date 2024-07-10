# OpenapiClient::SimpleCheckSuite

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **after** | **String** |  | [optional] |
| **app** | [**Integration**](Integration.md) |  | [optional] |
| **before** | **String** |  | [optional] |
| **conclusion** | **String** |  | [optional] |
| **created_at** | **Time** |  | [optional] |
| **head_branch** | **String** |  | [optional] |
| **head_sha** | **String** | The SHA of the head commit that is being checked. | [optional] |
| **id** | **Integer** |  | [optional] |
| **node_id** | **String** |  | [optional] |
| **pull_requests** | [**Array&lt;PullRequestMinimal&gt;**](PullRequestMinimal.md) |  | [optional] |
| **repository** | [**MinimalRepository**](MinimalRepository.md) |  | [optional] |
| **status** | **String** |  | [optional] |
| **updated_at** | **Time** |  | [optional] |
| **url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SimpleCheckSuite.new(
  after: d6fde92930d4715a2b49857d24b940956b26d2d3,
  app: null,
  before: 146e867f55c26428e5f9fade55a9bbf5e95a7912,
  conclusion: neutral,
  created_at: null,
  head_branch: master,
  head_sha: 009b8a3a9ccbb128af87f9b1c0f4c62e8a304f6d,
  id: 5,
  node_id: MDEwOkNoZWNrU3VpdGU1,
  pull_requests: null,
  repository: null,
  status: completed,
  updated_at: null,
  url: https://api.github.com/repos/github/hello-world/check-suites/5
)
```

