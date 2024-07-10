# OpenapiClient::RepositoryAdvisoryPrivateFork

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | A unique identifier of the repository. |  |
| **node_id** | **String** | The GraphQL identifier of the repository. |  |
| **name** | **String** | The name of the repository. |  |
| **full_name** | **String** | The full, globally unique, name of the repository. |  |
| **owner** | [**SimpleUser**](SimpleUser.md) |  |  |
| **private** | **Boolean** | Whether the repository is private. |  |
| **html_url** | **String** | The URL to view the repository on GitHub.com. |  |
| **description** | **String** | The repository description. |  |
| **fork** | **Boolean** | Whether the repository is a fork. |  |
| **url** | **String** | The URL to get more information about the repository from the GitHub API. |  |
| **archive_url** | **String** | A template for the API URL to download the repository as an archive. |  |
| **assignees_url** | **String** | A template for the API URL to list the available assignees for issues in the repository. |  |
| **blobs_url** | **String** | A template for the API URL to create or retrieve a raw Git blob in the repository. |  |
| **branches_url** | **String** | A template for the API URL to get information about branches in the repository. |  |
| **collaborators_url** | **String** | A template for the API URL to get information about collaborators of the repository. |  |
| **comments_url** | **String** | A template for the API URL to get information about comments on the repository. |  |
| **commits_url** | **String** | A template for the API URL to get information about commits on the repository. |  |
| **compare_url** | **String** | A template for the API URL to compare two commits or refs. |  |
| **contents_url** | **String** | A template for the API URL to get the contents of the repository. |  |
| **contributors_url** | **String** | A template for the API URL to list the contributors to the repository. |  |
| **deployments_url** | **String** | The API URL to list the deployments of the repository. |  |
| **downloads_url** | **String** | The API URL to list the downloads on the repository. |  |
| **events_url** | **String** | The API URL to list the events of the repository. |  |
| **forks_url** | **String** | The API URL to list the forks of the repository. |  |
| **git_commits_url** | **String** | A template for the API URL to get information about Git commits of the repository. |  |
| **git_refs_url** | **String** | A template for the API URL to get information about Git refs of the repository. |  |
| **git_tags_url** | **String** | A template for the API URL to get information about Git tags of the repository. |  |
| **issue_comment_url** | **String** | A template for the API URL to get information about issue comments on the repository. |  |
| **issue_events_url** | **String** | A template for the API URL to get information about issue events on the repository. |  |
| **issues_url** | **String** | A template for the API URL to get information about issues on the repository. |  |
| **keys_url** | **String** | A template for the API URL to get information about deploy keys on the repository. |  |
| **labels_url** | **String** | A template for the API URL to get information about labels of the repository. |  |
| **languages_url** | **String** | The API URL to get information about the languages of the repository. |  |
| **merges_url** | **String** | The API URL to merge branches in the repository. |  |
| **milestones_url** | **String** | A template for the API URL to get information about milestones of the repository. |  |
| **notifications_url** | **String** | A template for the API URL to get information about notifications on the repository. |  |
| **pulls_url** | **String** | A template for the API URL to get information about pull requests on the repository. |  |
| **releases_url** | **String** | A template for the API URL to get information about releases on the repository. |  |
| **stargazers_url** | **String** | The API URL to list the stargazers on the repository. |  |
| **statuses_url** | **String** | A template for the API URL to get information about statuses of a commit. |  |
| **subscribers_url** | **String** | The API URL to list the subscribers on the repository. |  |
| **subscription_url** | **String** | The API URL to subscribe to notifications for this repository. |  |
| **tags_url** | **String** | The API URL to get information about tags on the repository. |  |
| **teams_url** | **String** | The API URL to list the teams on the repository. |  |
| **trees_url** | **String** | A template for the API URL to create or retrieve a raw Git tree of the repository. |  |
| **hooks_url** | **String** | The API URL to list the hooks on the repository. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryAdvisoryPrivateFork.new(
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
  archive_url: https://api.github.com/repos/octocat/Hello-World/{archive_format}{/ref},
  assignees_url: https://api.github.com/repos/octocat/Hello-World/assignees{/user},
  blobs_url: https://api.github.com/repos/octocat/Hello-World/git/blobs{/sha},
  branches_url: https://api.github.com/repos/octocat/Hello-World/branches{/branch},
  collaborators_url: https://api.github.com/repos/octocat/Hello-World/collaborators{/collaborator},
  comments_url: https://api.github.com/repos/octocat/Hello-World/comments{/number},
  commits_url: https://api.github.com/repos/octocat/Hello-World/commits{/sha},
  compare_url: https://api.github.com/repos/octocat/Hello-World/compare/{base}...{head},
  contents_url: https://api.github.com/repos/octocat/Hello-World/contents/{+path},
  contributors_url: https://api.github.com/repos/octocat/Hello-World/contributors,
  deployments_url: https://api.github.com/repos/octocat/Hello-World/deployments,
  downloads_url: https://api.github.com/repos/octocat/Hello-World/downloads,
  events_url: https://api.github.com/repos/octocat/Hello-World/events,
  forks_url: https://api.github.com/repos/octocat/Hello-World/forks,
  git_commits_url: https://api.github.com/repos/octocat/Hello-World/git/commits{/sha},
  git_refs_url: https://api.github.com/repos/octocat/Hello-World/git/refs{/sha},
  git_tags_url: https://api.github.com/repos/octocat/Hello-World/git/tags{/sha},
  issue_comment_url: https://api.github.com/repos/octocat/Hello-World/issues/comments{/number},
  issue_events_url: https://api.github.com/repos/octocat/Hello-World/issues/events{/number},
  issues_url: https://api.github.com/repos/octocat/Hello-World/issues{/number},
  keys_url: https://api.github.com/repos/octocat/Hello-World/keys{/key_id},
  labels_url: https://api.github.com/repos/octocat/Hello-World/labels{/name},
  languages_url: https://api.github.com/repos/octocat/Hello-World/languages,
  merges_url: https://api.github.com/repos/octocat/Hello-World/merges,
  milestones_url: https://api.github.com/repos/octocat/Hello-World/milestones{/number},
  notifications_url: https://api.github.com/repos/octocat/Hello-World/notifications{?since,all,participating},
  pulls_url: https://api.github.com/repos/octocat/Hello-World/pulls{/number},
  releases_url: https://api.github.com/repos/octocat/Hello-World/releases{/id},
  stargazers_url: https://api.github.com/repos/octocat/Hello-World/stargazers,
  statuses_url: https://api.github.com/repos/octocat/Hello-World/statuses/{sha},
  subscribers_url: https://api.github.com/repos/octocat/Hello-World/subscribers,
  subscription_url: https://api.github.com/repos/octocat/Hello-World/subscription,
  tags_url: https://api.github.com/repos/octocat/Hello-World/tags,
  teams_url: https://api.github.com/repos/octocat/Hello-World/teams,
  trees_url: https://api.github.com/repos/octocat/Hello-World/git/trees{/sha},
  hooks_url: https://api.github.com/repos/octocat/Hello-World/hooks
)
```

