# OpenapiClient::WebhookIssuesClosedIssueAllOf

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **active_lock_reason** | **String** |  | [optional] |
| **assignee** | **Object** |  | [optional] |
| **assignees** | **Array&lt;Object&gt;** |  | [optional] |
| **author_association** | **String** |  | [optional] |
| **body** | **String** |  | [optional] |
| **closed_at** | **String** |  |  |
| **comments** | **Integer** |  | [optional] |
| **comments_url** | **String** |  | [optional] |
| **created_at** | **String** |  | [optional] |
| **events_url** | **String** |  | [optional] |
| **html_url** | **String** |  | [optional] |
| **id** | **Integer** |  | [optional] |
| **labels** | **Array&lt;Object&gt;** |  | [optional] |
| **labels_url** | **String** |  | [optional] |
| **locked** | **Boolean** |  | [optional] |
| **milestone** | **Object** |  | [optional] |
| **node_id** | **String** |  | [optional] |
| **number** | **Integer** |  | [optional] |
| **performed_via_github_app** | **Object** |  | [optional] |
| **reactions** | [**WebhookIssueCommentCreatedIssueAllOfReactions**](WebhookIssueCommentCreatedIssueAllOfReactions.md) |  | [optional] |
| **repository_url** | **String** |  | [optional] |
| **state** | **String** |  |  |
| **timeline_url** | **String** |  | [optional] |
| **title** | **String** |  | [optional] |
| **updated_at** | **String** |  | [optional] |
| **url** | **String** |  | [optional] |
| **user** | [**WebhookIssueCommentCreatedIssueAllOfUser**](WebhookIssueCommentCreatedIssueAllOfUser.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookIssuesClosedIssueAllOf.new(
  active_lock_reason: null,
  assignee: null,
  assignees: null,
  author_association: null,
  body: null,
  closed_at: null,
  comments: null,
  comments_url: null,
  created_at: null,
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
  reactions: null,
  repository_url: null,
  state: null,
  timeline_url: null,
  title: null,
  updated_at: null,
  url: null,
  user: null
)
```

