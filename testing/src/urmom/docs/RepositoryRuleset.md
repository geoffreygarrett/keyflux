# OpenapiClient::RepositoryRuleset

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The ID of the ruleset |  |
| **name** | **String** | The name of the ruleset |  |
| **target** | **String** | The target of the ruleset  **Note**: The &#x60;push&#x60; target is in beta and is subject to change. | [optional] |
| **source_type** | **String** | The type of the source of the ruleset | [optional] |
| **source** | **String** | The name of the source |  |
| **enforcement** | [**RepositoryRuleEnforcement**](RepositoryRuleEnforcement.md) |  |  |
| **bypass_actors** | [**Array&lt;RepositoryRulesetBypassActor&gt;**](RepositoryRulesetBypassActor.md) | The actors that can bypass the rules in this ruleset | [optional] |
| **current_user_can_bypass** | **String** | The bypass type of the user making the API request for this ruleset. This field is only returned when querying the repository-level endpoint. | [optional] |
| **node_id** | **String** |  | [optional] |
| **_links** | [**RepositoryRulesetLinks**](RepositoryRulesetLinks.md) |  | [optional] |
| **conditions** | [**RepositoryRulesetConditions**](RepositoryRulesetConditions.md) |  | [optional] |
| **rules** | [**Array&lt;RepositoryRule&gt;**](RepositoryRule.md) |  | [optional] |
| **created_at** | **Time** |  | [optional] |
| **updated_at** | **Time** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRuleset.new(
  id: null,
  name: null,
  target: null,
  source_type: null,
  source: null,
  enforcement: null,
  bypass_actors: null,
  current_user_can_bypass: null,
  node_id: null,
  _links: null,
  conditions: null,
  rules: null,
  created_at: null,
  updated_at: null
)
```

