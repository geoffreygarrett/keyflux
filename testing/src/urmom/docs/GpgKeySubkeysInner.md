# OpenapiClient::GpgKeySubkeysInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  | [optional] |
| **primary_key_id** | **Integer** |  | [optional] |
| **key_id** | **String** |  | [optional] |
| **public_key** | **String** |  | [optional] |
| **emails** | [**Array&lt;GpgKeyEmailsInner&gt;**](GpgKeyEmailsInner.md) |  | [optional] |
| **subkeys** | **Array&lt;Object&gt;** |  | [optional] |
| **can_sign** | **Boolean** |  | [optional] |
| **can_encrypt_comms** | **Boolean** |  | [optional] |
| **can_encrypt_storage** | **Boolean** |  | [optional] |
| **can_certify** | **Boolean** |  | [optional] |
| **created_at** | **String** |  | [optional] |
| **expires_at** | **String** |  | [optional] |
| **raw_key** | **String** |  | [optional] |
| **revoked** | **Boolean** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GpgKeySubkeysInner.new(
  id: null,
  primary_key_id: null,
  key_id: null,
  public_key: null,
  emails: null,
  subkeys: null,
  can_sign: null,
  can_encrypt_comms: null,
  can_encrypt_storage: null,
  can_certify: null,
  created_at: null,
  expires_at: null,
  raw_key: null,
  revoked: null
)
```

