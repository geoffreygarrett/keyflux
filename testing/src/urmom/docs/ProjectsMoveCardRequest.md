# OpenapiClient::ProjectsMoveCardRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **position** | **String** | The position of the card in a column. Can be one of: &#x60;top&#x60;, &#x60;bottom&#x60;, or &#x60;after:&lt;card_id&gt;&#x60; to place after the specified card. |  |
| **column_id** | **Integer** | The unique identifier of the column the card should be moved to | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProjectsMoveCardRequest.new(
  position: bottom,
  column_id: 42
)
```

