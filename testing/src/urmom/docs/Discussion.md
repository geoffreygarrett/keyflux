# OpenapiClient::Discussion

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **active_lock_reason** | **String** |  |  |
| **answer_chosen_at** | **String** |  |  |
| **answer_chosen_by** | [**User**](User.md) |  |  |
| **answer_html_url** | **String** |  |  |
| **author_association** | **String** | How the author is associated with the repository. |  |
| **body** | **String** |  |  |
| **category** | [**DiscussionCategory**](DiscussionCategory.md) |  |  |
| **comments** | **Integer** |  |  |
| **created_at** | **Time** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **locked** | **Boolean** |  |  |
| **node_id** | **String** |  |  |
| **number** | **Integer** |  |  |
| **reactions** | [**Reactions**](Reactions.md) |  | [optional] |
| **repository_url** | **String** |  |  |
| **state** | **String** | The current state of the discussion. &#x60;converting&#x60; means that the discussion is being converted from an issue. &#x60;transferring&#x60; means that the discussion is being transferred from another repository. |  |
| **state_reason** | **String** | The reason for the current state |  |
| **timeline_url** | **String** |  | [optional] |
| **title** | **String** |  |  |
| **updated_at** | **Time** |  |  |
| **user** | [**User1**](User1.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Discussion.new(
  active_lock_reason: null,
  answer_chosen_at: null,
  answer_chosen_by: null,
  answer_html_url: null,
  author_association: null,
  body: null,
  category: null,
  comments: null,
  created_at: null,
  html_url: null,
  id: null,
  locked: null,
  node_id: null,
  number: null,
  reactions: null,
  repository_url: null,
  state: null,
  state_reason: resolved,
  timeline_url: null,
  title: null,
  updated_at: null,
  user: null
)
```

