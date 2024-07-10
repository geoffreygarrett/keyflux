# IssueEvent

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **i64** |  | 
**node_id** | **String** |  | 
**url** | **String** |  | 
**actor** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | 
**event** | **String** |  | 
**commit_id** | Option<**String**> |  | 
**commit_url** | Option<**String**> |  | 
**created_at** | **String** |  | 
**issue** | Option<[**crate::models::NullableIssue**](nullable-issue.md)> |  | [optional]
**label** | Option<[**crate::models::IssueEventLabel**](issue-event-label.md)> |  | [optional]
**assignee** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | [optional]
**assigner** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | [optional]
**review_requester** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | [optional]
**requested_reviewer** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | [optional]
**requested_team** | Option<[**crate::models::Team**](team.md)> |  | [optional]
**dismissed_review** | Option<[**crate::models::IssueEventDismissedReview**](issue-event-dismissed-review.md)> |  | [optional]
**milestone** | Option<[**crate::models::IssueEventMilestone**](issue-event-milestone.md)> |  | [optional]
**project_card** | Option<[**crate::models::IssueEventProjectCard**](issue-event-project-card.md)> |  | [optional]
**rename** | Option<[**crate::models::IssueEventRename**](issue-event-rename.md)> |  | [optional]
**author_association** | Option<[**crate::models::AuthorAssociation**](author-association.md)> |  | [optional]
**lock_reason** | Option<**String**> |  | [optional]
**performed_via_github_app** | Option<[**crate::models::NullableIntegration**](nullable-integration.md)> |  | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


