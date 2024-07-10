# OpenapiClient::RepositoryRuleRequiredStatusChecksParameters

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **required_status_checks** | [**Array&lt;RepositoryRuleParamsStatusCheckConfiguration&gt;**](RepositoryRuleParamsStatusCheckConfiguration.md) | Status checks that are required. |  |
| **strict_required_status_checks_policy** | **Boolean** | Whether pull requests targeting a matching branch must be tested with the latest code. This setting will not take effect unless at least one status check is enabled. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRuleRequiredStatusChecksParameters.new(
  required_status_checks: null,
  strict_required_status_checks_policy: null
)
```

