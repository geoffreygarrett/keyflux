# ReviewRequestRemovedIssueEvent

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
**review_requester** | [**crate::models::SimpleUser**](simple-user.md) |  | 
**requested_team** | Option<[**crate::models::Team**](team.md)> |  | [optional]
**requested_reviewer** | Option<[**crate::models::SimpleUser**](simple-user.md)> |  | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


