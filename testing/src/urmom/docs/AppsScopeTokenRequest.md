# OpenapiClient::AppsScopeTokenRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **access_token** | **String** | The access token used to authenticate to the GitHub API. |  |
| **target** | **String** | The name of the user or organization to scope the user access token to. **Required** unless &#x60;target_id&#x60; is specified. | [optional] |
| **target_id** | **Integer** | The ID of the user or organization to scope the user access token to. **Required** unless &#x60;target&#x60; is specified. | [optional] |
| **repositories** | **Array&lt;String&gt;** | The list of repository names to scope the user access token to. &#x60;repositories&#x60; may not be specified if &#x60;repository_ids&#x60; is specified. | [optional] |
| **repository_ids** | **Array&lt;Integer&gt;** | The list of repository IDs to scope the user access token to. &#x60;repository_ids&#x60; may not be specified if &#x60;repositories&#x60; is specified. | [optional] |
| **permissions** | [**AppPermissions**](AppPermissions.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AppsScopeTokenRequest.new(
  access_token: e72e16c7e42f292c6912e7710c838347ae178b4a,
  target: octocat,
  target_id: 1,
  repositories: null,
  repository_ids: [1],
  permissions: null
)
```

