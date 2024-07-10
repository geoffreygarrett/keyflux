# OpenapiClient::RepositoryWebhooksTemplateRepository

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  | [optional] |
| **node_id** | **String** |  | [optional] |
| **name** | **String** |  | [optional] |
| **full_name** | **String** |  | [optional] |
| **owner** | [**RepositoryWebhooksTemplateRepositoryOwner**](RepositoryWebhooksTemplateRepositoryOwner.md) |  | [optional] |
| **private** | **Boolean** |  | [optional] |
| **html_url** | **String** |  | [optional] |
| **description** | **String** |  | [optional] |
| **fork** | **Boolean** |  | [optional] |
| **url** | **String** |  | [optional] |
| **archive_url** | **String** |  | [optional] |
| **assignees_url** | **String** |  | [optional] |
| **blobs_url** | **String** |  | [optional] |
| **branches_url** | **String** |  | [optional] |
| **collaborators_url** | **String** |  | [optional] |
| **comments_url** | **String** |  | [optional] |
| **commits_url** | **String** |  | [optional] |
| **compare_url** | **String** |  | [optional] |
| **contents_url** | **String** |  | [optional] |
| **contributors_url** | **String** |  | [optional] |
| **deployments_url** | **String** |  | [optional] |
| **downloads_url** | **String** |  | [optional] |
| **events_url** | **String** |  | [optional] |
| **forks_url** | **String** |  | [optional] |
| **git_commits_url** | **String** |  | [optional] |
| **git_refs_url** | **String** |  | [optional] |
| **git_tags_url** | **String** |  | [optional] |
| **git_url** | **String** |  | [optional] |
| **issue_comment_url** | **String** |  | [optional] |
| **issue_events_url** | **String** |  | [optional] |
| **issues_url** | **String** |  | [optional] |
| **keys_url** | **String** |  | [optional] |
| **labels_url** | **String** |  | [optional] |
| **languages_url** | **String** |  | [optional] |
| **merges_url** | **String** |  | [optional] |
| **milestones_url** | **String** |  | [optional] |
| **notifications_url** | **String** |  | [optional] |
| **pulls_url** | **String** |  | [optional] |
| **releases_url** | **String** |  | [optional] |
| **ssh_url** | **String** |  | [optional] |
| **stargazers_url** | **String** |  | [optional] |
| **statuses_url** | **String** |  | [optional] |
| **subscribers_url** | **String** |  | [optional] |
| **subscription_url** | **String** |  | [optional] |
| **tags_url** | **String** |  | [optional] |
| **teams_url** | **String** |  | [optional] |
| **trees_url** | **String** |  | [optional] |
| **clone_url** | **String** |  | [optional] |
| **mirror_url** | **String** |  | [optional] |
| **hooks_url** | **String** |  | [optional] |
| **svn_url** | **String** |  | [optional] |
| **homepage** | **String** |  | [optional] |
| **language** | **String** |  | [optional] |
| **forks_count** | **Integer** |  | [optional] |
| **stargazers_count** | **Integer** |  | [optional] |
| **watchers_count** | **Integer** |  | [optional] |
| **size** | **Integer** |  | [optional] |
| **default_branch** | **String** |  | [optional] |
| **open_issues_count** | **Integer** |  | [optional] |
| **is_template** | **Boolean** |  | [optional] |
| **topics** | **Array&lt;String&gt;** |  | [optional] |
| **has_issues** | **Boolean** |  | [optional] |
| **has_projects** | **Boolean** |  | [optional] |
| **has_wiki** | **Boolean** |  | [optional] |
| **has_pages** | **Boolean** |  | [optional] |
| **has_downloads** | **Boolean** |  | [optional] |
| **archived** | **Boolean** |  | [optional] |
| **disabled** | **Boolean** |  | [optional] |
| **visibility** | **String** |  | [optional] |
| **pushed_at** | **String** |  | [optional] |
| **created_at** | **String** |  | [optional] |
| **updated_at** | **String** |  | [optional] |
| **permissions** | [**MinimalRepositoryPermissions**](MinimalRepositoryPermissions.md) |  | [optional] |
| **allow_rebase_merge** | **Boolean** |  | [optional] |
| **temp_clone_token** | **String** |  | [optional] |
| **allow_squash_merge** | **Boolean** |  | [optional] |
| **allow_auto_merge** | **Boolean** |  | [optional] |
| **delete_branch_on_merge** | **Boolean** |  | [optional] |
| **allow_update_branch** | **Boolean** |  | [optional] |
| **use_squash_pr_title_as_default** | **Boolean** |  | [optional] |
| **squash_merge_commit_title** | **String** | The default value for a squash merge commit title:  - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;COMMIT_OR_PR_TITLE&#x60; - default to the commit&#39;s title (if only one commit) or the pull request&#39;s title (when more than one commit). | [optional] |
| **squash_merge_commit_message** | **String** | The default value for a squash merge commit message:  - &#x60;PR_BODY&#x60; - default to the pull request&#39;s body. - &#x60;COMMIT_MESSAGES&#x60; - default to the branch&#39;s commit messages. - &#x60;BLANK&#x60; - default to a blank commit message. | [optional] |
| **merge_commit_title** | **String** | The default value for a merge commit title.  - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;MERGE_MESSAGE&#x60; - default to the classic title for a merge message (e.g., Merge pull request #123 from branch-name). | [optional] |
| **merge_commit_message** | **String** | The default value for a merge commit message.  - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;PR_BODY&#x60; - default to the pull request&#39;s body. - &#x60;BLANK&#x60; - default to a blank commit message. | [optional] |
| **allow_merge_commit** | **Boolean** |  | [optional] |
| **subscribers_count** | **Integer** |  | [optional] |
| **network_count** | **Integer** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryWebhooksTemplateRepository.new(
  id: null,
  node_id: null,
  name: null,
  full_name: null,
  owner: null,
  private: null,
  html_url: null,
  description: null,
  fork: null,
  url: null,
  archive_url: null,
  assignees_url: null,
  blobs_url: null,
  branches_url: null,
  collaborators_url: null,
  comments_url: null,
  commits_url: null,
  compare_url: null,
  contents_url: null,
  contributors_url: null,
  deployments_url: null,
  downloads_url: null,
  events_url: null,
  forks_url: null,
  git_commits_url: null,
  git_refs_url: null,
  git_tags_url: null,
  git_url: null,
  issue_comment_url: null,
  issue_events_url: null,
  issues_url: null,
  keys_url: null,
  labels_url: null,
  languages_url: null,
  merges_url: null,
  milestones_url: null,
  notifications_url: null,
  pulls_url: null,
  releases_url: null,
  ssh_url: null,
  stargazers_url: null,
  statuses_url: null,
  subscribers_url: null,
  subscription_url: null,
  tags_url: null,
  teams_url: null,
  trees_url: null,
  clone_url: null,
  mirror_url: null,
  hooks_url: null,
  svn_url: null,
  homepage: null,
  language: null,
  forks_count: null,
  stargazers_count: null,
  watchers_count: null,
  size: null,
  default_branch: null,
  open_issues_count: null,
  is_template: null,
  topics: null,
  has_issues: null,
  has_projects: null,
  has_wiki: null,
  has_pages: null,
  has_downloads: null,
  archived: null,
  disabled: null,
  visibility: null,
  pushed_at: null,
  created_at: null,
  updated_at: null,
  permissions: null,
  allow_rebase_merge: null,
  temp_clone_token: null,
  allow_squash_merge: null,
  allow_auto_merge: null,
  delete_branch_on_merge: null,
  allow_update_branch: null,
  use_squash_pr_title_as_default: null,
  squash_merge_commit_title: null,
  squash_merge_commit_message: null,
  merge_commit_title: null,
  merge_commit_message: null,
  allow_merge_commit: null,
  subscribers_count: null,
  network_count: null
)
```

