# OpenapiClient::ReposUpdateWebhookRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **config** | [**WebhookConfig**](WebhookConfig.md) |  | [optional] |
| **events** | **Array&lt;String&gt;** | Determines what [events](https://docs.github.com/webhooks/event-payloads) the hook is triggered for. This replaces the entire array of events. | [optional] |
| **add_events** | **Array&lt;String&gt;** | Determines a list of events to be added to the list of events that the Hook triggers for. | [optional] |
| **remove_events** | **Array&lt;String&gt;** | Determines a list of events to be removed from the list of events that the Hook triggers for. | [optional] |
| **active** | **Boolean** | Determines if notifications are sent when the webhook is triggered. Set to &#x60;true&#x60; to send notifications. | [optional][default to true] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposUpdateWebhookRequest.new(
  config: null,
  events: null,
  add_events: null,
  remove_events: null,
  active: null
)
```

