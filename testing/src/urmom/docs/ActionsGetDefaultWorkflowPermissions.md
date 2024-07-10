# OpenapiClient::ActionsGetDefaultWorkflowPermissions

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **default_workflow_permissions** | [**ActionsDefaultWorkflowPermissions**](ActionsDefaultWorkflowPermissions.md) |  |  |
| **can_approve_pull_request_reviews** | **Boolean** | Whether GitHub Actions can approve pull requests. Enabling this can be a security risk. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsGetDefaultWorkflowPermissions.new(
  default_workflow_permissions: null,
  can_approve_pull_request_reviews: null
)
```

