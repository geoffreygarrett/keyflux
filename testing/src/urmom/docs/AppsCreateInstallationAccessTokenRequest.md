# OpenapiClient::AppsCreateInstallationAccessTokenRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **repositories** | **Array&lt;String&gt;** | List of repository names that the token should have access to | [optional] |
| **repository_ids** | **Array&lt;Integer&gt;** | List of repository IDs that the token should have access to | [optional] |
| **permissions** | [**AppPermissions**](AppPermissions.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AppsCreateInstallationAccessTokenRequest.new(
  repositories: null,
  repository_ids: [1],
  permissions: null
)
```

