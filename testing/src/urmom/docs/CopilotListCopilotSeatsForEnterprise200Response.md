# OpenapiClient::CopilotListCopilotSeatsForEnterprise200Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **total_seats** | **Integer** | The total number of Copilot seats the enterprise is being billed for. Users with access through multiple organizations or enterprise teams are only counted once. | [optional] |
| **seats** | [**Array&lt;CopilotSeatDetails&gt;**](CopilotSeatDetails.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CopilotListCopilotSeatsForEnterprise200Response.new(
  total_seats: null,
  seats: null
)
```

