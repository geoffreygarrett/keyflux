# OpenapiClient::TeamRoleAssignment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **name** | **String** |  |  |
| **slug** | **String** |  |  |
| **description** | **String** |  |  |
| **privacy** | **String** |  | [optional] |
| **notification_setting** | **String** |  | [optional] |
| **permission** | **String** |  |  |
| **permissions** | [**TeamPermissions**](TeamPermissions.md) |  | [optional] |
| **url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **members_url** | **String** |  |  |
| **repositories_url** | **String** |  |  |
| **parent** | [**NullableTeamSimple**](NullableTeamSimple.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TeamRoleAssignment.new(
  id: null,
  node_id: null,
  name: null,
  slug: null,
  description: null,
  privacy: null,
  notification_setting: null,
  permission: null,
  permissions: null,
  url: null,
  html_url: https://github.com/orgs/rails/teams/core,
  members_url: null,
  repositories_url: null,
  parent: null
)
```

