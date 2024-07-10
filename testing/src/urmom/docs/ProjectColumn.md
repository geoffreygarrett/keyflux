# OpenapiClient::ProjectColumn

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **project_url** | **String** |  |  |
| **cards_url** | **String** |  |  |
| **id** | **Integer** | The unique identifier of the project column |  |
| **node_id** | **String** |  |  |
| **name** | **String** | Name of the project column |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProjectColumn.new(
  url: https://api.github.com/projects/columns/367,
  project_url: https://api.github.com/projects/120,
  cards_url: https://api.github.com/projects/columns/367/cards,
  id: 42,
  node_id: MDEzOlByb2plY3RDb2x1bW4zNjc&#x3D;,
  name: Remaining tasks,
  created_at: 2016-09-05T14:18:44Z,
  updated_at: 2016-09-05T14:22:28Z
)
```

