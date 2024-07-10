# OpenapiClient::CopilotUsageMetrics

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **day** | **Date** | The date for which the usage metrics are reported, in &#x60;YYYY-MM-DD&#x60; format. |  |
| **total_suggestions_count** | **Integer** | The total number of Copilot code completion suggestions shown to users. | [optional] |
| **total_acceptances_count** | **Integer** | The total number of Copilot code completion suggestions accepted by users. | [optional] |
| **total_lines_suggested** | **Integer** | The total number of lines of code completions suggested by Copilot. | [optional] |
| **total_lines_accepted** | **Integer** | The total number of lines of code completions accepted by users. | [optional] |
| **total_active_users** | **Integer** | The total number of users who were shown Copilot code completion suggestions during the day specified. | [optional] |
| **total_chat_acceptances** | **Integer** | The total instances of users who accepted code suggested by Copilot Chat in the IDE (panel and inline). | [optional] |
| **total_chat_turns** | **Integer** | The total number of chat turns (prompt and response pairs) sent between users and Copilot Chat in the IDE. | [optional] |
| **total_active_chat_users** | **Integer** | The total number of users who interacted with Copilot Chat in the IDE during the day specified. | [optional] |
| **breakdown** | [**Array&lt;CopilotUsageMetricsBreakdownInner&gt;**](CopilotUsageMetricsBreakdownInner.md) | Breakdown of Copilot code completions usage by language and editor |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CopilotUsageMetrics.new(
  day: null,
  total_suggestions_count: null,
  total_acceptances_count: null,
  total_lines_suggested: null,
  total_lines_accepted: null,
  total_active_users: null,
  total_chat_acceptances: null,
  total_chat_turns: null,
  total_active_chat_users: null,
  breakdown: null
)
```

