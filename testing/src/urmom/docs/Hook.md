# OpenapiClient::Hook

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **type** | **String** |  |  |
| **id** | **Integer** | Unique identifier of the webhook. |  |
| **name** | **String** | The name of a valid service, use &#39;web&#39; for a webhook. |  |
| **active** | **Boolean** | Determines whether the hook is actually triggered on pushes. |  |
| **events** | **Array&lt;String&gt;** | Determines what events the hook is triggered for. Default: [&#39;push&#39;]. |  |
| **config** | [**WebhookConfig**](WebhookConfig.md) |  |  |
| **updated_at** | **Time** |  |  |
| **created_at** | **Time** |  |  |
| **url** | **String** |  |  |
| **test_url** | **String** |  |  |
| **ping_url** | **String** |  |  |
| **deliveries_url** | **String** |  | [optional] |
| **last_response** | [**HookResponse**](HookResponse.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Hook.new(
  type: null,
  id: 42,
  name: web,
  active: true,
  events: [&quot;push&quot;,&quot;pull_request&quot;],
  config: null,
  updated_at: 2011-09-06T20:39:23Z,
  created_at: 2011-09-06T17:26:27Z,
  url: https://api.github.com/repos/octocat/Hello-World/hooks/1,
  test_url: https://api.github.com/repos/octocat/Hello-World/hooks/1/test,
  ping_url: https://api.github.com/repos/octocat/Hello-World/hooks/1/pings,
  deliveries_url: https://api.github.com/repos/octocat/Hello-World/hooks/1/deliveries,
  last_response: null
)
```

