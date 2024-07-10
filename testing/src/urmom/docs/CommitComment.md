# OpenapiClient::CommitComment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **html_url** | **String** |  |  |
| **url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **body** | **String** |  |  |
| **path** | **String** |  |  |
| **position** | **Integer** |  |  |
| **line** | **Integer** |  |  |
| **commit_id** | **String** |  |  |
| **user** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **author_association** | [**AuthorAssociation**](AuthorAssociation.md) |  |  |
| **reactions** | [**ReactionRollup**](ReactionRollup.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CommitComment.new(
  html_url: null,
  url: null,
  id: null,
  node_id: null,
  body: null,
  path: null,
  position: null,
  line: null,
  commit_id: null,
  user: null,
  created_at: null,
  updated_at: null,
  author_association: null,
  reactions: null
)
```

