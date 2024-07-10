# OpenapiClient::ProjectsV2Item

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Float** |  |  |
| **node_id** | **String** |  | [optional] |
| **project_node_id** | **String** |  | [optional] |
| **content_node_id** | **String** |  |  |
| **content_type** | [**ProjectsV2ItemContentType**](ProjectsV2ItemContentType.md) |  |  |
| **creator** | [**SimpleUser**](SimpleUser.md) |  | [optional] |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **archived_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProjectsV2Item.new(
  id: null,
  node_id: null,
  project_node_id: null,
  content_node_id: null,
  content_type: null,
  creator: null,
  created_at: 2022-04-28T12:00Z,
  updated_at: 2022-04-28T12:00Z,
  archived_at: 2022-04-28T12:00Z
)
```

