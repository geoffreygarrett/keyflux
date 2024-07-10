# OpenapiClient::ActionsCacheUsageByRepository

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **full_name** | **String** | The repository owner and name for the cache usage being shown. |  |
| **active_caches_size_in_bytes** | **Integer** | The sum of the size in bytes of all the active cache items in the repository. |  |
| **active_caches_count** | **Integer** | The number of active caches in the repository. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsCacheUsageByRepository.new(
  full_name: octo-org/Hello-World,
  active_caches_size_in_bytes: 2322142,
  active_caches_count: 3
)
```

