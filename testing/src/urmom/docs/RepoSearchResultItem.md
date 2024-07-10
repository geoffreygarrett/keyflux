# OpenapiClient::RepoSearchResultItem

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **name** | **String** |  |  |
| **full_name** | **String** |  |  |
| **owner** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **private** | **Boolean** |  |  |
| **html_url** | **String** |  |  |
| **description** | **String** |  |  |
| **fork** | **Boolean** |  |  |
| **url** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **pushed_at** | **Time** |  |  |
| **homepage** | **String** |  |  |
| **size** | **Integer** |  |  |
| **stargazers_count** | **Integer** |  |  |
| **watchers_count** | **Integer** |  |  |
| **language** | **String** |  |  |
| **forks_count** | **Integer** |  |  |
| **open_issues_count** | **Integer** |  |  |
| **master_branch** | **String** |  | [optional] |
| **default_branch** | **String** |  |  |
| **score** | **Float** |  |  |
| **forks_url** | **String** |  |  |
| **keys_url** | **String** |  |  |
| **collaborators_url** | **String** |  |  |
| **teams_url** | **String** |  |  |
| **hooks_url** | **String** |  |  |
| **issue_events_url** | **String** |  |  |
| **events_url** | **String** |  |  |
| **assignees_url** | **String** |  |  |
| **branches_url** | **String** |  |  |
| **tags_url** | **String** |  |  |
| **blobs_url** | **String** |  |  |
| **git_tags_url** | **String** |  |  |
| **git_refs_url** | **String** |  |  |
| **trees_url** | **String** |  |  |
| **statuses_url** | **String** |  |  |
| **languages_url** | **String** |  |  |
| **stargazers_url** | **String** |  |  |
| **contributors_url** | **String** |  |  |
| **subscribers_url** | **String** |  |  |
| **subscription_url** | **String** |  |  |
| **commits_url** | **String** |  |  |
| **git_commits_url** | **String** |  |  |
| **comments_url** | **String** |  |  |
| **issue_comment_url** | **String** |  |  |
| **contents_url** | **String** |  |  |
| **compare_url** | **String** |  |  |
| **merges_url** | **String** |  |  |
| **archive_url** | **String** |  |  |
| **downloads_url** | **String** |  |  |
| **issues_url** | **String** |  |  |
| **pulls_url** | **String** |  |  |
| **milestones_url** | **String** |  |  |
| **notifications_url** | **String** |  |  |
| **labels_url** | **String** |  |  |
| **releases_url** | **String** |  |  |
| **deployments_url** | **String** |  |  |
| **git_url** | **String** |  |  |
| **ssh_url** | **String** |  |  |
| **clone_url** | **String** |  |  |
| **svn_url** | **String** |  |  |
| **forks** | **Integer** |  |  |
| **open_issues** | **Integer** |  |  |
| **watchers** | **Integer** |  |  |
| **topics** | **Array&lt;String&gt;** |  | [optional] |
| **mirror_url** | **String** |  |  |
| **has_issues** | **Boolean** |  |  |
| **has_projects** | **Boolean** |  |  |
| **has_pages** | **Boolean** |  |  |
| **has_wiki** | **Boolean** |  |  |
| **has_downloads** | **Boolean** |  |  |
| **has_discussions** | **Boolean** |  | [optional] |
| **archived** | **Boolean** |  |  |
| **disabled** | **Boolean** | Returns whether or not this repository disabled. |  |
| **visibility** | **String** | The repository visibility: public, private, or internal. | [optional] |
| **license** | [**NullableLicenseSimple**](NullableLicenseSimple.md) |  |  |
| **permissions** | [**FullRepositoryPermissions**](FullRepositoryPermissions.md) |  | [optional] |
| **text_matches** | [**Array&lt;SearchResultTextMatchesInner&gt;**](SearchResultTextMatchesInner.md) |  | [optional] |
| **temp_clone_token** | **String** |  | [optional] |
| **allow_merge_commit** | **Boolean** |  | [optional] |
| **allow_squash_merge** | **Boolean** |  | [optional] |
| **allow_rebase_merge** | **Boolean** |  | [optional] |
| **allow_auto_merge** | **Boolean** |  | [optional] |
| **delete_branch_on_merge** | **Boolean** |  | [optional] |
| **allow_forking** | **Boolean** |  | [optional] |
| **is_template** | **Boolean** |  | [optional] |
| **web_commit_signoff_required** | **Boolean** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepoSearchResultItem.new(
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
  created_at: null,
  updated_at: null,
  pushed_at: null,
  homepage: null,
  size: null,
  stargazers_count: null,
  watchers_count: null,
  language: null,
  forks_count: null,
  open_issues_count: null,
  master_branch: null,
  default_branch: null,
  score: null,
  forks_url: null,
  keys_url: null,
  collaborators_url: null,
  teams_url: null,
  hooks_url: null,
  issue_events_url: null,
  events_url: null,
  assignees_url: null,
  branches_url: null,
  tags_url: null,
  blobs_url: null,
  git_tags_url: null,
  git_refs_url: null,
  trees_url: null,
  statuses_url: null,
  languages_url: null,
  stargazers_url: null,
  contributors_url: null,
  subscribers_url: null,
  subscription_url: null,
  commits_url: null,
  git_commits_url: null,
  comments_url: null,
  issue_comment_url: null,
  contents_url: null,
  compare_url: null,
  merges_url: null,
  archive_url: null,
  downloads_url: null,
  issues_url: null,
  pulls_url: null,
  milestones_url: null,
  notifications_url: null,
  labels_url: null,
  releases_url: null,
  deployments_url: null,
  git_url: null,
  ssh_url: null,
  clone_url: null,
  svn_url: null,
  forks: null,
  open_issues: null,
  watchers: null,
  topics: null,
  mirror_url: null,
  has_issues: null,
  has_projects: null,
  has_pages: null,
  has_wiki: null,
  has_downloads: null,
  has_discussions: null,
  archived: null,
  disabled: null,
  visibility: null,
  license: null,
  permissions: null,
  text_matches: null,
  temp_clone_token: null,
  allow_merge_commit: null,
  allow_squash_merge: null,
  allow_rebase_merge: null,
  allow_auto_merge: null,
  delete_branch_on_merge: null,
  allow_forking: null,
  is_template: null,
  web_commit_signoff_required: false
)
```

