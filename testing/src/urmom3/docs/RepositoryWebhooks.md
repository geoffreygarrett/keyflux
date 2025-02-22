# RepositoryWebhooks

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **i64** | Unique identifier of the repository | 
**node_id** | **String** |  | 
**name** | **String** | The name of the repository. | 
**full_name** | **String** |  | 
**license** | Option<[**crate::models::NullableLicenseSimple**](nullable-license-simple.md)> |  | 
**organization** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | [optional]
**forks** | **i32** |  | 
**permissions** | Option<[**crate::models::RepositoryPermissions**](repository_permissions.md)> |  | [optional]
**owner** | [**crate::models::SimpleUser**](simple-user.md) |  | 
**private** | **bool** | Whether the repository is private or public. | [default to false]
**html_url** | **String** |  | 
**description** | Option<**String**> |  | 
**fork** | **bool** |  | 
**url** | **String** |  | 
**archive_url** | **String** |  | 
**assignees_url** | **String** |  | 
**blobs_url** | **String** |  | 
**branches_url** | **String** |  | 
**collaborators_url** | **String** |  | 
**comments_url** | **String** |  | 
**commits_url** | **String** |  | 
**compare_url** | **String** |  | 
**contents_url** | **String** |  | 
**contributors_url** | **String** |  | 
**deployments_url** | **String** |  | 
**downloads_url** | **String** |  | 
**events_url** | **String** |  | 
**forks_url** | **String** |  | 
**git_commits_url** | **String** |  | 
**git_refs_url** | **String** |  | 
**git_tags_url** | **String** |  | 
**git_url** | **String** |  | 
**issue_comment_url** | **String** |  | 
**issue_events_url** | **String** |  | 
**issues_url** | **String** |  | 
**keys_url** | **String** |  | 
**labels_url** | **String** |  | 
**languages_url** | **String** |  | 
**merges_url** | **String** |  | 
**milestones_url** | **String** |  | 
**notifications_url** | **String** |  | 
**pulls_url** | **String** |  | 
**releases_url** | **String** |  | 
**ssh_url** | **String** |  | 
**stargazers_url** | **String** |  | 
**statuses_url** | **String** |  | 
**subscribers_url** | **String** |  | 
**subscription_url** | **String** |  | 
**tags_url** | **String** |  | 
**teams_url** | **String** |  | 
**trees_url** | **String** |  | 
**clone_url** | **String** |  | 
**mirror_url** | Option<**String**> |  | 
**hooks_url** | **String** |  | 
**svn_url** | **String** |  | 
**homepage** | Option<**String**> |  | 
**language** | Option<**String**> |  | 
**forks_count** | **i32** |  | 
**stargazers_count** | **i32** |  | 
**watchers_count** | **i32** |  | 
**size** | **i32** | The size of the repository, in kilobytes. Size is calculated hourly. When a repository is initially created, the size is 0. | 
**default_branch** | **String** | The default branch of the repository. | 
**open_issues_count** | **i32** |  | 
**is_template** | Option<**bool**> | Whether this repository acts as a template that can be used to generate new repositories. | [optional][default to false]
**topics** | Option<**Vec<String>**> |  | [optional]
**custom_properties** | Option<[**::std::collections::HashMap<String, serde_json::Value>**](serde_json::Value.md)> | The custom properties that were defined for the repository. The keys are the custom property names, and the values are the corresponding custom property values. | [optional]
**has_issues** | **bool** | Whether issues are enabled. | [default to true]
**has_projects** | **bool** | Whether projects are enabled. | [default to true]
**has_wiki** | **bool** | Whether the wiki is enabled. | [default to true]
**has_pages** | **bool** |  | 
**has_downloads** | **bool** | Whether downloads are enabled. | [default to true]
**has_discussions** | Option<**bool**> | Whether discussions are enabled. | [optional][default to false]
**archived** | **bool** | Whether the repository is archived. | [default to false]
**disabled** | **bool** | Returns whether or not this repository disabled. | 
**visibility** | Option<**String**> | The repository visibility: public, private, or internal. | [optional][default to public]
**pushed_at** | Option<**String**> |  | 
**created_at** | Option<**String**> |  | 
**updated_at** | Option<**String**> |  | 
**allow_rebase_merge** | Option<**bool**> | Whether to allow rebase merges for pull requests. | [optional][default to true]
**template_repository** | Option<[**crate::models::RepositoryWebhooksTemplateRepository**](repository_webhooks_template_repository.md)> |  | [optional]
**temp_clone_token** | Option<**String**> |  | [optional]
**allow_squash_merge** | Option<**bool**> | Whether to allow squash merges for pull requests. | [optional][default to true]
**allow_auto_merge** | Option<**bool**> | Whether to allow Auto-merge to be used on pull requests. | [optional][default to false]
**delete_branch_on_merge** | Option<**bool**> | Whether to delete head branches when pull requests are merged | [optional][default to false]
**allow_update_branch** | Option<**bool**> | Whether or not a pull request head branch that is behind its base branch can always be updated even if it is not required to be up to date before merging. | [optional][default to false]
**use_squash_pr_title_as_default** | Option<**bool**> | Whether a squash merge commit can use the pull request title as default. **This property has been deprecated. Please use `squash_merge_commit_title` instead. | [optional][default to false]
**squash_merge_commit_title** | Option<**String**> | The default value for a squash merge commit title:  - `PR_TITLE` - default to the pull request's title. - `COMMIT_OR_PR_TITLE` - default to the commit's title (if only one commit) or the pull request's title (when more than one commit). | [optional]
**squash_merge_commit_message** | Option<**String**> | The default value for a squash merge commit message:  - `PR_BODY` - default to the pull request's body. - `COMMIT_MESSAGES` - default to the branch's commit messages. - `BLANK` - default to a blank commit message. | [optional]
**merge_commit_title** | Option<**String**> | The default value for a merge commit title.  - `PR_TITLE` - default to the pull request's title. - `MERGE_MESSAGE` - default to the classic title for a merge message (e.g., Merge pull request #123 from branch-name). | [optional]
**merge_commit_message** | Option<**String**> | The default value for a merge commit message.  - `PR_TITLE` - default to the pull request's title. - `PR_BODY` - default to the pull request's body. - `BLANK` - default to a blank commit message. | [optional]
**allow_merge_commit** | Option<**bool**> | Whether to allow merge commits for pull requests. | [optional][default to true]
**allow_forking** | Option<**bool**> | Whether to allow forking this repo | [optional]
**web_commit_signoff_required** | Option<**bool**> | Whether to require contributors to sign off on web-based commits | [optional][default to false]
**subscribers_count** | Option<**i32**> |  | [optional]
**network_count** | Option<**i32**> |  | [optional]
**open_issues** | **i32** |  | 
**watchers** | **i32** |  | 
**master_branch** | Option<**String**> |  | [optional]
**starred_at** | Option<**String**> |  | [optional]
**anonymous_access_enabled** | Option<**bool**> | Whether anonymous git access is enabled for this repository | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


