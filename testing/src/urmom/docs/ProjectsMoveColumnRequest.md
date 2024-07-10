# OpenapiClient::ProjectsMoveColumnRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **position** | **String** | The position of the column in a project. Can be one of: &#x60;first&#x60;, &#x60;last&#x60;, or &#x60;after:&lt;column_id&gt;&#x60; to place after the specified column. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProjectsMoveColumnRequest.new(
  position: last
)
```

