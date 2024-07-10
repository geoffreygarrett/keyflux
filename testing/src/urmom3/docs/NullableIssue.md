# NullableIssue

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **i64** |  | 
**node_id** | **String** |  | 
**url** | **String** | URL for the issue | 
**repository_url** | **String** |  | 
**labels_url** | **String** |  | 
**comments_url** | **String** |  | 
**events_url** | **String** |  | 
**html_url** | **String** |  | 
**number** | **i32** | Number uniquely identifying the issue within its repository | 
**state** | **String** | State of the issue; either 'open' or 'closed' | 
**state_reason** | Option<**String**> | The reason for the current state | [optional]
**title** | **String** | Title of the issue | 
**body** | Option<**String**> | Contents of the issue | [optional]
**user** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | 
**labels** | [**Vec<crate::models::IssueLabelsInner>**](issue_labels_inner.md) | Labels to associate with this issue; pass one or more label names to replace the set of labels on this issue; send an empty array to clear all labels from the issue; note that the labels are silently dropped for users without push access to the repository | 
**assignee** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | 
**assignees** | Option<[**Vec<crate::models::SimpleUser>**](simple-user.md)> |  | [optional]
**milestone** | Option<[**crate::models::NullableMilestone**](nullable-milestone.md)> |  | 
**locked** | **bool** |  | 
**active_lock_reason** | Option<**String**> |  | [optional]
**comments** | **i32** |  | 
**pull_request** | Option<[**crate::models::IssuePullRequest**](issue_pull_request.md)> |  | [optional]
**closed_at** | Option<**String**> |  | 
**created_at** | **String** |  | 
**updated_at** | **String** |  | 
**draft** | Option<**bool**> |  | [optional]
**closed_by** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | [optional]
**body_html** | Option<**String**> |  | [optional]
**body_text** | Option<**String**> |  | [optional]
**timeline_url** | Option<**String**> |  | [optional]
**repository** | Option<[**crate::models::Repository**](repository.md)> |  | [optional]
**performed_via_github_app** | Option<[**crate::models::NullableIntegration**](nullable-integration.md)> |  | [optional]
**author_association** | [**crate::models::AuthorAssociation**](author-association.md) |  | 
**reactions** | Option<[**crate::models::ReactionRollup**](reaction-rollup.md)> |  | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


