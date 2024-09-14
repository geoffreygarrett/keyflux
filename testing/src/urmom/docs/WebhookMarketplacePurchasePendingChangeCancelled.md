# OpenapiClient::WebhookMarketplacePurchasePendingChangeCancelled

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **effective_date** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **marketplace_purchase** | [**MarketplacePurchase2**](MarketplacePurchase2.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **previous_marketplace_purchase** | [**WebhooksPreviousMarketplacePurchase**](WebhooksPreviousMarketplacePurchase.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookMarketplacePurchasePendingChangeCancelled.new(
  action: null,
  effective_date: null,
  enterprise: null,
  installation: null,
  marketplace_purchase: null,
  organization: null,
  previous_marketplace_purchase: null,
  repository: null,
  sender: null
)
```
