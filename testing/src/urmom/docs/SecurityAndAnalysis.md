# OpenapiClient::SecurityAndAnalysis

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **advanced_security** | [**SecurityAndAnalysisAdvancedSecurity**](SecurityAndAnalysisAdvancedSecurity.md) |  | [optional] |
| **dependabot_security_updates** | [**SecurityAndAnalysisDependabotSecurityUpdates**](SecurityAndAnalysisDependabotSecurityUpdates.md) |  | [optional] |
| **secret_scanning** | [**SecurityAndAnalysisAdvancedSecurity**](SecurityAndAnalysisAdvancedSecurity.md) |  | [optional] |
| **secret_scanning_push_protection** | [**SecurityAndAnalysisAdvancedSecurity**](SecurityAndAnalysisAdvancedSecurity.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecurityAndAnalysis.new(
  advanced_security: null,
  dependabot_security_updates: null,
  secret_scanning: null,
  secret_scanning_push_protection: null
)
```

