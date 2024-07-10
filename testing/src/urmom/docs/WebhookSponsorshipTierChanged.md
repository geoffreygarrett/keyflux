# OpenapiClient::WebhookSponsorshipTierChanged

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhooksChanges8**](WebhooksChanges8.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **sponsorship** | [**WebhooksSponsorship**](WebhooksSponsorship.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookSponsorshipTierChanged.new(
  action: null,
  changes: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null,
  sponsorship: null
)
```

