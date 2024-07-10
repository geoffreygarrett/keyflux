# OpenapiClient::WebhookForkForkee

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **allow_auto_merge** | **Boolean** | Whether to allow auto-merge for pull requests. | [optional][default to false] |
| **allow_forking** | **Boolean** |  | [optional] |
| **allow_merge_commit** | **Boolean** | Whether to allow merge commits for pull requests. | [optional][default to true] |
| **allow_rebase_merge** | **Boolean** | Whether to allow rebase merges for pull requests. | [optional][default to true] |
| **allow_squash_merge** | **Boolean** | Whether to allow squash merges for pull requests. | [optional][default to true] |
| **allow_update_branch** | **Boolean** |  | [optional] |
| **archive_url** | **String** |  |  |
| **archived** | **Boolean** |  |  |
| **assignees_url** | **String** |  |  |
| **blobs_url** | **String** |  |  |
| **branches_url** | **String** |  |  |
| **clone_url** | **String** |  |  |
| **collaborators_url** | **String** |  |  |
| **comments_url** | **String** |  |  |
| **commits_url** | **String** |  |  |
| **compare_url** | **String** |  |  |
| **contents_url** | **String** |  |  |
| **contributors_url** | **String** |  |  |
| **created_at** | **String** |  |  |
| **default_branch** | **String** |  |  |
| **delete_branch_on_merge** | **Boolean** | Whether to delete head branches when pull requests are merged | [optional][default to false] |
| **deployments_url** | **String** |  |  |
| **description** | **String** |  |  |
| **disabled** | **Boolean** |  | [optional] |
| **downloads_url** | **String** |  |  |
| **events_url** | **String** |  |  |
| **fork** | **Boolean** |  |  |
| **forks** | **Integer** |  |  |
| **forks_count** | **Integer** |  |  |
| **forks_url** | **String** |  |  |
| **full_name** | **String** |  |  |
| **git_commits_url** | **String** |  |  |
| **git_refs_url** | **String** |  |  |
| **git_tags_url** | **String** |  |  |
| **git_url** | **String** |  |  |
| **has_downloads** | **Boolean** |  |  |
| **has_issues** | **Boolean** |  |  |
| **has_pages** | **Boolean** |  |  |
| **has_projects** | **Boolean** |  |  |
| **has_wiki** | **Boolean** |  |  |
| **homepage** | **String** |  |  |
| **hooks_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **is_template** | **Boolean** |  | [optional] |
| **issue_comment_url** | **String** |  |  |
| **issue_events_url** | **String** |  |  |
| **issues_url** | **String** |  |  |
| **keys_url** | **String** |  |  |
| **labels_url** | **String** |  |  |
| **language** | **Object** |  |  |
| **languages_url** | **String** |  |  |
| **license** | **Object** |  |  |
| **master_branch** | **String** |  | [optional] |
| **merges_url** | **String** |  |  |
| **milestones_url** | **String** |  |  |
| **mirror_url** | **Object** |  |  |
| **name** | **String** |  |  |
| **node_id** | **String** |  |  |
| **notifications_url** | **String** |  |  |
| **open_issues** | **Integer** |  |  |
| **open_issues_count** | **Integer** |  |  |
| **organization** | **String** |  | [optional] |
| **owner** | [**WebhooksSponsorshipMaintainer**](WebhooksSponsorshipMaintainer.md) |  |  |
| **permissions** | [**RepositoryPermissions**](RepositoryPermissions.md) |  | [optional] |
| **private** | **Boolean** |  |  |
| **public** | **Boolean** |  | [optional] |
| **pulls_url** | **String** |  |  |
| **pushed_at** | **String** |  |  |
| **releases_url** | **String** |  |  |
| **role_name** | **String** |  | [optional] |
| **size** | **Integer** |  |  |
| **ssh_url** | **String** |  |  |
| **stargazers** | **Integer** |  | [optional] |
| **stargazers_count** | **Integer** |  |  |
| **stargazers_url** | **String** |  |  |
| **statuses_url** | **String** |  |  |
| **subscribers_url** | **String** |  |  |
| **subscription_url** | **String** |  |  |
| **svn_url** | **String** |  |  |
| **tags_url** | **String** |  |  |
| **teams_url** | **String** |  |  |
| **topics** | **Array&lt;Object&gt;** |  |  |
| **trees_url** | **String** |  |  |
| **updated_at** | **String** |  |  |
| **url** | **String** |  |  |
| **visibility** | **String** |  |  |
| **watchers** | **Integer** |  |  |
| **watchers_count** | **Integer** |  |  |
| **web_commit_signoff_required** | **Boolean** | Whether to require contributors to sign off on web-based commits | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookForkForkee.new(
  allow_auto_merge: null,
  allow_forking: null,
  allow_merge_commit: null,
  allow_rebase_merge: null,
  allow_squash_merge: null,
  allow_update_branch: null,
  archive_url: null,
  archived: null,
  assignees_url: null,
  blobs_url: null,
  branches_url: null,
  clone_url: null,
  collaborators_url: null,
  comments_url: null,
  commits_url: null,
  compare_url: null,
  contents_url: null,
  contributors_url: null,
  created_at: null,
  default_branch: null,
  delete_branch_on_merge: null,
  deployments_url: null,
  description: null,
  disabled: null,
  downloads_url: null,
  events_url: null,
  fork: null,
  forks: null,
  forks_count: null,
  forks_url: null,
  full_name: null,
  git_commits_url: null,
  git_refs_url: null,
  git_tags_url: null,
  git_url: null,
  has_downloads: null,
  has_issues: null,
  has_pages: null,
  has_projects: null,
  has_wiki: null,
  homepage: null,
  hooks_url: null,
  html_url: null,
  id: null,
  is_template: null,
  issue_comment_url: null,
  issue_events_url: null,
  issues_url: null,
  keys_url: null,
  labels_url: null,
  language: null,
  languages_url: null,
  license: null,
  master_branch: null,
  merges_url: null,
  milestones_url: null,
  mirror_url: null,
  name: null,
  node_id: null,
  notifications_url: null,
  open_issues: null,
  open_issues_count: null,
  organization: null,
  owner: null,
  permissions: null,
  private: null,
  public: null,
  pulls_url: null,
  pushed_at: null,
  releases_url: null,
  role_name: null,
  size: null,
  ssh_url: null,
  stargazers: null,
  stargazers_count: null,
  stargazers_url: null,
  statuses_url: null,
  subscribers_url: null,
  subscription_url: null,
  svn_url: null,
  tags_url: null,
  teams_url: null,
  topics: null,
  trees_url: null,
  updated_at: null,
  url: null,
  visibility: null,
  watchers: null,
  watchers_count: null,
  web_commit_signoff_required: null
)
```

