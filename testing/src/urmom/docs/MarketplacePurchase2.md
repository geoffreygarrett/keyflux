# OpenapiClient::MarketplacePurchase2

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **account** | [**WebhooksMarketplacePurchaseAccount**](WebhooksMarketplacePurchaseAccount.md) |  |  |
| **billing_cycle** | **String** |  |  |
| **free_trial_ends_on** | **Object** |  |  |
| **next_billing_date** | **String** |  |  |
| **on_free_trial** | **Boolean** |  |  |
| **plan** | [**WebhooksPreviousMarketplacePurchasePlan**](WebhooksPreviousMarketplacePurchasePlan.md) |  |  |
| **unit_count** | **Integer** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::MarketplacePurchase2.new(
  account: null,
  billing_cycle: null,
  free_trial_ends_on: null,
  next_billing_date: null,
  on_free_trial: null,
  plan: null,
  unit_count: null
)
```

