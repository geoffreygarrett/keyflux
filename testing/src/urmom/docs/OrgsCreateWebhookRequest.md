# OpenapiClient::OrgsCreateWebhookRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | Must be passed as \&quot;web\&quot;. |  |
| **config** | [**OrgsCreateWebhookRequestConfig**](OrgsCreateWebhookRequestConfig.md) |  |  |
| **events** | **Array&lt;String&gt;** | Determines what [events](https://docs.github.com/webhooks/event-payloads) the hook is triggered for. Set to &#x60;[\&quot;*\&quot;]&#x60; to receive all possible events. | [optional] |
| **active** | **Boolean** | Determines if notifications are sent when the webhook is triggered. Set to &#x60;true&#x60; to send notifications. | [optional][default to true] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgsCreateWebhookRequest.new(
  name: null,
  config: null,
  events: null,
  active: null
)
```

