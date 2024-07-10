# OpenapiClient::PullRequestReviewComment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **_links** | [**WebhooksReviewCommentLinks**](WebhooksReviewCommentLinks.md) |  |  |
| **author_association** | **String** | How the author is associated with the repository. |  |
| **body** | **String** | The text of the comment. |  |
| **commit_id** | **String** | The SHA of the commit to which the comment applies. |  |
| **created_at** | **Time** |  |  |
| **diff_hunk** | **String** | The diff of the line that the comment refers to. |  |
| **html_url** | **String** | HTML URL for the pull request review comment. |  |
| **id** | **Integer** | The ID of the pull request review comment. |  |
| **in_reply_to_id** | **Integer** | The comment ID to reply to. | [optional] |
| **line** | **Integer** | The line of the blob to which the comment applies. The last line of the range for a multi-line comment |  |
| **node_id** | **String** | The node ID of the pull request review comment. |  |
| **original_commit_id** | **String** | The SHA of the original commit to which the comment applies. |  |
| **original_line** | **Integer** | The line of the blob to which the comment applies. The last line of the range for a multi-line comment |  |
| **original_position** | **Integer** | The index of the original line in the diff to which the comment applies. |  |
| **original_start_line** | **Integer** | The first line of the range for a multi-line comment. |  |
| **path** | **String** | The relative path of the file to which the comment applies. |  |
| **position** | **Integer** | The line index in the diff to which the comment applies. |  |
| **pull_request_review_id** | **Integer** | The ID of the pull request review to which the comment belongs. |  |
| **pull_request_url** | **String** | URL for the pull request that the review comment belongs to. |  |
| **reactions** | [**Reactions**](Reactions.md) |  |  |
| **side** | **String** | The side of the first line of the range for a multi-line comment. |  |
| **start_line** | **Integer** | The first line of the range for a multi-line comment. |  |
| **start_side** | **String** | The side of the first line of the range for a multi-line comment. | [default to &#39;RIGHT&#39;] |
| **subject_type** | **String** | The level at which the comment is targeted, can be a diff line or a file. | [optional] |
| **updated_at** | **Time** |  |  |
| **url** | **String** | URL for the pull request review comment |  |
| **user** | [**User1**](User1.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PullRequestReviewComment.new(
  _links: null,
  author_association: null,
  body: null,
  commit_id: null,
  created_at: null,
  diff_hunk: null,
  html_url: null,
  id: null,
  in_reply_to_id: null,
  line: null,
  node_id: null,
  original_commit_id: null,
  original_line: null,
  original_position: null,
  original_start_line: null,
  path: null,
  position: null,
  pull_request_review_id: null,
  pull_request_url: null,
  reactions: null,
  side: null,
  start_line: null,
  start_side: null,
  subject_type: null,
  updated_at: null,
  url: null,
  user: null
)
```

