# actions_create_or_update_environment_secret_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**encrypted_value** | **char \*** | Value for your secret, encrypted with [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages) using the public key retrieved from the [Get an environment public key](https://docs.github.com/rest/actions/secrets#get-an-environment-public-key) endpoint. | 
**key_id** | **char \*** | ID of the key you used to encrypt the secret. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


