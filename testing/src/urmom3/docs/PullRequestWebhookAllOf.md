# PullRequestWebhookAllOf

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**allow_auto_merge** | Option<**bool**> | Whether to allow auto-merge for pull requests. | [optional][default to false]
**allow_update_branch** | Option<**bool**> | Whether to allow updating the pull request's branch. | [optional]
**delete_branch_on_merge** | Option<**bool**> | Whether to delete head branches when pull requests are merged. | [optional][default to false]
**merge_commit_message** | Option<**String**> | The default value for a merge commit message. - `PR_TITLE` - default to the pull request's title. - `PR_BODY` - default to the pull request's body. - `BLANK` - default to a blank commit message. | [optional]
**merge_commit_title** | Option<**String**> | The default value for a merge commit title. - `PR_TITLE` - default to the pull request's title. - `MERGE_MESSAGE` - default to the classic title for a merge message (e.g., \"Merge pull request #123 from branch-name\"). | [optional]
**squash_merge_commit_message** | Option<**String**> | The default value for a squash merge commit message: - `PR_BODY` - default to the pull request's body. - `COMMIT_MESSAGES` - default to the branch's commit messages. - `BLANK` - default to a blank commit message. | [optional]
**squash_merge_commit_title** | Option<**String**> | The default value for a squash merge commit title: - `PR_TITLE` - default to the pull request's title. - `COMMIT_OR_PR_TITLE` - default to the commit's title (if only one commit) or the pull request's title (when more than one commit). | [optional]
**use_squash_pr_title_as_default** | Option<**bool**> | Whether a squash merge commit can use the pull request title as default. **This property has been deprecated. Please use `squash_merge_commit_title` instead.** | [optional][default to false]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


