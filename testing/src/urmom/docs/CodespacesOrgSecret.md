# OpenapiClient::CodespacesOrgSecret

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the secret |  |
| **created_at** | **Time** | The date and time at which the secret was created, in ISO 8601 format&#39;:&#39; YYYY-MM-DDTHH:MM:SSZ. |  |
| **updated_at** | **Time** | The date and time at which the secret was created, in ISO 8601 format&#39;:&#39; YYYY-MM-DDTHH:MM:SSZ. |  |
| **visibility** | **String** | The type of repositories in the organization that the secret is visible to |  |
| **selected_repositories_url** | **String** | The API URL at which the list of repositories this secret is visible to can be retrieved | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodespacesOrgSecret.new(
  name: SECRET_NAME,
  created_at: null,
  updated_at: null,
  visibility: null,
  selected_repositories_url: https://api.github.com/orgs/ORGANIZATION/codespaces/secrets/SECRET_NAME/repositories
)
```

