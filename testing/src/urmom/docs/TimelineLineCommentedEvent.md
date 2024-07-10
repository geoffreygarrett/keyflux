# OpenapiClient::TimelineLineCommentedEvent

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **event** | **String** |  | [optional] |
| **node_id** | **String** |  | [optional] |
| **comments** | [**Array&lt;PullRequestReviewComment&gt;**](PullRequestReviewComment.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TimelineLineCommentedEvent.new(
  event: null,
  node_id: null,
  comments: null
)
```

