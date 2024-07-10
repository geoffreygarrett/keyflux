# OpenapiClient::ReposCreateOrgRulesetRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the ruleset. |  |
| **target** | **String** | The target of the ruleset  **Note**: The &#x60;push&#x60; target is in beta and is subject to change. | [optional] |
| **enforcement** | [**RepositoryRuleEnforcement**](RepositoryRuleEnforcement.md) |  |  |
| **bypass_actors** | [**Array&lt;RepositoryRulesetBypassActor&gt;**](RepositoryRulesetBypassActor.md) | The actors that can bypass the rules in this ruleset | [optional] |
| **conditions** | [**OrgRulesetConditions**](OrgRulesetConditions.md) |  | [optional] |
| **rules** | [**Array&lt;RepositoryRule&gt;**](RepositoryRule.md) | An array of rules within the ruleset. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposCreateOrgRulesetRequest.new(
  name: null,
  target: null,
  enforcement: null,
  bypass_actors: null,
  conditions: null,
  rules: null
)
```

