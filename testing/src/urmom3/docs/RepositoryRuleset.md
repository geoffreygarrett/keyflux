# RepositoryRuleset

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **i32** | The ID of the ruleset | 
**name** | **String** | The name of the ruleset | 
**target** | Option<**String**> | The target of the ruleset  **Note**: The `push` target is in beta and is subject to change. | [optional]
**source_type** | Option<**String**> | The type of the source of the ruleset | [optional]
**source** | **String** | The name of the source | 
**enforcement** | [**crate::models::RepositoryRuleEnforcement**](repository-rule-enforcement.md) |  | 
**bypass_actors** | Option<[**Vec<crate::models::RepositoryRulesetBypassActor>**](repository-ruleset-bypass-actor.md)> | The actors that can bypass the rules in this ruleset | [optional]
**current_user_can_bypass** | Option<**String**> | The bypass type of the user making the API request for this ruleset. This field is only returned when querying the repository-level endpoint. | [optional]
**node_id** | Option<**String**> |  | [optional]
**_links** | Option<[**crate::models::RepositoryRulesetLinks**](repository_ruleset__links.md)> |  | [optional]
**conditions** | Option<[**crate::models::RepositoryRulesetConditions**](repository_ruleset_conditions.md)> |  | [optional]
**rules** | Option<[**Vec<crate::models::RepositoryRule>**](repository-rule.md)> |  | [optional]
**created_at** | Option<**String**> |  | [optional]
**updated_at** | Option<**String**> |  | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


