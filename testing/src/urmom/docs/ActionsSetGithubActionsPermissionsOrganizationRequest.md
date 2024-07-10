# OpenapiClient::ActionsSetGithubActionsPermissionsOrganizationRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enabled_repositories** | [**EnabledRepositories**](EnabledRepositories.md) |  |  |
| **allowed_actions** | [**AllowedActions**](AllowedActions.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsSetGithubActionsPermissionsOrganizationRequest.new(
  enabled_repositories: null,
  allowed_actions: null
)
```

