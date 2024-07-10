# OpenapiClient::WebhooksMarketplacePurchase

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **account** | [**WebhooksMarketplacePurchaseAccount**](WebhooksMarketplacePurchaseAccount.md) |  |  |
| **billing_cycle** | **String** |  |  |
| **free_trial_ends_on** | **String** |  |  |
| **next_billing_date** | **String** |  |  |
| **on_free_trial** | **Boolean** |  |  |
| **plan** | [**WebhooksMarketplacePurchasePlan**](WebhooksMarketplacePurchasePlan.md) |  |  |
| **unit_count** | **Integer** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhooksMarketplacePurchase.new(
  account: null,
  billing_cycle: null,
  free_trial_ends_on: null,
  next_billing_date: null,
  on_free_trial: null,
  plan: null,
  unit_count: null
)
```

