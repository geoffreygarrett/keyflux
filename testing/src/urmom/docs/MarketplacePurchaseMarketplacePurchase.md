# OpenapiClient::MarketplacePurchaseMarketplacePurchase

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **billing_cycle** | **String** |  | [optional] |
| **next_billing_date** | **String** |  | [optional] |
| **is_installed** | **Boolean** |  | [optional] |
| **unit_count** | **Integer** |  | [optional] |
| **on_free_trial** | **Boolean** |  | [optional] |
| **free_trial_ends_on** | **String** |  | [optional] |
| **updated_at** | **String** |  | [optional] |
| **plan** | [**MarketplaceListingPlan**](MarketplaceListingPlan.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::MarketplacePurchaseMarketplacePurchase.new(
  billing_cycle: null,
  next_billing_date: null,
  is_installed: null,
  unit_count: null,
  on_free_trial: null,
  free_trial_ends_on: null,
  updated_at: null,
  plan: null
)
```

