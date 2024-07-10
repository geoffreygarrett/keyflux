# OpenapiClient::RepositoryRuleParamsStatusCheckConfiguration

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **context** | **String** | The status check context name that must be present on the commit. |  |
| **integration_id** | **Integer** | The optional integration ID that this status check must originate from. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRuleParamsStatusCheckConfiguration.new(
  context: null,
  integration_id: null
)
```

