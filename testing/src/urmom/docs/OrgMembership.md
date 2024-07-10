# OpenapiClient::OrgMembership

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **state** | **String** | The state of the member in the organization. The &#x60;pending&#x60; state indicates the user has not yet accepted an invitation. |  |
| **role** | **String** | The user&#39;s membership type in the organization. |  |
| **organization_url** | **String** |  |  |
| **organization** | [**OrganizationSimple**](OrganizationSimple.md) |  |  |
| **user** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **permissions** | [**OrgMembershipPermissions**](OrgMembershipPermissions.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgMembership.new(
  url: https://api.github.com/orgs/octocat/memberships/defunkt,
  state: active,
  role: admin,
  organization_url: https://api.github.com/orgs/octocat,
  organization: null,
  user: null,
  permissions: null
)
```

