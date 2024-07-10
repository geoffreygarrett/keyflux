# OpenapiClient::PullRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **_links** | [**WebhooksPullRequest5Links**](WebhooksPullRequest5Links.md) |  |  |
| **active_lock_reason** | **String** |  |  |
| **additions** | **Integer** |  | [optional] |
| **assignee** | [**User3**](User3.md) |  |  |
| **assignees** | [**Array&lt;User3&gt;**](User3.md) |  |  |
| **author_association** | **String** | How the author is associated with the repository. |  |
| **auto_merge** | [**PullRequestAutoMerge**](PullRequestAutoMerge.md) |  |  |
| **base** | [**PullRequestBase**](PullRequestBase.md) |  |  |
| **body** | **String** |  |  |
| **changed_files** | **Integer** |  | [optional] |
| **closed_at** | **Time** |  |  |
| **comments** | **Integer** |  | [optional] |
| **comments_url** | **String** |  |  |
| **commits** | **Integer** |  | [optional] |
| **commits_url** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **deletions** | **Integer** |  | [optional] |
| **diff_url** | **String** |  |  |
| **draft** | **Boolean** | Indicates whether or not the pull request is a draft. |  |
| **head** | [**PullRequestHead**](PullRequestHead.md) |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **issue_url** | **String** |  |  |
| **labels** | [**Array&lt;Label&gt;**](Label.md) |  |  |
| **locked** | **Boolean** |  |  |
| **maintainer_can_modify** | **Boolean** | Indicates whether maintainers can modify the pull request. | [optional] |
| **merge_commit_sha** | **String** |  |  |
| **mergeable** | **Boolean** |  | [optional] |
| **mergeable_state** | **String** |  | [optional] |
| **merged** | **Boolean** |  | [optional] |
| **merged_at** | **Time** |  |  |
| **merged_by** | [**User**](User.md) |  | [optional] |
| **milestone** | [**Milestone**](Milestone.md) |  |  |
| **node_id** | **String** |  |  |
| **number** | **Integer** | Number uniquely identifying the pull request within its repository. |  |
| **patch_url** | **String** |  |  |
| **rebaseable** | **Boolean** |  | [optional] |
| **requested_reviewers** | [**Array&lt;PullRequestRequestedReviewersInner&gt;**](PullRequestRequestedReviewersInner.md) |  |  |
| **requested_teams** | [**Array&lt;Team&gt;**](Team.md) |  |  |
| **review_comment_url** | **String** |  |  |
| **review_comments** | **Integer** |  | [optional] |
| **review_comments_url** | **String** |  |  |
| **state** | **String** | State of this Pull Request. Either &#x60;open&#x60; or &#x60;closed&#x60;. |  |
| **statuses_url** | **String** |  |  |
| **title** | **String** | The title of the pull request. |  |
| **updated_at** | **Time** |  |  |
| **url** | **String** |  |  |
| **user** | [**User2**](User2.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PullRequest.new(
  _links: null,
  active_lock_reason: null,
  additions: null,
  assignee: null,
  assignees: null,
  author_association: null,
  auto_merge: null,
  base: null,
  body: null,
  changed_files: null,
  closed_at: null,
  comments: null,
  comments_url: null,
  commits: null,
  commits_url: null,
  created_at: null,
  deletions: null,
  diff_url: null,
  draft: null,
  head: null,
  html_url: null,
  id: null,
  issue_url: null,
  labels: null,
  locked: null,
  maintainer_can_modify: null,
  merge_commit_sha: null,
  mergeable: null,
  mergeable_state: null,
  merged: null,
  merged_at: null,
  merged_by: null,
  milestone: null,
  node_id: null,
  number: null,
  patch_url: null,
  rebaseable: null,
  requested_reviewers: null,
  requested_teams: null,
  review_comment_url: null,
  review_comments: null,
  review_comments_url: null,
  state: null,
  statuses_url: null,
  title: null,
  updated_at: null,
  url: null,
  user: null
)
```

