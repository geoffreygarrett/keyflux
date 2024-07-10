# OpenapiClient::RuleSuiteRuleEvaluationsInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **rule_source** | [**RuleSuiteRuleEvaluationsInnerRuleSource**](RuleSuiteRuleEvaluationsInnerRuleSource.md) |  | [optional] |
| **enforcement** | **String** | The enforcement level of this rule source. | [optional] |
| **result** | **String** | The result of the evaluation of the individual rule. | [optional] |
| **rule_type** | **String** | The type of rule. | [optional] |
| **details** | **String** | Any associated details with the rule evaluation. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RuleSuiteRuleEvaluationsInner.new(
  rule_source: null,
  enforcement: null,
  result: null,
  rule_type: null,
  details: null
)
```

