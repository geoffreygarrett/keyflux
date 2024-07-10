# OpenapiClient::TagProtection

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  | [optional] |
| **created_at** | **String** |  | [optional] |
| **updated_at** | **String** |  | [optional] |
| **enabled** | **Boolean** |  | [optional] |
| **pattern** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TagProtection.new(
  id: 2,
  created_at: 2011-01-26T19:01:12Z,
  updated_at: 2011-01-26T19:01:12Z,
  enabled: true,
  pattern: v1.*
)
```

