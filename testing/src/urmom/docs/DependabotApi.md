# OpenapiClient::DependabotApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**dependabot_add_selected_repo_to_org_secret**](DependabotApi.md#dependabot_add_selected_repo_to_org_secret) | **PUT** /orgs/{org}/dependabot/secrets/{secret_name}/repositories/{repository_id} | Add selected repository to an organization secret |
| [**dependabot_create_or_update_org_secret**](DependabotApi.md#dependabot_create_or_update_org_secret) | **PUT** /orgs/{org}/dependabot/secrets/{secret_name} | Create or update an organization secret |
| [**dependabot_create_or_update_repo_secret**](DependabotApi.md#dependabot_create_or_update_repo_secret) | **PUT** /repos/{owner}/{repo}/dependabot/secrets/{secret_name} | Create or update a repository secret |
| [**dependabot_delete_org_secret**](DependabotApi.md#dependabot_delete_org_secret) | **DELETE** /orgs/{org}/dependabot/secrets/{secret_name} | Delete an organization secret |
| [**dependabot_delete_repo_secret**](DependabotApi.md#dependabot_delete_repo_secret) | **DELETE** /repos/{owner}/{repo}/dependabot/secrets/{secret_name} | Delete a repository secret |
| [**dependabot_get_alert**](DependabotApi.md#dependabot_get_alert) | **GET** /repos/{owner}/{repo}/dependabot/alerts/{alert_number} | Get a Dependabot alert |
| [**dependabot_get_org_public_key**](DependabotApi.md#dependabot_get_org_public_key) | **GET** /orgs/{org}/dependabot/secrets/public-key | Get an organization public key |
| [**dependabot_get_org_secret**](DependabotApi.md#dependabot_get_org_secret) | **GET** /orgs/{org}/dependabot/secrets/{secret_name} | Get an organization secret |
| [**dependabot_get_repo_public_key**](DependabotApi.md#dependabot_get_repo_public_key) | **GET** /repos/{owner}/{repo}/dependabot/secrets/public-key | Get a repository public key |
| [**dependabot_get_repo_secret**](DependabotApi.md#dependabot_get_repo_secret) | **GET** /repos/{owner}/{repo}/dependabot/secrets/{secret_name} | Get a repository secret |
| [**dependabot_list_alerts_for_enterprise**](DependabotApi.md#dependabot_list_alerts_for_enterprise) | **GET** /enterprises/{enterprise}/dependabot/alerts | List Dependabot alerts for an enterprise |
| [**dependabot_list_alerts_for_org**](DependabotApi.md#dependabot_list_alerts_for_org) | **GET** /orgs/{org}/dependabot/alerts | List Dependabot alerts for an organization |
| [**dependabot_list_alerts_for_repo**](DependabotApi.md#dependabot_list_alerts_for_repo) | **GET** /repos/{owner}/{repo}/dependabot/alerts | List Dependabot alerts for a repository |
| [**dependabot_list_org_secrets**](DependabotApi.md#dependabot_list_org_secrets) | **GET** /orgs/{org}/dependabot/secrets | List organization secrets |
| [**dependabot_list_repo_secrets**](DependabotApi.md#dependabot_list_repo_secrets) | **GET** /repos/{owner}/{repo}/dependabot/secrets | List repository secrets |
| [**dependabot_list_selected_repos_for_org_secret**](DependabotApi.md#dependabot_list_selected_repos_for_org_secret) | **GET** /orgs/{org}/dependabot/secrets/{secret_name}/repositories | List selected repositories for an organization secret |
| [**dependabot_remove_selected_repo_from_org_secret**](DependabotApi.md#dependabot_remove_selected_repo_from_org_secret) | **DELETE** /orgs/{org}/dependabot/secrets/{secret_name}/repositories/{repository_id} | Remove selected repository from an organization secret |
| [**dependabot_set_selected_repos_for_org_secret**](DependabotApi.md#dependabot_set_selected_repos_for_org_secret) | **PUT** /orgs/{org}/dependabot/secrets/{secret_name}/repositories | Set selected repositories for an organization secret |
| [**dependabot_update_alert**](DependabotApi.md#dependabot_update_alert) | **PATCH** /repos/{owner}/{repo}/dependabot/alerts/{alert_number} | Update a Dependabot alert |


## dependabot_add_selected_repo_to_org_secret

> dependabot_add_selected_repo_to_org_secret(org, secret_name, repository_id)

Add selected repository to an organization secret

Adds a repository to an organization secret when the `visibility` for repository access is set to `selected`. The visibility is set when you [Create or update an organization secret](https://docs.github.com/rest/dependabot/secrets#create-or-update-an-organization-secret).  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
repository_id = 56 # Integer | 

begin
  # Add selected repository to an organization secret
  api_instance.dependabot_add_selected_repo_to_org_secret(org, secret_name, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_add_selected_repo_to_org_secret: #{e}"
end
```

#### Using the dependabot_add_selected_repo_to_org_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> dependabot_add_selected_repo_to_org_secret_with_http_info(org, secret_name, repository_id)

```ruby
begin
  # Add selected repository to an organization secret
  data, status_code, headers = api_instance.dependabot_add_selected_repo_to_org_secret_with_http_info(org, secret_name, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_add_selected_repo_to_org_secret_with_http_info: #{e}"
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
- **Accept**: Not defined


## dependabot_create_or_update_org_secret

> Object dependabot_create_or_update_org_secret(org, secret_name, dependabot_create_or_update_org_secret_request)

Create or update an organization secret

Creates or updates an organization secret with an encrypted value. Encrypt your secret using [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages). For more information, see \"[Encrypting secrets for the REST API](https://docs.github.com/rest/guides/encrypting-secrets-for-the-rest-api).\"  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
dependabot_create_or_update_org_secret_request = OpenapiClient::DependabotCreateOrUpdateOrgSecretRequest.new({visibility: 'all'}) # DependabotCreateOrUpdateOrgSecretRequest | 

begin
  # Create or update an organization secret
  result = api_instance.dependabot_create_or_update_org_secret(org, secret_name, dependabot_create_or_update_org_secret_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_create_or_update_org_secret: #{e}"
end
```

#### Using the dependabot_create_or_update_org_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> dependabot_create_or_update_org_secret_with_http_info(org, secret_name, dependabot_create_or_update_org_secret_request)

```ruby
begin
  # Create or update an organization secret
  data, status_code, headers = api_instance.dependabot_create_or_update_org_secret_with_http_info(org, secret_name, dependabot_create_or_update_org_secret_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_create_or_update_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **dependabot_create_or_update_org_secret_request** | [**DependabotCreateOrUpdateOrgSecretRequest**](DependabotCreateOrUpdateOrgSecretRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## dependabot_create_or_update_repo_secret

> Object dependabot_create_or_update_repo_secret(owner, repo, secret_name, dependabot_create_or_update_repo_secret_request)

Create or update a repository secret

Creates or updates a repository secret with an encrypted value. Encrypt your secret using [LibSodium](https://libsodium.gitbook.io/doc/bindings_for_other_languages). For more information, see \"[Encrypting secrets for the REST API](https://docs.github.com/rest/guides/encrypting-secrets-for-the-rest-api).\"  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
dependabot_create_or_update_repo_secret_request = OpenapiClient::DependabotCreateOrUpdateRepoSecretRequest.new # DependabotCreateOrUpdateRepoSecretRequest | 

begin
  # Create or update a repository secret
  result = api_instance.dependabot_create_or_update_repo_secret(owner, repo, secret_name, dependabot_create_or_update_repo_secret_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_create_or_update_repo_secret: #{e}"
end
```

#### Using the dependabot_create_or_update_repo_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> dependabot_create_or_update_repo_secret_with_http_info(owner, repo, secret_name, dependabot_create_or_update_repo_secret_request)

```ruby
begin
  # Create or update a repository secret
  data, status_code, headers = api_instance.dependabot_create_or_update_repo_secret_with_http_info(owner, repo, secret_name, dependabot_create_or_update_repo_secret_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_create_or_update_repo_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **dependabot_create_or_update_repo_secret_request** | [**DependabotCreateOrUpdateRepoSecretRequest**](DependabotCreateOrUpdateRepoSecretRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## dependabot_delete_org_secret

> dependabot_delete_org_secret(org, secret_name)

Delete an organization secret

Deletes a secret in an organization using the secret name.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Delete an organization secret
  api_instance.dependabot_delete_org_secret(org, secret_name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_delete_org_secret: #{e}"
end
```

#### Using the dependabot_delete_org_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> dependabot_delete_org_secret_with_http_info(org, secret_name)

```ruby
begin
  # Delete an organization secret
  data, status_code, headers = api_instance.dependabot_delete_org_secret_with_http_info(org, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_delete_org_secret_with_http_info: #{e}"
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
- **Accept**: Not defined


## dependabot_delete_repo_secret

> dependabot_delete_repo_secret(owner, repo, secret_name)

Delete a repository secret

Deletes a secret in a repository using the secret name.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Delete a repository secret
  api_instance.dependabot_delete_repo_secret(owner, repo, secret_name)
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_delete_repo_secret: #{e}"
end
```

#### Using the dependabot_delete_repo_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> dependabot_delete_repo_secret_with_http_info(owner, repo, secret_name)

```ruby
begin
  # Delete a repository secret
  data, status_code, headers = api_instance.dependabot_delete_repo_secret_with_http_info(owner, repo, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_delete_repo_secret_with_http_info: #{e}"
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


## dependabot_get_alert

> <DependabotAlert> dependabot_get_alert(owner, repo, alert_number)

Get a Dependabot alert

OAuth app tokens and personal access tokens (classic) need the `security_events` scope to use this endpoint. If this endpoint is only used with public repositories, the token can use the `public_repo` scope instead.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
alert_number = 56 # Integer | The number that identifies a Dependabot alert in its repository. You can find this at the end of the URL for a Dependabot alert within GitHub, or in `number` fields in the response from the `GET /repos/{owner}/{repo}/dependabot/alerts` operation.

begin
  # Get a Dependabot alert
  result = api_instance.dependabot_get_alert(owner, repo, alert_number)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_get_alert: #{e}"
end
```

#### Using the dependabot_get_alert_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<DependabotAlert>, Integer, Hash)> dependabot_get_alert_with_http_info(owner, repo, alert_number)

```ruby
begin
  # Get a Dependabot alert
  data, status_code, headers = api_instance.dependabot_get_alert_with_http_info(owner, repo, alert_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <DependabotAlert>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_get_alert_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **alert_number** | **Integer** | The number that identifies a Dependabot alert in its repository. You can find this at the end of the URL for a Dependabot alert within GitHub, or in &#x60;number&#x60; fields in the response from the &#x60;GET /repos/{owner}/{repo}/dependabot/alerts&#x60; operation. |  |

### Return type

[**DependabotAlert**](DependabotAlert.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## dependabot_get_org_public_key

> <DependabotPublicKey> dependabot_get_org_public_key(org)

Get an organization public key

Gets your public key, which you need to encrypt secrets. You need to encrypt a secret before you can create or update secrets.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get an organization public key
  result = api_instance.dependabot_get_org_public_key(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_get_org_public_key: #{e}"
end
```

#### Using the dependabot_get_org_public_key_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<DependabotPublicKey>, Integer, Hash)> dependabot_get_org_public_key_with_http_info(org)

```ruby
begin
  # Get an organization public key
  data, status_code, headers = api_instance.dependabot_get_org_public_key_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <DependabotPublicKey>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_get_org_public_key_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**DependabotPublicKey**](DependabotPublicKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## dependabot_get_org_secret

> <OrganizationDependabotSecret> dependabot_get_org_secret(org, secret_name)

Get an organization secret

Gets a single organization secret without revealing its encrypted value.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Get an organization secret
  result = api_instance.dependabot_get_org_secret(org, secret_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_get_org_secret: #{e}"
end
```

#### Using the dependabot_get_org_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrganizationDependabotSecret>, Integer, Hash)> dependabot_get_org_secret_with_http_info(org, secret_name)

```ruby
begin
  # Get an organization secret
  data, status_code, headers = api_instance.dependabot_get_org_secret_with_http_info(org, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrganizationDependabotSecret>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_get_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

[**OrganizationDependabotSecret**](OrganizationDependabotSecret.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## dependabot_get_repo_public_key

> <DependabotPublicKey> dependabot_get_repo_public_key(owner, repo)

Get a repository public key

Gets your public key, which you need to encrypt secrets. You need to encrypt a secret before you can create or update secrets. Anyone with read access to the repository can use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint if the repository is private.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get a repository public key
  result = api_instance.dependabot_get_repo_public_key(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_get_repo_public_key: #{e}"
end
```

#### Using the dependabot_get_repo_public_key_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<DependabotPublicKey>, Integer, Hash)> dependabot_get_repo_public_key_with_http_info(owner, repo)

```ruby
begin
  # Get a repository public key
  data, status_code, headers = api_instance.dependabot_get_repo_public_key_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <DependabotPublicKey>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_get_repo_public_key_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**DependabotPublicKey**](DependabotPublicKey.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## dependabot_get_repo_secret

> <DependabotSecret> dependabot_get_repo_secret(owner, repo, secret_name)

Get a repository secret

Gets a single repository secret without revealing its encrypted value.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.

begin
  # Get a repository secret
  result = api_instance.dependabot_get_repo_secret(owner, repo, secret_name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_get_repo_secret: #{e}"
end
```

#### Using the dependabot_get_repo_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<DependabotSecret>, Integer, Hash)> dependabot_get_repo_secret_with_http_info(owner, repo, secret_name)

```ruby
begin
  # Get a repository secret
  data, status_code, headers = api_instance.dependabot_get_repo_secret_with_http_info(owner, repo, secret_name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <DependabotSecret>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_get_repo_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |

### Return type

[**DependabotSecret**](DependabotSecret.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## dependabot_list_alerts_for_enterprise

> <Array<DependabotAlertWithRepository>> dependabot_list_alerts_for_enterprise(enterprise, opts)

List Dependabot alerts for an enterprise

Lists Dependabot alerts for repositories that are owned by the specified enterprise.  The authenticated user must be a member of the enterprise to use this endpoint.  Alerts are only returned for organizations in the enterprise for which you are an organization owner or a security manager. For more information about security managers, see \"[Managing security managers in your organization](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/managing-security-managers-in-your-organization).\"  OAuth app tokens and personal access tokens (classic) need the `repo` or `security_events` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
enterprise = 'enterprise_example' # String | The slug version of the enterprise name. You can also substitute this value with the enterprise id.
opts = {
  state: 'state_example', # String | A comma-separated list of states. If specified, only alerts with these states will be returned.  Can be: `auto_dismissed`, `dismissed`, `fixed`, `open`
  severity: 'severity_example', # String | A comma-separated list of severities. If specified, only alerts with these severities will be returned.  Can be: `low`, `medium`, `high`, `critical`
  ecosystem: 'ecosystem_example', # String | A comma-separated list of ecosystems. If specified, only alerts for these ecosystems will be returned.  Can be: `composer`, `go`, `maven`, `npm`, `nuget`, `pip`, `pub`, `rubygems`, `rust`
  package: 'package_example', # String | A comma-separated list of package names. If specified, only alerts for these packages will be returned.
  scope: 'development', # String | The scope of the vulnerable dependency. If specified, only alerts with this scope will be returned.
  sort: 'created', # String | The property by which to sort the results. `created` means when the alert was created. `updated` means when the alert's state last changed.
  direction: 'asc', # String | The direction to sort the results by.
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  after: 'after_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  first: 56, # Integer | **Deprecated**. The number of results per page (max 100), starting from the first matching result. This parameter must not be used in combination with `last`. Instead, use `per_page` in combination with `after` to fetch the first page of results.
  last: 56, # Integer | **Deprecated**. The number of results per page (max 100), starting from the last matching result. This parameter must not be used in combination with `first`. Instead, use `per_page` in combination with `before` to fetch the last page of results.
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List Dependabot alerts for an enterprise
  result = api_instance.dependabot_list_alerts_for_enterprise(enterprise, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_list_alerts_for_enterprise: #{e}"
end
```

#### Using the dependabot_list_alerts_for_enterprise_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<DependabotAlertWithRepository>>, Integer, Hash)> dependabot_list_alerts_for_enterprise_with_http_info(enterprise, opts)

```ruby
begin
  # List Dependabot alerts for an enterprise
  data, status_code, headers = api_instance.dependabot_list_alerts_for_enterprise_with_http_info(enterprise, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<DependabotAlertWithRepository>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_list_alerts_for_enterprise_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enterprise** | **String** | The slug version of the enterprise name. You can also substitute this value with the enterprise id. |  |
| **state** | **String** | A comma-separated list of states. If specified, only alerts with these states will be returned.  Can be: &#x60;auto_dismissed&#x60;, &#x60;dismissed&#x60;, &#x60;fixed&#x60;, &#x60;open&#x60; | [optional] |
| **severity** | **String** | A comma-separated list of severities. If specified, only alerts with these severities will be returned.  Can be: &#x60;low&#x60;, &#x60;medium&#x60;, &#x60;high&#x60;, &#x60;critical&#x60; | [optional] |
| **ecosystem** | **String** | A comma-separated list of ecosystems. If specified, only alerts for these ecosystems will be returned.  Can be: &#x60;composer&#x60;, &#x60;go&#x60;, &#x60;maven&#x60;, &#x60;npm&#x60;, &#x60;nuget&#x60;, &#x60;pip&#x60;, &#x60;pub&#x60;, &#x60;rubygems&#x60;, &#x60;rust&#x60; | [optional] |
| **package** | **String** | A comma-separated list of package names. If specified, only alerts for these packages will be returned. | [optional] |
| **scope** | **String** | The scope of the vulnerable dependency. If specified, only alerts with this scope will be returned. | [optional] |
| **sort** | **String** | The property by which to sort the results. &#x60;created&#x60; means when the alert was created. &#x60;updated&#x60; means when the alert&#39;s state last changed. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **first** | **Integer** | **Deprecated**. The number of results per page (max 100), starting from the first matching result. This parameter must not be used in combination with &#x60;last&#x60;. Instead, use &#x60;per_page&#x60; in combination with &#x60;after&#x60; to fetch the first page of results. | [optional][default to 30] |
| **last** | **Integer** | **Deprecated**. The number of results per page (max 100), starting from the last matching result. This parameter must not be used in combination with &#x60;first&#x60;. Instead, use &#x60;per_page&#x60; in combination with &#x60;before&#x60; to fetch the last page of results. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |

### Return type

[**Array&lt;DependabotAlertWithRepository&gt;**](DependabotAlertWithRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## dependabot_list_alerts_for_org

> <Array<DependabotAlertWithRepository>> dependabot_list_alerts_for_org(org, opts)

List Dependabot alerts for an organization

Lists Dependabot alerts for an organization.  The authenticated user must be an owner or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `security_events` scope to use this endpoint. If this endpoint is only used with public repositories, the token can use the `public_repo` scope instead.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  state: 'state_example', # String | A comma-separated list of states. If specified, only alerts with these states will be returned.  Can be: `auto_dismissed`, `dismissed`, `fixed`, `open`
  severity: 'severity_example', # String | A comma-separated list of severities. If specified, only alerts with these severities will be returned.  Can be: `low`, `medium`, `high`, `critical`
  ecosystem: 'ecosystem_example', # String | A comma-separated list of ecosystems. If specified, only alerts for these ecosystems will be returned.  Can be: `composer`, `go`, `maven`, `npm`, `nuget`, `pip`, `pub`, `rubygems`, `rust`
  package: 'package_example', # String | A comma-separated list of package names. If specified, only alerts for these packages will be returned.
  scope: 'development', # String | The scope of the vulnerable dependency. If specified, only alerts with this scope will be returned.
  sort: 'created', # String | The property by which to sort the results. `created` means when the alert was created. `updated` means when the alert's state last changed.
  direction: 'asc', # String | The direction to sort the results by.
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  after: 'after_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  first: 56, # Integer | **Deprecated**. The number of results per page (max 100), starting from the first matching result. This parameter must not be used in combination with `last`. Instead, use `per_page` in combination with `after` to fetch the first page of results.
  last: 56, # Integer | **Deprecated**. The number of results per page (max 100), starting from the last matching result. This parameter must not be used in combination with `first`. Instead, use `per_page` in combination with `before` to fetch the last page of results.
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List Dependabot alerts for an organization
  result = api_instance.dependabot_list_alerts_for_org(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_list_alerts_for_org: #{e}"
end
```

#### Using the dependabot_list_alerts_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<DependabotAlertWithRepository>>, Integer, Hash)> dependabot_list_alerts_for_org_with_http_info(org, opts)

```ruby
begin
  # List Dependabot alerts for an organization
  data, status_code, headers = api_instance.dependabot_list_alerts_for_org_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<DependabotAlertWithRepository>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_list_alerts_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **state** | **String** | A comma-separated list of states. If specified, only alerts with these states will be returned.  Can be: &#x60;auto_dismissed&#x60;, &#x60;dismissed&#x60;, &#x60;fixed&#x60;, &#x60;open&#x60; | [optional] |
| **severity** | **String** | A comma-separated list of severities. If specified, only alerts with these severities will be returned.  Can be: &#x60;low&#x60;, &#x60;medium&#x60;, &#x60;high&#x60;, &#x60;critical&#x60; | [optional] |
| **ecosystem** | **String** | A comma-separated list of ecosystems. If specified, only alerts for these ecosystems will be returned.  Can be: &#x60;composer&#x60;, &#x60;go&#x60;, &#x60;maven&#x60;, &#x60;npm&#x60;, &#x60;nuget&#x60;, &#x60;pip&#x60;, &#x60;pub&#x60;, &#x60;rubygems&#x60;, &#x60;rust&#x60; | [optional] |
| **package** | **String** | A comma-separated list of package names. If specified, only alerts for these packages will be returned. | [optional] |
| **scope** | **String** | The scope of the vulnerable dependency. If specified, only alerts with this scope will be returned. | [optional] |
| **sort** | **String** | The property by which to sort the results. &#x60;created&#x60; means when the alert was created. &#x60;updated&#x60; means when the alert&#39;s state last changed. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **first** | **Integer** | **Deprecated**. The number of results per page (max 100), starting from the first matching result. This parameter must not be used in combination with &#x60;last&#x60;. Instead, use &#x60;per_page&#x60; in combination with &#x60;after&#x60; to fetch the first page of results. | [optional][default to 30] |
| **last** | **Integer** | **Deprecated**. The number of results per page (max 100), starting from the last matching result. This parameter must not be used in combination with &#x60;first&#x60;. Instead, use &#x60;per_page&#x60; in combination with &#x60;before&#x60; to fetch the last page of results. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |

### Return type

[**Array&lt;DependabotAlertWithRepository&gt;**](DependabotAlertWithRepository.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## dependabot_list_alerts_for_repo

> <Array<DependabotAlert>> dependabot_list_alerts_for_repo(owner, repo, opts)

List Dependabot alerts for a repository

OAuth app tokens and personal access tokens (classic) need the `security_events` scope to use this endpoint. If this endpoint is only used with public repositories, the token can use the `public_repo` scope instead.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  state: 'state_example', # String | A comma-separated list of states. If specified, only alerts with these states will be returned.  Can be: `auto_dismissed`, `dismissed`, `fixed`, `open`
  severity: 'severity_example', # String | A comma-separated list of severities. If specified, only alerts with these severities will be returned.  Can be: `low`, `medium`, `high`, `critical`
  ecosystem: 'ecosystem_example', # String | A comma-separated list of ecosystems. If specified, only alerts for these ecosystems will be returned.  Can be: `composer`, `go`, `maven`, `npm`, `nuget`, `pip`, `pub`, `rubygems`, `rust`
  package: 'package_example', # String | A comma-separated list of package names. If specified, only alerts for these packages will be returned.
  manifest: 'manifest_example', # String | A comma-separated list of full manifest paths. If specified, only alerts for these manifests will be returned.
  scope: 'development', # String | The scope of the vulnerable dependency. If specified, only alerts with this scope will be returned.
  sort: 'created', # String | The property by which to sort the results. `created` means when the alert was created. `updated` means when the alert's state last changed.
  direction: 'asc', # String | The direction to sort the results by.
  page: 56, # Integer | **Deprecated**. Page number of the results to fetch. Use cursor-based pagination with `before` or `after` instead.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  after: 'after_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  first: 56, # Integer | **Deprecated**. The number of results per page (max 100), starting from the first matching result. This parameter must not be used in combination with `last`. Instead, use `per_page` in combination with `after` to fetch the first page of results.
  last: 56 # Integer | **Deprecated**. The number of results per page (max 100), starting from the last matching result. This parameter must not be used in combination with `first`. Instead, use `per_page` in combination with `before` to fetch the last page of results.
}

begin
  # List Dependabot alerts for a repository
  result = api_instance.dependabot_list_alerts_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_list_alerts_for_repo: #{e}"
end
```

#### Using the dependabot_list_alerts_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<DependabotAlert>>, Integer, Hash)> dependabot_list_alerts_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List Dependabot alerts for a repository
  data, status_code, headers = api_instance.dependabot_list_alerts_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<DependabotAlert>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_list_alerts_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **state** | **String** | A comma-separated list of states. If specified, only alerts with these states will be returned.  Can be: &#x60;auto_dismissed&#x60;, &#x60;dismissed&#x60;, &#x60;fixed&#x60;, &#x60;open&#x60; | [optional] |
| **severity** | **String** | A comma-separated list of severities. If specified, only alerts with these severities will be returned.  Can be: &#x60;low&#x60;, &#x60;medium&#x60;, &#x60;high&#x60;, &#x60;critical&#x60; | [optional] |
| **ecosystem** | **String** | A comma-separated list of ecosystems. If specified, only alerts for these ecosystems will be returned.  Can be: &#x60;composer&#x60;, &#x60;go&#x60;, &#x60;maven&#x60;, &#x60;npm&#x60;, &#x60;nuget&#x60;, &#x60;pip&#x60;, &#x60;pub&#x60;, &#x60;rubygems&#x60;, &#x60;rust&#x60; | [optional] |
| **package** | **String** | A comma-separated list of package names. If specified, only alerts for these packages will be returned. | [optional] |
| **manifest** | **String** | A comma-separated list of full manifest paths. If specified, only alerts for these manifests will be returned. | [optional] |
| **scope** | **String** | The scope of the vulnerable dependency. If specified, only alerts with this scope will be returned. | [optional] |
| **sort** | **String** | The property by which to sort the results. &#x60;created&#x60; means when the alert was created. &#x60;updated&#x60; means when the alert&#39;s state last changed. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **page** | **Integer** | **Deprecated**. Page number of the results to fetch. Use cursor-based pagination with &#x60;before&#x60; or &#x60;after&#x60; instead. | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **first** | **Integer** | **Deprecated**. The number of results per page (max 100), starting from the first matching result. This parameter must not be used in combination with &#x60;last&#x60;. Instead, use &#x60;per_page&#x60; in combination with &#x60;after&#x60; to fetch the first page of results. | [optional][default to 30] |
| **last** | **Integer** | **Deprecated**. The number of results per page (max 100), starting from the last matching result. This parameter must not be used in combination with &#x60;first&#x60;. Instead, use &#x60;per_page&#x60; in combination with &#x60;before&#x60; to fetch the last page of results. | [optional] |

### Return type

[**Array&lt;DependabotAlert&gt;**](DependabotAlert.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## dependabot_list_org_secrets

> <DependabotListOrgSecrets200Response> dependabot_list_org_secrets(org, opts)

List organization secrets

Lists all secrets available in an organization without revealing their encrypted values.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List organization secrets
  result = api_instance.dependabot_list_org_secrets(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_list_org_secrets: #{e}"
end
```

#### Using the dependabot_list_org_secrets_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<DependabotListOrgSecrets200Response>, Integer, Hash)> dependabot_list_org_secrets_with_http_info(org, opts)

```ruby
begin
  # List organization secrets
  data, status_code, headers = api_instance.dependabot_list_org_secrets_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <DependabotListOrgSecrets200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_list_org_secrets_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**DependabotListOrgSecrets200Response**](DependabotListOrgSecrets200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## dependabot_list_repo_secrets

> <DependabotListRepoSecrets200Response> dependabot_list_repo_secrets(owner, repo, opts)

List repository secrets

Lists all secrets available in a repository without revealing their encrypted values.  OAuth app tokens and personal access tokens (classic) need the `repo` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repository secrets
  result = api_instance.dependabot_list_repo_secrets(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_list_repo_secrets: #{e}"
end
```

#### Using the dependabot_list_repo_secrets_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<DependabotListRepoSecrets200Response>, Integer, Hash)> dependabot_list_repo_secrets_with_http_info(owner, repo, opts)

```ruby
begin
  # List repository secrets
  data, status_code, headers = api_instance.dependabot_list_repo_secrets_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <DependabotListRepoSecrets200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_list_repo_secrets_with_http_info: #{e}"
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

[**DependabotListRepoSecrets200Response**](DependabotListRepoSecrets200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## dependabot_list_selected_repos_for_org_secret

> <ActionsListSelectedReposForOrgSecret200Response> dependabot_list_selected_repos_for_org_secret(org, secret_name, opts)

List selected repositories for an organization secret

Lists all repositories that have been selected when the `visibility` for repository access to a secret is set to `selected`.  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
opts = {
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List selected repositories for an organization secret
  result = api_instance.dependabot_list_selected_repos_for_org_secret(org, secret_name, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_list_selected_repos_for_org_secret: #{e}"
end
```

#### Using the dependabot_list_selected_repos_for_org_secret_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsListSelectedReposForOrgSecret200Response>, Integer, Hash)> dependabot_list_selected_repos_for_org_secret_with_http_info(org, secret_name, opts)

```ruby
begin
  # List selected repositories for an organization secret
  data, status_code, headers = api_instance.dependabot_list_selected_repos_for_org_secret_with_http_info(org, secret_name, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsListSelectedReposForOrgSecret200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_list_selected_repos_for_org_secret_with_http_info: #{e}"
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


## dependabot_remove_selected_repo_from_org_secret

> dependabot_remove_selected_repo_from_org_secret(org, secret_name, repository_id)

Remove selected repository from an organization secret

Removes a repository from an organization secret when the `visibility` for repository access is set to `selected`. The visibility is set when you [Create or update an organization secret](https://docs.github.com/rest/dependabot/secrets#create-or-update-an-organization-secret).  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
repository_id = 56 # Integer | 

begin
  # Remove selected repository from an organization secret
  api_instance.dependabot_remove_selected_repo_from_org_secret(org, secret_name, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_remove_selected_repo_from_org_secret: #{e}"
end
```

#### Using the dependabot_remove_selected_repo_from_org_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> dependabot_remove_selected_repo_from_org_secret_with_http_info(org, secret_name, repository_id)

```ruby
begin
  # Remove selected repository from an organization secret
  data, status_code, headers = api_instance.dependabot_remove_selected_repo_from_org_secret_with_http_info(org, secret_name, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_remove_selected_repo_from_org_secret_with_http_info: #{e}"
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
- **Accept**: Not defined


## dependabot_set_selected_repos_for_org_secret

> dependabot_set_selected_repos_for_org_secret(org, secret_name, dependabot_set_selected_repos_for_org_secret_request)

Set selected repositories for an organization secret

Replaces all repositories for an organization secret when the `visibility` for repository access is set to `selected`. The visibility is set when you [Create or update an organization secret](https://docs.github.com/rest/dependabot/secrets#create-or-update-an-organization-secret).  OAuth app tokens and personal access tokens (classic) need the `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
secret_name = 'secret_name_example' # String | The name of the secret.
dependabot_set_selected_repos_for_org_secret_request = OpenapiClient::DependabotSetSelectedReposForOrgSecretRequest.new({selected_repository_ids: [37]}) # DependabotSetSelectedReposForOrgSecretRequest | 

begin
  # Set selected repositories for an organization secret
  api_instance.dependabot_set_selected_repos_for_org_secret(org, secret_name, dependabot_set_selected_repos_for_org_secret_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_set_selected_repos_for_org_secret: #{e}"
end
```

#### Using the dependabot_set_selected_repos_for_org_secret_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> dependabot_set_selected_repos_for_org_secret_with_http_info(org, secret_name, dependabot_set_selected_repos_for_org_secret_request)

```ruby
begin
  # Set selected repositories for an organization secret
  data, status_code, headers = api_instance.dependabot_set_selected_repos_for_org_secret_with_http_info(org, secret_name, dependabot_set_selected_repos_for_org_secret_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_set_selected_repos_for_org_secret_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **secret_name** | **String** | The name of the secret. |  |
| **dependabot_set_selected_repos_for_org_secret_request** | [**DependabotSetSelectedReposForOrgSecretRequest**](DependabotSetSelectedReposForOrgSecretRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## dependabot_update_alert

> <DependabotAlert> dependabot_update_alert(owner, repo, alert_number, dependabot_update_alert_request)

Update a Dependabot alert

The authenticated user must have access to security alerts for the repository to use this endpoint. For more information, see \"[Granting access to security alerts](https://docs.github.com/repositories/managing-your-repositorys-settings-and-features/enabling-features-for-your-repository/managing-security-and-analysis-settings-for-your-repository#granting-access-to-security-alerts).\"  OAuth app tokens and personal access tokens (classic) need the `security_events` scope to use this endpoint. If this endpoint is only used with public repositories, the token can use the `public_repo` scope instead.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::DependabotApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
alert_number = 56 # Integer | The number that identifies a Dependabot alert in its repository. You can find this at the end of the URL for a Dependabot alert within GitHub, or in `number` fields in the response from the `GET /repos/{owner}/{repo}/dependabot/alerts` operation.
dependabot_update_alert_request = OpenapiClient::DependabotUpdateAlertRequest.new({state: 'dismissed'}) # DependabotUpdateAlertRequest | 

begin
  # Update a Dependabot alert
  result = api_instance.dependabot_update_alert(owner, repo, alert_number, dependabot_update_alert_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_update_alert: #{e}"
end
```

#### Using the dependabot_update_alert_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<DependabotAlert>, Integer, Hash)> dependabot_update_alert_with_http_info(owner, repo, alert_number, dependabot_update_alert_request)

```ruby
begin
  # Update a Dependabot alert
  data, status_code, headers = api_instance.dependabot_update_alert_with_http_info(owner, repo, alert_number, dependabot_update_alert_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <DependabotAlert>
rescue OpenapiClient::ApiError => e
  puts "Error when calling DependabotApi->dependabot_update_alert_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **alert_number** | **Integer** | The number that identifies a Dependabot alert in its repository. You can find this at the end of the URL for a Dependabot alert within GitHub, or in &#x60;number&#x60; fields in the response from the &#x60;GET /repos/{owner}/{repo}/dependabot/alerts&#x60; operation. |  |
| **dependabot_update_alert_request** | [**DependabotUpdateAlertRequest**](DependabotUpdateAlertRequest.md) |  |  |

### Return type

[**DependabotAlert**](DependabotAlert.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json, application/scim+json

