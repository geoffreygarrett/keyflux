# OpenapiClient::ProjectCard

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **after_id** | **Integer** |  | [optional] |
| **archived** | **Boolean** | Whether or not the card is archived |  |
| **column_id** | **Integer** |  |  |
| **column_url** | **String** |  |  |
| **content_url** | **String** |  | [optional] |
| **created_at** | **Time** |  |  |
| **creator** | [**User3**](User3.md) |  |  |
| **id** | **Integer** | The project card&#39;s ID |  |
| **node_id** | **String** |  |  |
| **note** | **String** |  |  |
| **project_url** | **String** |  |  |
| **updated_at** | **Time** |  |  |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProjectCard.new(
  after_id: null,
  archived: null,
  column_id: null,
  column_url: null,
  content_url: null,
  created_at: null,
  creator: null,
  id: null,
  node_id: null,
  note: null,
  project_url: null,
  updated_at: null,
  url: null
)
```

