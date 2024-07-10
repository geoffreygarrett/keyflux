# OpenapiClient::PersonalAccessTokenRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the request for access via fine-grained personal access token. Used as the &#x60;pat_request_id&#x60; parameter in the list and review API calls. |  |
| **owner** | [**SimpleUser**](SimpleUser.md) |  |  |
| **permissions_added** | [**PersonalAccessTokenRequestPermissionsAdded**](PersonalAccessTokenRequestPermissionsAdded.md) |  |  |
| **permissions_upgraded** | [**PersonalAccessTokenRequestPermissionsUpgraded**](PersonalAccessTokenRequestPermissionsUpgraded.md) |  |  |
| **permissions_result** | [**PersonalAccessTokenRequestPermissionsResult**](PersonalAccessTokenRequestPermissionsResult.md) |  |  |
| **repository_selection** | **String** | Type of repository selection requested. |  |
| **repository_count** | **Integer** | The number of repositories the token is requesting access to. This field is only populated when &#x60;repository_selection&#x60; is &#x60;subset&#x60;. |  |
| **repositories** | [**Array&lt;WebhooksRepositoriesInner&gt;**](WebhooksRepositoriesInner.md) | An array of repository objects the token is requesting access to. This field is only populated when &#x60;repository_selection&#x60; is &#x60;subset&#x60;. |  |
| **created_at** | **String** | Date and time when the request for access was created. |  |
| **token_expired** | **Boolean** | Whether the associated fine-grained personal access token has expired. |  |
| **token_expires_at** | **String** | Date and time when the associated fine-grained personal access token expires. |  |
| **token_last_used_at** | **String** | Date and time when the associated fine-grained personal access token was last used for authentication. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PersonalAccessTokenRequest.new(
  id: null,
  owner: null,
  permissions_added: null,
  permissions_upgraded: null,
  permissions_result: null,
  repository_selection: null,
  repository_count: null,
  repositories: null,
  created_at: null,
  token_expired: null,
  token_expires_at: null,
  token_last_used_at: null
)
```

