# OpenapiClient::Authorization

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **url** | **String** |  |  |
| **scopes** | **Array&lt;String&gt;** | A list of scopes that this authorization is in. |  |
| **token** | **String** |  |  |
| **token_last_eight** | **String** |  |  |
| **hashed_token** | **String** |  |  |
| **app** | [**AuthorizationApp**](AuthorizationApp.md) |  |  |
| **note** | **String** |  |  |
| **note_url** | **String** |  |  |
| **updated_at** | **Time** |  |  |
| **created_at** | **Time** |  |  |
| **fingerprint** | **String** |  |  |
| **user** | [**NullableSimpleUser**](NullableSimpleUser.md) |  | [optional] |
| **installation** | [**NullableScopedInstallation**](NullableScopedInstallation.md) |  | [optional] |
| **expires_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Authorization.new(
  id: null,
  url: null,
  scopes: null,
  token: null,
  token_last_eight: null,
  hashed_token: null,
  app: null,
  note: null,
  note_url: null,
  updated_at: null,
  created_at: null,
  fingerprint: null,
  user: null,
  installation: null,
  expires_at: null
)
```

