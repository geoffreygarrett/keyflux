# ReviewDismissedIssueEvent

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **i32** |  | 
**node_id** | **String** |  | 
**url** | **String** |  | 
**actor** | [**crate::models::SimpleUser**](simple-user.md) |  | 
**event** | **String** |  | 
**commit_id** | Option<**String**> |  | 
**commit_url** | Option<**String**> |  | 
**created_at** | **String** |  | 
**performed_via_github_app** | Option<[**crate::models::NullableIntegration**](nullable-integration.md)> |  | 
**dismissed_review** | [**crate::models::ReviewDismissedIssueEventDismissedReview**](review_dismissed_issue_event_dismissed_review.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

