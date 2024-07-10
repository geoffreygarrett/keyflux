# OpenapiClient::ProjectsV2

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Float** |  |  |
| **node_id** | **String** |  |  |
| **owner** | [**SimpleUser**](SimpleUser.md) |  |  |
| **creator** | [**SimpleUser**](SimpleUser.md) |  |  |
| **title** | **String** |  |  |
| **description** | **String** |  |  |
| **public** | **Boolean** |  |  |
| **closed_at** | **Time** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **number** | **Integer** |  |  |
| **short_description** | **String** |  |  |
| **deleted_at** | **Time** |  |  |
| **deleted_by** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProjectsV2.new(
  id: null,
  node_id: null,
  owner: null,
  creator: null,
  title: null,
  description: null,
  public: null,
  closed_at: 2022-04-28T12:00Z,
  created_at: 2022-04-28T12:00Z,
  updated_at: 2022-04-28T12:00Z,
  number: null,
  short_description: null,
  deleted_at: 2022-04-28T12:00Z,
  deleted_by: null
)
```

