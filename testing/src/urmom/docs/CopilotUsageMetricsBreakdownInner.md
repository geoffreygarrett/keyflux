# OpenapiClient::CopilotUsageMetricsBreakdownInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **language** | **String** | The language in which Copilot suggestions were shown to users in the specified editor. | [optional] |
| **editor** | **String** | The editor in which Copilot suggestions were shown to users for the specified language. | [optional] |
| **suggestions_count** | **Integer** | The number of Copilot suggestions shown to users in the editor specified during the day specified. | [optional] |
| **acceptances_count** | **Integer** | The number of Copilot suggestions accepted by users in the editor specified during the day specified. | [optional] |
| **lines_suggested** | **Integer** | The number of lines of code suggested by Copilot in the editor specified during the day specified. | [optional] |
| **lines_accepted** | **Integer** | The number of lines of code accepted by users in the editor specified during the day specified. | [optional] |
| **active_users** | **Integer** | The number of users who were shown Copilot completion suggestions in the editor specified during the day specified. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CopilotUsageMetricsBreakdownInner.new(
  language: null,
  editor: null,
  suggestions_count: null,
  acceptances_count: null,
  lines_suggested: null,
  lines_accepted: null,
  active_users: null
)
```

