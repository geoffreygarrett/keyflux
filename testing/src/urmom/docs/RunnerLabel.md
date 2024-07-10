# OpenapiClient::RunnerLabel

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the label. | [optional] |
| **name** | **String** | Name of the label. |  |
| **type** | **String** | The type of label. Read-only labels are applied automatically when the runner is configured. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RunnerLabel.new(
  id: null,
  name: null,
  type: null
)
```

