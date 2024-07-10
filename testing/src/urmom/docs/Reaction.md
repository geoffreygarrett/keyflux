# OpenapiClient::Reaction

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **user** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **content** | **String** | The reaction to use |  |
| **created_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Reaction.new(
  id: 1,
  node_id: MDg6UmVhY3Rpb24x,
  user: null,
  content: heart,
  created_at: 2016-05-20T20:09:31Z
)
```

