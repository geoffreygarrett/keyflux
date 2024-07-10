# OpenapiClient::App16

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **created_at** | **Time** |  |  |
| **description** | **String** |  |  |
| **events** | **Array&lt;String&gt;** | The list of events for the GitHub app | [optional] |
| **external_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** | Unique identifier of the GitHub app |  |
| **name** | **String** | The name of the GitHub app |  |
| **node_id** | **String** |  |  |
| **owner** | [**User**](User.md) |  |  |
| **permissions** | [**App2Permissions**](App2Permissions.md) |  | [optional] |
| **slug** | **String** | The slug name of the GitHub app | [optional] |
| **updated_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::App16.new(
  created_at: null,
  description: null,
  events: null,
  external_url: null,
  html_url: null,
  id: null,
  name: null,
  node_id: null,
  owner: null,
  permissions: null,
  slug: null,
  updated_at: null
)
```

