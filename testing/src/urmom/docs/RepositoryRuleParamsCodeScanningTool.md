# OpenapiClient::RepositoryRuleParamsCodeScanningTool

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **alerts_threshold** | **String** | The severity level at which code scanning results that raise alerts block a reference update. For more information on alert severity levels, see \&quot;[About code scanning alerts](https://docs.github.com/code-security/code-scanning/managing-code-scanning-alerts/about-code-scanning-alerts#about-alert-severity-and-security-severity-levels).\&quot; |  |
| **security_alerts_threshold** | **String** | The severity level at which code scanning results that raise security alerts block a reference update. For more information on security severity levels, see \&quot;[About code scanning alerts](https://docs.github.com/code-security/code-scanning/managing-code-scanning-alerts/about-code-scanning-alerts#about-alert-severity-and-security-severity-levels).\&quot; |  |
| **tool** | **String** | The name of a code scanning tool |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRuleParamsCodeScanningTool.new(
  alerts_threshold: null,
  security_alerts_threshold: null,
  tool: null
)
```

