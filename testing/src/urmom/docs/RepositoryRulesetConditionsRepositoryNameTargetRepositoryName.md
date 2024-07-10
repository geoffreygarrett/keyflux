# OpenapiClient::RepositoryRulesetConditionsRepositoryNameTargetRepositoryName

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **include** | **Array&lt;String&gt;** | Array of repository names or patterns to include. One of these patterns must match for the condition to pass. Also accepts &#x60;~ALL&#x60; to include all repositories. | [optional] |
| **exclude** | **Array&lt;String&gt;** | Array of repository names or patterns to exclude. The condition will not pass if any of these patterns match. | [optional] |
| **protected** | **Boolean** | Whether renaming of target repositories is prevented. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRulesetConditionsRepositoryNameTargetRepositoryName.new(
  include: null,
  exclude: null,
  protected: null
)
```

