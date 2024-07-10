# TeamProject

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**owner_url** | **String** |  | 
**url** | **String** |  | 
**html_url** | **String** |  | 
**columns_url** | **String** |  | 
**id** | **i32** |  | 
**node_id** | **String** |  | 
**name** | **String** |  | 
**body** | Option<**String**> |  | 
**number** | **i32** |  | 
**state** | **String** |  | 
**creator** | [**crate::models::SimpleUser**](simple-user.md) |  | 
**created_at** | **String** |  | 
**updated_at** | **String** |  | 
**organization_permission** | Option<**String**> | The organization permission for this project. Only present when owner is an organization. | [optional]
**private** | Option<**bool**> | Whether the project is private or not. Only present when owner is an organization. | [optional]
**permissions** | [**crate::models::TeamProjectPermissions**](team_project_permissions.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


