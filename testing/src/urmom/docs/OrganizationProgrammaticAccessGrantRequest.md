# OpenapiClient::OrganizationProgrammaticAccessGrantRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the request for access via fine-grained personal access token. The &#x60;pat_request_id&#x60; used to review PAT requests. |  |
| **reason** | **String** | Reason for requesting access. |  |
| **owner** | [**SimpleUser**](SimpleUser.md) |  |  |
| **repository_selection** | **String** | Type of repository selection requested. |  |
| **repositories_url** | **String** | URL to the list of repositories requested to be accessed via fine-grained personal access token. Should only be followed when &#x60;repository_selection&#x60; is &#x60;subset&#x60;. |  |
| **permissions** | [**OrganizationProgrammaticAccessGrantRequestPermissions**](OrganizationProgrammaticAccessGrantRequestPermissions.md) |  |  |
| **created_at** | **String** | Date and time when the request for access was created. |  |
| **token_expired** | **Boolean** | Whether the associated fine-grained personal access token has expired. |  |
| **token_expires_at** | **String** | Date and time when the associated fine-grained personal access token expires. |  |
| **token_last_used_at** | **String** | Date and time when the associated fine-grained personal access token was last used for authentication. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrganizationProgrammaticAccessGrantRequest.new(
  id: null,
  reason: null,
  owner: null,
  repository_selection: null,
  repositories_url: null,
  permissions: null,
  created_at: null,
  token_expired: null,
  token_expires_at: null,
  token_last_used_at: null
)
```

