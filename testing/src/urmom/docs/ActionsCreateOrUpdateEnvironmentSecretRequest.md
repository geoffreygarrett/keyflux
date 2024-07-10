# OpenapiClient::ActionsCreateOrUpdateEnvironmentSecretRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **encrypted_value** | **String** | Value for your secret, encrypted with [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages) using the public key retrieved from the [Get an environment public key](https://docs.github.com/rest/actions/secrets#get-an-environment-public-key) endpoint. |  |
| **key_id** | **String** | ID of the key you used to encrypt the secret. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsCreateOrUpdateEnvironmentSecretRequest.new(
  encrypted_value: null,
  key_id: null
)
```

