# OpenapiClient::IssueEvent

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **url** | **String** |  |  |
| **actor** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **event** | **String** |  |  |
| **commit_id** | **String** |  |  |
| **commit_url** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **issue** | [**NullableIssue**](NullableIssue.md) |  | [optional] |
| **label** | [**IssueEventLabel**](IssueEventLabel.md) |  | [optional] |
| **assignee** | [**NullableSimpleUser**](NullableSimpleUser.md) |  | [optional] |
| **assigner** | [**NullableSimpleUser**](NullableSimpleUser.md) |  | [optional] |
| **review_requester** | [**NullableSimpleUser**](NullableSimpleUser.md) |  | [optional] |
| **requested_reviewer** | [**NullableSimpleUser**](NullableSimpleUser.md) |  | [optional] |
| **requested_team** | [**Team**](Team.md) |  | [optional] |
| **dismissed_review** | [**IssueEventDismissedReview**](IssueEventDismissedReview.md) |  | [optional] |
| **milestone** | [**IssueEventMilestone**](IssueEventMilestone.md) |  | [optional] |
| **project_card** | [**IssueEventProjectCard**](IssueEventProjectCard.md) |  | [optional] |
| **rename** | [**IssueEventRename**](IssueEventRename.md) |  | [optional] |
| **author_association** | [**AuthorAssociation**](AuthorAssociation.md) |  | [optional] |
| **lock_reason** | **String** |  | [optional] |
| **performed_via_github_app** | [**NullableIntegration**](NullableIntegration.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::IssueEvent.new(
  id: 1,
  node_id: MDEwOklzc3VlRXZlbnQx,
  url: https://api.github.com/repos/octocat/Hello-World/issues/events/1,
  actor: null,
  event: closed,
  commit_id: 6dcb09b5b57875f334f61aebed695e2e4193db5e,
  commit_url: https://api.github.com/repos/octocat/Hello-World/commits/6dcb09b5b57875f334f61aebed695e2e4193db5e,
  created_at: 2011-04-14T16:00:49Z,
  issue: null,
  label: null,
  assignee: null,
  assigner: null,
  review_requester: null,
  requested_reviewer: null,
  requested_team: null,
  dismissed_review: null,
  milestone: null,
  project_card: null,
  rename: null,
  author_association: null,
  lock_reason: null,
  performed_via_github_app: null
)
```

