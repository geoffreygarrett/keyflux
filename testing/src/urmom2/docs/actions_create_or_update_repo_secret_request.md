# actions_create_or_update_repo_secret_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**encrypted_value** | **char \*** | Value for your secret, encrypted with [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages) using the public key retrieved from the [Get a repository public key](https://docs.github.com/rest/actions/secrets#get-a-repository-public-key) endpoint. | [optional] 
**key_id** | **char \*** | ID of the key you used to encrypt the secret. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

