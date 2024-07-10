# OpenapiClient::WebhookSponsorshipPendingCancellation

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **effective_date** | **String** | The &#x60;pending_cancellation&#x60; and &#x60;pending_tier_change&#x60; event types will include the date the cancellation or tier change will take effect. | [optional] |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **sponsorship** | [**WebhooksSponsorship**](WebhooksSponsorship.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookSponsorshipPendingCancellation.new(
  action: null,
  effective_date: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null,
  sponsorship: null
)
```

