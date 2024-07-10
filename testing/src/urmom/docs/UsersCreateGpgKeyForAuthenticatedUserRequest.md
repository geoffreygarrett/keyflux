# OpenapiClient::UsersCreateGpgKeyForAuthenticatedUserRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | A descriptive name for the new key. | [optional] |
| **armored_public_key** | **String** | A GPG key in ASCII-armored format. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::UsersCreateGpgKeyForAuthenticatedUserRequest.new(
  name: null,
  armored_public_key: null
)
```

