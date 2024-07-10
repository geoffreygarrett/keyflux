# OpenapiClient::IssueEventDismissedReview

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **state** | **String** |  |  |
| **review_id** | **Integer** |  |  |
| **dismissal_message** | **String** |  |  |
| **dismissal_commit_id** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::IssueEventDismissedReview.new(
  state: null,
  review_id: null,
  dismissal_message: null,
  dismissal_commit_id: null
)
```

