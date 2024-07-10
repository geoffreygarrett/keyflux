# OpenapiClient::OrgsReviewPatGrantRequestRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** | Action to apply to the request. |  |
| **reason** | **String** | Reason for approving or denying the request. Max 1024 characters. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgsReviewPatGrantRequestRequest.new(
  action: null,
  reason: null
)
```

