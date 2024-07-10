# OpenapiClient::NullableIssue

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **url** | **String** | URL for the issue |  |
| **repository_url** | **String** |  |  |
| **labels_url** | **String** |  |  |
| **comments_url** | **String** |  |  |
| **events_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **number** | **Integer** | Number uniquely identifying the issue within its repository |  |
| **state** | **String** | State of the issue; either &#39;open&#39; or &#39;closed&#39; |  |
| **state_reason** | **String** | The reason for the current state | [optional] |
| **title** | **String** | Title of the issue |  |
| **body** | **String** | Contents of the issue | [optional] |
| **user** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **labels** | [**Array&lt;IssueLabelsInner&gt;**](IssueLabelsInner.md) | Labels to associate with this issue; pass one or more label names to replace the set of labels on this issue; send an empty array to clear all labels from the issue; note that the labels are silently dropped for users without push access to the repository |  |
| **assignee** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **assignees** | [**Array&lt;SimpleUser&gt;**](SimpleUser.md) |  | [optional] |
| **milestone** | [**NullableMilestone**](NullableMilestone.md) |  |  |
| **locked** | **Boolean** |  |  |
| **active_lock_reason** | **String** |  | [optional] |
| **comments** | **Integer** |  |  |
| **pull_request** | [**IssuePullRequest**](IssuePullRequest.md) |  | [optional] |
| **closed_at** | **Time** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **draft** | **Boolean** |  | [optional] |
| **closed_by** | [**NullableSimpleUser**](NullableSimpleUser.md) |  | [optional] |
| **body_html** | **String** |  | [optional] |
| **body_text** | **String** |  | [optional] |
| **timeline_url** | **String** |  | [optional] |
| **repository** | [**Repository**](Repository.md) |  | [optional] |
| **performed_via_github_app** | [**NullableIntegration**](NullableIntegration.md) |  | [optional] |
| **author_association** | [**AuthorAssociation**](AuthorAssociation.md) |  |  |
| **reactions** | [**ReactionRollup**](ReactionRollup.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::NullableIssue.new(
  id: null,
  node_id: null,
  url: https://api.github.com/repositories/42/issues/1,
  repository_url: null,
  labels_url: null,
  comments_url: null,
  events_url: null,
  html_url: null,
  number: 42,
  state: open,
  state_reason: not_planned,
  title: Widget creation fails in Safari on OS X 10.8,
  body: It looks like the new widget form is broken on Safari. When I try and create the widget, Safari crashes. This is reproducible on 10.8, but not 10.9. Maybe a browser bug?,
  user: null,
  labels: [&quot;bug&quot;,&quot;registration&quot;],
  assignee: null,
  assignees: null,
  milestone: null,
  locked: null,
  active_lock_reason: null,
  comments: null,
  pull_request: null,
  closed_at: null,
  created_at: null,
  updated_at: null,
  draft: null,
  closed_by: null,
  body_html: null,
  body_text: null,
  timeline_url: null,
  repository: null,
  performed_via_github_app: null,
  author_association: null,
  reactions: null
)
```

