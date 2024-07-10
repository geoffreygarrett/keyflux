# OpenapiClient::MarketplaceListingPlan

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **accounts_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **number** | **Integer** |  |  |
| **name** | **String** |  |  |
| **description** | **String** |  |  |
| **monthly_price_in_cents** | **Integer** |  |  |
| **yearly_price_in_cents** | **Integer** |  |  |
| **price_model** | **String** |  |  |
| **has_free_trial** | **Boolean** |  |  |
| **unit_name** | **String** |  |  |
| **state** | **String** |  |  |
| **bullets** | **Array&lt;String&gt;** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::MarketplaceListingPlan.new(
  url: https://api.github.com/marketplace_listing/plans/1313,
  accounts_url: https://api.github.com/marketplace_listing/plans/1313/accounts,
  id: 1313,
  number: 3,
  name: Pro,
  description: A professional-grade CI solution,
  monthly_price_in_cents: 1099,
  yearly_price_in_cents: 11870,
  price_model: FLAT_RATE,
  has_free_trial: true,
  unit_name: null,
  state: published,
  bullets: [&quot;Up to 25 private repositories&quot;,&quot;11 concurrent builds&quot;]
)
```

