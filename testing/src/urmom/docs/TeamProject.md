# OpenapiClient::TeamProject

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner_url** | **String** |  |  |
| **url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **columns_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **name** | **String** |  |  |
| **body** | **String** |  |  |
| **number** | **Integer** |  |  |
| **state** | **String** |  |  |
| **creator** | [**SimpleUser**](SimpleUser.md) |  |  |
| **created_at** | **String** |  |  |
| **updated_at** | **String** |  |  |
| **organization_permission** | **String** | The organization permission for this project. Only present when owner is an organization. | [optional] |
| **private** | **Boolean** | Whether the project is private or not. Only present when owner is an organization. | [optional] |
| **permissions** | [**TeamProjectPermissions**](TeamProjectPermissions.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TeamProject.new(
  owner_url: null,
  url: null,
  html_url: null,
  columns_url: null,
  id: null,
  node_id: null,
  name: null,
  body: null,
  number: null,
  state: null,
  creator: null,
  created_at: null,
  updated_at: null,
  organization_permission: null,
  private: null,
  permissions: null
)
```

