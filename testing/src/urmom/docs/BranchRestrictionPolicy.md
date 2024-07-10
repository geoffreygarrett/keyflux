# OpenapiClient::BranchRestrictionPolicy

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **users_url** | **String** |  |  |
| **teams_url** | **String** |  |  |
| **apps_url** | **String** |  |  |
| **users** | [**Array&lt;BranchRestrictionPolicyUsersInner&gt;**](BranchRestrictionPolicyUsersInner.md) |  |  |
| **teams** | [**Array&lt;BranchRestrictionPolicyTeamsInner&gt;**](BranchRestrictionPolicyTeamsInner.md) |  |  |
| **apps** | [**Array&lt;BranchRestrictionPolicyAppsInner&gt;**](BranchRestrictionPolicyAppsInner.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::BranchRestrictionPolicy.new(
  url: null,
  users_url: null,
  teams_url: null,
  apps_url: null,
  users: null,
  teams: null,
  apps: null
)
```

