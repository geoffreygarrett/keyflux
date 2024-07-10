# OpenapiClient::CodespacesCreateOrUpdateSecretForAuthenticatedUserRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **encrypted_value** | **String** | Value for your secret, encrypted with [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages) using the public key retrieved from the [Get the public key for the authenticated user](https://docs.github.com/rest/codespaces/secrets#get-public-key-for-the-authenticated-user) endpoint. | [optional] |
| **key_id** | **String** | ID of the key you used to encrypt the secret. |  |
| **selected_repository_ids** | [**Array&lt;CodespacesCreateOrUpdateSecretForAuthenticatedUserRequestSelectedRepositoryIdsInner&gt;**](CodespacesCreateOrUpdateSecretForAuthenticatedUserRequestSelectedRepositoryIdsInner.md) | An array of repository ids that can access the user secret. You can manage the list of selected repositories using the [List selected repositories for a user secret](https://docs.github.com/rest/codespaces/secrets#list-selected-repositories-for-a-user-secret), [Set selected repositories for a user secret](https://docs.github.com/rest/codespaces/secrets#set-selected-repositories-for-a-user-secret), and [Remove a selected repository from a user secret](https://docs.github.com/rest/codespaces/secrets#remove-a-selected-repository-from-a-user-secret) endpoints. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodespacesCreateOrUpdateSecretForAuthenticatedUserRequest.new(
  encrypted_value: null,
  key_id: null,
  selected_repository_ids: null
)
```

