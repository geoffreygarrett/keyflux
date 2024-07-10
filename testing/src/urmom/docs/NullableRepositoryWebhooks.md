# OpenapiClient::NullableRepositoryWebhooks

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the repository |  |
| **node_id** | **String** |  |  |
| **name** | **String** | The name of the repository. |  |
| **full_name** | **String** |  |  |
| **license** | [**NullableLicenseSimple**](NullableLicenseSimple.md) |  |  |
| **organization** | [**NullableSimpleUser**](NullableSimpleUser.md) |  | [optional] |
| **forks** | **Integer** |  |  |
| **permissions** | [**RepositoryPermissions**](RepositoryPermissions.md) |  | [optional] |
| **owner** | [**SimpleUser**](SimpleUser.md) |  |  |
| **private** | **Boolean** | Whether the repository is private or public. | [default to false] |
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
| **git_url** | **String** |  |  |
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
| **ssh_url** | **String** |  |  |
| **stargazers_url** | **String** |  |  |
| **statuses_url** | **String** |  |  |
| **subscribers_url** | **String** |  |  |
| **subscription_url** | **String** |  |  |
| **tags_url** | **String** |  |  |
| **teams_url** | **String** |  |  |
| **trees_url** | **String** |  |  |
| **clone_url** | **String** |  |  |
| **mirror_url** | **String** |  |  |
| **hooks_url** | **String** |  |  |
| **svn_url** | **String** |  |  |
| **homepage** | **String** |  |  |
| **language** | **String** |  |  |
| **forks_count** | **Integer** |  |  |
| **stargazers_count** | **Integer** |  |  |
| **watchers_count** | **Integer** |  |  |
| **size** | **Integer** | The size of the repository, in kilobytes. Size is calculated hourly. When a repository is initially created, the size is 0. |  |
| **default_branch** | **String** | The default branch of the repository. |  |
| **open_issues_count** | **Integer** |  |  |
| **is_template** | **Boolean** | Whether this repository acts as a template that can be used to generate new repositories. | [optional][default to false] |
| **topics** | **Array&lt;String&gt;** |  | [optional] |
| **custom_properties** | **Hash&lt;String, Object&gt;** | The custom properties that were defined for the repository. The keys are the custom property names, and the values are the corresponding custom property values. | [optional] |
| **has_issues** | **Boolean** | Whether issues are enabled. | [default to true] |
| **has_projects** | **Boolean** | Whether projects are enabled. | [default to true] |
| **has_wiki** | **Boolean** | Whether the wiki is enabled. | [default to true] |
| **has_pages** | **Boolean** |  |  |
| **has_downloads** | **Boolean** | Whether downloads are enabled. | [default to true] |
| **has_discussions** | **Boolean** | Whether discussions are enabled. | [optional][default to false] |
| **archived** | **Boolean** | Whether the repository is archived. | [default to false] |
| **disabled** | **Boolean** | Returns whether or not this repository disabled. |  |
| **visibility** | **String** | The repository visibility: public, private, or internal. | [optional][default to &#39;public&#39;] |
| **pushed_at** | **Time** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **allow_rebase_merge** | **Boolean** | Whether to allow rebase merges for pull requests. | [optional][default to true] |
| **template_repository** | [**RepositoryWebhooksTemplateRepository**](RepositoryWebhooksTemplateRepository.md) |  | [optional] |
| **temp_clone_token** | **String** |  | [optional] |
| **allow_squash_merge** | **Boolean** | Whether to allow squash merges for pull requests. | [optional][default to true] |
| **allow_auto_merge** | **Boolean** | Whether to allow Auto-merge to be used on pull requests. | [optional][default to false] |
| **delete_branch_on_merge** | **Boolean** | Whether to delete head branches when pull requests are merged | [optional][default to false] |
| **allow_update_branch** | **Boolean** | Whether or not a pull request head branch that is behind its base branch can always be updated even if it is not required to be up to date before merging. | [optional][default to false] |
| **use_squash_pr_title_as_default** | **Boolean** | Whether a squash merge commit can use the pull request title as default. **This property has been deprecated. Please use &#x60;squash_merge_commit_title&#x60; instead. | [optional][default to false] |
| **squash_merge_commit_title** | **String** | The default value for a squash merge commit title:  - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;COMMIT_OR_PR_TITLE&#x60; - default to the commit&#39;s title (if only one commit) or the pull request&#39;s title (when more than one commit). | [optional] |
| **squash_merge_commit_message** | **String** | The default value for a squash merge commit message:  - &#x60;PR_BODY&#x60; - default to the pull request&#39;s body. - &#x60;COMMIT_MESSAGES&#x60; - default to the branch&#39;s commit messages. - &#x60;BLANK&#x60; - default to a blank commit message. | [optional] |
| **merge_commit_title** | **String** | The default value for a merge commit title.  - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;MERGE_MESSAGE&#x60; - default to the classic title for a merge message (e.g., Merge pull request #123 from branch-name). | [optional] |
| **merge_commit_message** | **String** | The default value for a merge commit message.  - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;PR_BODY&#x60; - default to the pull request&#39;s body. - &#x60;BLANK&#x60; - default to a blank commit message. | [optional] |
| **allow_merge_commit** | **Boolean** | Whether to allow merge commits for pull requests. | [optional][default to true] |
| **allow_forking** | **Boolean** | Whether to allow forking this repo | [optional] |
| **web_commit_signoff_required** | **Boolean** | Whether to require contributors to sign off on web-based commits | [optional][default to false] |
| **subscribers_count** | **Integer** |  | [optional] |
| **network_count** | **Integer** |  | [optional] |
| **open_issues** | **Integer** |  |  |
| **watchers** | **Integer** |  |  |
| **master_branch** | **String** |  | [optional] |
| **starred_at** | **String** |  | [optional] |
| **anonymous_access_enabled** | **Boolean** | Whether anonymous git access is enabled for this repository | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::NullableRepositoryWebhooks.new(
  id: 42,
  node_id: MDEwOlJlcG9zaXRvcnkxMjk2MjY5,
  name: Team Environment,
  full_name: octocat/Hello-World,
  license: null,
  organization: null,
  forks: null,
  permissions: null,
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
  git_url: git:github.com/octocat/Hello-World.git,
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
  ssh_url: git@github.com:octocat/Hello-World.git,
  stargazers_url: http://api.github.com/repos/octocat/Hello-World/stargazers,
  statuses_url: http://api.github.com/repos/octocat/Hello-World/statuses/{sha},
  subscribers_url: http://api.github.com/repos/octocat/Hello-World/subscribers,
  subscription_url: http://api.github.com/repos/octocat/Hello-World/subscription,
  tags_url: http://api.github.com/repos/octocat/Hello-World/tags,
  teams_url: http://api.github.com/repos/octocat/Hello-World/teams,
  trees_url: http://api.github.com/repos/octocat/Hello-World/git/trees{/sha},
  clone_url: https://github.com/octocat/Hello-World.git,
  mirror_url: git:git.example.com/octocat/Hello-World,
  hooks_url: http://api.github.com/repos/octocat/Hello-World/hooks,
  svn_url: https://svn.github.com/octocat/Hello-World,
  homepage: https://github.com,
  language: null,
  forks_count: 9,
  stargazers_count: 80,
  watchers_count: 80,
  size: 108,
  default_branch: master,
  open_issues_count: 0,
  is_template: true,
  topics: null,
  custom_properties: null,
  has_issues: true,
  has_projects: true,
  has_wiki: true,
  has_pages: null,
  has_downloads: true,
  has_discussions: true,
  archived: null,
  disabled: null,
  visibility: null,
  pushed_at: 2011-01-26T19:06:43Z,
  created_at: 2011-01-26T19:01:12Z,
  updated_at: 2011-01-26T19:14:43Z,
  allow_rebase_merge: true,
  template_repository: null,
  temp_clone_token: null,
  allow_squash_merge: true,
  allow_auto_merge: false,
  delete_branch_on_merge: false,
  allow_update_branch: false,
  use_squash_pr_title_as_default: null,
  squash_merge_commit_title: null,
  squash_merge_commit_message: null,
  merge_commit_title: null,
  merge_commit_message: null,
  allow_merge_commit: true,
  allow_forking: null,
  web_commit_signoff_required: null,
  subscribers_count: null,
  network_count: null,
  open_issues: null,
  watchers: null,
  master_branch: null,
  starred_at: &quot;2020-07-09T00:17:42Z&quot;,
  anonymous_access_enabled: null
)
```

