# OpenapiClient::ActionsCacheList

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **total_count** | **Integer** | Total number of caches |  |
| **actions_caches** | [**Array&lt;ActionsCacheListActionsCachesInner&gt;**](ActionsCacheListActionsCachesInner.md) | Array of caches |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsCacheList.new(
  total_count: 2,
  actions_caches: null
)
```

