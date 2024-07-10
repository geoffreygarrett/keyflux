# OpenapiClient::UsersCreateSshSigningKeyForAuthenticatedUserRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **title** | **String** | A descriptive name for the new key. | [optional] |
| **key** | **String** | The public SSH key to add to your GitHub account. For more information, see \&quot;[Checking for existing SSH keys](https://docs.github.com/authentication/connecting-to-github-with-ssh/checking-for-existing-ssh-keys).\&quot; |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::UsersCreateSshSigningKeyForAuthenticatedUserRequest.new(
  title: Personal MacBook Air,
  key: null
)
```

