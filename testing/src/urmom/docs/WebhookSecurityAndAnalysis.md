# OpenapiClient::WebhookSecurityAndAnalysis

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **changes** | [**WebhookSecurityAndAnalysisChanges**](WebhookSecurityAndAnalysisChanges.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**FullRepository**](FullRepository.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookSecurityAndAnalysis.new(
  changes: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null
)
```

