# OpenapiClient::OrganizationProgrammaticAccessGrant

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the fine-grained personal access token. The &#x60;pat_id&#x60; used to get details about an approved fine-grained personal access token. |  |
| **owner** | [**SimpleUser**](SimpleUser.md) |  |  |
| **repository_selection** | **String** | Type of repository selection requested. |  |
| **repositories_url** | **String** | URL to the list of repositories the fine-grained personal access token can access. Only follow when &#x60;repository_selection&#x60; is &#x60;subset&#x60;. |  |
| **permissions** | [**OrganizationProgrammaticAccessGrantRequestPermissions**](OrganizationProgrammaticAccessGrantRequestPermissions.md) |  |  |
| **access_granted_at** | **String** | Date and time when the fine-grained personal access token was approved to access the organization. |  |
| **token_expired** | **Boolean** | Whether the associated fine-grained personal access token has expired. |  |
| **token_expires_at** | **String** | Date and time when the associated fine-grained personal access token expires. |  |
| **token_last_used_at** | **String** | Date and time when the associated fine-grained personal access token was last used for authentication. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrganizationProgrammaticAccessGrant.new(
  id: null,
  owner: null,
  repository_selection: null,
  repositories_url: null,
  permissions: null,
  access_granted_at: null,
  token_expired: null,
  token_expires_at: null,
  token_last_used_at: null
)
```

