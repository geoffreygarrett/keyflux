# IssueEventForIssue

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
**performed_via_github_app** | Option<[**crate::models::Integration**](integration.md)> |  | 
**label** | [**crate::models::LabeledIssueEventLabel**](labeled_issue_event_label.md) |  | 
**assignee** | [**crate::models::SimpleUser**](simple-user.md) |  | 
**assigner** | [**crate::models::SimpleUser**](simple-user.md) |  | 
**milestone** | [**crate::models::MilestonedIssueEventMilestone**](milestoned_issue_event_milestone.md) |  | 
**rename** | [**crate::models::RenamedIssueEventRename**](renamed_issue_event_rename.md) |  | 
**review_requester** | [**crate::models::SimpleUser**](simple-user.md) |  | 
**requested_team** | Option<[**crate::models::Team**](team.md)> |  | [optional]
**requested_reviewer** | Option<[**crate::models::SimpleUser**](simple-user.md)> |  | [optional]
**dismissed_review** | [**crate::models::ReviewDismissedIssueEventDismissedReview**](review_dismissed_issue_event_dismissed_review.md) |  | 
**lock_reason** | Option<**String**> |  | 
**project_card** | Option<[**crate::models::AddedToProjectIssueEventProjectCard**](added_to_project_issue_event_project_card.md)> |  | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


