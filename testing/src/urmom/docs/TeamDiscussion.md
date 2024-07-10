# OpenapiClient::TeamDiscussion

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **author** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **body** | **String** | The main text of the discussion. |  |
| **body_html** | **String** |  |  |
| **body_version** | **String** | The current version of the body content. If provided, this update operation will be rejected if the given version does not match the latest version on the server. |  |
| **comments_count** | **Integer** |  |  |
| **comments_url** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **last_edited_at** | **Time** |  |  |
| **html_url** | **String** |  |  |
| **node_id** | **String** |  |  |
| **number** | **Integer** | The unique sequence number of a team discussion. |  |
| **pinned** | **Boolean** | Whether or not this discussion should be pinned for easy retrieval. |  |
| **private** | **Boolean** | Whether or not this discussion should be restricted to team members and organization owners. |  |
| **team_url** | **String** |  |  |
| **title** | **String** | The title of the discussion. |  |
| **updated_at** | **Time** |  |  |
| **url** | **String** |  |  |
| **reactions** | [**ReactionRollup**](ReactionRollup.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TeamDiscussion.new(
  author: null,
  body: Please suggest improvements to our workflow in comments.,
  body_html: &lt;p&gt;Hi! This is an area for us to collaborate as a team&lt;/p&gt;,
  body_version: 0307116bbf7ced493b8d8a346c650b71,
  comments_count: 0,
  comments_url: https://api.github.com/organizations/1/team/2343027/discussions/1/comments,
  created_at: 2018-01-25T18:56:31Z,
  last_edited_at: null,
  html_url: https://github.com/orgs/github/teams/justice-league/discussions/1,
  node_id: MDE0OlRlYW1EaXNjdXNzaW9uMQ&#x3D;&#x3D;,
  number: 42,
  pinned: true,
  private: true,
  team_url: https://api.github.com/organizations/1/team/2343027,
  title: How can we improve our workflow?,
  updated_at: 2018-01-25T18:56:31Z,
  url: https://api.github.com/organizations/1/team/2343027/discussions/1,
  reactions: null
)
```

