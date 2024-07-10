# OpenapiClient::RepositoryRulesetConditionsRefName

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **include** | **Array&lt;String&gt;** | Array of ref names or patterns to include. One of these patterns must match for the condition to pass. Also accepts &#x60;~DEFAULT_BRANCH&#x60; to include the default branch or &#x60;~ALL&#x60; to include all branches. | [optional] |
| **exclude** | **Array&lt;String&gt;** | Array of ref names or patterns to exclude. The condition will not pass if any of these patterns match. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRulesetConditionsRefName.new(
  include: null,
  exclude: null
)
```

