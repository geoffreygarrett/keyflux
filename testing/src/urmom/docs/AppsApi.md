# OpenapiClient::AppsApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**apps_add_repo_to_installation_for_authenticated_user**](AppsApi.md#apps_add_repo_to_installation_for_authenticated_user) | **PUT** /user/installations/{installation_id}/repositories/{repository_id} | Add a repository to an app installation |
| [**apps_check_token**](AppsApi.md#apps_check_token) | **POST** /applications/{client_id}/token | Check a token |
| [**apps_create_from_manifest**](AppsApi.md#apps_create_from_manifest) | **POST** /app-manifests/{code}/conversions | Create a GitHub App from a manifest |
| [**apps_create_installation_access_token**](AppsApi.md#apps_create_installation_access_token) | **POST** /app/installations/{installation_id}/access_tokens | Create an installation access token for an app |
| [**apps_delete_authorization**](AppsApi.md#apps_delete_authorization) | **DELETE** /applications/{client_id}/grant | Delete an app authorization |
| [**apps_delete_installation**](AppsApi.md#apps_delete_installation) | **DELETE** /app/installations/{installation_id} | Delete an installation for the authenticated app |
| [**apps_delete_token**](AppsApi.md#apps_delete_token) | **DELETE** /applications/{client_id}/token | Delete an app token |
| [**apps_get_authenticated**](AppsApi.md#apps_get_authenticated) | **GET** /app | Get the authenticated app |
| [**apps_get_by_slug**](AppsApi.md#apps_get_by_slug) | **GET** /apps/{app_slug} | Get an app |
| [**apps_get_installation**](AppsApi.md#apps_get_installation) | **GET** /app/installations/{installation_id} | Get an installation for the authenticated app |
| [**apps_get_org_installation**](AppsApi.md#apps_get_org_installation) | **GET** /orgs/{org}/installation | Get an organization installation for the authenticated app |
| [**apps_get_repo_installation**](AppsApi.md#apps_get_repo_installation) | **GET** /repos/{owner}/{repo}/installation | Get a repository installation for the authenticated app |
| [**apps_get_subscription_plan_for_account**](AppsApi.md#apps_get_subscription_plan_for_account) | **GET** /marketplace_listing/accounts/{account_id} | Get a subscription plan for an account |
| [**apps_get_subscription_plan_for_account_stubbed**](AppsApi.md#apps_get_subscription_plan_for_account_stubbed) | **GET** /marketplace_listing/stubbed/accounts/{account_id} | Get a subscription plan for an account (stubbed) |
| [**apps_get_user_installation**](AppsApi.md#apps_get_user_installation) | **GET** /users/{username}/installation | Get a user installation for the authenticated app |
| [**apps_get_webhook_config_for_app**](AppsApi.md#apps_get_webhook_config_for_app) | **GET** /app/hook/config | Get a webhook configuration for an app |
| [**apps_get_webhook_delivery**](AppsApi.md#apps_get_webhook_delivery) | **GET** /app/hook/deliveries/{delivery_id} | Get a delivery for an app webhook |
| [**apps_list_accounts_for_plan**](AppsApi.md#apps_list_accounts_for_plan) | **GET** /marketplace_listing/plans/{plan_id}/accounts | List accounts for a plan |
| [**apps_list_accounts_for_plan_stubbed**](AppsApi.md#apps_list_accounts_for_plan_stubbed) | **GET** /marketplace_listing/stubbed/plans/{plan_id}/accounts | List accounts for a plan (stubbed) |
| [**apps_list_installation_repos_for_authenticated_user**](AppsApi.md#apps_list_installation_repos_for_authenticated_user) | **GET** /user/installations/{installation_id}/repositories | List repositories accessible to the user access token |
| [**apps_list_installation_requests_for_authenticated_app**](AppsApi.md#apps_list_installation_requests_for_authenticated_app) | **GET** /app/installation-requests | List installation requests for the authenticated app |
| [**apps_list_installations**](AppsApi.md#apps_list_installations) | **GET** /app/installations | List installations for the authenticated app |
| [**apps_list_installations_for_authenticated_user**](AppsApi.md#apps_list_installations_for_authenticated_user) | **GET** /user/installations | List app installations accessible to the user access token |
| [**apps_list_plans**](AppsApi.md#apps_list_plans) | **GET** /marketplace_listing/plans | List plans |
| [**apps_list_plans_stubbed**](AppsApi.md#apps_list_plans_stubbed) | **GET** /marketplace_listing/stubbed/plans | List plans (stubbed) |
| [**apps_list_repos_accessible_to_installation**](AppsApi.md#apps_list_repos_accessible_to_installation) | **GET** /installation/repositories | List repositories accessible to the app installation |
| [**apps_list_subscriptions_for_authenticated_user**](AppsApi.md#apps_list_subscriptions_for_authenticated_user) | **GET** /user/marketplace_purchases | List subscriptions for the authenticated user |
| [**apps_list_subscriptions_for_authenticated_user_stubbed**](AppsApi.md#apps_list_subscriptions_for_authenticated_user_stubbed) | **GET** /user/marketplace_purchases/stubbed | List subscriptions for the authenticated user (stubbed) |
| [**apps_list_webhook_deliveries**](AppsApi.md#apps_list_webhook_deliveries) | **GET** /app/hook/deliveries | List deliveries for an app webhook |
| [**apps_redeliver_webhook_delivery**](AppsApi.md#apps_redeliver_webhook_delivery) | **POST** /app/hook/deliveries/{delivery_id}/attempts | Redeliver a delivery for an app webhook |
| [**apps_remove_repo_from_installation_for_authenticated_user**](AppsApi.md#apps_remove_repo_from_installation_for_authenticated_user) | **DELETE** /user/installations/{installation_id}/repositories/{repository_id} | Remove a repository from an app installation |
| [**apps_reset_token**](AppsApi.md#apps_reset_token) | **PATCH** /applications/{client_id}/token | Reset a token |
| [**apps_revoke_installation_access_token**](AppsApi.md#apps_revoke_installation_access_token) | **DELETE** /installation/token | Revoke an installation access token |
| [**apps_scope_token**](AppsApi.md#apps_scope_token) | **POST** /applications/{client_id}/token/scoped | Create a scoped access token |
| [**apps_suspend_installation**](AppsApi.md#apps_suspend_installation) | **PUT** /app/installations/{installation_id}/suspended | Suspend an app installation |
| [**apps_unsuspend_installation**](AppsApi.md#apps_unsuspend_installation) | **DELETE** /app/installations/{installation_id}/suspended | Unsuspend an app installation |
| [**apps_update_webhook_config_for_app**](AppsApi.md#apps_update_webhook_config_for_app) | **PATCH** /app/hook/config | Update a webhook configuration for an app |


## apps_add_repo_to_installation_for_authenticated_user

> apps_add_repo_to_installation_for_authenticated_user(installation_id, repository_id)

Add a repository to an app installation

Add a single repository to an installation. The authenticated user must have admin access to the repository.      This endpoint only works for PATs (classic) with the `repo` scope.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
installation_id = 1 # Integer | The unique identifier of the installation.
repository_id = 56 # Integer | The unique identifier of the repository.

begin
  # Add a repository to an app installation
  api_instance.apps_add_repo_to_installation_for_authenticated_user(installation_id, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_add_repo_to_installation_for_authenticated_user: #{e}"
end
```

#### Using the apps_add_repo_to_installation_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> apps_add_repo_to_installation_for_authenticated_user_with_http_info(installation_id, repository_id)

```ruby
begin
  # Add a repository to an app installation
  data, status_code, headers = api_instance.apps_add_repo_to_installation_for_authenticated_user_with_http_info(installation_id, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_add_repo_to_installation_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **installation_id** | **Integer** | The unique identifier of the installation. |  |
| **repository_id** | **Integer** | The unique identifier of the repository. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_check_token

> <Authorization> apps_check_token(client_id, apps_check_token_request)

Check a token

OAuth applications and GitHub applications with OAuth authorizations can use this API method for checking OAuth token validity without exceeding the normal rate limits for failed login attempts. Authentication works differently with this particular endpoint. Invalid tokens will return `404 NOT FOUND`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
client_id = 'Iv1.8a61f9b3a7aba766' # String | The client ID of the GitHub app.
apps_check_token_request = OpenapiClient::AppsCheckTokenRequest.new({access_token: 'access_token_example'}) # AppsCheckTokenRequest | 

begin
  # Check a token
  result = api_instance.apps_check_token(client_id, apps_check_token_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_check_token: #{e}"
end
```

#### Using the apps_check_token_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Authorization>, Integer, Hash)> apps_check_token_with_http_info(client_id, apps_check_token_request)

```ruby
begin
  # Check a token
  data, status_code, headers = api_instance.apps_check_token_with_http_info(client_id, apps_check_token_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Authorization>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_check_token_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **client_id** | **String** | The client ID of the GitHub app. |  |
| **apps_check_token_request** | [**AppsCheckTokenRequest**](AppsCheckTokenRequest.md) |  |  |

### Return type

[**Authorization**](Authorization.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## apps_create_from_manifest

> <AppsCreateFromManifest201Response> apps_create_from_manifest(code)

Create a GitHub App from a manifest

Use this endpoint to complete the handshake necessary when implementing the [GitHub App Manifest flow](https://docs.github.com/apps/building-github-apps/creating-github-apps-from-a-manifest/). When you create a GitHub App with the manifest flow, you receive a temporary `code` used to retrieve the GitHub App's `id`, `pem` (private key), and `webhook_secret`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
code = 'code_example' # String | 

begin
  # Create a GitHub App from a manifest
  result = api_instance.apps_create_from_manifest(code)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_create_from_manifest: #{e}"
end
```

#### Using the apps_create_from_manifest_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AppsCreateFromManifest201Response>, Integer, Hash)> apps_create_from_manifest_with_http_info(code)

```ruby
begin
  # Create a GitHub App from a manifest
  data, status_code, headers = api_instance.apps_create_from_manifest_with_http_info(code)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AppsCreateFromManifest201Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_create_from_manifest_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **code** | **String** |  |  |

### Return type

[**AppsCreateFromManifest201Response**](AppsCreateFromManifest201Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_create_installation_access_token

> <InstallationToken> apps_create_installation_access_token(installation_id, opts)

Create an installation access token for an app

Creates an installation access token that enables a GitHub App to make authenticated API requests for the app's installation on an organization or individual account. Installation tokens expire one hour from the time you create them. Using an expired token produces a status code of `401 - Unauthorized`, and requires creating a new installation token. By default the installation token has access to all repositories that the installation can access.  Optionally, you can use the `repositories` or `repository_ids` body parameters to specify individual repositories that the installation access token can access. If you don't use `repositories` or `repository_ids` to grant access to specific repositories, the installation access token will have access to all repositories that the installation was granted access to. The installation access token cannot be granted access to repositories that the installation was not granted access to. Up to 500 repositories can be listed in this manner.  Optionally, use the `permissions` body parameter to specify the permissions that the installation access token should have. If `permissions` is not specified, the installation access token will have all of the permissions that were granted to the app. The installation access token cannot be granted permissions that the app was not granted.  When using the repository or permission parameters to reduce the access of the token, the complexity of the token is increased due to both the number of permissions in the request and the number of repositories the token will have access to. If the complexity is too large, the token will fail to be issued. If this occurs, the error message will indicate the maximum number of repositories that should be requested. For the average application requesting 8 permissions, this limit is around 5000 repositories. With fewer permissions requested, more repositories are supported.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
installation_id = 1 # Integer | The unique identifier of the installation.
opts = {
  apps_create_installation_access_token_request: OpenapiClient::AppsCreateInstallationAccessTokenRequest.new # AppsCreateInstallationAccessTokenRequest | 
}

begin
  # Create an installation access token for an app
  result = api_instance.apps_create_installation_access_token(installation_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_create_installation_access_token: #{e}"
end
```

#### Using the apps_create_installation_access_token_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<InstallationToken>, Integer, Hash)> apps_create_installation_access_token_with_http_info(installation_id, opts)

```ruby
begin
  # Create an installation access token for an app
  data, status_code, headers = api_instance.apps_create_installation_access_token_with_http_info(installation_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <InstallationToken>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_create_installation_access_token_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **installation_id** | **Integer** | The unique identifier of the installation. |  |
| **apps_create_installation_access_token_request** | [**AppsCreateInstallationAccessTokenRequest**](AppsCreateInstallationAccessTokenRequest.md) |  | [optional] |

### Return type

[**InstallationToken**](InstallationToken.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## apps_delete_authorization

> apps_delete_authorization(client_id, apps_delete_authorization_request)

Delete an app authorization

OAuth and GitHub application owners can revoke a grant for their application and a specific user. You must provide a valid OAuth `access_token` as an input parameter and the grant for the token's owner will be deleted. Deleting an application's grant will also delete all OAuth tokens associated with the application for the user. Once deleted, the application will have no access to the user's account and will no longer be listed on [the application authorizations settings screen within GitHub](https://github.com/settings/applications#authorized).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
client_id = 'Iv1.8a61f9b3a7aba766' # String | The client ID of the GitHub app.
apps_delete_authorization_request = OpenapiClient::AppsDeleteAuthorizationRequest.new({access_token: 'access_token_example'}) # AppsDeleteAuthorizationRequest | 

begin
  # Delete an app authorization
  api_instance.apps_delete_authorization(client_id, apps_delete_authorization_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_delete_authorization: #{e}"
end
```

#### Using the apps_delete_authorization_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> apps_delete_authorization_with_http_info(client_id, apps_delete_authorization_request)

```ruby
begin
  # Delete an app authorization
  data, status_code, headers = api_instance.apps_delete_authorization_with_http_info(client_id, apps_delete_authorization_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_delete_authorization_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **client_id** | **String** | The client ID of the GitHub app. |  |
| **apps_delete_authorization_request** | [**AppsDeleteAuthorizationRequest**](AppsDeleteAuthorizationRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## apps_delete_installation

> apps_delete_installation(installation_id)

Delete an installation for the authenticated app

Uninstalls a GitHub App on a user, organization, or business account. If you prefer to temporarily suspend an app's access to your account's resources, then we recommend the \"[Suspend an app installation](https://docs.github.com/rest/apps/apps#suspend-an-app-installation)\" endpoint.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
installation_id = 1 # Integer | The unique identifier of the installation.

begin
  # Delete an installation for the authenticated app
  api_instance.apps_delete_installation(installation_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_delete_installation: #{e}"
end
```

#### Using the apps_delete_installation_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> apps_delete_installation_with_http_info(installation_id)

```ruby
begin
  # Delete an installation for the authenticated app
  data, status_code, headers = api_instance.apps_delete_installation_with_http_info(installation_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_delete_installation_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **installation_id** | **Integer** | The unique identifier of the installation. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_delete_token

> apps_delete_token(client_id, apps_delete_authorization_request)

Delete an app token

OAuth  or GitHub application owners can revoke a single token for an OAuth application or a GitHub application with an OAuth authorization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
client_id = 'Iv1.8a61f9b3a7aba766' # String | The client ID of the GitHub app.
apps_delete_authorization_request = OpenapiClient::AppsDeleteAuthorizationRequest.new({access_token: 'access_token_example'}) # AppsDeleteAuthorizationRequest | 

begin
  # Delete an app token
  api_instance.apps_delete_token(client_id, apps_delete_authorization_request)
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_delete_token: #{e}"
end
```

#### Using the apps_delete_token_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> apps_delete_token_with_http_info(client_id, apps_delete_authorization_request)

```ruby
begin
  # Delete an app token
  data, status_code, headers = api_instance.apps_delete_token_with_http_info(client_id, apps_delete_authorization_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_delete_token_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **client_id** | **String** | The client ID of the GitHub app. |  |
| **apps_delete_authorization_request** | [**AppsDeleteAuthorizationRequest**](AppsDeleteAuthorizationRequest.md) |  |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## apps_get_authenticated

> <Integration> apps_get_authenticated

Get the authenticated app

Returns the GitHub App associated with the authentication credentials used. To see how many app installations are associated with this GitHub App, see the `installations_count` in the response. For more details about your app's installations, see the \"[List installations for the authenticated app](https://docs.github.com/rest/apps/apps#list-installations-for-the-authenticated-app)\" endpoint.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new

begin
  # Get the authenticated app
  result = api_instance.apps_get_authenticated
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_authenticated: #{e}"
end
```

#### Using the apps_get_authenticated_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Integration>, Integer, Hash)> apps_get_authenticated_with_http_info

```ruby
begin
  # Get the authenticated app
  data, status_code, headers = api_instance.apps_get_authenticated_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Integration>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_authenticated_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Integration**](Integration.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_get_by_slug

> <Integration> apps_get_by_slug(app_slug)

Get an app

**Note**: The `:app_slug` is just the URL-friendly name of your GitHub App. You can find this on the settings page for your GitHub App (e.g., `https://github.com/settings/apps/:app_slug`).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
app_slug = 'app_slug_example' # String | 

begin
  # Get an app
  result = api_instance.apps_get_by_slug(app_slug)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_by_slug: #{e}"
end
```

#### Using the apps_get_by_slug_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Integration>, Integer, Hash)> apps_get_by_slug_with_http_info(app_slug)

```ruby
begin
  # Get an app
  data, status_code, headers = api_instance.apps_get_by_slug_with_http_info(app_slug)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Integration>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_by_slug_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **app_slug** | **String** |  |  |

### Return type

[**Integration**](Integration.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_get_installation

> <Installation> apps_get_installation(installation_id)

Get an installation for the authenticated app

Enables an authenticated GitHub App to find an installation's information using the installation id.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
installation_id = 1 # Integer | The unique identifier of the installation.

begin
  # Get an installation for the authenticated app
  result = api_instance.apps_get_installation(installation_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_installation: #{e}"
end
```

#### Using the apps_get_installation_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Installation>, Integer, Hash)> apps_get_installation_with_http_info(installation_id)

```ruby
begin
  # Get an installation for the authenticated app
  data, status_code, headers = api_instance.apps_get_installation_with_http_info(installation_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Installation>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_installation_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **installation_id** | **Integer** | The unique identifier of the installation. |  |

### Return type

[**Installation**](Installation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_get_org_installation

> <Installation> apps_get_org_installation(org)

Get an organization installation for the authenticated app

Enables an authenticated GitHub App to find the organization's installation information.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get an organization installation for the authenticated app
  result = api_instance.apps_get_org_installation(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_org_installation: #{e}"
end
```

#### Using the apps_get_org_installation_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Installation>, Integer, Hash)> apps_get_org_installation_with_http_info(org)

```ruby
begin
  # Get an organization installation for the authenticated app
  data, status_code, headers = api_instance.apps_get_org_installation_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Installation>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_org_installation_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**Installation**](Installation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_get_repo_installation

> <Installation> apps_get_repo_installation(owner, repo)

Get a repository installation for the authenticated app

Enables an authenticated GitHub App to find the repository's installation information. The installation's account type will be either an organization or a user account, depending which account the repository belongs to.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get a repository installation for the authenticated app
  result = api_instance.apps_get_repo_installation(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_repo_installation: #{e}"
end
```

#### Using the apps_get_repo_installation_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Installation>, Integer, Hash)> apps_get_repo_installation_with_http_info(owner, repo)

```ruby
begin
  # Get a repository installation for the authenticated app
  data, status_code, headers = api_instance.apps_get_repo_installation_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Installation>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_repo_installation_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**Installation**](Installation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_get_subscription_plan_for_account

> <MarketplacePurchase> apps_get_subscription_plan_for_account(account_id)

Get a subscription plan for an account

Shows whether the user or organization account actively subscribes to a plan listed by the authenticated GitHub App. When someone submits a plan change that won't be processed until the end of their billing cycle, you will also see the upcoming pending change.  GitHub Apps must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint. OAuth apps must use [basic authentication](https://docs.github.com/rest/authentication/authenticating-to-the-rest-api#using-basic-authentication) with their client ID and client secret to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
account_id = 56 # Integer | account_id parameter

begin
  # Get a subscription plan for an account
  result = api_instance.apps_get_subscription_plan_for_account(account_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_subscription_plan_for_account: #{e}"
end
```

#### Using the apps_get_subscription_plan_for_account_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<MarketplacePurchase>, Integer, Hash)> apps_get_subscription_plan_for_account_with_http_info(account_id)

```ruby
begin
  # Get a subscription plan for an account
  data, status_code, headers = api_instance.apps_get_subscription_plan_for_account_with_http_info(account_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <MarketplacePurchase>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_subscription_plan_for_account_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **account_id** | **Integer** | account_id parameter |  |

### Return type

[**MarketplacePurchase**](MarketplacePurchase.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_get_subscription_plan_for_account_stubbed

> <MarketplacePurchase> apps_get_subscription_plan_for_account_stubbed(account_id)

Get a subscription plan for an account (stubbed)

Shows whether the user or organization account actively subscribes to a plan listed by the authenticated GitHub App. When someone submits a plan change that won't be processed until the end of their billing cycle, you will also see the upcoming pending change.  GitHub Apps must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint. OAuth apps must use [basic authentication](https://docs.github.com/rest/authentication/authenticating-to-the-rest-api#using-basic-authentication) with their client ID and client secret to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
account_id = 56 # Integer | account_id parameter

begin
  # Get a subscription plan for an account (stubbed)
  result = api_instance.apps_get_subscription_plan_for_account_stubbed(account_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_subscription_plan_for_account_stubbed: #{e}"
end
```

#### Using the apps_get_subscription_plan_for_account_stubbed_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<MarketplacePurchase>, Integer, Hash)> apps_get_subscription_plan_for_account_stubbed_with_http_info(account_id)

```ruby
begin
  # Get a subscription plan for an account (stubbed)
  data, status_code, headers = api_instance.apps_get_subscription_plan_for_account_stubbed_with_http_info(account_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <MarketplacePurchase>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_subscription_plan_for_account_stubbed_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **account_id** | **Integer** | account_id parameter |  |

### Return type

[**MarketplacePurchase**](MarketplacePurchase.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_get_user_installation

> <Installation> apps_get_user_installation(username)

Get a user installation for the authenticated app

Enables an authenticated GitHub App to find the user’s installation information.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Get a user installation for the authenticated app
  result = api_instance.apps_get_user_installation(username)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_user_installation: #{e}"
end
```

#### Using the apps_get_user_installation_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Installation>, Integer, Hash)> apps_get_user_installation_with_http_info(username)

```ruby
begin
  # Get a user installation for the authenticated app
  data, status_code, headers = api_instance.apps_get_user_installation_with_http_info(username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Installation>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_user_installation_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

[**Installation**](Installation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_get_webhook_config_for_app

> <WebhookConfig> apps_get_webhook_config_for_app

Get a webhook configuration for an app

Returns the webhook configuration for a GitHub App. For more information about configuring a webhook for your app, see \"[Creating a GitHub App](/developers/apps/creating-a-github-app).\"  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new

begin
  # Get a webhook configuration for an app
  result = api_instance.apps_get_webhook_config_for_app
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_webhook_config_for_app: #{e}"
end
```

#### Using the apps_get_webhook_config_for_app_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<WebhookConfig>, Integer, Hash)> apps_get_webhook_config_for_app_with_http_info

```ruby
begin
  # Get a webhook configuration for an app
  data, status_code, headers = api_instance.apps_get_webhook_config_for_app_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <WebhookConfig>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_webhook_config_for_app_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**WebhookConfig**](WebhookConfig.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_get_webhook_delivery

> <HookDelivery> apps_get_webhook_delivery(delivery_id)

Get a delivery for an app webhook

Returns a delivery for the webhook configured for a GitHub App.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
delivery_id = 56 # Integer | 

begin
  # Get a delivery for an app webhook
  result = api_instance.apps_get_webhook_delivery(delivery_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_webhook_delivery: #{e}"
end
```

#### Using the apps_get_webhook_delivery_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<HookDelivery>, Integer, Hash)> apps_get_webhook_delivery_with_http_info(delivery_id)

```ruby
begin
  # Get a delivery for an app webhook
  data, status_code, headers = api_instance.apps_get_webhook_delivery_with_http_info(delivery_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <HookDelivery>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_get_webhook_delivery_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **delivery_id** | **Integer** |  |  |

### Return type

[**HookDelivery**](HookDelivery.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## apps_list_accounts_for_plan

> <Array<MarketplacePurchase>> apps_list_accounts_for_plan(plan_id, opts)

List accounts for a plan

Returns user and organization accounts associated with the specified plan, including free plans. For per-seat pricing, you see the list of accounts that have purchased the plan, including the number of seats purchased. When someone submits a plan change that won't be processed until the end of their billing cycle, you will also see the upcoming pending change.  GitHub Apps must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint. OAuth apps must use [basic authentication](https://docs.github.com/rest/authentication/authenticating-to-the-rest-api#using-basic-authentication) with their client ID and client secret to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
plan_id = 56 # Integer | The unique identifier of the plan.
opts = {
  sort: 'created', # String | The property to sort the results by.
  direction: 'asc', # String | To return the oldest accounts first, set to `asc`. Ignored without the `sort` parameter.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List accounts for a plan
  result = api_instance.apps_list_accounts_for_plan(plan_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_accounts_for_plan: #{e}"
end
```

#### Using the apps_list_accounts_for_plan_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<MarketplacePurchase>>, Integer, Hash)> apps_list_accounts_for_plan_with_http_info(plan_id, opts)

```ruby
begin
  # List accounts for a plan
  data, status_code, headers = api_instance.apps_list_accounts_for_plan_with_http_info(plan_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<MarketplacePurchase>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_accounts_for_plan_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **plan_id** | **Integer** | The unique identifier of the plan. |  |
| **sort** | **String** | The property to sort the results by. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | To return the oldest accounts first, set to &#x60;asc&#x60;. Ignored without the &#x60;sort&#x60; parameter. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;MarketplacePurchase&gt;**](MarketplacePurchase.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_list_accounts_for_plan_stubbed

> <Array<MarketplacePurchase>> apps_list_accounts_for_plan_stubbed(plan_id, opts)

List accounts for a plan (stubbed)

Returns repository and organization accounts associated with the specified plan, including free plans. For per-seat pricing, you see the list of accounts that have purchased the plan, including the number of seats purchased. When someone submits a plan change that won't be processed until the end of their billing cycle, you will also see the upcoming pending change.  GitHub Apps must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint. OAuth apps must use [basic authentication](https://docs.github.com/rest/authentication/authenticating-to-the-rest-api#using-basic-authentication) with their client ID and client secret to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
plan_id = 56 # Integer | The unique identifier of the plan.
opts = {
  sort: 'created', # String | The property to sort the results by.
  direction: 'asc', # String | To return the oldest accounts first, set to `asc`. Ignored without the `sort` parameter.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List accounts for a plan (stubbed)
  result = api_instance.apps_list_accounts_for_plan_stubbed(plan_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_accounts_for_plan_stubbed: #{e}"
end
```

#### Using the apps_list_accounts_for_plan_stubbed_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<MarketplacePurchase>>, Integer, Hash)> apps_list_accounts_for_plan_stubbed_with_http_info(plan_id, opts)

```ruby
begin
  # List accounts for a plan (stubbed)
  data, status_code, headers = api_instance.apps_list_accounts_for_plan_stubbed_with_http_info(plan_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<MarketplacePurchase>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_accounts_for_plan_stubbed_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **plan_id** | **Integer** | The unique identifier of the plan. |  |
| **sort** | **String** | The property to sort the results by. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | To return the oldest accounts first, set to &#x60;asc&#x60;. Ignored without the &#x60;sort&#x60; parameter. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;MarketplacePurchase&gt;**](MarketplacePurchase.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_list_installation_repos_for_authenticated_user

> <AppsListInstallationReposForAuthenticatedUser200Response> apps_list_installation_repos_for_authenticated_user(installation_id, opts)

List repositories accessible to the user access token

List repositories that the authenticated user has explicit permission (`:read`, `:write`, or `:admin`) to access for an installation.  The authenticated user has explicit permission to access repositories they own, repositories where they are a collaborator, and repositories that they can access through an organization membership.  The access the user has to each repository is included in the hash under the `permissions` key.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
installation_id = 1 # Integer | The unique identifier of the installation.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repositories accessible to the user access token
  result = api_instance.apps_list_installation_repos_for_authenticated_user(installation_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_installation_repos_for_authenticated_user: #{e}"
end
```

#### Using the apps_list_installation_repos_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AppsListInstallationReposForAuthenticatedUser200Response>, Integer, Hash)> apps_list_installation_repos_for_authenticated_user_with_http_info(installation_id, opts)

```ruby
begin
  # List repositories accessible to the user access token
  data, status_code, headers = api_instance.apps_list_installation_repos_for_authenticated_user_with_http_info(installation_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AppsListInstallationReposForAuthenticatedUser200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_installation_repos_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **installation_id** | **Integer** | The unique identifier of the installation. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**AppsListInstallationReposForAuthenticatedUser200Response**](AppsListInstallationReposForAuthenticatedUser200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_list_installation_requests_for_authenticated_app

> <Array<IntegrationInstallationRequest>> apps_list_installation_requests_for_authenticated_app(opts)

List installation requests for the authenticated app

Lists all the pending installation requests for the authenticated GitHub App.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List installation requests for the authenticated app
  result = api_instance.apps_list_installation_requests_for_authenticated_app(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_installation_requests_for_authenticated_app: #{e}"
end
```

#### Using the apps_list_installation_requests_for_authenticated_app_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<IntegrationInstallationRequest>>, Integer, Hash)> apps_list_installation_requests_for_authenticated_app_with_http_info(opts)

```ruby
begin
  # List installation requests for the authenticated app
  data, status_code, headers = api_instance.apps_list_installation_requests_for_authenticated_app_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<IntegrationInstallationRequest>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_installation_requests_for_authenticated_app_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;IntegrationInstallationRequest&gt;**](IntegrationInstallationRequest.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_list_installations

> <Array<Installation>> apps_list_installations(opts)

List installations for the authenticated app

The permissions the installation has are included under the `permissions` key.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  outdated: 'outdated_example' # String | 
}

begin
  # List installations for the authenticated app
  result = api_instance.apps_list_installations(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_installations: #{e}"
end
```

#### Using the apps_list_installations_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<Installation>>, Integer, Hash)> apps_list_installations_with_http_info(opts)

```ruby
begin
  # List installations for the authenticated app
  data, status_code, headers = api_instance.apps_list_installations_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<Installation>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_installations_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **outdated** | **String** |  | [optional] |

### Return type

[**Array&lt;Installation&gt;**](Installation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_list_installations_for_authenticated_user

> <OrgsListAppInstallations200Response> apps_list_installations_for_authenticated_user(opts)

List app installations accessible to the user access token

Lists installations of your GitHub App that the authenticated user has explicit permission (`:read`, `:write`, or `:admin`) to access.  The authenticated user has explicit permission to access repositories they own, repositories where they are a collaborator, and repositories that they can access through an organization membership.  You can find the permissions for the installation under the `permissions` key.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List app installations accessible to the user access token
  result = api_instance.apps_list_installations_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_installations_for_authenticated_user: #{e}"
end
```

#### Using the apps_list_installations_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrgsListAppInstallations200Response>, Integer, Hash)> apps_list_installations_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List app installations accessible to the user access token
  data, status_code, headers = api_instance.apps_list_installations_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrgsListAppInstallations200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_installations_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**OrgsListAppInstallations200Response**](OrgsListAppInstallations200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_list_plans

> <Array<MarketplaceListingPlan>> apps_list_plans(opts)

List plans

Lists all plans that are part of your GitHub Marketplace listing.  GitHub Apps must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint. OAuth apps must use [basic authentication](https://docs.github.com/rest/authentication/authenticating-to-the-rest-api#using-basic-authentication) with their client ID and client secret to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List plans
  result = api_instance.apps_list_plans(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_plans: #{e}"
end
```

#### Using the apps_list_plans_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<MarketplaceListingPlan>>, Integer, Hash)> apps_list_plans_with_http_info(opts)

```ruby
begin
  # List plans
  data, status_code, headers = api_instance.apps_list_plans_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<MarketplaceListingPlan>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_plans_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;MarketplaceListingPlan&gt;**](MarketplaceListingPlan.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_list_plans_stubbed

> <Array<MarketplaceListingPlan>> apps_list_plans_stubbed(opts)

List plans (stubbed)

Lists all plans that are part of your GitHub Marketplace listing.  GitHub Apps must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint. OAuth apps must use [basic authentication](https://docs.github.com/rest/authentication/authenticating-to-the-rest-api#using-basic-authentication) with their client ID and client secret to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List plans (stubbed)
  result = api_instance.apps_list_plans_stubbed(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_plans_stubbed: #{e}"
end
```

#### Using the apps_list_plans_stubbed_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<MarketplaceListingPlan>>, Integer, Hash)> apps_list_plans_stubbed_with_http_info(opts)

```ruby
begin
  # List plans (stubbed)
  data, status_code, headers = api_instance.apps_list_plans_stubbed_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<MarketplaceListingPlan>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_plans_stubbed_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;MarketplaceListingPlan&gt;**](MarketplaceListingPlan.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_list_repos_accessible_to_installation

> <AppsListReposAccessibleToInstallation200Response> apps_list_repos_accessible_to_installation(opts)

List repositories accessible to the app installation

List repositories that an app installation can access.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List repositories accessible to the app installation
  result = api_instance.apps_list_repos_accessible_to_installation(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_repos_accessible_to_installation: #{e}"
end
```

#### Using the apps_list_repos_accessible_to_installation_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AppsListReposAccessibleToInstallation200Response>, Integer, Hash)> apps_list_repos_accessible_to_installation_with_http_info(opts)

```ruby
begin
  # List repositories accessible to the app installation
  data, status_code, headers = api_instance.apps_list_repos_accessible_to_installation_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AppsListReposAccessibleToInstallation200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_repos_accessible_to_installation_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**AppsListReposAccessibleToInstallation200Response**](AppsListReposAccessibleToInstallation200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_list_subscriptions_for_authenticated_user

> <Array<UserMarketplacePurchase>> apps_list_subscriptions_for_authenticated_user(opts)

List subscriptions for the authenticated user

Lists the active subscriptions for the authenticated user.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List subscriptions for the authenticated user
  result = api_instance.apps_list_subscriptions_for_authenticated_user(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_subscriptions_for_authenticated_user: #{e}"
end
```

#### Using the apps_list_subscriptions_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<UserMarketplacePurchase>>, Integer, Hash)> apps_list_subscriptions_for_authenticated_user_with_http_info(opts)

```ruby
begin
  # List subscriptions for the authenticated user
  data, status_code, headers = api_instance.apps_list_subscriptions_for_authenticated_user_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<UserMarketplacePurchase>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_subscriptions_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;UserMarketplacePurchase&gt;**](UserMarketplacePurchase.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_list_subscriptions_for_authenticated_user_stubbed

> <Array<UserMarketplacePurchase>> apps_list_subscriptions_for_authenticated_user_stubbed(opts)

List subscriptions for the authenticated user (stubbed)

Lists the active subscriptions for the authenticated user.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List subscriptions for the authenticated user (stubbed)
  result = api_instance.apps_list_subscriptions_for_authenticated_user_stubbed(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_subscriptions_for_authenticated_user_stubbed: #{e}"
end
```

#### Using the apps_list_subscriptions_for_authenticated_user_stubbed_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<UserMarketplacePurchase>>, Integer, Hash)> apps_list_subscriptions_for_authenticated_user_stubbed_with_http_info(opts)

```ruby
begin
  # List subscriptions for the authenticated user (stubbed)
  data, status_code, headers = api_instance.apps_list_subscriptions_for_authenticated_user_stubbed_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<UserMarketplacePurchase>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_subscriptions_for_authenticated_user_stubbed_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;UserMarketplacePurchase&gt;**](UserMarketplacePurchase.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_list_webhook_deliveries

> <Array<HookDeliveryItem>> apps_list_webhook_deliveries(opts)

List deliveries for an app webhook

Returns a list of webhook deliveries for the webhook configured for a GitHub App.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  cursor: 'cursor_example', # String | Used for pagination: the starting delivery from which the page of deliveries is fetched. Refer to the `link` header for the next and previous page cursors.
  redelivery: true # Boolean | 
}

begin
  # List deliveries for an app webhook
  result = api_instance.apps_list_webhook_deliveries(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_webhook_deliveries: #{e}"
end
```

#### Using the apps_list_webhook_deliveries_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<HookDeliveryItem>>, Integer, Hash)> apps_list_webhook_deliveries_with_http_info(opts)

```ruby
begin
  # List deliveries for an app webhook
  data, status_code, headers = api_instance.apps_list_webhook_deliveries_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<HookDeliveryItem>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_list_webhook_deliveries_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **cursor** | **String** | Used for pagination: the starting delivery from which the page of deliveries is fetched. Refer to the &#x60;link&#x60; header for the next and previous page cursors. | [optional] |
| **redelivery** | **Boolean** |  | [optional] |

### Return type

[**Array&lt;HookDeliveryItem&gt;**](HookDeliveryItem.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## apps_redeliver_webhook_delivery

> Object apps_redeliver_webhook_delivery(delivery_id)

Redeliver a delivery for an app webhook

Redeliver a delivery for the webhook configured for a GitHub App.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
delivery_id = 56 # Integer | 

begin
  # Redeliver a delivery for an app webhook
  result = api_instance.apps_redeliver_webhook_delivery(delivery_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_redeliver_webhook_delivery: #{e}"
end
```

#### Using the apps_redeliver_webhook_delivery_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> apps_redeliver_webhook_delivery_with_http_info(delivery_id)

```ruby
begin
  # Redeliver a delivery for an app webhook
  data, status_code, headers = api_instance.apps_redeliver_webhook_delivery_with_http_info(delivery_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_redeliver_webhook_delivery_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **delivery_id** | **Integer** |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## apps_remove_repo_from_installation_for_authenticated_user

> apps_remove_repo_from_installation_for_authenticated_user(installation_id, repository_id)

Remove a repository from an app installation

Remove a single repository from an installation. The authenticated user must have admin access to the repository. The installation must have the `repository_selection` of `selected`.   This endpoint only works for PATs (classic) with the `repo` scope.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
installation_id = 1 # Integer | The unique identifier of the installation.
repository_id = 56 # Integer | The unique identifier of the repository.

begin
  # Remove a repository from an app installation
  api_instance.apps_remove_repo_from_installation_for_authenticated_user(installation_id, repository_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_remove_repo_from_installation_for_authenticated_user: #{e}"
end
```

#### Using the apps_remove_repo_from_installation_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> apps_remove_repo_from_installation_for_authenticated_user_with_http_info(installation_id, repository_id)

```ruby
begin
  # Remove a repository from an app installation
  data, status_code, headers = api_instance.apps_remove_repo_from_installation_for_authenticated_user_with_http_info(installation_id, repository_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_remove_repo_from_installation_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **installation_id** | **Integer** | The unique identifier of the installation. |  |
| **repository_id** | **Integer** | The unique identifier of the repository. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_reset_token

> <Authorization> apps_reset_token(client_id, apps_check_token_request)

Reset a token

OAuth applications and GitHub applications with OAuth authorizations can use this API method to reset a valid OAuth token without end-user involvement. Applications must save the \"token\" property in the response because changes take effect immediately. Invalid tokens will return `404 NOT FOUND`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
client_id = 'Iv1.8a61f9b3a7aba766' # String | The client ID of the GitHub app.
apps_check_token_request = OpenapiClient::AppsCheckTokenRequest.new({access_token: 'access_token_example'}) # AppsCheckTokenRequest | 

begin
  # Reset a token
  result = api_instance.apps_reset_token(client_id, apps_check_token_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_reset_token: #{e}"
end
```

#### Using the apps_reset_token_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Authorization>, Integer, Hash)> apps_reset_token_with_http_info(client_id, apps_check_token_request)

```ruby
begin
  # Reset a token
  data, status_code, headers = api_instance.apps_reset_token_with_http_info(client_id, apps_check_token_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Authorization>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_reset_token_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **client_id** | **String** | The client ID of the GitHub app. |  |
| **apps_check_token_request** | [**AppsCheckTokenRequest**](AppsCheckTokenRequest.md) |  |  |

### Return type

[**Authorization**](Authorization.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## apps_revoke_installation_access_token

> apps_revoke_installation_access_token

Revoke an installation access token

Revokes the installation token you're using to authenticate as an installation and access this endpoint.  Once an installation token is revoked, the token is invalidated and cannot be used. Other endpoints that require the revoked installation token must have a new installation token to work. You can create a new token using the \"[Create an installation access token for an app](https://docs.github.com/rest/apps/apps#create-an-installation-access-token-for-an-app)\" endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new

begin
  # Revoke an installation access token
  api_instance.apps_revoke_installation_access_token
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_revoke_installation_access_token: #{e}"
end
```

#### Using the apps_revoke_installation_access_token_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> apps_revoke_installation_access_token_with_http_info

```ruby
begin
  # Revoke an installation access token
  data, status_code, headers = api_instance.apps_revoke_installation_access_token_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_revoke_installation_access_token_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## apps_scope_token

> <Authorization> apps_scope_token(client_id, apps_scope_token_request)

Create a scoped access token

Use a non-scoped user access token to create a repository-scoped and/or permission-scoped user access token. You can specify which repositories the token can access and which permissions are granted to the token.  Invalid tokens will return `404 NOT FOUND`.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
client_id = 'Iv1.8a61f9b3a7aba766' # String | The client ID of the GitHub app.
apps_scope_token_request = OpenapiClient::AppsScopeTokenRequest.new({access_token: 'e72e16c7e42f292c6912e7710c838347ae178b4a'}) # AppsScopeTokenRequest | 

begin
  # Create a scoped access token
  result = api_instance.apps_scope_token(client_id, apps_scope_token_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_scope_token: #{e}"
end
```

#### Using the apps_scope_token_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Authorization>, Integer, Hash)> apps_scope_token_with_http_info(client_id, apps_scope_token_request)

```ruby
begin
  # Create a scoped access token
  data, status_code, headers = api_instance.apps_scope_token_with_http_info(client_id, apps_scope_token_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Authorization>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_scope_token_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **client_id** | **String** | The client ID of the GitHub app. |  |
| **apps_scope_token_request** | [**AppsScopeTokenRequest**](AppsScopeTokenRequest.md) |  |  |

### Return type

[**Authorization**](Authorization.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## apps_suspend_installation

> apps_suspend_installation(installation_id)

Suspend an app installation

Suspends a GitHub App on a user, organization, or business account, which blocks the app from accessing the account's resources. When a GitHub App is suspended, the app's access to the GitHub API or webhook events is blocked for that account.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
installation_id = 1 # Integer | The unique identifier of the installation.

begin
  # Suspend an app installation
  api_instance.apps_suspend_installation(installation_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_suspend_installation: #{e}"
end
```

#### Using the apps_suspend_installation_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> apps_suspend_installation_with_http_info(installation_id)

```ruby
begin
  # Suspend an app installation
  data, status_code, headers = api_instance.apps_suspend_installation_with_http_info(installation_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_suspend_installation_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **installation_id** | **Integer** | The unique identifier of the installation. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_unsuspend_installation

> apps_unsuspend_installation(installation_id)

Unsuspend an app installation

Removes a GitHub App installation suspension.  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
installation_id = 1 # Integer | The unique identifier of the installation.

begin
  # Unsuspend an app installation
  api_instance.apps_unsuspend_installation(installation_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_unsuspend_installation: #{e}"
end
```

#### Using the apps_unsuspend_installation_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> apps_unsuspend_installation_with_http_info(installation_id)

```ruby
begin
  # Unsuspend an app installation
  data, status_code, headers = api_instance.apps_unsuspend_installation_with_http_info(installation_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_unsuspend_installation_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **installation_id** | **Integer** | The unique identifier of the installation. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## apps_update_webhook_config_for_app

> <WebhookConfig> apps_update_webhook_config_for_app(apps_update_webhook_config_for_app_request)

Update a webhook configuration for an app

Updates the webhook configuration for a GitHub App. For more information about configuring a webhook for your app, see \"[Creating a GitHub App](/developers/apps/creating-a-github-app).\"  You must use a [JWT](https://docs.github.com/apps/building-github-apps/authenticating-with-github-apps/#authenticating-as-a-github-app) to access this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::AppsApi.new
apps_update_webhook_config_for_app_request = OpenapiClient::AppsUpdateWebhookConfigForAppRequest.new # AppsUpdateWebhookConfigForAppRequest | 

begin
  # Update a webhook configuration for an app
  result = api_instance.apps_update_webhook_config_for_app(apps_update_webhook_config_for_app_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_update_webhook_config_for_app: #{e}"
end
```

#### Using the apps_update_webhook_config_for_app_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<WebhookConfig>, Integer, Hash)> apps_update_webhook_config_for_app_with_http_info(apps_update_webhook_config_for_app_request)

```ruby
begin
  # Update a webhook configuration for an app
  data, status_code, headers = api_instance.apps_update_webhook_config_for_app_with_http_info(apps_update_webhook_config_for_app_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <WebhookConfig>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AppsApi->apps_update_webhook_config_for_app_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **apps_update_webhook_config_for_app_request** | [**AppsUpdateWebhookConfigForAppRequest**](AppsUpdateWebhookConfigForAppRequest.md) |  |  |

### Return type

[**WebhookConfig**](WebhookConfig.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

