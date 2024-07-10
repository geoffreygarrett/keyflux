# OpenapiClient::WebhookIssueCommentEditedIssue

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **active_lock_reason** | **String** |  |  |
| **assignee** | [**User3**](User3.md) |  |  |
| **assignees** | **Array&lt;Object&gt;** |  |  |
| **author_association** | **String** |  |  |
| **body** | **String** |  |  |
| **closed_at** | **String** |  |  |
| **comments** | **Integer** |  |  |
| **comments_url** | **String** |  |  |
| **created_at** | **String** |  |  |
| **draft** | **Boolean** |  | [optional] |
| **events_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **labels** | [**Array&lt;Label&gt;**](Label.md) |  |  |
| **labels_url** | **String** |  |  |
| **locked** | **Boolean** |  |  |
| **milestone** | **Object** |  |  |
| **node_id** | **String** |  |  |
| **number** | **Integer** |  |  |
| **performed_via_github_app** | **Object** |  | [optional] |
| **pull_request** | [**WebhooksIssuePullRequest**](WebhooksIssuePullRequest.md) |  | [optional] |
| **reactions** | [**WebhookIssueCommentCreatedIssueAllOfReactions**](WebhookIssueCommentCreatedIssueAllOfReactions.md) |  |  |
| **repository_url** | **String** |  |  |
| **state** | **String** | State of the issue; either &#39;open&#39; or &#39;closed&#39; |  |
| **state_reason** | **String** |  | [optional] |
| **timeline_url** | **String** |  | [optional] |
| **title** | **String** |  |  |
| **updated_at** | **String** |  |  |
| **url** | **String** |  |  |
| **user** | [**WebhookIssueCommentCreatedIssueAllOfUser**](WebhookIssueCommentCreatedIssueAllOfUser.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookIssueCommentEditedIssue.new(
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

