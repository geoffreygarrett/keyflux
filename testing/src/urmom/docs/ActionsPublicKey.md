# OpenapiClient::ActionsPublicKey

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **key_id** | **String** | The identifier for the key. |  |
| **key** | **String** | The Base64 encoded public key. |  |
| **id** | **Integer** |  | [optional] |
| **url** | **String** |  | [optional] |
| **title** | **String** |  | [optional] |
| **created_at** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsPublicKey.new(
  key_id: 1234567,
  key: hBT5WZEj8ZoOv6TYJsfWq7MxTEQopZO5/IT3ZCVQPzs&#x3D;,
  id: 2,
  url: https://api.github.com/user/keys/2,
  title: ssh-rsa AAAAB3NzaC1yc2EAAA,
  created_at: 2011-01-26T19:01:12Z
)
```

