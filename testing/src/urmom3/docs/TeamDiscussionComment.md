# TeamDiscussionComment

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**author** | Option<[**crate::models::NullableSimpleUser**](nullable-simple-user.md)> |  | 
**body** | **String** | The main text of the comment. | 
**body_html** | **String** |  | 
**body_version** | **String** | The current version of the body content. If provided, this update operation will be rejected if the given version does not match the latest version on the server. | 
**created_at** | **String** |  | 
**last_edited_at** | Option<**String**> |  | 
**discussion_url** | **String** |  | 
**html_url** | **String** |  | 
**node_id** | **String** |  | 
**number** | **i32** | The unique sequence number of a team discussion comment. | 
**updated_at** | **String** |  | 
**url** | **String** |  | 
**reactions** | Option<[**crate::models::ReactionRollup**](reaction-rollup.md)> |  | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


