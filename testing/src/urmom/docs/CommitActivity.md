# OpenapiClient::CommitActivity

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **days** | **Array&lt;Integer&gt;** |  |  |
| **total** | **Integer** |  |  |
| **week** | **Integer** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CommitActivity.new(
  days: [0,3,26,20,39,1,0],
  total: 89,
  week: 1336280400
)
```

