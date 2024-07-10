# OpenapiClient::TeamDiscussionComment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **author** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **body** | **String** | The main text of the comment. |  |
| **body_html** | **String** |  |  |
| **body_version** | **String** | The current version of the body content. If provided, this update operation will be rejected if the given version does not match the latest version on the server. |  |
| **created_at** | **Time** |  |  |
| **last_edited_at** | **Time** |  |  |
| **discussion_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **node_id** | **String** |  |  |
| **number** | **Integer** | The unique sequence number of a team discussion comment. |  |
| **updated_at** | **Time** |  |  |
| **url** | **String** |  |  |
| **reactions** | [**ReactionRollup**](ReactionRollup.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TeamDiscussionComment.new(
  author: null,
  body: I agree with this suggestion.,
  body_html: &lt;p&gt;Do you like apples?&lt;/p&gt;,
  body_version: 0307116bbf7ced493b8d8a346c650b71,
  created_at: 2018-01-15T23:53:58Z,
  last_edited_at: null,
  discussion_url: https://api.github.com/organizations/1/team/2403582/discussions/1,
  html_url: https://github.com/orgs/github/teams/justice-league/discussions/1/comments/1,
  node_id: MDIxOlRlYW1EaXNjdXNzaW9uQ29tbWVudDE&#x3D;,
  number: 42,
  updated_at: 2018-01-15T23:53:58Z,
  url: https://api.github.com/organizations/1/team/2403582/discussions/1/comments/1,
  reactions: null
)
```

