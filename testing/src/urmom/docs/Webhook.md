# OpenapiClient::Webhook

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **active** | **Boolean** | Determines whether the hook is actually triggered for the events it subscribes to. |  |
| **app_id** | **Integer** | Only included for GitHub Apps. When you register a new GitHub App, GitHub sends a ping event to the webhook URL you specified during registration. The GitHub App ID sent in this field is required for authenticating an app. | [optional] |
| **config** | [**WebhookConfig**](WebhookConfig.md) |  |  |
| **created_at** | **Time** |  |  |
| **deliveries_url** | **String** |  | [optional] |
| **events** | **Array&lt;String&gt;** | Determines what events the hook is triggered for. Default: [&#39;push&#39;]. |  |
| **id** | **Integer** | Unique identifier of the webhook. |  |
| **last_response** | [**HookResponse**](HookResponse.md) |  | [optional] |
| **name** | **String** | The type of webhook. The only valid value is &#39;web&#39;. |  |
| **ping_url** | **String** |  | [optional] |
| **test_url** | **String** |  | [optional] |
| **type** | **String** |  |  |
| **updated_at** | **Time** |  |  |
| **url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Webhook.new(
  active: null,
  app_id: null,
  config: null,
  created_at: null,
  deliveries_url: null,
  events: null,
  id: null,
  last_response: null,
  name: null,
  ping_url: null,
  test_url: null,
  type: null,
  updated_at: null,
  url: null
)
```

