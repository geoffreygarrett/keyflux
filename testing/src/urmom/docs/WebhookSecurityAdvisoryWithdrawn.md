# OpenapiClient::WebhookSecurityAdvisoryWithdrawn

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **security_advisory** | [**WebhookSecurityAdvisoryWithdrawnSecurityAdvisory**](WebhookSecurityAdvisoryWithdrawnSecurityAdvisory.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookSecurityAdvisoryWithdrawn.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  security_advisory: null,
  sender: null
)
```

