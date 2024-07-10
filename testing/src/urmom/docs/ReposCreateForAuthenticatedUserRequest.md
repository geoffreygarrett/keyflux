# OpenapiClient::ReposCreateForAuthenticatedUserRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the repository. |  |
| **description** | **String** | A short description of the repository. | [optional] |
| **homepage** | **String** | A URL with more information about the repository. | [optional] |
| **private** | **Boolean** | Whether the repository is private. | [optional][default to false] |
| **has_issues** | **Boolean** | Whether issues are enabled. | [optional][default to true] |
| **has_projects** | **Boolean** | Whether projects are enabled. | [optional][default to true] |
| **has_wiki** | **Boolean** | Whether the wiki is enabled. | [optional][default to true] |
| **has_discussions** | **Boolean** | Whether discussions are enabled. | [optional][default to false] |
| **team_id** | **Integer** | The id of the team that will be granted access to this repository. This is only valid when creating a repository in an organization. | [optional] |
| **auto_init** | **Boolean** | Whether the repository is initialized with a minimal README. | [optional][default to false] |
| **gitignore_template** | **String** | The desired language or platform to apply to the .gitignore. | [optional] |
| **license_template** | **String** | The license keyword of the open source license for this repository. | [optional] |
| **allow_squash_merge** | **Boolean** | Whether to allow squash merges for pull requests. | [optional][default to true] |
| **allow_merge_commit** | **Boolean** | Whether to allow merge commits for pull requests. | [optional][default to true] |
| **allow_rebase_merge** | **Boolean** | Whether to allow rebase merges for pull requests. | [optional][default to true] |
| **allow_auto_merge** | **Boolean** | Whether to allow Auto-merge to be used on pull requests. | [optional][default to false] |
| **delete_branch_on_merge** | **Boolean** | Whether to delete head branches when pull requests are merged | [optional][default to false] |
| **squash_merge_commit_title** | **String** | The default value for a squash merge commit title:  - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;COMMIT_OR_PR_TITLE&#x60; - default to the commit&#39;s title (if only one commit) or the pull request&#39;s title (when more than one commit). | [optional] |
| **squash_merge_commit_message** | **String** | The default value for a squash merge commit message:  - &#x60;PR_BODY&#x60; - default to the pull request&#39;s body. - &#x60;COMMIT_MESSAGES&#x60; - default to the branch&#39;s commit messages. - &#x60;BLANK&#x60; - default to a blank commit message. | [optional] |
| **merge_commit_title** | **String** | The default value for a merge commit title.  - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;MERGE_MESSAGE&#x60; - default to the classic title for a merge message (e.g., Merge pull request #123 from branch-name). | [optional] |
| **merge_commit_message** | **String** | The default value for a merge commit message.  - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;PR_BODY&#x60; - default to the pull request&#39;s body. - &#x60;BLANK&#x60; - default to a blank commit message. | [optional] |
| **has_downloads** | **Boolean** | Whether downloads are enabled. | [optional][default to true] |
| **is_template** | **Boolean** | Whether this repository acts as a template that can be used to generate new repositories. | [optional][default to false] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposCreateForAuthenticatedUserRequest.new(
  name: Team Environment,
  description: null,
  homepage: null,
  private: null,
  has_issues: true,
  has_projects: true,
  has_wiki: true,
  has_discussions: true,
  team_id: null,
  auto_init: null,
  gitignore_template: Haskell,
  license_template: mit,
  allow_squash_merge: true,
  allow_merge_commit: true,
  allow_rebase_merge: true,
  allow_auto_merge: false,
  delete_branch_on_merge: false,
  squash_merge_commit_title: null,
  squash_merge_commit_message: null,
  merge_commit_title: null,
  merge_commit_message: null,
  has_downloads: true,
  is_template: true
)
```

