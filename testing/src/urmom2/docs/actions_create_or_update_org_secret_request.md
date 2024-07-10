# actions_create_or_update_org_secret_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**encrypted_value** | **char \*** | Value for your secret, encrypted with [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages) using the public key retrieved from the [Get an organization public key](https://docs.github.com/rest/actions/secrets#get-an-organization-public-key) endpoint. | [optional] 
**key_id** | **char \*** | ID of the key you used to encrypt the secret. | [optional] 
**visibility** | **github_v3_rest_api_actions_create_or_update_org_secret_request_VISIBILITY_e** | Which type of organization repositories have access to the organization secret. &#x60;selected&#x60; means only the repositories specified by &#x60;selected_repository_ids&#x60; can access the secret. | 
**selected_repository_ids** | **list_t \*** | An array of repository ids that can access the organization secret. You can only provide a list of repository ids when the &#x60;visibility&#x60; is set to &#x60;selected&#x60;. You can manage the list of selected repositories using the [List selected repositories for an organization secret](https://docs.github.com/rest/actions/secrets#list-selected-repositories-for-an-organization-secret), [Set selected repositories for an organization secret](https://docs.github.com/rest/actions/secrets#set-selected-repositories-for-an-organization-secret), and [Remove selected repository from an organization secret](https://docs.github.com/rest/actions/secrets#remove-selected-repository-from-an-organization-secret) endpoints. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


