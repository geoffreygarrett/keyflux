# OpenapiClient::CopilotCancelCopilotSeatAssignmentForUsersRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **selected_usernames** | **Array&lt;String&gt;** | The usernames of the organization members for which to revoke access to GitHub Copilot. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CopilotCancelCopilotSeatAssignmentForUsersRequest.new(
  selected_usernames: null
)
```

