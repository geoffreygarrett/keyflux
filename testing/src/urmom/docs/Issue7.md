# OpenapiClient::Issue7

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **active_lock_reason** | **String** |  |  |
| **assignee** | [**User3**](User3.md) |  | [optional] |
| **assignees** | [**Array&lt;User3&gt;**](User3.md) |  |  |
| **author_association** | **String** | How the author is associated with the repository. |  |
| **body** | **String** | Contents of the issue |  |
| **closed_at** | **Time** |  |  |
| **comments** | **Integer** |  |  |
| **comments_url** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **draft** | **Boolean** |  | [optional] |
| **events_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **labels** | [**Array&lt;Label&gt;**](Label.md) |  | [optional] |
| **labels_url** | **String** |  |  |
| **locked** | **Boolean** |  | [optional] |
| **milestone** | [**Milestone**](Milestone.md) |  |  |
| **node_id** | **String** |  |  |
| **number** | **Integer** |  |  |
| **performed_via_github_app** | [**App13**](App13.md) |  | [optional] |
| **pull_request** | [**WebhooksIssuePullRequest**](WebhooksIssuePullRequest.md) |  | [optional] |
| **reactions** | [**Reactions**](Reactions.md) |  |  |
| **repository_url** | **String** |  |  |
| **state** | **String** | State of the issue; either &#39;open&#39; or &#39;closed&#39; | [optional] |
| **state_reason** | **String** |  | [optional] |
| **timeline_url** | **String** |  | [optional] |
| **title** | **String** | Title of the issue |  |
| **updated_at** | **Time** |  |  |
| **url** | **String** | URL for the issue |  |
| **user** | [**User2**](User2.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Issue7.new(
  active_lock_reason: null,
  assignee: null,
  assignees: null,
  author_association: null,
  body: null,
  closed_at: null,
  comments: null,
  comments_url: null,
  created_at: null,
  draft: null,
  events_url: null,
  html_url: null,
  id: null,
  labels: null,
  labels_url: null,
  locked: null,
  milestone: null,
  node_id: null,
  number: null,
  performed_via_github_app: null,
  pull_request: null,
  reactions: null,
  repository_url: null,
  state: null,
  state_reason: null,
  timeline_url: null,
  title: null,
  updated_at: null,
  url: null,
  user: null
)
```

