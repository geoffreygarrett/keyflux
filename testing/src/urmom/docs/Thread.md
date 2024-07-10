# OpenapiClient::Thread

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** |  |  |
| **repository** | [**MinimalRepository**](MinimalRepository.md) |  |  |
| **subject** | [**ThreadSubject**](ThreadSubject.md) |  |  |
| **reason** | **String** |  |  |
| **unread** | **Boolean** |  |  |
| **updated_at** | **String** |  |  |
| **last_read_at** | **String** |  |  |
| **url** | **String** |  |  |
| **subscription_url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Thread.new(
  id: null,
  repository: null,
  subject: null,
  reason: null,
  unread: null,
  updated_at: null,
  last_read_at: null,
  url: null,
  subscription_url: https://api.github.com/notifications/threads/2/subscription
)
```

