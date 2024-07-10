# OpenapiClient::OrgsUpdateWebhookRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **config** | [**OrgsUpdateWebhookRequestConfig**](OrgsUpdateWebhookRequestConfig.md) |  | [optional] |
| **events** | **Array&lt;String&gt;** | Determines what [events](https://docs.github.com/webhooks/event-payloads) the hook is triggered for. | [optional] |
| **active** | **Boolean** | Determines if notifications are sent when the webhook is triggered. Set to &#x60;true&#x60; to send notifications. | [optional][default to true] |
| **name** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgsUpdateWebhookRequest.new(
  config: null,
  events: null,
  active: null,
  name: &quot;web&quot;
)
```

