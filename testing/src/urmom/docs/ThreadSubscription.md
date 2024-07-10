# OpenapiClient::ThreadSubscription

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **subscribed** | **Boolean** |  |  |
| **ignored** | **Boolean** |  |  |
| **reason** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **url** | **String** |  |  |
| **thread_url** | **String** |  | [optional] |
| **repository_url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ThreadSubscription.new(
  subscribed: true,
  ignored: null,
  reason: null,
  created_at: 2012-10-06T21:34:12Z,
  url: https://api.github.com/notifications/threads/1/subscription,
  thread_url: https://api.github.com/notifications/threads/1,
  repository_url: https://api.github.com/repos/1
)
```

