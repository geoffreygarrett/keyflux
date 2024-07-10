# OpenapiClient::ReposCreateDispatchEventRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **event_type** | **String** | A custom webhook event name. Must be 100 characters or fewer. |  |
| **client_payload** | **Hash&lt;String, Object&gt;** | JSON payload with extra information about the webhook event that your action or workflow may use. The maximum number of top-level properties is 10. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposCreateDispatchEventRequest.new(
  event_type: null,
  client_payload: null
)
```

