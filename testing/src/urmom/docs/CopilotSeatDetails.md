# OpenapiClient::CopilotSeatDetails

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **assignee** | [**CopilotSeatDetailsAssignee**](CopilotSeatDetailsAssignee.md) |  |  |
| **organization** | [**CopilotSeatDetailsOrganization**](CopilotSeatDetailsOrganization.md) |  | [optional] |
| **assigning_team** | [**CopilotSeatDetailsAssigningTeam**](CopilotSeatDetailsAssigningTeam.md) |  | [optional] |
| **pending_cancellation_date** | **Date** | The pending cancellation date for the seat, in &#x60;YYYY-MM-DD&#x60; format. This will be null unless the assignee&#39;s Copilot access has been canceled during the current billing cycle. If the seat has been cancelled, this corresponds to the start of the organization&#39;s next billing cycle. | [optional] |
| **last_activity_at** | **Time** | Timestamp of user&#39;s last GitHub Copilot activity, in ISO 8601 format. | [optional] |
| **last_activity_editor** | **String** | Last editor that was used by the user for a GitHub Copilot completion. | [optional] |
| **created_at** | **Time** | Timestamp of when the assignee was last granted access to GitHub Copilot, in ISO 8601 format. |  |
| **updated_at** | **Time** | Timestamp of when the assignee&#39;s GitHub Copilot access was last updated, in ISO 8601 format. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CopilotSeatDetails.new(
  assignee: null,
  organization: null,
  assigning_team: null,
  pending_cancellation_date: null,
  last_activity_at: null,
  last_activity_editor: null,
  created_at: null,
  updated_at: null
)
```

