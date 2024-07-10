# OpenapiClient::ProtectedBranchAdminEnforced

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **enabled** | **Boolean** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProtectedBranchAdminEnforced.new(
  url: https://api.github.com/repos/octocat/Hello-World/branches/master/protection/enforce_admins,
  enabled: true
)
```

