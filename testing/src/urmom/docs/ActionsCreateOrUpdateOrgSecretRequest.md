# OpenapiClient::ActionsCreateOrUpdateOrgSecretRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **encrypted_value** | **String** | Value for your secret, encrypted with [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages) using the public key retrieved from the [Get an organization public key](https://docs.github.com/rest/actions/secrets#get-an-organization-public-key) endpoint. | [optional] |
| **key_id** | **String** | ID of the key you used to encrypt the secret. | [optional] |
| **visibility** | **String** | Which type of organization repositories have access to the organization secret. &#x60;selected&#x60; means only the repositories specified by &#x60;selected_repository_ids&#x60; can access the secret. |  |
| **selected_repository_ids** | **Array&lt;Integer&gt;** | An array of repository ids that can access the organization secret. You can only provide a list of repository ids when the &#x60;visibility&#x60; is set to &#x60;selected&#x60;. You can manage the list of selected repositories using the [List selected repositories for an organization secret](https://docs.github.com/rest/actions/secrets#list-selected-repositories-for-an-organization-secret), [Set selected repositories for an organization secret](https://docs.github.com/rest/actions/secrets#set-selected-repositories-for-an-organization-secret), and [Remove selected repository from an organization secret](https://docs.github.com/rest/actions/secrets#remove-selected-repository-from-an-organization-secret) endpoints. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsCreateOrUpdateOrgSecretRequest.new(
  encrypted_value: null,
  key_id: null,
  visibility: null,
  selected_repository_ids: null
)
```

