# OpenapiClient::PullRequestWebhook

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **html_url** | **String** |  |  |
| **diff_url** | **String** |  |  |
| **patch_url** | **String** |  |  |
| **issue_url** | **String** |  |  |
| **commits_url** | **String** |  |  |
| **review_comments_url** | **String** |  |  |
| **review_comment_url** | **String** |  |  |
| **comments_url** | **String** |  |  |
| **statuses_url** | **String** |  |  |
| **number** | **Integer** | Number uniquely identifying the pull request within its repository. |  |
| **state** | **String** | State of this Pull Request. Either &#x60;open&#x60; or &#x60;closed&#x60;. |  |
| **locked** | **Boolean** |  |  |
| **title** | **String** | The title of the pull request. |  |
| **user** | [**SimpleUser**](SimpleUser.md) |  |  |
| **body** | **String** |  |  |
| **labels** | [**Array&lt;PullRequestLabelsInner&gt;**](PullRequestLabelsInner.md) |  |  |
| **milestone** | [**NullableMilestone**](NullableMilestone.md) |  |  |
| **active_lock_reason** | **String** |  | [optional] |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **closed_at** | **Time** |  |  |
| **merged_at** | **Time** |  |  |
| **merge_commit_sha** | **String** |  |  |
| **assignee** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **assignees** | [**Array&lt;SimpleUser&gt;**](SimpleUser.md) |  | [optional] |
| **requested_reviewers** | [**Array&lt;SimpleUser&gt;**](SimpleUser.md) |  | [optional] |
| **requested_teams** | [**Array&lt;TeamSimple&gt;**](TeamSimple.md) |  | [optional] |
| **head** | [**PullRequestHead**](PullRequestHead.md) |  |  |
| **base** | [**PullRequestBase**](PullRequestBase.md) |  |  |
| **_links** | [**PullRequestSimpleLinks**](PullRequestSimpleLinks.md) |  |  |
| **author_association** | [**AuthorAssociation**](AuthorAssociation.md) |  |  |
| **auto_merge** | [**AutoMerge**](AutoMerge.md) |  |  |
| **draft** | **Boolean** | Indicates whether or not the pull request is a draft. | [optional] |
| **merged** | **Boolean** |  |  |
| **mergeable** | **Boolean** |  |  |
| **rebaseable** | **Boolean** |  | [optional] |
| **mergeable_state** | **String** |  |  |
| **merged_by** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **comments** | **Integer** |  |  |
| **review_comments** | **Integer** |  |  |
| **maintainer_can_modify** | **Boolean** | Indicates whether maintainers can modify the pull request. |  |
| **commits** | **Integer** |  |  |
| **additions** | **Integer** |  |  |
| **deletions** | **Integer** |  |  |
| **changed_files** | **Integer** |  |  |
| **allow_auto_merge** | **Boolean** | Whether to allow auto-merge for pull requests. | [optional][default to false] |
| **allow_update_branch** | **Boolean** | Whether to allow updating the pull request&#39;s branch. | [optional] |
| **delete_branch_on_merge** | **Boolean** | Whether to delete head branches when pull requests are merged. | [optional][default to false] |
| **merge_commit_message** | **String** | The default value for a merge commit message. - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;PR_BODY&#x60; - default to the pull request&#39;s body. - &#x60;BLANK&#x60; - default to a blank commit message. | [optional] |
| **merge_commit_title** | **String** | The default value for a merge commit title. - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;MERGE_MESSAGE&#x60; - default to the classic title for a merge message (e.g., \&quot;Merge pull request #123 from branch-name\&quot;). | [optional] |
| **squash_merge_commit_message** | **String** | The default value for a squash merge commit message: - &#x60;PR_BODY&#x60; - default to the pull request&#39;s body. - &#x60;COMMIT_MESSAGES&#x60; - default to the branch&#39;s commit messages. - &#x60;BLANK&#x60; - default to a blank commit message. | [optional] |
| **squash_merge_commit_title** | **String** | The default value for a squash merge commit title: - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;COMMIT_OR_PR_TITLE&#x60; - default to the commit&#39;s title (if only one commit) or the pull request&#39;s title (when more than one commit). | [optional] |
| **use_squash_pr_title_as_default** | **Boolean** | Whether a squash merge commit can use the pull request title as default. **This property has been deprecated. Please use &#x60;squash_merge_commit_title&#x60; instead.** | [optional][default to false] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PullRequestWebhook.new(
  url: https://api.github.com/repos/octocat/Hello-World/pulls/1347,
  id: 1,
  node_id: MDExOlB1bGxSZXF1ZXN0MQ&#x3D;&#x3D;,
  html_url: https://github.com/octocat/Hello-World/pull/1347,
  diff_url: https://github.com/octocat/Hello-World/pull/1347.diff,
  patch_url: https://github.com/octocat/Hello-World/pull/1347.patch,
  issue_url: https://api.github.com/repos/octocat/Hello-World/issues/1347,
  commits_url: https://api.github.com/repos/octocat/Hello-World/pulls/1347/commits,
  review_comments_url: https://api.github.com/repos/octocat/Hello-World/pulls/1347/comments,
  review_comment_url: https://api.github.com/repos/octocat/Hello-World/pulls/comments{/number},
  comments_url: https://api.github.com/repos/octocat/Hello-World/issues/1347/comments,
  statuses_url: https://api.github.com/repos/octocat/Hello-World/statuses/6dcb09b5b57875f334f61aebed695e2e4193db5e,
  number: 42,
  state: open,
  locked: true,
  title: Amazing new feature,
  user: null,
  body: Please pull these awesome changes,
  labels: null,
  milestone: null,
  active_lock_reason: too heated,
  created_at: 2011-01-26T19:01:12Z,
  updated_at: 2011-01-26T19:01:12Z,
  closed_at: 2011-01-26T19:01:12Z,
  merged_at: 2011-01-26T19:01:12Z,
  merge_commit_sha: e5bd3914e2e596debea16f433f57875b5b90bcd6,
  assignee: null,
  assignees: null,
  requested_reviewers: null,
  requested_teams: null,
  head: null,
  base: null,
  _links: null,
  author_association: null,
  auto_merge: null,
  draft: false,
  merged: null,
  mergeable: true,
  rebaseable: true,
  mergeable_state: clean,
  merged_by: null,
  comments: 10,
  review_comments: 0,
  maintainer_can_modify: true,
  commits: 3,
  additions: 100,
  deletions: 3,
  changed_files: 5,
  allow_auto_merge: null,
  allow_update_branch: null,
  delete_branch_on_merge: null,
  merge_commit_message: null,
  merge_commit_title: null,
  squash_merge_commit_message: null,
  squash_merge_commit_title: null,
  use_squash_pr_title_as_default: null
)
```

