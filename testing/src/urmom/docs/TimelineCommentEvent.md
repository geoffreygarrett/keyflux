# OpenapiClient::TimelineCommentEvent

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **event** | **String** |  |  |
| **actor** | [**SimpleUser**](SimpleUser.md) |  |  |
| **id** | **Integer** | Unique identifier of the issue comment |  |
| **node_id** | **String** |  |  |
| **url** | **String** | URL for the issue comment |  |
| **body** | **String** | Contents of the issue comment | [optional] |
| **body_text** | **String** |  | [optional] |
| **body_html** | **String** |  | [optional] |
| **html_url** | **String** |  |  |
| **user** | [**SimpleUser**](SimpleUser.md) |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **issue_url** | **String** |  |  |
| **author_association** | [**AuthorAssociation**](AuthorAssociation.md) |  |  |
| **performed_via_github_app** | [**NullableIntegration**](NullableIntegration.md) |  | [optional] |
| **reactions** | [**ReactionRollup**](ReactionRollup.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TimelineCommentEvent.new(
  event: null,
  actor: null,
  id: 42,
  node_id: null,
  url: https://api.github.com/repositories/42/issues/comments/1,
  body: What version of Safari were you using when you observed this bug?,
  body_text: null,
  body_html: null,
  html_url: null,
  user: null,
  created_at: 2011-04-14T16:00:49Z,
  updated_at: 2011-04-14T16:00:49Z,
  issue_url: null,
  author_association: null,
  performed_via_github_app: null,
  reactions: null
)
```

