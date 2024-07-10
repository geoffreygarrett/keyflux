# OpenapiClient::TimelineCommitCommentedEvent

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **event** | **String** |  | [optional] |
| **node_id** | **String** |  | [optional] |
| **commit_id** | **String** |  | [optional] |
| **comments** | [**Array&lt;CommitComment&gt;**](CommitComment.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TimelineCommitCommentedEvent.new(
  event: null,
  node_id: null,
  commit_id: null,
  comments: null
)
```

