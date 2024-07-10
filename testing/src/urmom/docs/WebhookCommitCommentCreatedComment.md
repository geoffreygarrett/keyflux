# OpenapiClient::WebhookCommitCommentCreatedComment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **author_association** | **String** | How the author is associated with the repository. |  |
| **body** | **String** | The text of the comment. |  |
| **commit_id** | **String** | The SHA of the commit to which the comment applies. |  |
| **created_at** | **String** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** | The ID of the commit comment. |  |
| **line** | **Integer** | The line of the blob to which the comment applies. The last line of the range for a multi-line comment |  |
| **node_id** | **String** | The node ID of the commit comment. |  |
| **path** | **String** | The relative path of the file to which the comment applies. |  |
| **position** | **Integer** | The line index in the diff to which the comment applies. |  |
| **reactions** | [**Reactions**](Reactions.md) |  | [optional] |
| **updated_at** | **String** |  |  |
| **url** | **String** |  |  |
| **user** | [**User1**](User1.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCommitCommentCreatedComment.new(
  author_association: null,
  body: null,
  commit_id: null,
  created_at: null,
  html_url: null,
  id: null,
  line: null,
  node_id: null,
  path: null,
  position: null,
  reactions: null,
  updated_at: null,
  url: null,
  user: null
)
```

