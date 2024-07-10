# OpenapiClient::ActivitySetRepoSubscriptionRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **subscribed** | **Boolean** | Determines if notifications should be received from this repository. | [optional] |
| **ignored** | **Boolean** | Determines if all notifications should be blocked from this repository. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActivitySetRepoSubscriptionRequest.new(
  subscribed: null,
  ignored: null
)
```

