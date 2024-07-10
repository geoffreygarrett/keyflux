# OpenapiClient::ActionsRepositoryPermissions

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enabled** | **Boolean** | Whether GitHub Actions is enabled on the repository. |  |
| **allowed_actions** | [**AllowedActions**](AllowedActions.md) |  | [optional] |
| **selected_actions_url** | **String** | The API URL to use to get or set the actions and reusable workflows that are allowed to run, when &#x60;allowed_actions&#x60; is set to &#x60;selected&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsRepositoryPermissions.new(
  enabled: null,
  allowed_actions: null,
  selected_actions_url: null
)
```

