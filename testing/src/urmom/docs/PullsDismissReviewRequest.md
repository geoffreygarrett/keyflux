# OpenapiClient::PullsDismissReviewRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **message** | **String** | The message for the pull request review dismissal |  |
| **event** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PullsDismissReviewRequest.new(
  message: null,
  event: &quot;DISMISS&quot;
)
```

