# OpenapiClient::ReposUpdateRequestSecurityAndAnalysis

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **advanced_security** | [**ReposUpdateRequestSecurityAndAnalysisAdvancedSecurity**](ReposUpdateRequestSecurityAndAnalysisAdvancedSecurity.md) |  | [optional] |
| **secret_scanning** | [**ReposUpdateRequestSecurityAndAnalysisSecretScanning**](ReposUpdateRequestSecurityAndAnalysisSecretScanning.md) |  | [optional] |
| **secret_scanning_push_protection** | [**ReposUpdateRequestSecurityAndAnalysisSecretScanningPushProtection**](ReposUpdateRequestSecurityAndAnalysisSecretScanningPushProtection.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposUpdateRequestSecurityAndAnalysis.new(
  advanced_security: null,
  secret_scanning: null,
  secret_scanning_push_protection: null
)
```

