# OpenapiClient::ReviewComment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **pull_request_review_id** | **Integer** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **diff_hunk** | **String** |  |  |
| **path** | **String** |  |  |
| **position** | **Integer** |  |  |
| **original_position** | **Integer** |  |  |
| **commit_id** | **String** |  |  |
| **original_commit_id** | **String** |  |  |
| **in_reply_to_id** | **Integer** |  | [optional] |
| **user** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **body** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **html_url** | **String** |  |  |
| **pull_request_url** | **String** |  |  |
| **author_association** | [**AuthorAssociation**](AuthorAssociation.md) |  |  |
| **_links** | [**ReviewCommentLinks**](ReviewCommentLinks.md) |  |  |
| **body_text** | **String** |  | [optional] |
| **body_html** | **String** |  | [optional] |
| **reactions** | [**ReactionRollup**](ReactionRollup.md) |  | [optional] |
| **side** | **String** | The side of the first line of the range for a multi-line comment. | [optional][default to &#39;RIGHT&#39;] |
| **start_side** | **String** | The side of the first line of the range for a multi-line comment. | [optional][default to &#39;RIGHT&#39;] |
| **line** | **Integer** | The line of the blob to which the comment applies. The last line of the range for a multi-line comment | [optional] |
| **original_line** | **Integer** | The original line of the blob to which the comment applies. The last line of the range for a multi-line comment | [optional] |
| **start_line** | **Integer** | The first line of the range for a multi-line comment. | [optional] |
| **original_start_line** | **Integer** | The original first line of the range for a multi-line comment. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReviewComment.new(
  url: https://api.github.com/repos/octocat/Hello-World/pulls/comments/1,
  pull_request_review_id: 42,
  id: 10,
  node_id: MDI0OlB1bGxSZXF1ZXN0UmV2aWV3Q29tbWVudDEw,
  diff_hunk: @@ -16,33 +16,40 @@ public class Connection : IConnection...,
  path: file1.txt,
  position: 1,
  original_position: 4,
  commit_id: 6dcb09b5b57875f334f61aebed695e2e4193db5e,
  original_commit_id: 9c48853fa3dc5c1c3d6f1f1cd1f2743e72652840,
  in_reply_to_id: 8,
  user: null,
  body: Great stuff,
  created_at: 2011-04-14T16:00:49Z,
  updated_at: 2011-04-14T16:00:49Z,
  html_url: https://github.com/octocat/Hello-World/pull/1#discussion-diff-1,
  pull_request_url: https://api.github.com/repos/octocat/Hello-World/pulls/1,
  author_association: null,
  _links: null,
  body_text: null,
  body_html: null,
  reactions: null,
  side: null,
  start_side: null,
  line: 2,
  original_line: 2,
  start_line: 2,
  original_start_line: 2
)
```

