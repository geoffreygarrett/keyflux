# OpenapiClient::RepositorySubscription

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **subscribed** | **Boolean** | Determines if notifications should be received from this repository. |  |
| **ignored** | **Boolean** | Determines if all notifications should be blocked from this repository. |  |
| **reason** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **url** | **String** |  |  |
| **repository_url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositorySubscription.new(
  subscribed: true,
  ignored: null,
  reason: null,
  created_at: 2012-10-06T21:34:12Z,
  url: https://api.github.com/repos/octocat/example/subscription,
  repository_url: https://api.github.com/repos/octocat/example
)
```

