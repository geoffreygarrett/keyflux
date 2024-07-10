# OpenapiClient::PullRequestWebhookAllOf

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
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

instance = OpenapiClient::PullRequestWebhookAllOf.new(
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

