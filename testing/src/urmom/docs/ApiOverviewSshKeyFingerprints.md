# OpenapiClient::ApiOverviewSshKeyFingerprints

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **sha256_rsa** | **String** |  | [optional] |
| **sha256_dsa** | **String** |  | [optional] |
| **sha256_ecdsa** | **String** |  | [optional] |
| **sha256_ed25519** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ApiOverviewSshKeyFingerprints.new(
  sha256_rsa: null,
  sha256_dsa: null,
  sha256_ecdsa: null,
  sha256_ed25519: null
)
```

