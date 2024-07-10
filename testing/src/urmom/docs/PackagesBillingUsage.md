# OpenapiClient::PackagesBillingUsage

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **total_gigabytes_bandwidth_used** | **Integer** | Sum of the free and paid storage space (GB) for GitHuub Packages. |  |
| **total_paid_gigabytes_bandwidth_used** | **Integer** | Total paid storage space (GB) for GitHuub Packages. |  |
| **included_gigabytes_bandwidth** | **Integer** | Free storage space (GB) for GitHub Packages. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PackagesBillingUsage.new(
  total_gigabytes_bandwidth_used: null,
  total_paid_gigabytes_bandwidth_used: null,
  included_gigabytes_bandwidth: null
)
```

