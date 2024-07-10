# OpenapiClient::WebhookSponsorshipCreated

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **sponsorship** | [**WebhooksSponsorship**](WebhooksSponsorship.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookSponsorshipCreated.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null,
  sponsorship: null
)
```

