# OpenapiClient::GpgKey

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **name** | **String** |  | [optional] |
| **primary_key_id** | **Integer** |  |  |
| **key_id** | **String** |  |  |
| **public_key** | **String** |  |  |
| **emails** | [**Array&lt;GpgKeyEmailsInner&gt;**](GpgKeyEmailsInner.md) |  |  |
| **subkeys** | [**Array&lt;GpgKeySubkeysInner&gt;**](GpgKeySubkeysInner.md) |  |  |
| **can_sign** | **Boolean** |  |  |
| **can_encrypt_comms** | **Boolean** |  |  |
| **can_encrypt_storage** | **Boolean** |  |  |
| **can_certify** | **Boolean** |  |  |
| **created_at** | **Time** |  |  |
| **expires_at** | **Time** |  |  |
| **revoked** | **Boolean** |  |  |
| **raw_key** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GpgKey.new(
  id: 3,
  name: Octocat&#39;s GPG Key,
  primary_key_id: null,
  key_id: 3262EFF25BA0D270,
  public_key: xsBNBFayYZ...,
  emails: [{&quot;email&quot;:&quot;octocat@users.noreply.github.com&quot;,&quot;verified&quot;:true}],
  subkeys: [{&quot;id&quot;:4,&quot;primary_key_id&quot;:3,&quot;key_id&quot;:&quot;4A595D4C72EE49C7&quot;,&quot;public_key&quot;:&quot;zsBNBFayYZ...&quot;,&quot;emails&quot;:[],&quot;can_sign&quot;:false,&quot;can_encrypt_comms&quot;:true,&quot;can_encrypt_storage&quot;:true,&quot;can_certify&quot;:false,&quot;created_at&quot;:&quot;2016-03-24T11:31:04-06:00&quot;,&quot;expires_at&quot;:null,&quot;revoked&quot;:false}],
  can_sign: true,
  can_encrypt_comms: null,
  can_encrypt_storage: null,
  can_certify: true,
  created_at: 2016-03-24T11:31:04-06:00,
  expires_at: null,
  revoked: true,
  raw_key: null
)
```

