# OpenapiClient::UsersApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**users_add_email_for_authenticated_user**](UsersApi.md#users_add_email_for_authenticated_user) | **POST** /user/emails | Add an email address for the authenticated user |
| [**users_add_social_account_for_authenticated_user**](UsersApi.md#users_add_social_account_for_authenticated_user) | **POST** /user/social_accounts | Add social accounts for the authenticated user |
| [**users_block**](UsersApi.md#users_block) | **PUT** /user/blocks/{username} | Block a user |
| [**users_check_blocked**](UsersApi.md#users_check_blocked) | **GET** /user/blocks/{username} | Check if a user is blocked by the authenticated user |
| [**users_check_following_for_user**](UsersApi.md#users_check_following_for_user) | **GET** /users/{username}/following/{target_user} | Check if a user follows another user |
| [**users_check_person_is_followed_by_authenticated**](UsersApi.md#users_check_person_is_followed_by_authenticated) | **GET** /user/following/{username} | Check if a person is followed by the authenticated user |
| [**users_create_gpg_key_for_authenticated_user**](UsersApi.md#users_create_gpg_key_for_authenticated_user) | **POST** /user/gpg_keys | Create a GPG key for the authenticated user |
| [**users_create_public_ssh_key_for_authenticated_user**](UsersApi.md#users_create_public_ssh_key_for_authenticated_user) | **POST** /user/keys | Create a public SSH key for the authenticated user |
| [**users_create_ssh_signing_key_for_authenticated_user**](UsersApi.md#users_create_ssh_signing_key_for_authenticated_user) | **POST** /user/ssh_signing_keys | Create a SSH signing key for the authenticated user |
| [**users_delete_email_for_authenticated_user**](UsersApi.md#users_delete_email_for_authenticated_user) | **DELETE** /user/emails | Delete an email address for the authenticated user |
| [**users_delete_gpg_key_for_authenticated_user**](UsersApi.md#users_delete_gpg_key_for_authenticated_user) | **DELETE** /user/gpg_keys/{gpg_key_id} | Delete a GPG key for the authenticated user |
| [**users_delete_public_ssh_key_for_authenticated_user**](UsersApi.md#users_delete_public_ssh_key_for_authenticated_user) | **DELETE** /user/keys/{key_id} | Delete a public SSH key for the authenticated user |
| [**users_delete_social_account_for_authenticated_user**](UsersApi.md#users_delete_social_account_for_authenticated_user) | **DELETE** /user/social_accounts | Delete social accounts for the authenticated user |
| [**users_delete_ssh_signing_key_for_authenticated_user**](UsersApi.md#users_delete_ssh_signing_key_for_authenticated_user) | **DELETE** /user/ssh_signing_keys/{ssh_signing_key_id} | Delete an SSH signing key for the authenticated user |
| [**users_follow**](UsersApi.md#users_follow) | **PUT** /user/following/{username} | Follow a user |
| [**users_get_authenticated**](UsersApi.md#users_get_authenticated) | **GET** /user | Get the authenticated user |
| [**users_get_by_id**](UsersApi.md#users_get_by_id) | **GET** /user/{account_id} | Get a user using their ID |
| [**users_get_by_username**](UsersApi.md#users_get_by_username) | **GET** /users/{username} | Get a user |
| [**users_get_context_for_user**](UsersApi.md#users_get_context_for_user) | **GET** /users/{username}/hovercard | Get contextual information for a user |
| [**users_get_gpg_key_for_authenticated_user**](UsersApi.md#users_get_gpg_key_for_authenticated_user) | **GET** /user/gpg_keys/{gpg_key_id} | Get a GPG key for the authenticated user |
| [**users_get_public_ssh_key_for_authenticated_user**](UsersApi.md#users_get_public_ssh_key_for_authenticated_user) | **GET** /user/keys/{key_id} | Get a public SSH key for the authenticated user |
| [**users_get_ssh_signing_key_for_authenticated_user**](UsersApi.md#users_get_ssh_signing_key_for_authenticated_user) | **GET** /user/ssh_signing_keys/{ssh_signing_key_id} | Get an SSH signing key for the authenticated user |
| [**users_list**](UsersApi.md#users_list) | **GET** /users | List users |
| [**users_list_attestations**](UsersApi.md#users_list_attestations) | **GET** /users/{username}/attestations/{subject_digest} | List attestations |
| [**users_list_blocked_by_authenticated_user**](UsersApi.md#users_list_blocked_by_authenticated_user) | **GET** /user/blocks | List users blocked by the authenticated user |
| [**users_list_emails_for_authenticated_user**](UsersApi.md#users_list_emails_for_authenticated_user) | **GET** /user/emails | List email addresses for the authenticated user |
| [**users_list_followed_by_authenticated_user**](UsersApi.md#users_list_followed_by_authenticated_user) | **GET** /user/following | List the people the authenticated user follows |
| [**users_list_followers_for_authenticated_user**](UsersApi.md#users_list_followers_for_authenticated_user) | **GET** /user/followers | List followers of the authenticated user |
| [**users_list_followers_for_user**](UsersApi.md#users_list_followers_for_user) | **GET** /users/{username}/followers | List followers of a user |
| [**users_list_following_for_user**](UsersApi.md#users_list_following_for_user) | **GET** /users/{username}/following | List the people a user follows |
| [**users_list_gpg_keys_for_authenticated_user**](UsersApi.md#users_list_gpg_keys_for_authenticated_user) | **GET** /user/gpg_keys | List GPG keys for the authenticated user |
| [**users_list_gpg_keys_for_user**](UsersApi.md#users_list_gpg_keys_for_user) | **GET** /users/{username}/gpg_keys | List GPG keys for a user |
| [**users_list_public_emails_for_authenticated_user**](UsersApi.md#users_list_public_emails_for_authenticated_user) | **GET** /user/public_emails | List public email addresses for the authenticated user |
| [**users_list_public_keys_for_user**](UsersApi.md#users_list_public_keys_for_user) | **GET** /users/{username}/keys | List public keys for a user |
| [**users_list_public_ssh_keys_for_authenticated_user**](UsersApi.md#users_list_public_ssh_keys_for_authenticated_user) | **GET** /user/keys | List public SSH keys for the authenticated user |
| [**users_list_social_accounts_for_authenticated_user**](UsersApi.md#users_list_social_accounts_for_authenticated_user) | **GET** /user/social_accounts | List social accounts for the authenticated user |
| [**users_list_social_accounts_for_user**](UsersApi.md#users_list_social_accounts_for_user) | **GET** /users/{username}/social_accounts | List social accounts for a user |
| [**users_list_ssh_signing_keys_for_authenticated_user**](UsersApi.md#users_list_ssh_signing_keys_for_authenticated_user) | **GET** /user/ssh_signing_keys | List SSH signing keys for the authenticated user |
| [**users_list_ssh_signing_keys_for_user**](UsersApi.md#users_list_ssh_signing_keys_for_user) | **GET** /users/{username}/ssh_signing_keys | List SSH signing keys for a user |
| [**users_set_primary_email_visibility_for_authenticated_user**](UsersApi.md#users_set_primary_email_visibility_for_authenticated_user) | **PATCH** /user/email/visibility | Set primary email visibility for the authenticated user |
| [**users_unblock**](UsersApi.md#users_unblock) | **DELETE** /user/blocks/{username} | Unblock a user |
| [**users_unfollow**](UsersApi.md#users_unfollow) | **DELETE** /user/following/{username} | Unfollow a user |
| [**users_update_authenticated**](UsersApi.md#users_update_authenticated) | **PATCH** /user | Update the authenticated user |


## users_add_email_for_authenticated_user

> <Array<Email>> users_add_email_for_authenticated_user(opts)

Add an email address for the authenticated user

OAuth app tokens and personal access tokens (classic) need the `user` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  users_add_email_for_authenticated_user_request: nil # UsersAddEmailForAuthenticatedUserRequest | 
}

begin
  # Add an email address for the authenticated user
  result = api_instance.users_add_email_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_add_email_for_authenticated_user: #{e}"
end
```

#### Using the users_add_email_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Email>>, Integer, Hash)> users_add_email_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # Add an email address for the authenticated user
  data, status_code, headers = api_instance.users_add_email_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Email>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_add_email_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users_add_email_for_authenticated_user_request** | [**UsersAddEmailForAuthenticatedUserRequest**](UsersAddEmailForAuthenticatedUserRequest.md) |  | [optional] |

### Return type

[**Array&lt;Email&gt;**](Email.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## users_add_social_account_for_authenticated_user

> <Array<SocialAccount>> users_add_social_account_for_authenticated_user(users_add_social_account_for_authenticated_user_request)

Add social accounts for the authenticated user

Add one or more social accounts to the authenticated user's profile.  OAuth app tokens and personal access tokens (classic) need the `user` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
users_add_social_account_for_authenticated_user_request = OpenapiClient::UsersAddSocialAccountForAuthenticatedUserRequest.new({account_urls: []}) # UsersAddSocialAccountForAuthenticatedUserRequest | 

begin
  # Add social accounts for the authenticated user
  result = api_instance.users_add_social_account_for_authenticated_user(users_add_social_account_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_add_social_account_for_authenticated_user: #{e}"
end
```

#### Using the users_add_social_account_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SocialAccount>>, Integer, Hash)> users_add_social_account_for_authenticated_user_with_http_info(users_add_social_account_for_authenticated_user_request)

```ruby
begin
  # Add social accounts for the authenticated user
  data, status_code, headers = api_instance.users_add_social_account_for_authenticated_user_with_http_info(users_add_social_account_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SocialAccount>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_add_social_account_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users_add_social_account_for_authenticated_user_request** | [**UsersAddSocialAccountForAuthenticatedUserRequest**](UsersAddSocialAccountForAuthenticatedUserRequest.md) |  |  |

### Return type

[**Array&lt;SocialAccount&gt;**](SocialAccount.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## users_block

> users_block(username)

Block a user

Blocks the given user and returns a 204. If the authenticated user cannot block the given user a 422 is returned.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Block a user
  api_instance.users_block(username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_block: #{e}"
end
```

#### Using the users_block_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> users_block_with_http_info(username)

```ruby
begin
  # Block a user
  data, status_code, headers = api_instance.users_block_with_http_info(username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_block_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_check_blocked

> users_check_blocked(username)

Check if a user is blocked by the authenticated user

Returns a 204 if the given user is blocked by the authenticated user. Returns a 404 if the given user is not blocked by the authenticated user, or if the given user account has been identified as spam by GitHub.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Check if a user is blocked by the authenticated user
  api_instance.users_check_blocked(username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_check_blocked: #{e}"
end
```

#### Using the users_check_blocked_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> users_check_blocked_with_http_info(username)

```ruby
begin
  # Check if a user is blocked by the authenticated user
  data, status_code, headers = api_instance.users_check_blocked_with_http_info(username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_check_blocked_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_check_following_for_user

> users_check_following_for_user(username, target_user)

Check if a user follows another user



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.
target_user = 'target_user_example' # String | 

begin
  # Check if a user follows another user
  api_instance.users_check_following_for_user(username, target_user)
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_check_following_for_user: #{e}"
end
```

#### Using the users_check_following_for_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> users_check_following_for_user_with_http_info(username, target_user)

```ruby
begin
  # Check if a user follows another user
  data, status_code, headers = api_instance.users_check_following_for_user_with_http_info(username, target_user)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_check_following_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **target_user** | **String** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## users_check_person_is_followed_by_authenticated

> users_check_person_is_followed_by_authenticated(username)

Check if a person is followed by the authenticated user



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Check if a person is followed by the authenticated user
  api_instance.users_check_person_is_followed_by_authenticated(username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_check_person_is_followed_by_authenticated: #{e}"
end
```

#### Using the users_check_person_is_followed_by_authenticated_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> users_check_person_is_followed_by_authenticated_with_http_info(username)

```ruby
begin
  # Check if a person is followed by the authenticated user
  data, status_code, headers = api_instance.users_check_person_is_followed_by_authenticated_with_http_info(username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_check_person_is_followed_by_authenticated_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_create_gpg_key_for_authenticated_user

> <GpgKey> users_create_gpg_key_for_authenticated_user(users_create_gpg_key_for_authenticated_user_request)

Create a GPG key for the authenticated user

Adds a GPG key to the authenticated user's GitHub account.  OAuth app tokens and personal access tokens (classic) need the `write:gpg_key` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
users_create_gpg_key_for_authenticated_user_request = OpenapiClient::UsersCreateGpgKeyForAuthenticatedUserRequest.new({armored_public_key: 'armored_public_key_example'}) # UsersCreateGpgKeyForAuthenticatedUserRequest | 

begin
  # Create a GPG key for the authenticated user
  result = api_instance.users_create_gpg_key_for_authenticated_user(users_create_gpg_key_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_create_gpg_key_for_authenticated_user: #{e}"
end
```

#### Using the users_create_gpg_key_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GpgKey>, Integer, Hash)> users_create_gpg_key_for_authenticated_user_with_http_info(users_create_gpg_key_for_authenticated_user_request)

```ruby
begin
  # Create a GPG key for the authenticated user
  data, status_code, headers = api_instance.users_create_gpg_key_for_authenticated_user_with_http_info(users_create_gpg_key_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GpgKey>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_create_gpg_key_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users_create_gpg_key_for_authenticated_user_request** | [**UsersCreateGpgKeyForAuthenticatedUserRequest**](UsersCreateGpgKeyForAuthenticatedUserRequest.md) |  |  |

### Return type

[**GpgKey**](GpgKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## users_create_public_ssh_key_for_authenticated_user

> <Key> users_create_public_ssh_key_for_authenticated_user(users_create_public_ssh_key_for_authenticated_user_request)

Create a public SSH key for the authenticated user

Adds a public SSH key to the authenticated user's GitHub account.  OAuth app tokens and personal access tokens (classic) need the `write:gpg_key` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
users_create_public_ssh_key_for_authenticated_user_request = OpenapiClient::UsersCreatePublicSshKeyForAuthenticatedUserRequest.new({key: 'key_example'}) # UsersCreatePublicSshKeyForAuthenticatedUserRequest | 

begin
  # Create a public SSH key for the authenticated user
  result = api_instance.users_create_public_ssh_key_for_authenticated_user(users_create_public_ssh_key_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_create_public_ssh_key_for_authenticated_user: #{e}"
end
```

#### Using the users_create_public_ssh_key_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Key>, Integer, Hash)> users_create_public_ssh_key_for_authenticated_user_with_http_info(users_create_public_ssh_key_for_authenticated_user_request)

```ruby
begin
  # Create a public SSH key for the authenticated user
  data, status_code, headers = api_instance.users_create_public_ssh_key_for_authenticated_user_with_http_info(users_create_public_ssh_key_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Key>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_create_public_ssh_key_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users_create_public_ssh_key_for_authenticated_user_request** | [**UsersCreatePublicSshKeyForAuthenticatedUserRequest**](UsersCreatePublicSshKeyForAuthenticatedUserRequest.md) |  |  |

### Return type

[**Key**](Key.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## users_create_ssh_signing_key_for_authenticated_user

> <SshSigningKey> users_create_ssh_signing_key_for_authenticated_user(users_create_ssh_signing_key_for_authenticated_user_request)

Create a SSH signing key for the authenticated user

Creates an SSH signing key for the authenticated user's GitHub account.  OAuth app tokens and personal access tokens (classic) need the `write:ssh_signing_key` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
users_create_ssh_signing_key_for_authenticated_user_request = OpenapiClient::UsersCreateSshSigningKeyForAuthenticatedUserRequest.new({key: 'key_example'}) # UsersCreateSshSigningKeyForAuthenticatedUserRequest | 

begin
  # Create a SSH signing key for the authenticated user
  result = api_instance.users_create_ssh_signing_key_for_authenticated_user(users_create_ssh_signing_key_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_create_ssh_signing_key_for_authenticated_user: #{e}"
end
```

#### Using the users_create_ssh_signing_key_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SshSigningKey>, Integer, Hash)> users_create_ssh_signing_key_for_authenticated_user_with_http_info(users_create_ssh_signing_key_for_authenticated_user_request)

```ruby
begin
  # Create a SSH signing key for the authenticated user
  data, status_code, headers = api_instance.users_create_ssh_signing_key_for_authenticated_user_with_http_info(users_create_ssh_signing_key_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SshSigningKey>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_create_ssh_signing_key_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users_create_ssh_signing_key_for_authenticated_user_request** | [**UsersCreateSshSigningKeyForAuthenticatedUserRequest**](UsersCreateSshSigningKeyForAuthenticatedUserRequest.md) |  |  |

### Return type

[**SshSigningKey**](SshSigningKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## users_delete_email_for_authenticated_user

> users_delete_email_for_authenticated_user(opts)

Delete an email address for the authenticated user

OAuth app tokens and personal access tokens (classic) need the `user` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  users_delete_email_for_authenticated_user_request: nil # UsersDeleteEmailForAuthenticatedUserRequest | 
}

begin
  # Delete an email address for the authenticated user
  api_instance.users_delete_email_for_authenticated_user(opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_delete_email_for_authenticated_user: #{e}"
end
```

#### Using the users_delete_email_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> users_delete_email_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # Delete an email address for the authenticated user
  data, status_code, headers = api_instance.users_delete_email_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_delete_email_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users_delete_email_for_authenticated_user_request** | [**UsersDeleteEmailForAuthenticatedUserRequest**](UsersDeleteEmailForAuthenticatedUserRequest.md) |  | [optional] |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## users_delete_gpg_key_for_authenticated_user

> users_delete_gpg_key_for_authenticated_user(gpg_key_id)

Delete a GPG key for the authenticated user

Removes a GPG key from the authenticated user's GitHub account.  OAuth app tokens and personal access tokens (classic) need the `admin:gpg_key` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
gpg_key_id = 56 # Integer | The unique identifier of the GPG key.

begin
  # Delete a GPG key for the authenticated user
  api_instance.users_delete_gpg_key_for_authenticated_user(gpg_key_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_delete_gpg_key_for_authenticated_user: #{e}"
end
```

#### Using the users_delete_gpg_key_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> users_delete_gpg_key_for_authenticated_user_with_http_info(gpg_key_id)

```ruby
begin
  # Delete a GPG key for the authenticated user
  data, status_code, headers = api_instance.users_delete_gpg_key_for_authenticated_user_with_http_info(gpg_key_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_delete_gpg_key_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gpg_key_id** | **Integer** | The unique identifier of the GPG key. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_delete_public_ssh_key_for_authenticated_user

> users_delete_public_ssh_key_for_authenticated_user(key_id)

Delete a public SSH key for the authenticated user

Removes a public SSH key from the authenticated user's GitHub account.  OAuth app tokens and personal access tokens (classic) need the `admin:public_key` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
key_id = 56 # Integer | The unique identifier of the key.

begin
  # Delete a public SSH key for the authenticated user
  api_instance.users_delete_public_ssh_key_for_authenticated_user(key_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_delete_public_ssh_key_for_authenticated_user: #{e}"
end
```

#### Using the users_delete_public_ssh_key_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> users_delete_public_ssh_key_for_authenticated_user_with_http_info(key_id)

```ruby
begin
  # Delete a public SSH key for the authenticated user
  data, status_code, headers = api_instance.users_delete_public_ssh_key_for_authenticated_user_with_http_info(key_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_delete_public_ssh_key_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **key_id** | **Integer** | The unique identifier of the key. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_delete_social_account_for_authenticated_user

> users_delete_social_account_for_authenticated_user(users_delete_social_account_for_authenticated_user_request)

Delete social accounts for the authenticated user

Deletes one or more social accounts from the authenticated user's profile.  OAuth app tokens and personal access tokens (classic) need the `user` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
users_delete_social_account_for_authenticated_user_request = OpenapiClient::UsersDeleteSocialAccountForAuthenticatedUserRequest.new({account_urls: []}) # UsersDeleteSocialAccountForAuthenticatedUserRequest | 

begin
  # Delete social accounts for the authenticated user
  api_instance.users_delete_social_account_for_authenticated_user(users_delete_social_account_for_authenticated_user_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_delete_social_account_for_authenticated_user: #{e}"
end
```

#### Using the users_delete_social_account_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> users_delete_social_account_for_authenticated_user_with_http_info(users_delete_social_account_for_authenticated_user_request)

```ruby
begin
  # Delete social accounts for the authenticated user
  data, status_code, headers = api_instance.users_delete_social_account_for_authenticated_user_with_http_info(users_delete_social_account_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_delete_social_account_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users_delete_social_account_for_authenticated_user_request** | [**UsersDeleteSocialAccountForAuthenticatedUserRequest**](UsersDeleteSocialAccountForAuthenticatedUserRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## users_delete_ssh_signing_key_for_authenticated_user

> users_delete_ssh_signing_key_for_authenticated_user(ssh_signing_key_id)

Delete an SSH signing key for the authenticated user

Deletes an SSH signing key from the authenticated user's GitHub account.  OAuth app tokens and personal access tokens (classic) need the `admin:ssh_signing_key` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
ssh_signing_key_id = 56 # Integer | The unique identifier of the SSH signing key.

begin
  # Delete an SSH signing key for the authenticated user
  api_instance.users_delete_ssh_signing_key_for_authenticated_user(ssh_signing_key_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_delete_ssh_signing_key_for_authenticated_user: #{e}"
end
```

#### Using the users_delete_ssh_signing_key_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> users_delete_ssh_signing_key_for_authenticated_user_with_http_info(ssh_signing_key_id)

```ruby
begin
  # Delete an SSH signing key for the authenticated user
  data, status_code, headers = api_instance.users_delete_ssh_signing_key_for_authenticated_user_with_http_info(ssh_signing_key_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_delete_ssh_signing_key_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ssh_signing_key_id** | **Integer** | The unique identifier of the SSH signing key. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_follow

> users_follow(username)

Follow a user

Note that you'll need to set `Content-Length` to zero when calling out to this endpoint. For more information, see \"[HTTP verbs](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#http-method).\"  OAuth app tokens and personal access tokens (classic) need the `user:follow` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Follow a user
  api_instance.users_follow(username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_follow: #{e}"
end
```

#### Using the users_follow_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> users_follow_with_http_info(username)

```ruby
begin
  # Follow a user
  data, status_code, headers = api_instance.users_follow_with_http_info(username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_follow_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_get_authenticated

> <UsersGetAuthenticated200Response> users_get_authenticated

Get the authenticated user

OAuth app tokens and personal access tokens (classic) need the `user` scope in order for the response to include private profile information.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new

begin
  # Get the authenticated user
  result = api_instance.users_get_authenticated
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_authenticated: #{e}"
end
```

#### Using the users_get_authenticated_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<UsersGetAuthenticated200Response>, Integer, Hash)> users_get_authenticated_with_http_info

```ruby
begin
  # Get the authenticated user
  data, status_code, headers = api_instance.users_get_authenticated_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <UsersGetAuthenticated200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_authenticated_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**UsersGetAuthenticated200Response**](UsersGetAuthenticated200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_get_by_id

> <UsersGetAuthenticated200Response> users_get_by_id(account_id)

Get a user using their ID

Provides publicly available information about someone with a GitHub account. This method takes their durable user `ID` instead of their `login`, which can change over time.  The `email` key in the following response is the publicly visible email address from your GitHub [profile page](https://github.com/settings/profile). When setting up your profile, you can select a primary email address to be “public” which provides an email entry for this endpoint. If you do not set a public email address for `email`, then it will have a value of `null`. You only see publicly visible email addresses when authenticated with GitHub. For more information, see [Authentication](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#authentication).  The Emails API enables you to list all of your email addresses, and toggle a primary email to be visible publicly. For more information, see \"[Emails API](https://docs.github.com/rest/users/emails)\".

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
account_id = 56 # Integer | account_id parameter

begin
  # Get a user using their ID
  result = api_instance.users_get_by_id(account_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_by_id: #{e}"
end
```

#### Using the users_get_by_id_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<UsersGetAuthenticated200Response>, Integer, Hash)> users_get_by_id_with_http_info(account_id)

```ruby
begin
  # Get a user using their ID
  data, status_code, headers = api_instance.users_get_by_id_with_http_info(account_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <UsersGetAuthenticated200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_by_id_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **account_id** | **Integer** | account_id parameter |  |

### Return type

[**UsersGetAuthenticated200Response**](UsersGetAuthenticated200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_get_by_username

> <UsersGetAuthenticated200Response> users_get_by_username(username)

Get a user

Provides publicly available information about someone with a GitHub account.  The `email` key in the following response is the publicly visible email address from your GitHub [profile page](https://github.com/settings/profile). When setting up your profile, you can select a primary email address to be “public” which provides an email entry for this endpoint. If you do not set a public email address for `email`, then it will have a value of `null`. You only see publicly visible email addresses when authenticated with GitHub. For more information, see [Authentication](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#authentication).  The Emails API enables you to list all of your email addresses, and toggle a primary email to be visible publicly. For more information, see \"[Emails API](https://docs.github.com/rest/users/emails)\".

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Get a user
  result = api_instance.users_get_by_username(username)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_by_username: #{e}"
end
```

#### Using the users_get_by_username_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<UsersGetAuthenticated200Response>, Integer, Hash)> users_get_by_username_with_http_info(username)

```ruby
begin
  # Get a user
  data, status_code, headers = api_instance.users_get_by_username_with_http_info(username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <UsersGetAuthenticated200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_by_username_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

[**UsersGetAuthenticated200Response**](UsersGetAuthenticated200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_get_context_for_user

> <Hovercard> users_get_context_for_user(username, opts)

Get contextual information for a user

Provides hovercard information. You can find out more about someone in relation to their pull requests, issues, repositories, and organizations.    The `subject_type` and `subject_id` parameters provide context for the person's hovercard, which returns more information than without the parameters. For example, if you wanted to find out more about `octocat` who owns the `Spoon-Knife` repository, you would use a `subject_type` value of `repository` and a `subject_id` value of `1300192` (the ID of the `Spoon-Knife` repository).  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  subject_type: 'organization', # String | Identifies which additional information you'd like to receive about the person's hovercard. Can be `organization`, `repository`, `issue`, `pull_request`. **Required** when using `subject_id`.
  subject_id: 'subject_id_example' # String | Uses the ID for the `subject_type` you specified. **Required** when using `subject_type`.
}

begin
  # Get contextual information for a user
  result = api_instance.users_get_context_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_context_for_user: #{e}"
end
```

#### Using the users_get_context_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Hovercard>, Integer, Hash)> users_get_context_for_user_with_http_info(username, opts)

```ruby
begin
  # Get contextual information for a user
  data, status_code, headers = api_instance.users_get_context_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Hovercard>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_context_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **subject_type** | **String** | Identifies which additional information you&#39;d like to receive about the person&#39;s hovercard. Can be &#x60;organization&#x60;, &#x60;repository&#x60;, &#x60;issue&#x60;, &#x60;pull_request&#x60;. **Required** when using &#x60;subject_id&#x60;. | [optional] |
| **subject_id** | **String** | Uses the ID for the &#x60;subject_type&#x60; you specified. **Required** when using &#x60;subject_type&#x60;. | [optional] |

### Return type

[**Hovercard**](Hovercard.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_get_gpg_key_for_authenticated_user

> <GpgKey> users_get_gpg_key_for_authenticated_user(gpg_key_id)

Get a GPG key for the authenticated user

View extended details for a single GPG key.  OAuth app tokens and personal access tokens (classic) need the `read:gpg_key` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
gpg_key_id = 56 # Integer | The unique identifier of the GPG key.

begin
  # Get a GPG key for the authenticated user
  result = api_instance.users_get_gpg_key_for_authenticated_user(gpg_key_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_gpg_key_for_authenticated_user: #{e}"
end
```

#### Using the users_get_gpg_key_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GpgKey>, Integer, Hash)> users_get_gpg_key_for_authenticated_user_with_http_info(gpg_key_id)

```ruby
begin
  # Get a GPG key for the authenticated user
  data, status_code, headers = api_instance.users_get_gpg_key_for_authenticated_user_with_http_info(gpg_key_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GpgKey>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_gpg_key_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gpg_key_id** | **Integer** | The unique identifier of the GPG key. |  |

### Return type

[**GpgKey**](GpgKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_get_public_ssh_key_for_authenticated_user

> <Key> users_get_public_ssh_key_for_authenticated_user(key_id)

Get a public SSH key for the authenticated user

View extended details for a single public SSH key.  OAuth app tokens and personal access tokens (classic) need the `read:public_key` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
key_id = 56 # Integer | The unique identifier of the key.

begin
  # Get a public SSH key for the authenticated user
  result = api_instance.users_get_public_ssh_key_for_authenticated_user(key_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_public_ssh_key_for_authenticated_user: #{e}"
end
```

#### Using the users_get_public_ssh_key_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Key>, Integer, Hash)> users_get_public_ssh_key_for_authenticated_user_with_http_info(key_id)

```ruby
begin
  # Get a public SSH key for the authenticated user
  data, status_code, headers = api_instance.users_get_public_ssh_key_for_authenticated_user_with_http_info(key_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Key>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_public_ssh_key_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **key_id** | **Integer** | The unique identifier of the key. |  |

### Return type

[**Key**](Key.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_get_ssh_signing_key_for_authenticated_user

> <SshSigningKey> users_get_ssh_signing_key_for_authenticated_user(ssh_signing_key_id)

Get an SSH signing key for the authenticated user

Gets extended details for an SSH signing key.  OAuth app tokens and personal access tokens (classic) need the `read:ssh_signing_key` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
ssh_signing_key_id = 56 # Integer | The unique identifier of the SSH signing key.

begin
  # Get an SSH signing key for the authenticated user
  result = api_instance.users_get_ssh_signing_key_for_authenticated_user(ssh_signing_key_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_ssh_signing_key_for_authenticated_user: #{e}"
end
```

#### Using the users_get_ssh_signing_key_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SshSigningKey>, Integer, Hash)> users_get_ssh_signing_key_for_authenticated_user_with_http_info(ssh_signing_key_id)

```ruby
begin
  # Get an SSH signing key for the authenticated user
  data, status_code, headers = api_instance.users_get_ssh_signing_key_for_authenticated_user_with_http_info(ssh_signing_key_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SshSigningKey>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_get_ssh_signing_key_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ssh_signing_key_id** | **Integer** | The unique identifier of the SSH signing key. |  |

### Return type

[**SshSigningKey**](SshSigningKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list

> <Array<SimpleUser>> users_list(opts)

List users

Lists all users, in the order that they signed up on GitHub. This list includes personal user accounts and organization accounts.  Note: Pagination is powered exclusively by the `since` parameter. Use the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers) to get the URL for the next page of users.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  since: 56, # Integer | A user ID. Only return users with an ID greater than this ID.
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List users
  result = api_instance.users_list(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list: #{e}"
end
```

#### Using the users_list_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> users_list_with_http_info(opts)

```ruby
begin
  # List users
  data, status_code, headers = api_instance.users_list_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **since** | **Integer** | A user ID. Only return users with an ID greater than this ID. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_attestations

> <UsersListAttestations200Response> users_list_attestations(username, subject_digest, opts)

List attestations

List a collection of artifact attestations with a given subject digest that are associated with repositories owned by a user.  The collection of attestations returned by this endpoint is filtered according to the authenticated user's permissions; if the authenticated user cannot read a repository, the attestations associated with that repository will not be included in the response. In addition, when using a fine-grained access token the `attestations:read` permission is required.  **Please note:** in order to offer meaningful security benefits, an attestation's signature and timestamps **must** be cryptographically verified, and the identity of the attestation signer **must** be validated. Attestations can be verified using the [GitHub CLI `attestation verify` command](https://cli.github.com/manual/gh_attestation_verify). For more information, see [our guide on how to use artifact attestations to establish a build's provenance](https://docs.github.com/actions/security-guides/using-artifact-attestations-to-establish-provenance-for-builds).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.
subject_digest = 'subject_digest_example' # String | Subject Digest
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  after: 'after_example' # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List attestations
  result = api_instance.users_list_attestations(username, subject_digest, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_attestations: #{e}"
end
```

#### Using the users_list_attestations_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<UsersListAttestations200Response>, Integer, Hash)> users_list_attestations_with_http_info(username, subject_digest, opts)

```ruby
begin
  # List attestations
  data, status_code, headers = api_instance.users_list_attestations_with_http_info(username, subject_digest, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <UsersListAttestations200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_attestations_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **subject_digest** | **String** | Subject Digest |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |

### Return type

[**UsersListAttestations200Response**](UsersListAttestations200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_blocked_by_authenticated_user

> <Array<SimpleUser>> users_list_blocked_by_authenticated_user(opts)

List users blocked by the authenticated user

List the users you've blocked on your personal account.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List users blocked by the authenticated user
  result = api_instance.users_list_blocked_by_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_blocked_by_authenticated_user: #{e}"
end
```

#### Using the users_list_blocked_by_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> users_list_blocked_by_authenticated_user_with_http_info(opts)

```ruby
begin
  # List users blocked by the authenticated user
  data, status_code, headers = api_instance.users_list_blocked_by_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_blocked_by_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_emails_for_authenticated_user

> <Array<Email>> users_list_emails_for_authenticated_user(opts)

List email addresses for the authenticated user

Lists all of your email addresses, and specifies which one is visible to the public.  OAuth app tokens and personal access tokens (classic) need the `user:email` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List email addresses for the authenticated user
  result = api_instance.users_list_emails_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_emails_for_authenticated_user: #{e}"
end
```

#### Using the users_list_emails_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Email>>, Integer, Hash)> users_list_emails_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List email addresses for the authenticated user
  data, status_code, headers = api_instance.users_list_emails_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Email>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_emails_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Email&gt;**](Email.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_followed_by_authenticated_user

> <Array<SimpleUser>> users_list_followed_by_authenticated_user(opts)

List the people the authenticated user follows

Lists the people who the authenticated user follows.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List the people the authenticated user follows
  result = api_instance.users_list_followed_by_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_followed_by_authenticated_user: #{e}"
end
```

#### Using the users_list_followed_by_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> users_list_followed_by_authenticated_user_with_http_info(opts)

```ruby
begin
  # List the people the authenticated user follows
  data, status_code, headers = api_instance.users_list_followed_by_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_followed_by_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_followers_for_authenticated_user

> <Array<SimpleUser>> users_list_followers_for_authenticated_user(opts)

List followers of the authenticated user

Lists the people following the authenticated user.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List followers of the authenticated user
  result = api_instance.users_list_followers_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_followers_for_authenticated_user: #{e}"
end
```

#### Using the users_list_followers_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> users_list_followers_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List followers of the authenticated user
  data, status_code, headers = api_instance.users_list_followers_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_followers_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_followers_for_user

> <Array<SimpleUser>> users_list_followers_for_user(username, opts)

List followers of a user

Lists the people following the specified user.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List followers of a user
  result = api_instance.users_list_followers_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_followers_for_user: #{e}"
end
```

#### Using the users_list_followers_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> users_list_followers_for_user_with_http_info(username, opts)

```ruby
begin
  # List followers of a user
  data, status_code, headers = api_instance.users_list_followers_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_followers_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_following_for_user

> <Array<SimpleUser>> users_list_following_for_user(username, opts)

List the people a user follows

Lists the people who the specified user follows.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List the people a user follows
  result = api_instance.users_list_following_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_following_for_user: #{e}"
end
```

#### Using the users_list_following_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SimpleUser>>, Integer, Hash)> users_list_following_for_user_with_http_info(username, opts)

```ruby
begin
  # List the people a user follows
  data, status_code, headers = api_instance.users_list_following_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SimpleUser>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_following_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SimpleUser&gt;**](SimpleUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_gpg_keys_for_authenticated_user

> <Array<GpgKey>> users_list_gpg_keys_for_authenticated_user(opts)

List GPG keys for the authenticated user

Lists the current user's GPG keys.  OAuth app tokens and personal access tokens (classic) need the `read:gpg_key` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List GPG keys for the authenticated user
  result = api_instance.users_list_gpg_keys_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_gpg_keys_for_authenticated_user: #{e}"
end
```

#### Using the users_list_gpg_keys_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<GpgKey>>, Integer, Hash)> users_list_gpg_keys_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List GPG keys for the authenticated user
  data, status_code, headers = api_instance.users_list_gpg_keys_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<GpgKey>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_gpg_keys_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;GpgKey&gt;**](GpgKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_gpg_keys_for_user

> <Array<GpgKey>> users_list_gpg_keys_for_user(username, opts)

List GPG keys for a user

Lists the GPG keys for a user. This information is accessible by anyone.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List GPG keys for a user
  result = api_instance.users_list_gpg_keys_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_gpg_keys_for_user: #{e}"
end
```

#### Using the users_list_gpg_keys_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<GpgKey>>, Integer, Hash)> users_list_gpg_keys_for_user_with_http_info(username, opts)

```ruby
begin
  # List GPG keys for a user
  data, status_code, headers = api_instance.users_list_gpg_keys_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<GpgKey>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_gpg_keys_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;GpgKey&gt;**](GpgKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_public_emails_for_authenticated_user

> <Array<Email>> users_list_public_emails_for_authenticated_user(opts)

List public email addresses for the authenticated user

Lists your publicly visible email address, which you can set with the [Set primary email visibility for the authenticated user](https://docs.github.com/rest/users/emails#set-primary-email-visibility-for-the-authenticated-user) endpoint.  OAuth app tokens and personal access tokens (classic) need the `user:email` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List public email addresses for the authenticated user
  result = api_instance.users_list_public_emails_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_public_emails_for_authenticated_user: #{e}"
end
```

#### Using the users_list_public_emails_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Email>>, Integer, Hash)> users_list_public_emails_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List public email addresses for the authenticated user
  data, status_code, headers = api_instance.users_list_public_emails_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Email>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_public_emails_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Email&gt;**](Email.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_public_keys_for_user

> <Array<KeySimple>> users_list_public_keys_for_user(username, opts)

List public keys for a user

Lists the _verified_ public SSH keys for a user. This is accessible by anyone.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List public keys for a user
  result = api_instance.users_list_public_keys_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_public_keys_for_user: #{e}"
end
```

#### Using the users_list_public_keys_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<KeySimple>>, Integer, Hash)> users_list_public_keys_for_user_with_http_info(username, opts)

```ruby
begin
  # List public keys for a user
  data, status_code, headers = api_instance.users_list_public_keys_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<KeySimple>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_public_keys_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;KeySimple&gt;**](KeySimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_public_ssh_keys_for_authenticated_user

> <Array<Key>> users_list_public_ssh_keys_for_authenticated_user(opts)

List public SSH keys for the authenticated user

Lists the public SSH keys for the authenticated user's GitHub account.  OAuth app tokens and personal access tokens (classic) need the `read:public_key` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List public SSH keys for the authenticated user
  result = api_instance.users_list_public_ssh_keys_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_public_ssh_keys_for_authenticated_user: #{e}"
end
```

#### Using the users_list_public_ssh_keys_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Key>>, Integer, Hash)> users_list_public_ssh_keys_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List public SSH keys for the authenticated user
  data, status_code, headers = api_instance.users_list_public_ssh_keys_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Key>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_public_ssh_keys_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;Key&gt;**](Key.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_social_accounts_for_authenticated_user

> <Array<SocialAccount>> users_list_social_accounts_for_authenticated_user(opts)

List social accounts for the authenticated user

Lists all of your social accounts.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List social accounts for the authenticated user
  result = api_instance.users_list_social_accounts_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_social_accounts_for_authenticated_user: #{e}"
end
```

#### Using the users_list_social_accounts_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SocialAccount>>, Integer, Hash)> users_list_social_accounts_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List social accounts for the authenticated user
  data, status_code, headers = api_instance.users_list_social_accounts_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SocialAccount>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_social_accounts_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SocialAccount&gt;**](SocialAccount.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_social_accounts_for_user

> <Array<SocialAccount>> users_list_social_accounts_for_user(username, opts)

List social accounts for a user

Lists social media accounts for a user. This endpoint is accessible by anyone.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List social accounts for a user
  result = api_instance.users_list_social_accounts_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_social_accounts_for_user: #{e}"
end
```

#### Using the users_list_social_accounts_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SocialAccount>>, Integer, Hash)> users_list_social_accounts_for_user_with_http_info(username, opts)

```ruby
begin
  # List social accounts for a user
  data, status_code, headers = api_instance.users_list_social_accounts_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SocialAccount>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_social_accounts_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SocialAccount&gt;**](SocialAccount.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_ssh_signing_keys_for_authenticated_user

> <Array<SshSigningKey>> users_list_ssh_signing_keys_for_authenticated_user(opts)

List SSH signing keys for the authenticated user

Lists the SSH signing keys for the authenticated user's GitHub account.  OAuth app tokens and personal access tokens (classic) need the `read:ssh_signing_key` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List SSH signing keys for the authenticated user
  result = api_instance.users_list_ssh_signing_keys_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_ssh_signing_keys_for_authenticated_user: #{e}"
end
```

#### Using the users_list_ssh_signing_keys_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SshSigningKey>>, Integer, Hash)> users_list_ssh_signing_keys_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List SSH signing keys for the authenticated user
  data, status_code, headers = api_instance.users_list_ssh_signing_keys_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SshSigningKey>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_ssh_signing_keys_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SshSigningKey&gt;**](SshSigningKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_list_ssh_signing_keys_for_user

> <Array<SshSigningKey>> users_list_ssh_signing_keys_for_user(username, opts)

List SSH signing keys for a user

Lists the SSH signing keys for a user. This operation is accessible by anyone.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List SSH signing keys for a user
  result = api_instance.users_list_ssh_signing_keys_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_ssh_signing_keys_for_user: #{e}"
end
```

#### Using the users_list_ssh_signing_keys_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SshSigningKey>>, Integer, Hash)> users_list_ssh_signing_keys_for_user_with_http_info(username, opts)

```ruby
begin
  # List SSH signing keys for a user
  data, status_code, headers = api_instance.users_list_ssh_signing_keys_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SshSigningKey>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_list_ssh_signing_keys_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;SshSigningKey&gt;**](SshSigningKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_set_primary_email_visibility_for_authenticated_user

> <Array<Email>> users_set_primary_email_visibility_for_authenticated_user(users_set_primary_email_visibility_for_authenticated_user_request)

Set primary email visibility for the authenticated user

Sets the visibility for your primary email addresses.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
users_set_primary_email_visibility_for_authenticated_user_request = OpenapiClient::UsersSetPrimaryEmailVisibilityForAuthenticatedUserRequest.new({visibility: 'public'}) # UsersSetPrimaryEmailVisibilityForAuthenticatedUserRequest | 

begin
  # Set primary email visibility for the authenticated user
  result = api_instance.users_set_primary_email_visibility_for_authenticated_user(users_set_primary_email_visibility_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_set_primary_email_visibility_for_authenticated_user: #{e}"
end
```

#### Using the users_set_primary_email_visibility_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Email>>, Integer, Hash)> users_set_primary_email_visibility_for_authenticated_user_with_http_info(users_set_primary_email_visibility_for_authenticated_user_request)

```ruby
begin
  # Set primary email visibility for the authenticated user
  data, status_code, headers = api_instance.users_set_primary_email_visibility_for_authenticated_user_with_http_info(users_set_primary_email_visibility_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Email>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_set_primary_email_visibility_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users_set_primary_email_visibility_for_authenticated_user_request** | [**UsersSetPrimaryEmailVisibilityForAuthenticatedUserRequest**](UsersSetPrimaryEmailVisibilityForAuthenticatedUserRequest.md) |  |  |

### Return type

[**Array&lt;Email&gt;**](Email.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## users_unblock

> users_unblock(username)

Unblock a user

Unblocks the given user and returns a 204.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Unblock a user
  api_instance.users_unblock(username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_unblock: #{e}"
end
```

#### Using the users_unblock_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> users_unblock_with_http_info(username)

```ruby
begin
  # Unblock a user
  data, status_code, headers = api_instance.users_unblock_with_http_info(username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_unblock_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_unfollow

> users_unfollow(username)

Unfollow a user

OAuth app tokens and personal access tokens (classic) need the `user:follow` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Unfollow a user
  api_instance.users_unfollow(username)
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_unfollow: #{e}"
end
```

#### Using the users_unfollow_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> users_unfollow_with_http_info(username)

```ruby
begin
  # Unfollow a user
  data, status_code, headers = api_instance.users_unfollow_with_http_info(username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_unfollow_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## users_update_authenticated

> <PrivateUser> users_update_authenticated(opts)

Update the authenticated user

**Note:** If your email is set to private and you send an `email` parameter as part of this request to update your profile, your privacy settings are still enforced: the email address will not be displayed on your public profile or via the API.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::UsersApi.new
opts = {
  users_update_authenticated_request: OpenapiClient::UsersUpdateAuthenticatedRequest.new # UsersUpdateAuthenticatedRequest | 
}

begin
  # Update the authenticated user
  result = api_instance.users_update_authenticated(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_update_authenticated: #{e}"
end
```

#### Using the users_update_authenticated_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrivateUser>, Integer, Hash)> users_update_authenticated_with_http_info(opts)

```ruby
begin
  # Update the authenticated user
  data, status_code, headers = api_instance.users_update_authenticated_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrivateUser>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UsersApi->users_update_authenticated_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users_update_authenticated_request** | [**UsersUpdateAuthenticatedRequest**](UsersUpdateAuthenticatedRequest.md) |  | [optional] |

### Return type

[**PrivateUser**](PrivateUser.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

