# OpenapiClient::NullableSimpleCommit

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** | SHA for the commit |  |
| **tree_id** | **String** | SHA for the commit&#39;s tree |  |
| **message** | **String** | Message describing the purpose of the commit |  |
| **timestamp** | **Time** | Timestamp of the commit |  |
| **author** | [**NullableSimpleCommitAuthor**](NullableSimpleCommitAuthor.md) |  |  |
| **committer** | [**NullableSimpleCommitCommitter**](NullableSimpleCommitCommitter.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::NullableSimpleCommit.new(
  id: 7638417db6d59f3c431d3e1f261cc637155684cd,
  tree_id: null,
  message: Fix #42,
  timestamp: 2014-08-09T08:02:04+12:00,
  author: null,
  committer: null
)
```

