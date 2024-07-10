# IssueSearchResultItem

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**url** | **String** |  | 
**repository_url** | **String** |  | 
**labels_url** | **String** |  | 
**comments_url** | **String** |  | 
**events_url** | **String** |  | 
**html_url** | **String** |  | 
**id** | **i64** |  | 
**node_id** | **String** |  | 
**number** | **i32** |  | 
**title** | **String** |  | 
**locked** | **bool** |  | 
**active_lock_reason** | Option<**String**> |  | [optional]
**assignees** | Option<[**Vec<crate::models::SimpleUser>**](simple-user.md)> |  | [optional]
**user** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | 
**labels** | [**Vec<crate::models::IssueSearchResultItemLabelsInner>**](issue_search_result_item_labels_inner.md) |  | 
**state** | **String** |  | 
**state_reason** | Option<**String**> |  | [optional]
**assignee** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | 
**milestone** | Option<[**crate::models::NullableMilestone**](nullable-milestone.md)> |  | 
**comments** | **i32** |  | 
**created_at** | **String** |  | 
**updated_at** | **String** |  | 
**closed_at** | Option<**String**> |  | 
**text_matches** | Option<[**Vec<crate::models::SearchResultTextMatchesInner>**](search_result_text_matches_inner.md)> |  | [optional]
**pull_request** | Option<[**crate::models::IssuePullRequest**](issue_pull_request.md)> |  | [optional]
**body** | Option<**String**> |  | [optional]
**score** | **f32** |  | 
**author_association** | [**crate::models::AuthorAssociation**](author-association.md) |  | 
**draft** | Option<**bool**> |  | [optional]
**repository** | Option<[**crate::models::Repository**](repository.md)> |  | [optional]
**body_html** | Option<**String**> |  | [optional]
**body_text** | Option<**String**> |  | [optional]
**timeline_url** | Option<**String**> |  | [optional]
**performed_via_github_app** | Option<[**crate::models::NullableIntegration**](nullable-integration.md)> |  | [optional]
**reactions** | Option<[**crate::models::ReactionRollup**](reaction-rollup.md)> |  | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


