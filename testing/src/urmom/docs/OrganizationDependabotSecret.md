# OpenapiClient::OrganizationDependabotSecret

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the secret. |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **visibility** | **String** | Visibility of a secret |  |
| **selected_repositories_url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrganizationDependabotSecret.new(
  name: SECRET_TOKEN,
  created_at: null,
  updated_at: null,
  visibility: null,
  selected_repositories_url: https://api.github.com/organizations/org/dependabot/secrets/my_secret/repositories
)
```

