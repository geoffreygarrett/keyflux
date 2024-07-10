# OpenapiClient::ReposUpdateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the repository. | [optional] |
| **description** | **String** | A short description of the repository. | [optional] |
| **homepage** | **String** | A URL with more information about the repository. | [optional] |
| **private** | **Boolean** | Either &#x60;true&#x60; to make the repository private or &#x60;false&#x60; to make it public. Default: &#x60;false&#x60;.   **Note**: You will get a &#x60;422&#x60; error if the organization restricts [changing repository visibility](https://docs.github.com/articles/repository-permission-levels-for-an-organization#changing-the-visibility-of-repositories) to organization owners and a non-owner tries to change the value of private. | [optional][default to false] |
| **visibility** | **String** | The visibility of the repository. | [optional] |
| **security_and_analysis** | [**ReposUpdateRequestSecurityAndAnalysis**](ReposUpdateRequestSecurityAndAnalysis.md) |  | [optional] |
| **has_issues** | **Boolean** | Either &#x60;true&#x60; to enable issues for this repository or &#x60;false&#x60; to disable them. | [optional][default to true] |
| **has_projects** | **Boolean** | Either &#x60;true&#x60; to enable projects for this repository or &#x60;false&#x60; to disable them. **Note:** If you&#39;re creating a repository in an organization that has disabled repository projects, the default is &#x60;false&#x60;, and if you pass &#x60;true&#x60;, the API returns an error. | [optional][default to true] |
| **has_wiki** | **Boolean** | Either &#x60;true&#x60; to enable the wiki for this repository or &#x60;false&#x60; to disable it. | [optional][default to true] |
| **is_template** | **Boolean** | Either &#x60;true&#x60; to make this repo available as a template repository or &#x60;false&#x60; to prevent it. | [optional][default to false] |
| **default_branch** | **String** | Updates the default branch for this repository. | [optional] |
| **allow_squash_merge** | **Boolean** | Either &#x60;true&#x60; to allow squash-merging pull requests, or &#x60;false&#x60; to prevent squash-merging. | [optional][default to true] |
| **allow_merge_commit** | **Boolean** | Either &#x60;true&#x60; to allow merging pull requests with a merge commit, or &#x60;false&#x60; to prevent merging pull requests with merge commits. | [optional][default to true] |
| **allow_rebase_merge** | **Boolean** | Either &#x60;true&#x60; to allow rebase-merging pull requests, or &#x60;false&#x60; to prevent rebase-merging. | [optional][default to true] |
| **allow_auto_merge** | **Boolean** | Either &#x60;true&#x60; to allow auto-merge on pull requests, or &#x60;false&#x60; to disallow auto-merge. | [optional][default to false] |
| **delete_branch_on_merge** | **Boolean** | Either &#x60;true&#x60; to allow automatically deleting head branches when pull requests are merged, or &#x60;false&#x60; to prevent automatic deletion. | [optional][default to false] |
| **allow_update_branch** | **Boolean** | Either &#x60;true&#x60; to always allow a pull request head branch that is behind its base branch to be updated even if it is not required to be up to date before merging, or false otherwise. | [optional][default to false] |
| **use_squash_pr_title_as_default** | **Boolean** | Either &#x60;true&#x60; to allow squash-merge commits to use pull request title, or &#x60;false&#x60; to use commit message. **This property has been deprecated. Please use &#x60;squash_merge_commit_title&#x60; instead. | [optional][default to false] |
| **squash_merge_commit_title** | **String** | The default value for a squash merge commit title:  - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;COMMIT_OR_PR_TITLE&#x60; - default to the commit&#39;s title (if only one commit) or the pull request&#39;s title (when more than one commit). | [optional] |
| **squash_merge_commit_message** | **String** | The default value for a squash merge commit message:  - &#x60;PR_BODY&#x60; - default to the pull request&#39;s body. - &#x60;COMMIT_MESSAGES&#x60; - default to the branch&#39;s commit messages. - &#x60;BLANK&#x60; - default to a blank commit message. | [optional] |
| **merge_commit_title** | **String** | The default value for a merge commit title.  - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;MERGE_MESSAGE&#x60; - default to the classic title for a merge message (e.g., Merge pull request #123 from branch-name). | [optional] |
| **merge_commit_message** | **String** | The default value for a merge commit message.  - &#x60;PR_TITLE&#x60; - default to the pull request&#39;s title. - &#x60;PR_BODY&#x60; - default to the pull request&#39;s body. - &#x60;BLANK&#x60; - default to a blank commit message. | [optional] |
| **archived** | **Boolean** | Whether to archive this repository. &#x60;false&#x60; will unarchive a previously archived repository. | [optional][default to false] |
| **allow_forking** | **Boolean** | Either &#x60;true&#x60; to allow private forks, or &#x60;false&#x60; to prevent private forks. | [optional][default to false] |
| **web_commit_signoff_required** | **Boolean** | Either &#x60;true&#x60; to require contributors to sign off on web-based commits, or &#x60;false&#x60; to not require contributors to sign off on web-based commits. | [optional][default to false] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposUpdateRequest.new(
  name: null,
  description: null,
  homepage: null,
  private: null,
  visibility: null,
  security_and_analysis: null,
  has_issues: null,
  has_projects: null,
  has_wiki: null,
  is_template: null,
  default_branch: null,
  allow_squash_merge: null,
  allow_merge_commit: null,
  allow_rebase_merge: null,
  allow_auto_merge: null,
  delete_branch_on_merge: null,
  allow_update_branch: null,
  use_squash_pr_title_as_default: null,
  squash_merge_commit_title: null,
  squash_merge_commit_message: null,
  merge_commit_title: null,
  merge_commit_message: null,
  archived: null,
  allow_forking: null,
  web_commit_signoff_required: null
)
```

