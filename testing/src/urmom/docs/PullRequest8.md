# OpenapiClient::PullRequest8

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **_links** | [**PullRequest6Links**](PullRequest6Links.md) |  |  |
| **active_lock_reason** | **String** |  |  |
| **additions** | **Integer** |  | [optional] |
| **assignee** | [**User7**](User7.md) |  |  |
| **assignees** | [**Array&lt;User7&gt;**](User7.md) |  |  |
| **author_association** | **String** | How the author is associated with the repository. |  |
| **auto_merge** | [**PullRequestAutoMerge1**](PullRequestAutoMerge1.md) |  |  |
| **base** | [**PullRequest6Head**](PullRequest6Head.md) |  |  |
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
| **head** | [**PullRequest6Head**](PullRequest6Head.md) |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **issue_url** | **String** |  |  |
| **labels** | [**Array&lt;Label2&gt;**](Label2.md) |  |  |
| **locked** | **Boolean** |  |  |
| **maintainer_can_modify** | **Boolean** | Indicates whether maintainers can modify the pull request. | [optional] |
| **merge_commit_sha** | **String** |  |  |
| **mergeable** | **Boolean** |  | [optional] |
| **mergeable_state** | **String** |  | [optional] |
| **merged** | **Boolean** |  | [optional] |
| **merged_at** | **Time** |  |  |
| **merged_by** | [**User5**](User5.md) |  | [optional] |
| **milestone** | [**Milestone3**](Milestone3.md) |  |  |
| **node_id** | **String** |  |  |
| **number** | **Integer** | Number uniquely identifying the pull request within its repository. |  |
| **patch_url** | **String** |  |  |
| **rebaseable** | **Boolean** |  | [optional] |
| **requested_reviewers** | [**Array&lt;OneOfobjectobject&gt;**](OneOfobjectobject.md) |  |  |
| **requested_teams** | [**Array&lt;Team3&gt;**](Team3.md) |  |  |
| **review_comment_url** | **String** |  |  |
| **review_comments** | **Integer** |  | [optional] |
| **review_comments_url** | **String** |  |  |
| **state** | **String** | State of this Pull Request. Either &#x60;open&#x60; or &#x60;closed&#x60;. |  |
| **statuses_url** | **String** |  |  |
| **title** | **String** | The title of the pull request. |  |
| **updated_at** | **Time** |  |  |
| **url** | **String** |  |  |
| **user** | [**User8**](User8.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PullRequest8.new(
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

