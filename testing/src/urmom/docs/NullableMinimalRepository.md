# OpenapiClient::NullableMinimalRepository

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **name** | **String** |  |  |
| **full_name** | **String** |  |  |
| **owner** | [**SimpleUser**](SimpleUser.md) |  |  |
| **private** | **Boolean** |  |  |
| **html_url** | **String** |  |  |
| **description** | **String** |  |  |
| **fork** | **Boolean** |  |  |
| **url** | **String** |  |  |
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
| **downloads_url** | **String** |  |  |
| **events_url** | **String** |  |  |
| **forks_url** | **String** |  |  |
| **git_commits_url** | **String** |  |  |
| **git_refs_url** | **String** |  |  |
| **git_tags_url** | **String** |  |  |
| **git_url** | **String** |  | [optional] |
| **issue_comment_url** | **String** |  |  |
| **issue_events_url** | **String** |  |  |
| **issues_url** | **String** |  |  |
| **keys_url** | **String** |  |  |
| **labels_url** | **String** |  |  |
| **languages_url** | **String** |  |  |
| **merges_url** | **String** |  |  |
| **milestones_url** | **String** |  |  |
| **notifications_url** | **String** |  |  |
| **pulls_url** | **String** |  |  |
| **releases_url** | **String** |  |  |
| **ssh_url** | **String** |  | [optional] |
| **stargazers_url** | **String** |  |  |
| **statuses_url** | **String** |  |  |
| **subscribers_url** | **String** |  |  |
| **subscription_url** | **String** |  |  |
| **tags_url** | **String** |  |  |
| **teams_url** | **String** |  |  |
| **trees_url** | **String** |  |  |
| **clone_url** | **String** |  | [optional] |
| **mirror_url** | **String** |  | [optional] |
| **hooks_url** | **String** |  |  |
| **svn_url** | **String** |  | [optional] |
| **homepage** | **String** |  | [optional] |
| **language** | **String** |  | [optional] |
| **forks_count** | **Integer** |  | [optional] |
| **stargazers_count** | **Integer** |  | [optional] |
| **watchers_count** | **Integer** |  | [optional] |
| **size** | **Integer** | The size of the repository, in kilobytes. Size is calculated hourly. When a repository is initially created, the size is 0. | [optional] |
| **default_branch** | **String** |  | [optional] |
| **open_issues_count** | **Integer** |  | [optional] |
| **is_template** | **Boolean** |  | [optional] |
| **topics** | **Array&lt;String&gt;** |  | [optional] |
| **has_issues** | **Boolean** |  | [optional] |
| **has_projects** | **Boolean** |  | [optional] |
| **has_wiki** | **Boolean** |  | [optional] |
| **has_pages** | **Boolean** |  | [optional] |
| **has_downloads** | **Boolean** |  | [optional] |
| **has_discussions** | **Boolean** |  | [optional] |
| **archived** | **Boolean** |  | [optional] |
| **disabled** | **Boolean** |  | [optional] |
| **visibility** | **String** |  | [optional] |
| **pushed_at** | **Time** |  | [optional] |
| **created_at** | **Time** |  | [optional] |
| **updated_at** | **Time** |  | [optional] |
| **permissions** | [**MinimalRepositoryPermissions**](MinimalRepositoryPermissions.md) |  | [optional] |
| **role_name** | **String** |  | [optional] |
| **temp_clone_token** | **String** |  | [optional] |
| **delete_branch_on_merge** | **Boolean** |  | [optional] |
| **subscribers_count** | **Integer** |  | [optional] |
| **network_count** | **Integer** |  | [optional] |
| **code_of_conduct** | [**CodeOfConduct**](CodeOfConduct.md) |  | [optional] |
| **license** | [**MinimalRepositoryLicense**](MinimalRepositoryLicense.md) |  | [optional] |
| **forks** | **Integer** |  | [optional] |
| **open_issues** | **Integer** |  | [optional] |
| **watchers** | **Integer** |  | [optional] |
| **allow_forking** | **Boolean** |  | [optional] |
| **web_commit_signoff_required** | **Boolean** |  | [optional] |
| **security_and_analysis** | [**SecurityAndAnalysis**](SecurityAndAnalysis.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::NullableMinimalRepository.new(
  id: 1296269,
  node_id: MDEwOlJlcG9zaXRvcnkxMjk2MjY5,
  name: Hello-World,
  full_name: octocat/Hello-World,
  owner: null,
  private: null,
  html_url: https://github.com/octocat/Hello-World,
  description: This your first repo!,
  fork: null,
  url: https://api.github.com/repos/octocat/Hello-World,
  archive_url: http://api.github.com/repos/octocat/Hello-World/{archive_format}{/ref},
  assignees_url: http://api.github.com/repos/octocat/Hello-World/assignees{/user},
  blobs_url: http://api.github.com/repos/octocat/Hello-World/git/blobs{/sha},
  branches_url: http://api.github.com/repos/octocat/Hello-World/branches{/branch},
  collaborators_url: http://api.github.com/repos/octocat/Hello-World/collaborators{/collaborator},
  comments_url: http://api.github.com/repos/octocat/Hello-World/comments{/number},
  commits_url: http://api.github.com/repos/octocat/Hello-World/commits{/sha},
  compare_url: http://api.github.com/repos/octocat/Hello-World/compare/{base}...{head},
  contents_url: http://api.github.com/repos/octocat/Hello-World/contents/{+path},
  contributors_url: http://api.github.com/repos/octocat/Hello-World/contributors,
  deployments_url: http://api.github.com/repos/octocat/Hello-World/deployments,
  downloads_url: http://api.github.com/repos/octocat/Hello-World/downloads,
  events_url: http://api.github.com/repos/octocat/Hello-World/events,
  forks_url: http://api.github.com/repos/octocat/Hello-World/forks,
  git_commits_url: http://api.github.com/repos/octocat/Hello-World/git/commits{/sha},
  git_refs_url: http://api.github.com/repos/octocat/Hello-World/git/refs{/sha},
  git_tags_url: http://api.github.com/repos/octocat/Hello-World/git/tags{/sha},
  git_url: null,
  issue_comment_url: http://api.github.com/repos/octocat/Hello-World/issues/comments{/number},
  issue_events_url: http://api.github.com/repos/octocat/Hello-World/issues/events{/number},
  issues_url: http://api.github.com/repos/octocat/Hello-World/issues{/number},
  keys_url: http://api.github.com/repos/octocat/Hello-World/keys{/key_id},
  labels_url: http://api.github.com/repos/octocat/Hello-World/labels{/name},
  languages_url: http://api.github.com/repos/octocat/Hello-World/languages,
  merges_url: http://api.github.com/repos/octocat/Hello-World/merges,
  milestones_url: http://api.github.com/repos/octocat/Hello-World/milestones{/number},
  notifications_url: http://api.github.com/repos/octocat/Hello-World/notifications{?since,all,participating},
  pulls_url: http://api.github.com/repos/octocat/Hello-World/pulls{/number},
  releases_url: http://api.github.com/repos/octocat/Hello-World/releases{/id},
  ssh_url: null,
  stargazers_url: http://api.github.com/repos/octocat/Hello-World/stargazers,
  statuses_url: http://api.github.com/repos/octocat/Hello-World/statuses/{sha},
  subscribers_url: http://api.github.com/repos/octocat/Hello-World/subscribers,
  subscription_url: http://api.github.com/repos/octocat/Hello-World/subscription,
  tags_url: http://api.github.com/repos/octocat/Hello-World/tags,
  teams_url: http://api.github.com/repos/octocat/Hello-World/teams,
  trees_url: http://api.github.com/repos/octocat/Hello-World/git/trees{/sha},
  clone_url: null,
  mirror_url: null,
  hooks_url: http://api.github.com/repos/octocat/Hello-World/hooks,
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
  has_discussions: null,
  archived: null,
  disabled: null,
  visibility: null,
  pushed_at: 2011-01-26T19:06:43Z,
  created_at: 2011-01-26T19:01:12Z,
  updated_at: 2011-01-26T19:14:43Z,
  permissions: null,
  role_name: admin,
  temp_clone_token: null,
  delete_branch_on_merge: null,
  subscribers_count: null,
  network_count: null,
  code_of_conduct: null,
  license: null,
  forks: 0,
  open_issues: 0,
  watchers: 0,
  allow_forking: null,
  web_commit_signoff_required: false,
  security_and_analysis: null
)
```

