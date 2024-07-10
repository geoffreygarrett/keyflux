# OpenapiClient::IssueSearchResultItem

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **repository_url** | **String** |  |  |
| **labels_url** | **String** |  |  |
| **comments_url** | **String** |  |  |
| **events_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **number** | **Integer** |  |  |
| **title** | **String** |  |  |
| **locked** | **Boolean** |  |  |
| **active_lock_reason** | **String** |  | [optional] |
| **assignees** | [**Array&lt;SimpleUser&gt;**](SimpleUser.md) |  | [optional] |
| **user** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **labels** | [**Array&lt;IssueSearchResultItemLabelsInner&gt;**](IssueSearchResultItemLabelsInner.md) |  |  |
| **state** | **String** |  |  |
| **state_reason** | **String** |  | [optional] |
| **assignee** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **milestone** | [**NullableMilestone**](NullableMilestone.md) |  |  |
| **comments** | **Integer** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **closed_at** | **Time** |  |  |
| **text_matches** | [**Array&lt;SearchResultTextMatchesInner&gt;**](SearchResultTextMatchesInner.md) |  | [optional] |
| **pull_request** | [**IssuePullRequest**](IssuePullRequest.md) |  | [optional] |
| **body** | **String** |  | [optional] |
| **score** | **Float** |  |  |
| **author_association** | [**AuthorAssociation**](AuthorAssociation.md) |  |  |
| **draft** | **Boolean** |  | [optional] |
| **repository** | [**Repository**](Repository.md) |  | [optional] |
| **body_html** | **String** |  | [optional] |
| **body_text** | **String** |  | [optional] |
| **timeline_url** | **String** |  | [optional] |
| **performed_via_github_app** | [**NullableIntegration**](NullableIntegration.md) |  | [optional] |
| **reactions** | [**ReactionRollup**](ReactionRollup.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::IssueSearchResultItem.new(
  url: null,
  repository_url: null,
  labels_url: null,
  comments_url: null,
  events_url: null,
  html_url: null,
  id: null,
  node_id: null,
  number: null,
  title: null,
  locked: null,
  active_lock_reason: null,
  assignees: null,
  user: null,
  labels: null,
  state: null,
  state_reason: null,
  assignee: null,
  milestone: null,
  comments: null,
  created_at: null,
  updated_at: null,
  closed_at: null,
  text_matches: null,
  pull_request: null,
  body: null,
  score: null,
  author_association: null,
  draft: null,
  repository: null,
  body_html: null,
  body_text: null,
  timeline_url: null,
  performed_via_github_app: null,
  reactions: null
)
```

