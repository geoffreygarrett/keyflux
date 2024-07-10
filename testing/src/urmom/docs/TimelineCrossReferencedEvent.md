# OpenapiClient::TimelineCrossReferencedEvent

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **event** | **String** |  |  |
| **actor** | [**SimpleUser**](SimpleUser.md) |  | [optional] |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **source** | [**TimelineCrossReferencedEventSource**](TimelineCrossReferencedEventSource.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TimelineCrossReferencedEvent.new(
  event: null,
  actor: null,
  created_at: null,
  updated_at: null,
  source: null
)
```

