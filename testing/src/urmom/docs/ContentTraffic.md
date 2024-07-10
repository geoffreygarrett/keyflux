# OpenapiClient::ContentTraffic

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **path** | **String** |  |  |
| **title** | **String** |  |  |
| **count** | **Integer** |  |  |
| **uniques** | **Integer** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ContentTraffic.new(
  path: /github/hubot,
  title: github/hubot: A customizable life embetterment robot.,
  count: 3542,
  uniques: 2225
)
```

