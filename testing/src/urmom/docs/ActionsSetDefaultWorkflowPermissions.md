# OpenapiClient::ActionsSetDefaultWorkflowPermissions

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **default_workflow_permissions** | [**ActionsDefaultWorkflowPermissions**](ActionsDefaultWorkflowPermissions.md) |  | [optional] |
| **can_approve_pull_request_reviews** | **Boolean** | Whether GitHub Actions can approve pull requests. Enabling this can be a security risk. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsSetDefaultWorkflowPermissions.new(
  default_workflow_permissions: null,
  can_approve_pull_request_reviews: null
)
```

