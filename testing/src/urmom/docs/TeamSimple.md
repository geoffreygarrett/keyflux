# OpenapiClient::TeamSimple

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the team |  |
| **node_id** | **String** |  |  |
| **url** | **String** | URL for the team |  |
| **members_url** | **String** |  |  |
| **name** | **String** | Name of the team |  |
| **description** | **String** | Description of the team |  |
| **permission** | **String** | Permission that the team will have for its repositories |  |
| **privacy** | **String** | The level of privacy this team should have | [optional] |
| **notification_setting** | **String** | The notification setting the team has set | [optional] |
| **html_url** | **String** |  |  |
| **repositories_url** | **String** |  |  |
| **slug** | **String** |  |  |
| **ldap_dn** | **String** | Distinguished Name (DN) that team maps to within LDAP environment | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TeamSimple.new(
  id: 1,
  node_id: MDQ6VGVhbTE&#x3D;,
  url: https://api.github.com/organizations/1/team/1,
  members_url: https://api.github.com/organizations/1/team/1/members{/member},
  name: Justice League,
  description: A great team.,
  permission: admin,
  privacy: closed,
  notification_setting: notifications_enabled,
  html_url: https://github.com/orgs/rails/teams/core,
  repositories_url: https://api.github.com/organizations/1/team/1/repos,
  slug: justice-league,
  ldap_dn: uid&#x3D;example,ou&#x3D;users,dc&#x3D;github,dc&#x3D;com
)
```

