# OpenapiClient::ActionsSetGithubActionsPermissionsRepositoryRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enabled** | **Boolean** | Whether GitHub Actions is enabled on the repository. |  |
| **allowed_actions** | [**AllowedActions**](AllowedActions.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsSetGithubActionsPermissionsRepositoryRequest.new(
  enabled: null,
  allowed_actions: null
)
```

