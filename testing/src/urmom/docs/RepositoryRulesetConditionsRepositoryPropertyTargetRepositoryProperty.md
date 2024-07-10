# OpenapiClient::RepositoryRulesetConditionsRepositoryPropertyTargetRepositoryProperty

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **include** | [**Array&lt;RepositoryRulesetConditionsRepositoryPropertySpec&gt;**](RepositoryRulesetConditionsRepositoryPropertySpec.md) | The repository properties and values to include. All of these properties must match for the condition to pass. | [optional] |
| **exclude** | [**Array&lt;RepositoryRulesetConditionsRepositoryPropertySpec&gt;**](RepositoryRulesetConditionsRepositoryPropertySpec.md) | The repository properties and values to exclude. The condition will not pass if any of these properties match. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRulesetConditionsRepositoryPropertyTargetRepositoryProperty.new(
  include: null,
  exclude: null
)
```

