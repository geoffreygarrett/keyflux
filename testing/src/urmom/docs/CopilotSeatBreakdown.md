# OpenapiClient::CopilotSeatBreakdown

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **total** | **Integer** | The total number of seats being billed for the organization as of the current billing cycle. | [optional] |
| **added_this_cycle** | **Integer** | Seats added during the current billing cycle. | [optional] |
| **pending_cancellation** | **Integer** | The number of seats that are pending cancellation at the end of the current billing cycle. | [optional] |
| **pending_invitation** | **Integer** | The number of seats that have been assigned to users that have not yet accepted an invitation to this organization. | [optional] |
| **active_this_cycle** | **Integer** | The number of seats that have used Copilot during the current billing cycle. | [optional] |
| **inactive_this_cycle** | **Integer** | The number of seats that have not used Copilot during the current billing cycle. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CopilotSeatBreakdown.new(
  total: null,
  added_this_cycle: null,
  pending_cancellation: null,
  pending_invitation: null,
  active_this_cycle: null,
  inactive_this_cycle: null
)
```

