# OpenapiClient::TeamFull

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the team |  |
| **node_id** | **String** |  |  |
| **url** | **String** | URL for the team |  |
| **html_url** | **String** |  |  |
| **name** | **String** | Name of the team |  |
| **slug** | **String** |  |  |
| **description** | **String** |  |  |
| **privacy** | **String** | The level of privacy this team should have | [optional] |
| **notification_setting** | **String** | The notification setting the team has set | [optional] |
| **permission** | **String** | Permission that the team will have for its repositories |  |
| **members_url** | **String** |  |  |
| **repositories_url** | **String** |  |  |
| **parent** | [**NullableTeamSimple**](NullableTeamSimple.md) |  | [optional] |
| **members_count** | **Integer** |  |  |
| **repos_count** | **Integer** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **organization** | [**TeamOrganization**](TeamOrganization.md) |  |  |
| **ldap_dn** | **String** | Distinguished Name (DN) that team maps to within LDAP environment | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TeamFull.new(
  id: 42,
  node_id: MDQ6VGVhbTE&#x3D;,
  url: https://api.github.com/organizations/1/team/1,
  html_url: https://github.com/orgs/rails/teams/core,
  name: Developers,
  slug: justice-league,
  description: A great team.,
  privacy: closed,
  notification_setting: notifications_enabled,
  permission: push,
  members_url: https://api.github.com/organizations/1/team/1/members{/member},
  repositories_url: https://api.github.com/organizations/1/team/1/repos,
  parent: null,
  members_count: 3,
  repos_count: 10,
  created_at: 2017-07-14T16:53:42Z,
  updated_at: 2017-08-17T12:37:15Z,
  organization: null,
  ldap_dn: uid&#x3D;example,ou&#x3D;users,dc&#x3D;github,dc&#x3D;com
)
```

