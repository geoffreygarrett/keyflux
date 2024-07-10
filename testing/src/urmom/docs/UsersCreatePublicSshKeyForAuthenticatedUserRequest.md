# OpenapiClient::UsersCreatePublicSshKeyForAuthenticatedUserRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **title** | **String** | A descriptive name for the new key. | [optional] |
| **key** | **String** | The public SSH key to add to your GitHub account. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::UsersCreatePublicSshKeyForAuthenticatedUserRequest.new(
  title: Personal MacBook Air,
  key: null
)
```

