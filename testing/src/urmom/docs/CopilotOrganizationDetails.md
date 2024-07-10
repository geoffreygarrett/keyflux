# OpenapiClient::CopilotOrganizationDetails

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **seat_breakdown** | [**CopilotSeatBreakdown**](CopilotSeatBreakdown.md) |  |  |
| **public_code_suggestions** | **String** | The organization policy for allowing or disallowing Copilot to make suggestions that match public code. |  |
| **ide_chat** | **String** | The organization policy for allowing or disallowing organization members to use Copilot Chat within their editor. | [optional] |
| **platform_chat** | **String** | The organization policy for allowing or disallowing organization members to use Copilot features within github.com. | [optional] |
| **cli** | **String** | The organization policy for allowing or disallowing organization members to use Copilot within their CLI. | [optional] |
| **seat_management_setting** | **String** | The mode of assigning new seats. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CopilotOrganizationDetails.new(
  seat_breakdown: null,
  public_code_suggestions: null,
  ide_chat: null,
  platform_chat: null,
  cli: null,
  seat_management_setting: null
)
```

