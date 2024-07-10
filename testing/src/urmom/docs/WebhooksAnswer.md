# OpenapiClient::WebhooksAnswer

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **author_association** | **String** | How the author is associated with the repository. |  |
| **body** | **String** |  |  |
| **child_comment_count** | **Integer** |  |  |
| **created_at** | **Time** |  |  |
| **discussion_id** | **Integer** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **parent_id** | **Object** |  |  |
| **reactions** | [**Reactions**](Reactions.md) |  | [optional] |
| **repository_url** | **String** |  |  |
| **updated_at** | **Time** |  |  |
| **user** | [**User1**](User1.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhooksAnswer.new(
  author_association: null,
  body: null,
  child_comment_count: null,
  created_at: null,
  discussion_id: null,
  html_url: null,
  id: null,
  node_id: null,
  parent_id: null,
  reactions: null,
  repository_url: null,
  updated_at: null,
  user: null
)
```

