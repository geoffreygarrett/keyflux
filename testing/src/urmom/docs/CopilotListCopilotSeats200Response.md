# OpenapiClient::CopilotListCopilotSeats200Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **total_seats** | **Integer** | Total number of Copilot seats for the organization currently being billed. | [optional] |
| **seats** | [**Array&lt;CopilotSeatDetails&gt;**](CopilotSeatDetails.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CopilotListCopilotSeats200Response.new(
  total_seats: null,
  seats: null
)
```

