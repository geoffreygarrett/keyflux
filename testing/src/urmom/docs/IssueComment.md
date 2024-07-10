# OpenapiClient::IssueComment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **author_association** | **String** | How the author is associated with the repository. |  |
| **body** | **String** | Contents of the issue comment |  |
| **created_at** | **Time** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** | Unique identifier of the issue comment |  |
| **issue_url** | **String** |  |  |
| **node_id** | **String** |  |  |
| **performed_via_github_app** | [**NullableIntegration**](NullableIntegration.md) |  |  |
| **reactions** | [**Reactions**](Reactions.md) |  |  |
| **updated_at** | **Time** |  |  |
| **url** | **String** | URL for the issue comment |  |
| **user** | [**User1**](User1.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::IssueComment.new(
  author_association: null,
  body: null,
  created_at: null,
  html_url: null,
  id: null,
  issue_url: null,
  node_id: null,
  performed_via_github_app: null,
  reactions: null,
  updated_at: null,
  url: null,
  user: null
)
```

