# OpenapiClient::OrgsUpdateWebhookRequestConfig

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** | The URL to which the payloads will be delivered. |  |
| **content_type** | **String** | The media type used to serialize the payloads. Supported values include &#x60;json&#x60; and &#x60;form&#x60;. The default is &#x60;form&#x60;. | [optional] |
| **secret** | **String** | If provided, the &#x60;secret&#x60; will be used as the &#x60;key&#x60; to generate the HMAC hex digest value for [delivery signature headers](https://docs.github.com/webhooks/event-payloads/#delivery-headers). | [optional] |
| **insecure_ssl** | [**WebhookConfigInsecureSsl**](WebhookConfigInsecureSsl.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgsUpdateWebhookRequestConfig.new(
  url: https://example.com/webhook,
  content_type: &quot;json&quot;,
  secret: &quot;********&quot;,
  insecure_ssl: null
)
```

