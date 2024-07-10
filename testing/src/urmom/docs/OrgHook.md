# OpenapiClient::OrgHook

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **url** | **String** |  |  |
| **ping_url** | **String** |  |  |
| **deliveries_url** | **String** |  | [optional] |
| **name** | **String** |  |  |
| **events** | **Array&lt;String&gt;** |  |  |
| **active** | **Boolean** |  |  |
| **config** | [**OrgHookConfig**](OrgHookConfig.md) |  |  |
| **updated_at** | **Time** |  |  |
| **created_at** | **Time** |  |  |
| **type** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgHook.new(
  id: 1,
  url: https://api.github.com/orgs/octocat/hooks/1,
  ping_url: https://api.github.com/orgs/octocat/hooks/1/pings,
  deliveries_url: https://api.github.com/orgs/octocat/hooks/1/deliveries,
  name: web,
  events: [&quot;push&quot;,&quot;pull_request&quot;],
  active: true,
  config: null,
  updated_at: 2011-09-06T20:39:23Z,
  created_at: 2011-09-06T17:26:27Z,
  type: null
)
```

