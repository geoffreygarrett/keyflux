# OpenapiClient::PullRequestBaseRepo

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **archive_url** | **String** |  |  |
| **assignees_url** | **String** |  |  |
| **blobs_url** | **String** |  |  |
| **branches_url** | **String** |  |  |
| **collaborators_url** | **String** |  |  |
| **comments_url** | **String** |  |  |
| **commits_url** | **String** |  |  |
| **compare_url** | **String** |  |  |
| **contents_url** | **String** |  |  |
| **contributors_url** | **String** |  |  |
| **deployments_url** | **String** |  |  |
| **description** | **String** |  |  |
| **downloads_url** | **String** |  |  |
| **events_url** | **String** |  |  |
| **fork** | **Boolean** |  |  |
| **forks_url** | **String** |  |  |
| **full_name** | **String** |  |  |
| **git_commits_url** | **String** |  |  |
| **git_refs_url** | **String** |  |  |
| **git_tags_url** | **String** |  |  |
| **hooks_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **is_template** | **Boolean** |  | [optional] |
| **node_id** | **String** |  |  |
| **issue_comment_url** | **String** |  |  |
| **issue_events_url** | **String** |  |  |
| **issues_url** | **String** |  |  |
| **keys_url** | **String** |  |  |
| **labels_url** | **String** |  |  |
| **languages_url** | **String** |  |  |
| **merges_url** | **String** |  |  |
| **milestones_url** | **String** |  |  |
| **name** | **String** |  |  |
| **notifications_url** | **String** |  |  |
| **owner** | [**PullRequestHeadRepoOwner**](PullRequestHeadRepoOwner.md) |  |  |
| **private** | **Boolean** |  |  |
| **pulls_url** | **String** |  |  |
| **releases_url** | **String** |  |  |
| **stargazers_url** | **String** |  |  |
| **statuses_url** | **String** |  |  |
| **subscribers_url** | **String** |  |  |
| **subscription_url** | **String** |  |  |
| **tags_url** | **String** |  |  |
| **teams_url** | **String** |  |  |
| **trees_url** | **String** |  |  |
| **url** | **String** |  |  |
| **clone_url** | **String** |  |  |
| **default_branch** | **String** |  |  |
| **forks** | **Integer** |  |  |
| **forks_count** | **Integer** |  |  |
| **git_url** | **String** |  |  |
| **has_downloads** | **Boolean** |  |  |
| **has_issues** | **Boolean** |  |  |
| **has_projects** | **Boolean** |  |  |
| **has_wiki** | **Boolean** |  |  |
| **has_pages** | **Boolean** |  |  |
| **has_discussions** | **Boolean** |  |  |
| **homepage** | **String** |  |  |
| **language** | **String** |  |  |
| **master_branch** | **String** |  | [optional] |
| **archived** | **Boolean** |  |  |
| **disabled** | **Boolean** |  |  |
| **visibility** | **String** | The repository visibility: public, private, or internal. | [optional] |
| **mirror_url** | **String** |  |  |
| **open_issues** | **Integer** |  |  |
| **open_issues_count** | **Integer** |  |  |
| **permissions** | [**FullRepositoryPermissions**](FullRepositoryPermissions.md) |  | [optional] |
| **temp_clone_token** | **String** |  | [optional] |
| **allow_merge_commit** | **Boolean** |  | [optional] |
| **allow_squash_merge** | **Boolean** |  | [optional] |
| **allow_rebase_merge** | **Boolean** |  | [optional] |
| **license** | [**NullableLicenseSimple**](NullableLicenseSimple.md) |  |  |
| **pushed_at** | **Time** |  |  |
| **size** | **Integer** |  |  |
| **ssh_url** | **String** |  |  |
| **stargazers_count** | **Integer** |  |  |
| **svn_url** | **String** |  |  |
| **topics** | **Array&lt;String&gt;** |  | [optional] |
| **watchers** | **Integer** |  |  |
| **watchers_count** | **Integer** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **allow_forking** | **Boolean** |  | [optional] |
| **web_commit_signoff_required** | **Boolean** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PullRequestBaseRepo.new(
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
  description: null,
  downloads_url: null,
  events_url: null,
  fork: null,
  forks_url: null,
  full_name: null,
  git_commits_url: null,
  git_refs_url: null,
  git_tags_url: null,
  hooks_url: null,
  html_url: null,
  id: null,
  is_template: null,
  node_id: null,
  issue_comment_url: null,
  issue_events_url: null,
  issues_url: null,
  keys_url: null,
  labels_url: null,
  languages_url: null,
  merges_url: null,
  milestones_url: null,
  name: null,
  notifications_url: null,
  owner: null,
  private: null,
  pulls_url: null,
  releases_url: null,
  stargazers_url: null,
  statuses_url: null,
  subscribers_url: null,
  subscription_url: null,
  tags_url: null,
  teams_url: null,
  trees_url: null,
  url: null,
  clone_url: null,
  default_branch: null,
  forks: null,
  forks_count: null,
  git_url: null,
  has_downloads: null,
  has_issues: null,
  has_projects: null,
  has_wiki: null,
  has_pages: null,
  has_discussions: null,
  homepage: null,
  language: null,
  master_branch: null,
  archived: null,
  disabled: null,
  visibility: null,
  mirror_url: null,
  open_issues: null,
  open_issues_count: null,
  permissions: null,
  temp_clone_token: null,
  allow_merge_commit: null,
  allow_squash_merge: null,
  allow_rebase_merge: null,
  license: null,
  pushed_at: null,
  size: null,
  ssh_url: null,
  stargazers_count: null,
  svn_url: null,
  topics: null,
  watchers: null,
  watchers_count: null,
  created_at: null,
  updated_at: null,
  allow_forking: null,
  web_commit_signoff_required: null
)
```

