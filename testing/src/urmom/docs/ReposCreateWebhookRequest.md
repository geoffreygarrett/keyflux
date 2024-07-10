# OpenapiClient::ReposCreateWebhookRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | Use &#x60;web&#x60; to create a webhook. Default: &#x60;web&#x60;. This parameter only accepts the value &#x60;web&#x60;. | [optional] |
| **config** | [**ReposCreateWebhookRequestConfig**](ReposCreateWebhookRequestConfig.md) |  | [optional] |
| **events** | **Array&lt;String&gt;** | Determines what [events](https://docs.github.com/webhooks/event-payloads) the hook is triggered for. | [optional] |
| **active** | **Boolean** | Determines if notifications are sent when the webhook is triggered. Set to &#x60;true&#x60; to send notifications. | [optional][default to true] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposCreateWebhookRequest.new(
  name: null,
  config: null,
  events: null,
  active: null
)
```

