# OpenapiClient::SimplePullRequest4

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **_links** | [**WebhooksPullRequest5Links**](WebhooksPullRequest5Links.md) |  |  |
| **active_lock_reason** | **String** |  |  |
| **assignee** | [**User**](User.md) |  |  |
| **assignees** | [**Array&lt;User&gt;**](User.md) |  |  |
| **author_association** | **String** | How the author is associated with the repository. |  |
| **auto_merge** | [**PullRequestAutoMerge2**](PullRequestAutoMerge2.md) |  |  |
| **base** | [**SimplePullRequest3Base**](SimplePullRequest3Base.md) |  |  |
| **body** | **String** |  |  |
| **closed_at** | **String** |  |  |
| **comments_url** | **String** |  |  |
| **commits_url** | **String** |  |  |
| **created_at** | **String** |  |  |
| **diff_url** | **String** |  |  |
| **draft** | **Boolean** |  |  |
| **head** | [**SimplePullRequest3Base**](SimplePullRequest3Base.md) |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **issue_url** | **String** |  |  |
| **labels** | [**Array&lt;Label&gt;**](Label.md) |  |  |
| **locked** | **Boolean** |  |  |
| **merge_commit_sha** | **String** |  |  |
| **merged_at** | **String** |  |  |
| **milestone** | [**Milestone1**](Milestone1.md) |  |  |
| **node_id** | **String** |  |  |
| **number** | **Integer** |  |  |
| **patch_url** | **String** |  |  |
| **requested_reviewers** | [**Array&lt;WebhooksPullRequest5RequestedReviewersInner&gt;**](WebhooksPullRequest5RequestedReviewersInner.md) |  |  |
| **requested_teams** | [**Array&lt;Team&gt;**](Team.md) |  |  |
| **review_comment_url** | **String** |  |  |
| **review_comments_url** | **String** |  |  |
| **state** | **String** |  |  |
| **statuses_url** | **String** |  |  |
| **title** | **String** |  |  |
| **updated_at** | **String** |  |  |
| **url** | **String** |  |  |
| **user** | [**User1**](User1.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SimplePullRequest4.new(
  _links: null,
  active_lock_reason: null,
  assignee: null,
  assignees: null,
  author_association: null,
  auto_merge: null,
  base: null,
  body: null,
  closed_at: null,
  comments_url: null,
  commits_url: null,
  created_at: null,
  diff_url: null,
  draft: null,
  head: null,
  html_url: null,
  id: null,
  issue_url: null,
  labels: null,
  locked: null,
  merge_commit_sha: null,
  merged_at: null,
  milestone: null,
  node_id: null,
  number: null,
  patch_url: null,
  requested_reviewers: null,
  requested_teams: null,
  review_comment_url: null,
  review_comments_url: null,
  state: null,
  statuses_url: null,
  title: null,
  updated_at: null,
  url: null,
  user: null
)
```

