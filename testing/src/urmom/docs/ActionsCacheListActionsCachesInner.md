# OpenapiClient::ActionsCacheListActionsCachesInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  | [optional] |
| **ref** | **String** |  | [optional] |
| **key** | **String** |  | [optional] |
| **version** | **String** |  | [optional] |
| **last_accessed_at** | **Time** |  | [optional] |
| **created_at** | **Time** |  | [optional] |
| **size_in_bytes** | **Integer** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsCacheListActionsCachesInner.new(
  id: 2,
  ref: refs/heads/main,
  key: Linux-node-958aff96db2d75d67787d1e634ae70b659de937b,
  version: 73885106f58cc52a7df9ec4d4a5622a5614813162cb516c759a30af6bf56e6f0,
  last_accessed_at: 2019-01-24T22:45:36Z,
  created_at: 2019-01-24T22:45:36Z,
  size_in_bytes: 1024
)
```

