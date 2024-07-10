# OpenapiClient::CombinedBillingUsage

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **days_left_in_billing_cycle** | **Integer** | Numbers of days left in billing cycle. |  |
| **estimated_paid_storage_for_month** | **Integer** | Estimated storage space (GB) used in billing cycle. |  |
| **estimated_storage_for_month** | **Integer** | Estimated sum of free and paid storage space (GB) used in billing cycle. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CombinedBillingUsage.new(
  days_left_in_billing_cycle: null,
  estimated_paid_storage_for_month: null,
  estimated_storage_for_month: null
)
```

