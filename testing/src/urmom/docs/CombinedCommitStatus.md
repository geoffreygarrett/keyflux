# OpenapiClient::CombinedCommitStatus

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **state** | **String** |  |  |
| **statuses** | [**Array&lt;SimpleCommitStatus&gt;**](SimpleCommitStatus.md) |  |  |
| **sha** | **String** |  |  |
| **total_count** | **Integer** |  |  |
| **repository** | [**MinimalRepository**](MinimalRepository.md) |  |  |
| **commit_url** | **String** |  |  |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CombinedCommitStatus.new(
  state: null,
  statuses: null,
  sha: null,
  total_count: null,
  repository: null,
  commit_url: null,
  url: null
)
```

