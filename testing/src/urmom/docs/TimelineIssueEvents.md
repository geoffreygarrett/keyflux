# OpenapiClient::TimelineIssueEvents

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **url** | **String** |  |  |
| **actor** | [**SimpleUser**](SimpleUser.md) |  |  |
| **event** | **String** |  |  |
| **commit_id** | **String** |  |  |
| **commit_url** | **String** |  |  |
| **created_at** | **String** |  |  |
| **performed_via_github_app** | [**NullableIntegration**](NullableIntegration.md) |  |  |
| **label** | [**LabeledIssueEventLabel**](LabeledIssueEventLabel.md) |  |  |
| **milestone** | [**MilestonedIssueEventMilestone**](MilestonedIssueEventMilestone.md) |  |  |
| **rename** | [**RenamedIssueEventRename**](RenamedIssueEventRename.md) |  |  |
| **review_requester** | [**SimpleUser**](SimpleUser.md) |  |  |
| **requested_team** | [**Team**](Team.md) |  | [optional] |
| **requested_reviewer** | [**SimpleUser**](SimpleUser.md) |  | [optional] |
| **dismissed_review** | [**ReviewDismissedIssueEventDismissedReview**](ReviewDismissedIssueEventDismissedReview.md) |  |  |
| **lock_reason** | **String** |  |  |
| **project_card** | [**AddedToProjectIssueEventProjectCard**](AddedToProjectIssueEventProjectCard.md) |  | [optional] |
| **body** | **String** | The text of the review. |  |
| **body_text** | **String** |  | [optional] |
| **body_html** | **String** |  | [optional] |
| **html_url** | **String** |  |  |
| **user** | [**SimpleUser**](SimpleUser.md) |  |  |
| **updated_at** | **Time** |  |  |
| **issue_url** | **String** |  |  |
| **author_association** | [**AuthorAssociation**](AuthorAssociation.md) |  |  |
| **reactions** | [**ReactionRollup**](ReactionRollup.md) |  | [optional] |
| **source** | [**TimelineCrossReferencedEventSource**](TimelineCrossReferencedEventSource.md) |  |  |
| **sha** | **String** | SHA for the commit |  |
| **author** | [**GitCommitAuthor**](GitCommitAuthor.md) |  |  |
| **committer** | [**GitCommitAuthor**](GitCommitAuthor.md) |  |  |
| **message** | **String** | Message describing the purpose of the commit |  |
| **tree** | [**GitCommitTree**](GitCommitTree.md) |  |  |
| **parents** | [**Array&lt;GitCommitParentsInner&gt;**](GitCommitParentsInner.md) |  |  |
| **verification** | [**GitCommitVerification**](GitCommitVerification.md) |  |  |
| **state** | **String** |  |  |
| **pull_request_url** | **String** |  |  |
| **_links** | [**TimelineReviewedEventLinks**](TimelineReviewedEventLinks.md) |  |  |
| **submitted_at** | **Time** |  | [optional] |
| **comments** | [**Array&lt;CommitComment&gt;**](CommitComment.md) |  | [optional] |
| **assignee** | [**SimpleUser**](SimpleUser.md) |  |  |
| **state_reason** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TimelineIssueEvents.new(
  id: null,
  node_id: null,
  url: null,
  actor: null,
  event: null,
  commit_id: null,
  commit_url: null,
  created_at: null,
  performed_via_github_app: null,
  label: null,
  milestone: null,
  rename: null,
  review_requester: null,
  requested_team: null,
  requested_reviewer: null,
  dismissed_review: null,
  lock_reason: &quot;off-topic&quot;,
  project_card: null,
  body: This looks great.,
  body_text: null,
  body_html: null,
  html_url: https://github.com/octocat/Hello-World/pull/12#pullrequestreview-80,
  user: null,
  updated_at: null,
  issue_url: null,
  author_association: null,
  reactions: null,
  source: null,
  sha: 7638417db6d59f3c431d3e1f261cc637155684cd,
  author: null,
  committer: null,
  message: Fix #42,
  tree: null,
  parents: null,
  verification: null,
  state: CHANGES_REQUESTED,
  pull_request_url: https://api.github.com/repos/octocat/Hello-World/pulls/12,
  _links: null,
  submitted_at: null,
  comments: null,
  assignee: null,
  state_reason: null
)
```

