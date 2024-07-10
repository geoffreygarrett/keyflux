# OpenapiClient::WebhookOrganizationDeleted

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **membership** | [**WebhooksMembership**](WebhooksMembership.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookOrganizationDeleted.new(
  action: null,
  enterprise: null,
  installation: null,
  membership: null,
  organization: null,
  repository: null,
  sender: null
)
```

