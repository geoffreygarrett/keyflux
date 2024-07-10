# OpenapiClient::RepositoryRuleRulesetInfo

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ruleset_source_type** | **String** | The type of source for the ruleset that includes this rule. | [optional] |
| **ruleset_source** | **String** | The name of the source of the ruleset that includes this rule. | [optional] |
| **ruleset_id** | **Integer** | The ID of the ruleset that includes this rule. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRuleRulesetInfo.new(
  ruleset_source_type: null,
  ruleset_source: null,
  ruleset_id: null
)
```

