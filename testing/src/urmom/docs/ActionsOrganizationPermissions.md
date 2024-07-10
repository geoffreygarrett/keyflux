# OpenapiClient::ActionsOrganizationPermissions

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enabled_repositories** | [**EnabledRepositories**](EnabledRepositories.md) |  |  |
| **selected_repositories_url** | **String** | The API URL to use to get or set the selected repositories that are allowed to run GitHub Actions, when &#x60;enabled_repositories&#x60; is set to &#x60;selected&#x60;. | [optional] |
| **allowed_actions** | [**AllowedActions**](AllowedActions.md) |  | [optional] |
| **selected_actions_url** | **String** | The API URL to use to get or set the actions and reusable workflows that are allowed to run, when &#x60;allowed_actions&#x60; is set to &#x60;selected&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsOrganizationPermissions.new(
  enabled_repositories: null,
  selected_repositories_url: null,
  allowed_actions: null,
  selected_actions_url: null
)
```

