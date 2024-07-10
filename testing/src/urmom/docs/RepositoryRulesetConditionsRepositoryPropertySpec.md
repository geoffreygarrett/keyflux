# OpenapiClient::RepositoryRulesetConditionsRepositoryPropertySpec

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the repository property to target |  |
| **property_values** | **Array&lt;String&gt;** | The values to match for the repository property |  |
| **source** | **String** | The source of the repository property. Defaults to &#39;custom&#39; if not specified. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRulesetConditionsRepositoryPropertySpec.new(
  name: null,
  property_values: null,
  source: null
)
```

