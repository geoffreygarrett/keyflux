# OpenapiClient::UserMarketplacePurchase

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **billing_cycle** | **String** |  |  |
| **next_billing_date** | **Time** |  |  |
| **unit_count** | **Integer** |  |  |
| **on_free_trial** | **Boolean** |  |  |
| **free_trial_ends_on** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **account** | [**MarketplaceAccount**](MarketplaceAccount.md) |  |  |
| **plan** | [**MarketplaceListingPlan**](MarketplaceListingPlan.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::UserMarketplacePurchase.new(
  billing_cycle: monthly,
  next_billing_date: 2017-11-11T00:00Z,
  unit_count: null,
  on_free_trial: true,
  free_trial_ends_on: 2017-11-11T00:00Z,
  updated_at: 2017-11-02T01:12:12Z,
  account: null,
  plan: null
)
```

