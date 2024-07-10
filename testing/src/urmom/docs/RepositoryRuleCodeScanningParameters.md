# OpenapiClient::RepositoryRuleCodeScanningParameters

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **code_scanning_tools** | [**Array&lt;RepositoryRuleParamsCodeScanningTool&gt;**](RepositoryRuleParamsCodeScanningTool.md) | Tools that must provide code scanning results for this rule to pass. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRuleCodeScanningParameters.new(
  code_scanning_tools: null
)
```

