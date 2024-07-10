# OpenapiClient::RepositoryRuleCommitMessagePatternParameters

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | How this rule will appear to users. | [optional] |
| **negate** | **Boolean** | If true, the rule will fail if the pattern matches. | [optional] |
| **operator** | **String** | The operator to use for matching. |  |
| **pattern** | **String** | The pattern to match with. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRuleCommitMessagePatternParameters.new(
  name: null,
  negate: null,
  operator: null,
  pattern: null
)
```

