# OpenapiClient::CodespacesApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**codespaces_add_repository_for_secret_for_authenticated_user**](CodespacesApi.md#codespaces_add_repository_for_secret_for_authenticated_user) | **PUT** /user/codespaces/secrets/{secret_name}/repositories/{repository_id} | Add a selected repository to a user secret |
| [**codespaces_add_selected_repo_to_org_secret**](CodespacesApi.md#codespaces_add_selected_repo_to_org_secret) | **PUT** /orgs/{org}/codespaces/secrets/{secret_name}/repositories/{repository_id} | Add selected repository to an organization secret |
| [**codespaces_check_permissions_for_devcontainer**](CodespacesApi.md#codespaces_check_permissions_for_devcontainer) | **GET** /repos/{owner}/{repo}/codespaces/permissions_check | Check if permissions defined by a devcontainer have been accepted by the authenticated user |
| [**codespaces_codespace_machines_for_authenticated_user**](CodespacesApi.md#codespaces_codespace_machines_for_authenticated_user) | **GET** /user/codespaces/{codespace_name}/machines | List machine types for a codespace |
| [**codespaces_create_for_authenticated_user**](CodespacesApi.md#codespaces_create_for_authenticated_user) | **POST** /user/codespaces | Create a codespace for the authenticated user |
| [**codespaces_create_or_update_org_secret**](CodespacesApi.md#codespaces_create_or_update_org_secret) | **PUT** /orgs/{org}/codespaces/secrets/{secret_name} | Create or update an organization secret |
| [**codespaces_create_or_update_repo_secret**](CodespacesApi.md#codespaces_create_or_update_repo_secret) | **PUT** /repos/{owner}/{repo}/codespaces/secrets/{secret_name} | Create or update a repository secret |
| [**codespaces_create_or_update_secret_for_authenticated_user**](CodespacesApi.md#codespaces_create_or_update_secret_for_authenticated_user) | **PUT** /user/codespaces/secrets/{secret_name} | Create or update a secret for the authenticated user |
| [**codespaces_create_with_pr_for_authenticated_user**](CodespacesApi.md#codespaces_create_with_pr_for_authenticated_user) | **POST** /repos/{owner}/{repo}/pulls/{pull_number}/codespaces | Create a codespace from a pull request |
| [**codespaces_create_with_repo_for_authenticated_user**](CodespacesApi.md#codespaces_create_with_repo_for_authenticated_user) | **POST** /repos/{owner}/{repo}/codespaces | Create a codespace in a repository |
| [**codespaces_delete_codespaces_access_users**](CodespacesApi.md#codespaces_delete_codespaces_access_users) | **DELETE** /orgs/{org}/codespaces/access/selected_users | Remove users from Codespaces access for an organization |
| [**codespaces_delete_for_authenticated_user**](CodespacesApi.md#codespaces_delete_for_authenticated_user) | **DELETE** /user/codespaces/{codespace_name} | Delete a codespace for the authenticated user |
| [**codespaces_delete_from_organization**](CodespacesApi.md#codespaces_delete_from_organization) | **DELETE** /orgs/{org}/members/{username}/codespaces/{codespace_name} | Delete a codespace from the organization |
| [**codespaces_delete_org_secret**](CodespacesApi.md#codespaces_delete_org_secret) | **DELETE** /orgs/{org}/codespaces/secrets/{secret_name} | Delete an organization secret |
| [**codespaces_delete_repo_secret**](CodespacesApi.md#codespaces_delete_repo_secret) | **DELETE** /repos/{owner}/{repo}/codespaces/secrets/{secret_name} | Delete a repository secret |
| [**codespaces_delete_secret_for_authenticated_user**](CodespacesApi.md#codespaces_delete_secret_for_authenticated_user) | **DELETE** /user/codespaces/secrets/{secret_name} | Delete a secret for the authenticated user |
| [**codespaces_export_for_authenticated_user**](CodespacesApi.md#codespaces_export_for_authenticated_user) | **POST** /user/codespaces/{codespace_name}/exports | Export a codespace for the authenticated user |
| [**codespaces_get_codespaces_for_user_in_org**](CodespacesApi.md#codespaces_get_codespaces_for_user_in_org) | **GET** /orgs/{org}/members/{username}/codespaces | List codespaces for a user in organization |
| [**codespaces_get_export_details_for_authenticated_user**](CodespacesApi.md#codespaces_get_export_details_for_authenticated_user) | **GET** /user/codespaces/{codespace_name}/exports/{export_id} | Get details about a codespace export |
| [**codespaces_get_for_authenticated_user**](CodespacesApi.md#codespaces_get_for_authenticated_user) | **GET** /user/codespaces/{codespace_name} | Get a codespace for the authenticated user |
| [**codespaces_get_org_public_key**](CodespacesApi.md#codespaces_get_org_public_key) | **GET** /orgs/{org}/codespaces/secrets/public-key | Get an organization public key |
| [**codespaces_get_org_secret**](CodespacesApi.md#codespaces_get_org_secret) | **GET** /orgs/{org}/codespaces/secrets/{secret_name} | Get an organization secret |
| [**codespaces_get_public_key_for_authenticated_user**](CodespacesApi.md#codespaces_get_public_key_for_authenticated_user) | **GET** /user/codespaces/secrets/public-key | Get public key for the authenticated user |
| [**codespaces_get_repo_public_key**](CodespacesApi.md#codespaces_get_repo_public_key) | **GET** /repos/{owner}/{repo}/codespaces/secrets/public-key | Get a repository public key |
| [**codespaces_get_repo_secret**](CodespacesApi.md#codespaces_get_repo_secret) | **GET** /repos/{owner}/{repo}/codespaces/secrets/{secret_name} | Get a repository secret |
| [**codespaces_get_secret_for_authenticated_user**](CodespacesApi.md#codespaces_get_secret_for_authenticated_user) | **GET** /user/codespaces/secrets/{secret_name} | Get a secret for the authenticated user |
| [**codespaces_list_devcontainers_in_repository_for_authenticated_user**](CodespacesApi.md#codespaces_list_devcontainers_in_repository_for_authenticated_user) | **GET** /repos/{owner}/{repo}/codespaces/devcontainers | List devcontainer configurations in a repository for the authenticated user |
| [**codespaces_list_for_authenticated_user**](CodespacesApi.md#codespaces_list_for_authenticated_user) | **GET** /user/codespaces | List codespaces for the authenticated user |
| [**codespaces_list_in_organization**](CodespacesApi.md#codespaces_list_in_organization) | **GET** /orgs/{org}/codespaces | List codespaces for the organization |
| [**codespaces_list_in_repository_for_authenticated_user**](CodespacesApi.md#codespaces_list_in_repository_for_authenticated_user) | **GET** /repos/{owner}/{repo}/codespaces | List codespaces in a repository for the authenticated user |
| [**codespaces_list_org_secrets**](CodespacesApi.md#codespaces_list_org_secrets) | **GET** /orgs/{org}/codespaces/secrets | List organization secrets |
| [**codespaces_list_repo_secrets**](CodespacesApi.md#codespaces_list_repo_secrets) | **GET** /repos/{owner}/{repo}/codespaces/secrets | List repository secrets |
| [**codespaces_list_repositories_for_secret_for_authenticated_user**](CodespacesApi.md#codespaces_list_repositories_for_secret_for_authenticated_user) | **GET** /user/codespaces/secrets/{secret_name}/repositories | List selected repositories for a user secret |
| [**codespaces_list_secrets_for_authenticated_user**](CodespacesApi.md#codespaces_list_secrets_for_authenticated_user) | **GET** /user/codespaces/secrets | List secrets for the authenticated user |
| [**codespaces_list_selected_repos_for_org_secret**](CodespacesApi.md#codespaces_list_selected_repos_for_org_secret) | **GET** /orgs/{org}/codespaces/secrets/{secret_name}/repositories | List selected repositories for an organization secret |
| [**codespaces_pre_flight_with_repo_for_authenticated_user**](CodespacesApi.md#codespaces_pre_flight_with_repo_for_authenticated_user) | **GET** /repos/{owner}/{repo}/codespaces/new | Get default attributes for a codespace |
| [**codespaces_publish_for_authenticated_user**](CodespacesApi.md#codespaces_publish_for_authenticated_user) | **POST** /user/codespaces/{codespace_name}/publish | Create a repository from an unpublished codespace |
| [**codespaces_remove_repository_for_secret_for_authenticated_user**](CodespacesApi.md#codespaces_remove_repository_for_secret_for_authenticated_user) | **DELETE** /user/codespaces/secrets/{secret_name}/repositories/{repository_id} | Remove a selected repository from a user secret |
| [**codespaces_remove_selected_repo_from_org_secret**](CodespacesApi.md#codespaces_remove_selected_repo_from_org_secret) | **DELETE** /orgs/{org}/codespaces/secrets/{secret_name}/repositories/{repository_id} | Remove selected repository from an organization secret |
| [**codespaces_repo_machines_for_authenticated_user**](CodespacesApi.md#codespaces_repo_machines_for_authenticated_user) | **GET** /repos/{owner}/{repo}/codespaces/machines | List available machine types for a repository |
| [**codespaces_set_codespaces_access**](CodespacesApi.md#codespaces_set_codespaces_access) | **PUT** /orgs/{org}/codespaces/access | Manage access control for organization codespaces |
| [**codespaces_set_codespaces_access_users**](CodespacesApi.md#codespaces_set_codespaces_access_users) | **POST** /orgs/{org}/codespaces/access/selected_users | Add users to Codespaces access for an organization |
| [**codespaces_set_repositories_for_secret_for_authenticated_user**](CodespacesApi.md#codespaces_set_repositories_for_secret_for_authenticated_user) | **PUT** /user/codespaces/secrets/{secret_name}/repositories | Set selected repositories for a user secret |
| [**codespaces_set_selected_repos_for_org_secret**](CodespacesApi.md#codespaces_set_selected_repos_for_org_secret) | **PUT** /orgs/{org}/codespaces/secrets/{secret_name}/repositories | Set selected repositories for an organization secret |
| [**codespaces_start_for_authenticated_user**](CodespacesApi.md#codespaces_start_for_authenticated_user) | **POST** /user/codespaces/{codespace_name}/start | Start a codespace for the authenticated user |
| [**codespaces_stop_for_authenticated_user**](CodespacesApi.md#codespaces_stop_for_authenticated_user) | **POST** /user/codespaces/{codespace_name}/stop | Stop a codespace for the authenticated user |
| [**codespaces_stop_in_organization**](CodespacesApi.md#codespaces_stop_in_organization) | **POST** /orgs/{org}/members/{username}/codespaces/{codespace_name}/stop | Stop a codespace for an organization user |
| [**codespaces_update_for_authenticated_user**](CodespacesApi.md#codespaces_update_for_authenticated_user) | **PATCH** /user/codespaces/{codespace_name} | Update a codespace for the authenticated user |


## codespaces_add_repository_for_secret_for_authenticated_user

> codespaces_add_repository_for_secret_for_authenticated_user(secret_name, repository_id)

Add a selected repository to a user secret

Adds a repository to the selected repositories for a user's development environment secret.  The authenticated user must have Codespaces access to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `codespace` or `codespace:secrets` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
secret_name = 'secret_name_example' # String | The name of the secret.
repository_id = 56 # Integer | 

begin
  # Add a selected repository to a user secret
  api_instance.codespaces_add_repository_for_secret_for_authenticated_user(secret_name, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_add_repository_for_secret_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_add_repository_for_secret_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> codespaces_add_repository_for_secret_for_authenticated_user_with_http_info(secret_name, repository_id)

```ruby
begin
  # Add a selected repository to a user secret
  data, status_code, headers = api_instance.codespaces_add_repository_for_secret_for_authenticated_user_with_http_info(secret_name, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_add_repository_for_secret_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **secret_name** | **String** | The name of the secret. |  |
| **repository_id** | **Integer** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_add_selected_repo_to_org_secret

> codespaces_add_selected_repo_to_org_secret(org, secret_name, repository_id)

Add selected repository to an organization secret

Adds a repository to an organization development environment secret when the `visibility` for repository access is set to `selected`. The visibility is set when you [Create or update an organization secret](https://docs.github.com/rest/codespaces/organization-secrets#create-or-update-an-organization-secret). OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
repository_id = 56 # Integer | 

begin
  # Add selected repository to an organization secret
  api_instance.codespaces_add_selected_repo_to_org_secret(org, secret_name, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_add_selected_repo_to_org_secret: #{e}"
end
```

#### Using the codespaces_add_selected_repo_to_org_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> codespaces_add_selected_repo_to_org_secret_with_http_info(org, secret_name, repository_id)

```ruby
begin
  # Add selected repository to an organization secret
  data, status_code, headers = api_instance.codespaces_add_selected_repo_to_org_secret_with_http_info(org, secret_name, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_add_selected_repo_to_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **repository_id** | **Integer** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_check_permissions_for_devcontainer

> <CodespacesPermissionsCheckForDevcontainer> codespaces_check_permissions_for_devcontainer(owner, repo, ref, devcontainer_path)

Check if permissions defined by a devcontainer have been accepted by the authenticated user

Checks whether the permissions defined by a given devcontainer configuration have been accepted by the authenticated user.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
ref = 'master' # String | The git reference that points to the location of the devcontainer configuration to use for the permission check. The value of `ref` will typically be a branch name (`heads/BRANCH_NAME`). For more information, see \"[Git References](https://git-scm.com/book/en/v2/Git-Internals-Git-References)\" in the Git documentation.
devcontainer_path = '.devcontainer/example/devcontainer.json' # String | Path to the devcontainer.json configuration to use for the permission check.

begin
  # Check if permissions defined by a devcontainer have been accepted by the authenticated user
  result = api_instance.codespaces_check_permissions_for_devcontainer(owner, repo, ref, devcontainer_path)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_check_permissions_for_devcontainer: #{e}"
end
```

#### Using the codespaces_check_permissions_for_devcontainer_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesPermissionsCheckForDevcontainer>, Integer, Hash)> codespaces_check_permissions_for_devcontainer_with_http_info(owner, repo, ref, devcontainer_path)

```ruby
begin
  # Check if permissions defined by a devcontainer have been accepted by the authenticated user
  data, status_code, headers = api_instance.codespaces_check_permissions_for_devcontainer_with_http_info(owner, repo, ref, devcontainer_path)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesPermissionsCheckForDevcontainer>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_check_permissions_for_devcontainer_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **ref** | **String** | The git reference that points to the location of the devcontainer configuration to use for the permission check. The value of &#x60;ref&#x60; will typically be a branch name (&#x60;heads/BRANCH_NAME&#x60;). For more information, see \&quot;[Git References](https://git-scm.com/book/en/v2/Git-Internals-Git-References)\&quot; in the Git documentation. |  |
| **devcontainer_path** | **String** | Path to the devcontainer.json configuration to use for the permission check. |  |

### Return type

[**CodespacesPermissionsCheckForDevcontainer**](CodespacesPermissionsCheckForDevcontainer.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_codespace_machines_for_authenticated_user

> <CodespacesRepoMachinesForAuthenticatedUser200Response> codespaces_codespace_machines_for_authenticated_user(codespace_name)

List machine types for a codespace

List the machine types a codespace can transition to use.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
codespace_name = 'codespace_name_example' # String | The name of the codespace.

begin
  # List machine types for a codespace
  result = api_instance.codespaces_codespace_machines_for_authenticated_user(codespace_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_codespace_machines_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_codespace_machines_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesRepoMachinesForAuthenticatedUser200Response>, Integer, Hash)> codespaces_codespace_machines_for_authenticated_user_with_http_info(codespace_name)

```ruby
begin
  # List machine types for a codespace
  data, status_code, headers = api_instance.codespaces_codespace_machines_for_authenticated_user_with_http_info(codespace_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesRepoMachinesForAuthenticatedUser200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_codespace_machines_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **codespace_name** | **String** | The name of the codespace. |  |

### Return type

[**CodespacesRepoMachinesForAuthenticatedUser200Response**](CodespacesRepoMachinesForAuthenticatedUser200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_create_for_authenticated_user

> <Codespace> codespaces_create_for_authenticated_user(codespaces_create_for_authenticated_user_request)

Create a codespace for the authenticated user

Creates a new codespace, owned by the authenticated user.  This endpoint requires either a `repository_id` OR a `pull_request` but not both.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
codespaces_create_for_authenticated_user_request = OpenapiClient::CodespacesCreateForAuthenticatedUserRequestOneOf.new({repository_id: 37}) # CodespacesCreateForAuthenticatedUserRequest | 

begin
  # Create a codespace for the authenticated user
  result = api_instance.codespaces_create_for_authenticated_user(codespaces_create_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_create_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_create_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Codespace>, Integer, Hash)> codespaces_create_for_authenticated_user_with_http_info(codespaces_create_for_authenticated_user_request)

```ruby
begin
  # Create a codespace for the authenticated user
  data, status_code, headers = api_instance.codespaces_create_for_authenticated_user_with_http_info(codespaces_create_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Codespace>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_create_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **codespaces_create_for_authenticated_user_request** | [**CodespacesCreateForAuthenticatedUserRequest**](CodespacesCreateForAuthenticatedUserRequest.md) |  |  |

### Return type

[**Codespace**](Codespace.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## codespaces_create_or_update_org_secret

> Object codespaces_create_or_update_org_secret(org, secret_name, codespaces_create_or_update_org_secret_request)

Create or update an organization secret

Creates or updates an organization development environment secret with an encrypted value. Encrypt your secret using [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages). For more information, see \"[Encrypting secrets for the REST API](https://docs.github.com/rest/guides/encrypting-secrets-for-the-rest-api).\"  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
codespaces_create_or_update_org_secret_request = OpenapiClient::CodespacesCreateOrUpdateOrgSecretRequest.new({visibility: 'all'}) # CodespacesCreateOrUpdateOrgSecretRequest | 

begin
  # Create or update an organization secret
  result = api_instance.codespaces_create_or_update_org_secret(org, secret_name, codespaces_create_or_update_org_secret_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_create_or_update_org_secret: #{e}"
end
```

#### Using the codespaces_create_or_update_org_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> codespaces_create_or_update_org_secret_with_http_info(org, secret_name, codespaces_create_or_update_org_secret_request)

```ruby
begin
  # Create or update an organization secret
  data, status_code, headers = api_instance.codespaces_create_or_update_org_secret_with_http_info(org, secret_name, codespaces_create_or_update_org_secret_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_create_or_update_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **codespaces_create_or_update_org_secret_request** | [**CodespacesCreateOrUpdateOrgSecretRequest**](CodespacesCreateOrUpdateOrgSecretRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## codespaces_create_or_update_repo_secret

> Object codespaces_create_or_update_repo_secret(owner, repo, secret_name, codespaces_create_or_update_repo_secret_request)

Create or update a repository secret

Creates or updates a repository development environment secret with an encrypted value. Encrypt your secret using [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages). For more information, see \"[Encrypting secrets for the REST API](https://docs.github.com/rest/guides/encrypting-secrets-for-the-rest-api).\"  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
codespaces_create_or_update_repo_secret_request = OpenapiClient::CodespacesCreateOrUpdateRepoSecretRequest.new # CodespacesCreateOrUpdateRepoSecretRequest | 

begin
  # Create or update a repository secret
  result = api_instance.codespaces_create_or_update_repo_secret(owner, repo, secret_name, codespaces_create_or_update_repo_secret_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_create_or_update_repo_secret: #{e}"
end
```

#### Using the codespaces_create_or_update_repo_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> codespaces_create_or_update_repo_secret_with_http_info(owner, repo, secret_name, codespaces_create_or_update_repo_secret_request)

```ruby
begin
  # Create or update a repository secret
  data, status_code, headers = api_instance.codespaces_create_or_update_repo_secret_with_http_info(owner, repo, secret_name, codespaces_create_or_update_repo_secret_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_create_or_update_repo_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **codespaces_create_or_update_repo_secret_request** | [**CodespacesCreateOrUpdateRepoSecretRequest**](CodespacesCreateOrUpdateRepoSecretRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## codespaces_create_or_update_secret_for_authenticated_user

> Object codespaces_create_or_update_secret_for_authenticated_user(secret_name, codespaces_create_or_update_secret_for_authenticated_user_request)

Create or update a secret for the authenticated user

Creates or updates a development environment secret for a user's codespace with an encrypted value. Encrypt your secret using [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages). For more information, see \"[Encrypting secrets for the REST API](https://docs.github.com/rest/guides/encrypting-secrets-for-the-rest-api).\"  The authenticated user must have Codespaces access to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `codespace` or `codespace:secrets` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
secret_name = 'secret_name_example' # String | The name of the secret.
codespaces_create_or_update_secret_for_authenticated_user_request = OpenapiClient::CodespacesCreateOrUpdateSecretForAuthenticatedUserRequest.new({key_id: 'key_id_example'}) # CodespacesCreateOrUpdateSecretForAuthenticatedUserRequest | 

begin
  # Create or update a secret for the authenticated user
  result = api_instance.codespaces_create_or_update_secret_for_authenticated_user(secret_name, codespaces_create_or_update_secret_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_create_or_update_secret_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_create_or_update_secret_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> codespaces_create_or_update_secret_for_authenticated_user_with_http_info(secret_name, codespaces_create_or_update_secret_for_authenticated_user_request)

```ruby
begin
  # Create or update a secret for the authenticated user
  data, status_code, headers = api_instance.codespaces_create_or_update_secret_for_authenticated_user_with_http_info(secret_name, codespaces_create_or_update_secret_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_create_or_update_secret_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **secret_name** | **String** | The name of the secret. |  |
| **codespaces_create_or_update_secret_for_authenticated_user_request** | [**CodespacesCreateOrUpdateSecretForAuthenticatedUserRequest**](CodespacesCreateOrUpdateSecretForAuthenticatedUserRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## codespaces_create_with_pr_for_authenticated_user

> <Codespace> codespaces_create_with_pr_for_authenticated_user(owner, repo, pull_number, codespaces_create_with_pr_for_authenticated_user_request)

Create a codespace from a pull request

Creates a codespace owned by the authenticated user for the specified pull request.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
pull_number = 56 # Integer | The number that identifies the pull request.
codespaces_create_with_pr_for_authenticated_user_request = OpenapiClient::CodespacesCreateWithPrForAuthenticatedUserRequest.new # CodespacesCreateWithPrForAuthenticatedUserRequest | 

begin
  # Create a codespace from a pull request
  result = api_instance.codespaces_create_with_pr_for_authenticated_user(owner, repo, pull_number, codespaces_create_with_pr_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_create_with_pr_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_create_with_pr_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Codespace>, Integer, Hash)> codespaces_create_with_pr_for_authenticated_user_with_http_info(owner, repo, pull_number, codespaces_create_with_pr_for_authenticated_user_request)

```ruby
begin
  # Create a codespace from a pull request
  data, status_code, headers = api_instance.codespaces_create_with_pr_for_authenticated_user_with_http_info(owner, repo, pull_number, codespaces_create_with_pr_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Codespace>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_create_with_pr_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **pull_number** | **Integer** | The number that identifies the pull request. |  |
| **codespaces_create_with_pr_for_authenticated_user_request** | [**CodespacesCreateWithPrForAuthenticatedUserRequest**](CodespacesCreateWithPrForAuthenticatedUserRequest.md) |  |  |

### Return type

[**Codespace**](Codespace.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## codespaces_create_with_repo_for_authenticated_user

> <Codespace> codespaces_create_with_repo_for_authenticated_user(owner, repo, codespaces_create_with_repo_for_authenticated_user_request)

Create a codespace in a repository

Creates a codespace owned by the authenticated user in the specified repository.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
codespaces_create_with_repo_for_authenticated_user_request = OpenapiClient::CodespacesCreateWithRepoForAuthenticatedUserRequest.new # CodespacesCreateWithRepoForAuthenticatedUserRequest | 

begin
  # Create a codespace in a repository
  result = api_instance.codespaces_create_with_repo_for_authenticated_user(owner, repo, codespaces_create_with_repo_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_create_with_repo_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_create_with_repo_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Codespace>, Integer, Hash)> codespaces_create_with_repo_for_authenticated_user_with_http_info(owner, repo, codespaces_create_with_repo_for_authenticated_user_request)

```ruby
begin
  # Create a codespace in a repository
  data, status_code, headers = api_instance.codespaces_create_with_repo_for_authenticated_user_with_http_info(owner, repo, codespaces_create_with_repo_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Codespace>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_create_with_repo_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **codespaces_create_with_repo_for_authenticated_user_request** | [**CodespacesCreateWithRepoForAuthenticatedUserRequest**](CodespacesCreateWithRepoForAuthenticatedUserRequest.md) |  |  |

### Return type

[**Codespace**](Codespace.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json, application/scim+json


## codespaces_delete_codespaces_access_users

> codespaces_delete_codespaces_access_users(org, codespaces_delete_codespaces_access_users_request)

Remove users from Codespaces access for an organization

Codespaces for the specified users will no longer be billed to the organization.  To use this endpoint, the access settings for the organization must be set to `selected_members`. For information on how to change this setting, see \"[Manage access control for organization codespaces](https://docs.github.com/rest/codespaces/organizations#manage-access-control-for-organization-codespaces).\"  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
codespaces_delete_codespaces_access_users_request = OpenapiClient::CodespacesDeleteCodespacesAccessUsersRequest.new({selected_usernames: ['selected_usernames_example']}) # CodespacesDeleteCodespacesAccessUsersRequest | 

begin
  # Remove users from Codespaces access for an organization
  api_instance.codespaces_delete_codespaces_access_users(org, codespaces_delete_codespaces_access_users_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_delete_codespaces_access_users: #{e}"
end
```

#### Using the codespaces_delete_codespaces_access_users_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> codespaces_delete_codespaces_access_users_with_http_info(org, codespaces_delete_codespaces_access_users_request)

```ruby
begin
  # Remove users from Codespaces access for an organization
  data, status_code, headers = api_instance.codespaces_delete_codespaces_access_users_with_http_info(org, codespaces_delete_codespaces_access_users_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_delete_codespaces_access_users_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **codespaces_delete_codespaces_access_users_request** | [**CodespacesDeleteCodespacesAccessUsersRequest**](CodespacesDeleteCodespacesAccessUsersRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## codespaces_delete_for_authenticated_user

> Object codespaces_delete_for_authenticated_user(codespace_name)

Delete a codespace for the authenticated user

Deletes a user's codespace.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
codespace_name = 'codespace_name_example' # String | The name of the codespace.

begin
  # Delete a codespace for the authenticated user
  result = api_instance.codespaces_delete_for_authenticated_user(codespace_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_delete_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_delete_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> codespaces_delete_for_authenticated_user_with_http_info(codespace_name)

```ruby
begin
  # Delete a codespace for the authenticated user
  data, status_code, headers = api_instance.codespaces_delete_for_authenticated_user_with_http_info(codespace_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_delete_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **codespace_name** | **String** | The name of the codespace. |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_delete_from_organization

> Object codespaces_delete_from_organization(org, username, codespace_name)

Delete a codespace from the organization

Deletes a user's codespace.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.
codespace_name = 'codespace_name_example' # String | The name of the codespace.

begin
  # Delete a codespace from the organization
  result = api_instance.codespaces_delete_from_organization(org, username, codespace_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_delete_from_organization: #{e}"
end
```

#### Using the codespaces_delete_from_organization_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> codespaces_delete_from_organization_with_http_info(org, username, codespace_name)

```ruby
begin
  # Delete a codespace from the organization
  data, status_code, headers = api_instance.codespaces_delete_from_organization_with_http_info(org, username, codespace_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_delete_from_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |
| **codespace_name** | **String** | The name of the codespace. |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_delete_org_secret

> codespaces_delete_org_secret(org, secret_name)

Delete an organization secret

Deletes an organization development environment secret using the secret name.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Delete an organization secret
  api_instance.codespaces_delete_org_secret(org, secret_name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_delete_org_secret: #{e}"
end
```

#### Using the codespaces_delete_org_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> codespaces_delete_org_secret_with_http_info(org, secret_name)

```ruby
begin
  # Delete an organization secret
  data, status_code, headers = api_instance.codespaces_delete_org_secret_with_http_info(org, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_delete_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_delete_repo_secret

> codespaces_delete_repo_secret(owner, repo, secret_name)

Delete a repository secret

Deletes a development environment secret in a repository using the secret name.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Delete a repository secret
  api_instance.codespaces_delete_repo_secret(owner, repo, secret_name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_delete_repo_secret: #{e}"
end
```

#### Using the codespaces_delete_repo_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> codespaces_delete_repo_secret_with_http_info(owner, repo, secret_name)

```ruby
begin
  # Delete a repository secret
  data, status_code, headers = api_instance.codespaces_delete_repo_secret_with_http_info(owner, repo, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_delete_repo_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## codespaces_delete_secret_for_authenticated_user

> codespaces_delete_secret_for_authenticated_user(secret_name)

Delete a secret for the authenticated user

Deletes a development environment secret from a user's codespaces using the secret name. Deleting the secret will remove access from all codespaces that were allowed to access the secret.  The authenticated user must have Codespaces access to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `codespace` or `codespace:secrets` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Delete a secret for the authenticated user
  api_instance.codespaces_delete_secret_for_authenticated_user(secret_name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_delete_secret_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_delete_secret_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> codespaces_delete_secret_for_authenticated_user_with_http_info(secret_name)

```ruby
begin
  # Delete a secret for the authenticated user
  data, status_code, headers = api_instance.codespaces_delete_secret_for_authenticated_user_with_http_info(secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_delete_secret_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## codespaces_export_for_authenticated_user

> <CodespaceExportDetails> codespaces_export_for_authenticated_user(codespace_name)

Export a codespace for the authenticated user

Triggers an export of the specified codespace and returns a URL and ID where the status of the export can be monitored.  If changes cannot be pushed to the codespace's repository, they will be pushed to a new or previously-existing fork instead.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
codespace_name = 'codespace_name_example' # String | The name of the codespace.

begin
  # Export a codespace for the authenticated user
  result = api_instance.codespaces_export_for_authenticated_user(codespace_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_export_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_export_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespaceExportDetails>, Integer, Hash)> codespaces_export_for_authenticated_user_with_http_info(codespace_name)

```ruby
begin
  # Export a codespace for the authenticated user
  data, status_code, headers = api_instance.codespaces_export_for_authenticated_user_with_http_info(codespace_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespaceExportDetails>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_export_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **codespace_name** | **String** | The name of the codespace. |  |

### Return type

[**CodespaceExportDetails**](CodespaceExportDetails.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_get_codespaces_for_user_in_org

> <CodespacesListInOrganization200Response> codespaces_get_codespaces_for_user_in_org(org, username, opts)

List codespaces for a user in organization

Lists the codespaces that a member of an organization has for repositories in that organization.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List codespaces for a user in organization
  result = api_instance.codespaces_get_codespaces_for_user_in_org(org, username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_codespaces_for_user_in_org: #{e}"
end
```

#### Using the codespaces_get_codespaces_for_user_in_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesListInOrganization200Response>, Integer, Hash)> codespaces_get_codespaces_for_user_in_org_with_http_info(org, username, opts)

```ruby
begin
  # List codespaces for a user in organization
  data, status_code, headers = api_instance.codespaces_get_codespaces_for_user_in_org_with_http_info(org, username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesListInOrganization200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_codespaces_for_user_in_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**CodespacesListInOrganization200Response**](CodespacesListInOrganization200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_get_export_details_for_authenticated_user

> <CodespaceExportDetails> codespaces_get_export_details_for_authenticated_user(codespace_name, export_id)

Get details about a codespace export

Gets information about an export of a codespace.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
codespace_name = 'codespace_name_example' # String | The name of the codespace.
export_id = 'export_id_example' # String | The ID of the export operation, or `latest`. Currently only `latest` is currently supported.

begin
  # Get details about a codespace export
  result = api_instance.codespaces_get_export_details_for_authenticated_user(codespace_name, export_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_export_details_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_get_export_details_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespaceExportDetails>, Integer, Hash)> codespaces_get_export_details_for_authenticated_user_with_http_info(codespace_name, export_id)

```ruby
begin
  # Get details about a codespace export
  data, status_code, headers = api_instance.codespaces_get_export_details_for_authenticated_user_with_http_info(codespace_name, export_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespaceExportDetails>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_export_details_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **codespace_name** | **String** | The name of the codespace. |  |
| **export_id** | **String** | The ID of the export operation, or &#x60;latest&#x60;. Currently only &#x60;latest&#x60; is currently supported. |  |

### Return type

[**CodespaceExportDetails**](CodespaceExportDetails.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_get_for_authenticated_user

> <Codespace> codespaces_get_for_authenticated_user(codespace_name)

Get a codespace for the authenticated user

Gets information about a user's codespace.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
codespace_name = 'codespace_name_example' # String | The name of the codespace.

begin
  # Get a codespace for the authenticated user
  result = api_instance.codespaces_get_for_authenticated_user(codespace_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_get_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Codespace>, Integer, Hash)> codespaces_get_for_authenticated_user_with_http_info(codespace_name)

```ruby
begin
  # Get a codespace for the authenticated user
  data, status_code, headers = api_instance.codespaces_get_for_authenticated_user_with_http_info(codespace_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Codespace>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **codespace_name** | **String** | The name of the codespace. |  |

### Return type

[**Codespace**](Codespace.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_get_org_public_key

> <CodespacesPublicKey> codespaces_get_org_public_key(org)

Get an organization public key

Gets a public key for an organization, which is required in order to encrypt secrets. You need to encrypt the value of a secret before you can create or update secrets. OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get an organization public key
  result = api_instance.codespaces_get_org_public_key(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_org_public_key: #{e}"
end
```

#### Using the codespaces_get_org_public_key_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesPublicKey>, Integer, Hash)> codespaces_get_org_public_key_with_http_info(org)

```ruby
begin
  # Get an organization public key
  data, status_code, headers = api_instance.codespaces_get_org_public_key_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesPublicKey>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_org_public_key_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**CodespacesPublicKey**](CodespacesPublicKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_get_org_secret

> <CodespacesOrgSecret> codespaces_get_org_secret(org, secret_name)

Get an organization secret

Gets an organization development environment secret without revealing its encrypted value.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Get an organization secret
  result = api_instance.codespaces_get_org_secret(org, secret_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_org_secret: #{e}"
end
```

#### Using the codespaces_get_org_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesOrgSecret>, Integer, Hash)> codespaces_get_org_secret_with_http_info(org, secret_name)

```ruby
begin
  # Get an organization secret
  data, status_code, headers = api_instance.codespaces_get_org_secret_with_http_info(org, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesOrgSecret>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

[**CodespacesOrgSecret**](CodespacesOrgSecret.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_get_public_key_for_authenticated_user

> <CodespacesUserPublicKey> codespaces_get_public_key_for_authenticated_user

Get public key for the authenticated user

Gets your public key, which you need to encrypt secrets. You need to encrypt a secret before you can create or update secrets.  The authenticated user must have Codespaces access to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `codespace` or `codespace:secrets` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new

begin
  # Get public key for the authenticated user
  result = api_instance.codespaces_get_public_key_for_authenticated_user
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_public_key_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_get_public_key_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesUserPublicKey>, Integer, Hash)> codespaces_get_public_key_for_authenticated_user_with_http_info

```ruby
begin
  # Get public key for the authenticated user
  data, status_code, headers = api_instance.codespaces_get_public_key_for_authenticated_user_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesUserPublicKey>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_public_key_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**CodespacesUserPublicKey**](CodespacesUserPublicKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_get_repo_public_key

> <CodespacesPublicKey> codespaces_get_repo_public_key(owner, repo)

Get a repository public key

Gets your public key, which you need to encrypt secrets. You need to encrypt a secret before you can create or update secrets.  Anyone with read access to the repository can use this endpoint.  If the repository is private, OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get a repository public key
  result = api_instance.codespaces_get_repo_public_key(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_repo_public_key: #{e}"
end
```

#### Using the codespaces_get_repo_public_key_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesPublicKey>, Integer, Hash)> codespaces_get_repo_public_key_with_http_info(owner, repo)

```ruby
begin
  # Get a repository public key
  data, status_code, headers = api_instance.codespaces_get_repo_public_key_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesPublicKey>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_repo_public_key_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**CodespacesPublicKey**](CodespacesPublicKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_get_repo_secret

> <RepoCodespacesSecret> codespaces_get_repo_secret(owner, repo, secret_name)

Get a repository secret

Gets a single repository development environment secret without revealing its encrypted value.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Get a repository secret
  result = api_instance.codespaces_get_repo_secret(owner, repo, secret_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_repo_secret: #{e}"
end
```

#### Using the codespaces_get_repo_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<RepoCodespacesSecret>, Integer, Hash)> codespaces_get_repo_secret_with_http_info(owner, repo, secret_name)

```ruby
begin
  # Get a repository secret
  data, status_code, headers = api_instance.codespaces_get_repo_secret_with_http_info(owner, repo, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <RepoCodespacesSecret>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_repo_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

[**RepoCodespacesSecret**](RepoCodespacesSecret.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_get_secret_for_authenticated_user

> <CodespacesSecret> codespaces_get_secret_for_authenticated_user(secret_name)

Get a secret for the authenticated user

Gets a development environment secret available to a user's codespaces without revealing its encrypted value.  The authenticated user must have Codespaces access to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `codespace` or `codespace:secrets` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Get a secret for the authenticated user
  result = api_instance.codespaces_get_secret_for_authenticated_user(secret_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_secret_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_get_secret_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesSecret>, Integer, Hash)> codespaces_get_secret_for_authenticated_user_with_http_info(secret_name)

```ruby
begin
  # Get a secret for the authenticated user
  data, status_code, headers = api_instance.codespaces_get_secret_for_authenticated_user_with_http_info(secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesSecret>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_get_secret_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

[**CodespacesSecret**](CodespacesSecret.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_list_devcontainers_in_repository_for_authenticated_user

> <CodespacesListDevcontainersInRepositoryForAuthenticatedUser200Response> codespaces_list_devcontainers_in_repository_for_authenticated_user(owner, repo, opts)

List devcontainer configurations in a repository for the authenticated user

Lists the devcontainer.json files associated with a specified repository and the authenticated user. These files specify launchpoint configurations for codespaces created within the repository.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List devcontainer configurations in a repository for the authenticated user
  result = api_instance.codespaces_list_devcontainers_in_repository_for_authenticated_user(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_devcontainers_in_repository_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_list_devcontainers_in_repository_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesListDevcontainersInRepositoryForAuthenticatedUser200Response>, Integer, Hash)> codespaces_list_devcontainers_in_repository_for_authenticated_user_with_http_info(owner, repo, opts)

```ruby
begin
  # List devcontainer configurations in a repository for the authenticated user
  data, status_code, headers = api_instance.codespaces_list_devcontainers_in_repository_for_authenticated_user_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesListDevcontainersInRepositoryForAuthenticatedUser200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_devcontainers_in_repository_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**CodespacesListDevcontainersInRepositoryForAuthenticatedUser200Response**](CodespacesListDevcontainersInRepositoryForAuthenticatedUser200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## codespaces_list_for_authenticated_user

> <CodespacesListInOrganization200Response> codespaces_list_for_authenticated_user(opts)

List codespaces for the authenticated user

Lists the authenticated user's codespaces.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  repository_id: 56 # Integer | ID of the Repository to filter on
}

begin
  # List codespaces for the authenticated user
  result = api_instance.codespaces_list_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_list_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesListInOrganization200Response>, Integer, Hash)> codespaces_list_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List codespaces for the authenticated user
  data, status_code, headers = api_instance.codespaces_list_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesListInOrganization200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **repository_id** | **Integer** | ID of the Repository to filter on | [optional] |

### Return type

[**CodespacesListInOrganization200Response**](CodespacesListInOrganization200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_list_in_organization

> <CodespacesListInOrganization200Response> codespaces_list_in_organization(org, opts)

List codespaces for the organization

Lists the codespaces associated to a specified organization.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List codespaces for the organization
  result = api_instance.codespaces_list_in_organization(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_in_organization: #{e}"
end
```

#### Using the codespaces_list_in_organization_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesListInOrganization200Response>, Integer, Hash)> codespaces_list_in_organization_with_http_info(org, opts)

```ruby
begin
  # List codespaces for the organization
  data, status_code, headers = api_instance.codespaces_list_in_organization_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesListInOrganization200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_in_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**CodespacesListInOrganization200Response**](CodespacesListInOrganization200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_list_in_repository_for_authenticated_user

> <CodespacesListInOrganization200Response> codespaces_list_in_repository_for_authenticated_user(owner, repo, opts)

List codespaces in a repository for the authenticated user

Lists the codespaces associated to a specified repository and the authenticated user.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List codespaces in a repository for the authenticated user
  result = api_instance.codespaces_list_in_repository_for_authenticated_user(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_in_repository_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_list_in_repository_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesListInOrganization200Response>, Integer, Hash)> codespaces_list_in_repository_for_authenticated_user_with_http_info(owner, repo, opts)

```ruby
begin
  # List codespaces in a repository for the authenticated user
  data, status_code, headers = api_instance.codespaces_list_in_repository_for_authenticated_user_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesListInOrganization200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_in_repository_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**CodespacesListInOrganization200Response**](CodespacesListInOrganization200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_list_org_secrets

> <CodespacesListOrgSecrets200Response> codespaces_list_org_secrets(org, opts)

List organization secrets

Lists all Codespaces development environment secrets available at the organization-level without revealing their encrypted values.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organization secrets
  result = api_instance.codespaces_list_org_secrets(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_org_secrets: #{e}"
end
```

#### Using the codespaces_list_org_secrets_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesListOrgSecrets200Response>, Integer, Hash)> codespaces_list_org_secrets_with_http_info(org, opts)

```ruby
begin
  # List organization secrets
  data, status_code, headers = api_instance.codespaces_list_org_secrets_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesListOrgSecrets200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_org_secrets_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**CodespacesListOrgSecrets200Response**](CodespacesListOrgSecrets200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_list_repo_secrets

> <CodespacesListRepoSecrets200Response> codespaces_list_repo_secrets(owner, repo, opts)

List repository secrets

Lists all development environment secrets available in a repository without revealing their encrypted values.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repository secrets
  result = api_instance.codespaces_list_repo_secrets(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_repo_secrets: #{e}"
end
```

#### Using the codespaces_list_repo_secrets_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesListRepoSecrets200Response>, Integer, Hash)> codespaces_list_repo_secrets_with_http_info(owner, repo, opts)

```ruby
begin
  # List repository secrets
  data, status_code, headers = api_instance.codespaces_list_repo_secrets_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesListRepoSecrets200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_repo_secrets_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**CodespacesListRepoSecrets200Response**](CodespacesListRepoSecrets200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_list_repositories_for_secret_for_authenticated_user

> <ActionsListSelectedReposForOrgSecret200Response> codespaces_list_repositories_for_secret_for_authenticated_user(secret_name)

List selected repositories for a user secret

List the repositories that have been granted the ability to use a user's development environment secret.  The authenticated user must have Codespaces access to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `codespace` or `codespace:secrets` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # List selected repositories for a user secret
  result = api_instance.codespaces_list_repositories_for_secret_for_authenticated_user(secret_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_repositories_for_secret_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_list_repositories_for_secret_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListSelectedReposForOrgSecret200Response>, Integer, Hash)> codespaces_list_repositories_for_secret_for_authenticated_user_with_http_info(secret_name)

```ruby
begin
  # List selected repositories for a user secret
  data, status_code, headers = api_instance.codespaces_list_repositories_for_secret_for_authenticated_user_with_http_info(secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListSelectedReposForOrgSecret200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_repositories_for_secret_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

[**ActionsListSelectedReposForOrgSecret200Response**](ActionsListSelectedReposForOrgSecret200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_list_secrets_for_authenticated_user

> <CodespacesListSecretsForAuthenticatedUser200Response> codespaces_list_secrets_for_authenticated_user(opts)

List secrets for the authenticated user

Lists all development environment secrets available for a user's codespaces without revealing their encrypted values.  The authenticated user must have Codespaces access to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `codespace` or `codespace:secrets` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List secrets for the authenticated user
  result = api_instance.codespaces_list_secrets_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_secrets_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_list_secrets_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesListSecretsForAuthenticatedUser200Response>, Integer, Hash)> codespaces_list_secrets_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List secrets for the authenticated user
  data, status_code, headers = api_instance.codespaces_list_secrets_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesListSecretsForAuthenticatedUser200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_secrets_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**CodespacesListSecretsForAuthenticatedUser200Response**](CodespacesListSecretsForAuthenticatedUser200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_list_selected_repos_for_org_secret

> <ActionsListSelectedReposForOrgSecret200Response> codespaces_list_selected_repos_for_org_secret(org, secret_name, opts)

List selected repositories for an organization secret

Lists all repositories that have been selected when the `visibility` for repository access to a secret is set to `selected`.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
opts = {
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List selected repositories for an organization secret
  result = api_instance.codespaces_list_selected_repos_for_org_secret(org, secret_name, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_selected_repos_for_org_secret: #{e}"
end
```

#### Using the codespaces_list_selected_repos_for_org_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListSelectedReposForOrgSecret200Response>, Integer, Hash)> codespaces_list_selected_repos_for_org_secret_with_http_info(org, secret_name, opts)

```ruby
begin
  # List selected repositories for an organization secret
  data, status_code, headers = api_instance.codespaces_list_selected_repos_for_org_secret_with_http_info(org, secret_name, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListSelectedReposForOrgSecret200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_list_selected_repos_for_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |

### Return type

[**ActionsListSelectedReposForOrgSecret200Response**](ActionsListSelectedReposForOrgSecret200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_pre_flight_with_repo_for_authenticated_user

> <CodespacesPreFlightWithRepoForAuthenticatedUser200Response> codespaces_pre_flight_with_repo_for_authenticated_user(owner, repo, opts)

Get default attributes for a codespace

Gets the default attributes for codespaces created by the user with the repository.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  ref: 'main', # String | The branch or commit to check for a default devcontainer path. If not specified, the default branch will be checked.
  client_ip: '1.2.3.4' # String | An alternative IP for default location auto-detection, such as when proxying a request.
}

begin
  # Get default attributes for a codespace
  result = api_instance.codespaces_pre_flight_with_repo_for_authenticated_user(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_pre_flight_with_repo_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_pre_flight_with_repo_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesPreFlightWithRepoForAuthenticatedUser200Response>, Integer, Hash)> codespaces_pre_flight_with_repo_for_authenticated_user_with_http_info(owner, repo, opts)

```ruby
begin
  # Get default attributes for a codespace
  data, status_code, headers = api_instance.codespaces_pre_flight_with_repo_for_authenticated_user_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesPreFlightWithRepoForAuthenticatedUser200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_pre_flight_with_repo_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **ref** | **String** | The branch or commit to check for a default devcontainer path. If not specified, the default branch will be checked. | [optional] |
| **client_ip** | **String** | An alternative IP for default location auto-detection, such as when proxying a request. | [optional] |

### Return type

[**CodespacesPreFlightWithRepoForAuthenticatedUser200Response**](CodespacesPreFlightWithRepoForAuthenticatedUser200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_publish_for_authenticated_user

> <CodespaceWithFullRepository> codespaces_publish_for_authenticated_user(codespace_name, codespaces_publish_for_authenticated_user_request)

Create a repository from an unpublished codespace

Publishes an unpublished codespace, creating a new repository and assigning it to the codespace.  The codespace's token is granted write permissions to the repository, allowing the user to push their changes.  This will fail for a codespace that is already published, meaning it has an associated repository.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
codespace_name = 'codespace_name_example' # String | The name of the codespace.
codespaces_publish_for_authenticated_user_request = OpenapiClient::CodespacesPublishForAuthenticatedUserRequest.new # CodespacesPublishForAuthenticatedUserRequest | 

begin
  # Create a repository from an unpublished codespace
  result = api_instance.codespaces_publish_for_authenticated_user(codespace_name, codespaces_publish_for_authenticated_user_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_publish_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_publish_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespaceWithFullRepository>, Integer, Hash)> codespaces_publish_for_authenticated_user_with_http_info(codespace_name, codespaces_publish_for_authenticated_user_request)

```ruby
begin
  # Create a repository from an unpublished codespace
  data, status_code, headers = api_instance.codespaces_publish_for_authenticated_user_with_http_info(codespace_name, codespaces_publish_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespaceWithFullRepository>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_publish_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **codespace_name** | **String** | The name of the codespace. |  |
| **codespaces_publish_for_authenticated_user_request** | [**CodespacesPublishForAuthenticatedUserRequest**](CodespacesPublishForAuthenticatedUserRequest.md) |  |  |

### Return type

[**CodespaceWithFullRepository**](CodespaceWithFullRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## codespaces_remove_repository_for_secret_for_authenticated_user

> codespaces_remove_repository_for_secret_for_authenticated_user(secret_name, repository_id)

Remove a selected repository from a user secret

Removes a repository from the selected repositories for a user's development environment secret.  The authenticated user must have Codespaces access to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `codespace` or `codespace:secrets` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
secret_name = 'secret_name_example' # String | The name of the secret.
repository_id = 56 # Integer | 

begin
  # Remove a selected repository from a user secret
  api_instance.codespaces_remove_repository_for_secret_for_authenticated_user(secret_name, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_remove_repository_for_secret_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_remove_repository_for_secret_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> codespaces_remove_repository_for_secret_for_authenticated_user_with_http_info(secret_name, repository_id)

```ruby
begin
  # Remove a selected repository from a user secret
  data, status_code, headers = api_instance.codespaces_remove_repository_for_secret_for_authenticated_user_with_http_info(secret_name, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_remove_repository_for_secret_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **secret_name** | **String** | The name of the secret. |  |
| **repository_id** | **Integer** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_remove_selected_repo_from_org_secret

> codespaces_remove_selected_repo_from_org_secret(org, secret_name, repository_id)

Remove selected repository from an organization secret

Removes a repository from an organization development environment secret when the `visibility` for repository access is set to `selected`. The visibility is set when you [Create or update an organization secret](https://docs.github.com/rest/codespaces/organization-secrets#create-or-update-an-organization-secret).  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
repository_id = 56 # Integer | 

begin
  # Remove selected repository from an organization secret
  api_instance.codespaces_remove_selected_repo_from_org_secret(org, secret_name, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_remove_selected_repo_from_org_secret: #{e}"
end
```

#### Using the codespaces_remove_selected_repo_from_org_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> codespaces_remove_selected_repo_from_org_secret_with_http_info(org, secret_name, repository_id)

```ruby
begin
  # Remove selected repository from an organization secret
  data, status_code, headers = api_instance.codespaces_remove_selected_repo_from_org_secret_with_http_info(org, secret_name, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_remove_selected_repo_from_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **repository_id** | **Integer** |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_repo_machines_for_authenticated_user

> <CodespacesRepoMachinesForAuthenticatedUser200Response> codespaces_repo_machines_for_authenticated_user(owner, repo, opts)

List available machine types for a repository

List the machine types available for a given repository based on its configuration.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  location: 'WestUs2', # String | The location to check for available machines. Assigned by IP if not provided.
  client_ip: 'client_ip_example', # String | IP for location auto-detection when proxying a request
  ref: 'main' # String | The branch or commit to check for prebuild availability and devcontainer restrictions.
}

begin
  # List available machine types for a repository
  result = api_instance.codespaces_repo_machines_for_authenticated_user(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_repo_machines_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_repo_machines_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodespacesRepoMachinesForAuthenticatedUser200Response>, Integer, Hash)> codespaces_repo_machines_for_authenticated_user_with_http_info(owner, repo, opts)

```ruby
begin
  # List available machine types for a repository
  data, status_code, headers = api_instance.codespaces_repo_machines_for_authenticated_user_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodespacesRepoMachinesForAuthenticatedUser200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_repo_machines_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **location** | **String** | The location to check for available machines. Assigned by IP if not provided. | [optional] |
| **client_ip** | **String** | IP for location auto-detection when proxying a request | [optional] |
| **ref** | **String** | The branch or commit to check for prebuild availability and devcontainer restrictions. | [optional] |

### Return type

[**CodespacesRepoMachinesForAuthenticatedUser200Response**](CodespacesRepoMachinesForAuthenticatedUser200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_set_codespaces_access

> codespaces_set_codespaces_access(org, codespaces_set_codespaces_access_request)

Manage access control for organization codespaces

Sets which users can access codespaces in an organization. This is synonymous with granting or revoking codespaces access permissions for users according to the visibility. OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
codespaces_set_codespaces_access_request = OpenapiClient::CodespacesSetCodespacesAccessRequest.new({visibility: 'disabled'}) # CodespacesSetCodespacesAccessRequest | 

begin
  # Manage access control for organization codespaces
  api_instance.codespaces_set_codespaces_access(org, codespaces_set_codespaces_access_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_set_codespaces_access: #{e}"
end
```

#### Using the codespaces_set_codespaces_access_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> codespaces_set_codespaces_access_with_http_info(org, codespaces_set_codespaces_access_request)

```ruby
begin
  # Manage access control for organization codespaces
  data, status_code, headers = api_instance.codespaces_set_codespaces_access_with_http_info(org, codespaces_set_codespaces_access_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_set_codespaces_access_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **codespaces_set_codespaces_access_request** | [**CodespacesSetCodespacesAccessRequest**](CodespacesSetCodespacesAccessRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## codespaces_set_codespaces_access_users

> codespaces_set_codespaces_access_users(org, codespaces_set_codespaces_access_users_request)

Add users to Codespaces access for an organization

Codespaces for the specified users will be billed to the organization.  To use this endpoint, the access settings for the organization must be set to `selected_members`. For information on how to change this setting, see \"[Manage access control for organization codespaces](https://docs.github.com/rest/codespaces/organizations#manage-access-control-for-organization-codespaces).\"  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
codespaces_set_codespaces_access_users_request = OpenapiClient::CodespacesSetCodespacesAccessUsersRequest.new({selected_usernames: ['selected_usernames_example']}) # CodespacesSetCodespacesAccessUsersRequest | 

begin
  # Add users to Codespaces access for an organization
  api_instance.codespaces_set_codespaces_access_users(org, codespaces_set_codespaces_access_users_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_set_codespaces_access_users: #{e}"
end
```

#### Using the codespaces_set_codespaces_access_users_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> codespaces_set_codespaces_access_users_with_http_info(org, codespaces_set_codespaces_access_users_request)

```ruby
begin
  # Add users to Codespaces access for an organization
  data, status_code, headers = api_instance.codespaces_set_codespaces_access_users_with_http_info(org, codespaces_set_codespaces_access_users_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_set_codespaces_access_users_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **codespaces_set_codespaces_access_users_request** | [**CodespacesSetCodespacesAccessUsersRequest**](CodespacesSetCodespacesAccessUsersRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## codespaces_set_repositories_for_secret_for_authenticated_user

> codespaces_set_repositories_for_secret_for_authenticated_user(secret_name, codespaces_set_repositories_for_secret_for_authenticated_user_request)

Set selected repositories for a user secret

Select the repositories that will use a user's development environment secret.  The authenticated user must have Codespaces access to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `codespace` or `codespace:secrets` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
secret_name = 'secret_name_example' # String | The name of the secret.
codespaces_set_repositories_for_secret_for_authenticated_user_request = OpenapiClient::CodespacesSetRepositoriesForSecretForAuthenticatedUserRequest.new({selected_repository_ids: [37]}) # CodespacesSetRepositoriesForSecretForAuthenticatedUserRequest | 

begin
  # Set selected repositories for a user secret
  api_instance.codespaces_set_repositories_for_secret_for_authenticated_user(secret_name, codespaces_set_repositories_for_secret_for_authenticated_user_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_set_repositories_for_secret_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_set_repositories_for_secret_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> codespaces_set_repositories_for_secret_for_authenticated_user_with_http_info(secret_name, codespaces_set_repositories_for_secret_for_authenticated_user_request)

```ruby
begin
  # Set selected repositories for a user secret
  data, status_code, headers = api_instance.codespaces_set_repositories_for_secret_for_authenticated_user_with_http_info(secret_name, codespaces_set_repositories_for_secret_for_authenticated_user_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_set_repositories_for_secret_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **secret_name** | **String** | The name of the secret. |  |
| **codespaces_set_repositories_for_secret_for_authenticated_user_request** | [**CodespacesSetRepositoriesForSecretForAuthenticatedUserRequest**](CodespacesSetRepositoriesForSecretForAuthenticatedUserRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## codespaces_set_selected_repos_for_org_secret

> codespaces_set_selected_repos_for_org_secret(org, secret_name, codespaces_set_selected_repos_for_org_secret_request)

Set selected repositories for an organization secret

Replaces all repositories for an organization development environment secret when the `visibility` for repository access is set to `selected`. The visibility is set when you [Create or update an organization secret](https://docs.github.com/rest/codespaces/organization-secrets#create-or-update-an-organization-secret).  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
codespaces_set_selected_repos_for_org_secret_request = OpenapiClient::CodespacesSetSelectedReposForOrgSecretRequest.new({selected_repository_ids: [37]}) # CodespacesSetSelectedReposForOrgSecretRequest | 

begin
  # Set selected repositories for an organization secret
  api_instance.codespaces_set_selected_repos_for_org_secret(org, secret_name, codespaces_set_selected_repos_for_org_secret_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_set_selected_repos_for_org_secret: #{e}"
end
```

#### Using the codespaces_set_selected_repos_for_org_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> codespaces_set_selected_repos_for_org_secret_with_http_info(org, secret_name, codespaces_set_selected_repos_for_org_secret_request)

```ruby
begin
  # Set selected repositories for an organization secret
  data, status_code, headers = api_instance.codespaces_set_selected_repos_for_org_secret_with_http_info(org, secret_name, codespaces_set_selected_repos_for_org_secret_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_set_selected_repos_for_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **codespaces_set_selected_repos_for_org_secret_request** | [**CodespacesSetSelectedReposForOrgSecretRequest**](CodespacesSetSelectedReposForOrgSecretRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## codespaces_start_for_authenticated_user

> <Codespace> codespaces_start_for_authenticated_user(codespace_name)

Start a codespace for the authenticated user

Starts a user's codespace.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
codespace_name = 'codespace_name_example' # String | The name of the codespace.

begin
  # Start a codespace for the authenticated user
  result = api_instance.codespaces_start_for_authenticated_user(codespace_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_start_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_start_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Codespace>, Integer, Hash)> codespaces_start_for_authenticated_user_with_http_info(codespace_name)

```ruby
begin
  # Start a codespace for the authenticated user
  data, status_code, headers = api_instance.codespaces_start_for_authenticated_user_with_http_info(codespace_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Codespace>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_start_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **codespace_name** | **String** | The name of the codespace. |  |

### Return type

[**Codespace**](Codespace.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## codespaces_stop_for_authenticated_user

> <Codespace> codespaces_stop_for_authenticated_user(codespace_name)

Stop a codespace for the authenticated user

Stops a user's codespace.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
codespace_name = 'codespace_name_example' # String | The name of the codespace.

begin
  # Stop a codespace for the authenticated user
  result = api_instance.codespaces_stop_for_authenticated_user(codespace_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_stop_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_stop_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Codespace>, Integer, Hash)> codespaces_stop_for_authenticated_user_with_http_info(codespace_name)

```ruby
begin
  # Stop a codespace for the authenticated user
  data, status_code, headers = api_instance.codespaces_stop_for_authenticated_user_with_http_info(codespace_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Codespace>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_stop_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **codespace_name** | **String** | The name of the codespace. |  |

### Return type

[**Codespace**](Codespace.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_stop_in_organization

> <Codespace> codespaces_stop_in_organization(org, username, codespace_name)

Stop a codespace for an organization user

Stops a user's codespace.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
username = 'username_example' # String | The handle for the GitHub user account.
codespace_name = 'codespace_name_example' # String | The name of the codespace.

begin
  # Stop a codespace for an organization user
  result = api_instance.codespaces_stop_in_organization(org, username, codespace_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_stop_in_organization: #{e}"
end
```

#### Using the codespaces_stop_in_organization_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Codespace>, Integer, Hash)> codespaces_stop_in_organization_with_http_info(org, username, codespace_name)

```ruby
begin
  # Stop a codespace for an organization user
  data, status_code, headers = api_instance.codespaces_stop_in_organization_with_http_info(org, username, codespace_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Codespace>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_stop_in_organization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **username** | **String** | The handle for the GitHub user account. |  |
| **codespace_name** | **String** | The name of the codespace. |  |

### Return type

[**Codespace**](Codespace.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codespaces_update_for_authenticated_user

> <Codespace> codespaces_update_for_authenticated_user(codespace_name, opts)

Update a codespace for the authenticated user

Updates a codespace owned by the authenticated user. Currently only the codespace's machine type and recent folders can be modified using this endpoint.  If you specify a new machine type it will be applied the next time your codespace is started.  OAuth app tokens and personal access tokens (classic) need the `codespace` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodespacesApi.new
codespace_name = 'codespace_name_example' # String | The name of the codespace.
opts = {
  codespaces_update_for_authenticated_user_request: OpenapiClient::CodespacesUpdateForAuthenticatedUserRequest.new # CodespacesUpdateForAuthenticatedUserRequest | 
}

begin
  # Update a codespace for the authenticated user
  result = api_instance.codespaces_update_for_authenticated_user(codespace_name, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_update_for_authenticated_user: #{e}"
end
```

#### Using the codespaces_update_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Codespace>, Integer, Hash)> codespaces_update_for_authenticated_user_with_http_info(codespace_name, opts)

```ruby
begin
  # Update a codespace for the authenticated user
  data, status_code, headers = api_instance.codespaces_update_for_authenticated_user_with_http_info(codespace_name, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Codespace>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodespacesApi->codespaces_update_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **codespace_name** | **String** | The name of the codespace. |  |
| **codespaces_update_for_authenticated_user_request** | [**CodespacesUpdateForAuthenticatedUserRequest**](CodespacesUpdateForAuthenticatedUserRequest.md) |  | [optional] |

### Return type

[**Codespace**](Codespace.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

