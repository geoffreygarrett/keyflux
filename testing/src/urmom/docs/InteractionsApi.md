# OpenapiClient::InteractionsApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**interactions_get_restrictions_for_authenticated_user**](InteractionsApi.md#interactions_get_restrictions_for_authenticated_user) | **GET** /user/interaction-limits | Get interaction restrictions for your public repositories |
| [**interactions_get_restrictions_for_org**](InteractionsApi.md#interactions_get_restrictions_for_org) | **GET** /orgs/{org}/interaction-limits | Get interaction restrictions for an organization |
| [**interactions_get_restrictions_for_repo**](InteractionsApi.md#interactions_get_restrictions_for_repo) | **GET** /repos/{owner}/{repo}/interaction-limits | Get interaction restrictions for a repository |
| [**interactions_remove_restrictions_for_authenticated_user**](InteractionsApi.md#interactions_remove_restrictions_for_authenticated_user) | **DELETE** /user/interaction-limits | Remove interaction restrictions from your public repositories |
| [**interactions_remove_restrictions_for_org**](InteractionsApi.md#interactions_remove_restrictions_for_org) | **DELETE** /orgs/{org}/interaction-limits | Remove interaction restrictions for an organization |
| [**interactions_remove_restrictions_for_repo**](InteractionsApi.md#interactions_remove_restrictions_for_repo) | **DELETE** /repos/{owner}/{repo}/interaction-limits | Remove interaction restrictions for a repository |
| [**interactions_set_restrictions_for_authenticated_user**](InteractionsApi.md#interactions_set_restrictions_for_authenticated_user) | **PUT** /user/interaction-limits | Set interaction restrictions for your public repositories |
| [**interactions_set_restrictions_for_org**](InteractionsApi.md#interactions_set_restrictions_for_org) | **PUT** /orgs/{org}/interaction-limits | Set interaction restrictions for an organization |
| [**interactions_set_restrictions_for_repo**](InteractionsApi.md#interactions_set_restrictions_for_repo) | **PUT** /repos/{owner}/{repo}/interaction-limits | Set interaction restrictions for a repository |


## interactions_get_restrictions_for_authenticated_user

> <InteractionsGetRestrictionsForOrg200Response> interactions_get_restrictions_for_authenticated_user

Get interaction restrictions for your public repositories

Shows which type of GitHub user can interact with your public repositories and when the restriction expires.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::InteractionsApi.new

begin
  # Get interaction restrictions for your public repositories
  result = api_instance.interactions_get_restrictions_for_authenticated_user
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_get_restrictions_for_authenticated_user: #{e}"
end
```

#### Using the interactions_get_restrictions_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<InteractionsGetRestrictionsForOrg200Response>, Integer, Hash)> interactions_get_restrictions_for_authenticated_user_with_http_info

```ruby
begin
  # Get interaction restrictions for your public repositories
  data, status_code, headers = api_instance.interactions_get_restrictions_for_authenticated_user_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <InteractionsGetRestrictionsForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_get_restrictions_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**InteractionsGetRestrictionsForOrg200Response**](InteractionsGetRestrictionsForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## interactions_get_restrictions_for_org

> <InteractionsGetRestrictionsForOrg200Response> interactions_get_restrictions_for_org(org)

Get interaction restrictions for an organization

Shows which type of GitHub user can interact with this organization and when the restriction expires. If there is no restrictions, you will see an empty response.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::InteractionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get interaction restrictions for an organization
  result = api_instance.interactions_get_restrictions_for_org(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_get_restrictions_for_org: #{e}"
end
```

#### Using the interactions_get_restrictions_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<InteractionsGetRestrictionsForOrg200Response>, Integer, Hash)> interactions_get_restrictions_for_org_with_http_info(org)

```ruby
begin
  # Get interaction restrictions for an organization
  data, status_code, headers = api_instance.interactions_get_restrictions_for_org_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <InteractionsGetRestrictionsForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_get_restrictions_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**InteractionsGetRestrictionsForOrg200Response**](InteractionsGetRestrictionsForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## interactions_get_restrictions_for_repo

> <InteractionsGetRestrictionsForOrg200Response> interactions_get_restrictions_for_repo(owner, repo)

Get interaction restrictions for a repository

Shows which type of GitHub user can interact with this repository and when the restriction expires. If there are no restrictions, you will see an empty response.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::InteractionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Get interaction restrictions for a repository
  result = api_instance.interactions_get_restrictions_for_repo(owner, repo)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_get_restrictions_for_repo: #{e}"
end
```

#### Using the interactions_get_restrictions_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<InteractionsGetRestrictionsForOrg200Response>, Integer, Hash)> interactions_get_restrictions_for_repo_with_http_info(owner, repo)

```ruby
begin
  # Get interaction restrictions for a repository
  data, status_code, headers = api_instance.interactions_get_restrictions_for_repo_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <InteractionsGetRestrictionsForOrg200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_get_restrictions_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

[**InteractionsGetRestrictionsForOrg200Response**](InteractionsGetRestrictionsForOrg200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## interactions_remove_restrictions_for_authenticated_user

> interactions_remove_restrictions_for_authenticated_user

Remove interaction restrictions from your public repositories

Removes any interaction restrictions from your public repositories.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::InteractionsApi.new

begin
  # Remove interaction restrictions from your public repositories
  api_instance.interactions_remove_restrictions_for_authenticated_user
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_remove_restrictions_for_authenticated_user: #{e}"
end
```

#### Using the interactions_remove_restrictions_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> interactions_remove_restrictions_for_authenticated_user_with_http_info

```ruby
begin
  # Remove interaction restrictions from your public repositories
  data, status_code, headers = api_instance.interactions_remove_restrictions_for_authenticated_user_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_remove_restrictions_for_authenticated_user_with_http_info: #{e}"
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


## interactions_remove_restrictions_for_org

> interactions_remove_restrictions_for_org(org)

Remove interaction restrictions for an organization

Removes all interaction restrictions from public repositories in the given organization. You must be an organization owner to remove restrictions.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::InteractionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Remove interaction restrictions for an organization
  api_instance.interactions_remove_restrictions_for_org(org)
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_remove_restrictions_for_org: #{e}"
end
```

#### Using the interactions_remove_restrictions_for_org_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> interactions_remove_restrictions_for_org_with_http_info(org)

```ruby
begin
  # Remove interaction restrictions for an organization
  data, status_code, headers = api_instance.interactions_remove_restrictions_for_org_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_remove_restrictions_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## interactions_remove_restrictions_for_repo

> interactions_remove_restrictions_for_repo(owner, repo)

Remove interaction restrictions for a repository

Removes all interaction restrictions from the given repository. You must have owner or admin access to remove restrictions. If the interaction limit is set for the user or organization that owns this repository, you will receive a `409 Conflict` response and will not be able to use this endpoint to change the interaction limit for a single repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::InteractionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.

begin
  # Remove interaction restrictions for a repository
  api_instance.interactions_remove_restrictions_for_repo(owner, repo)
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_remove_restrictions_for_repo: #{e}"
end
```

#### Using the interactions_remove_restrictions_for_repo_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> interactions_remove_restrictions_for_repo_with_http_info(owner, repo)

```ruby
begin
  # Remove interaction restrictions for a repository
  data, status_code, headers = api_instance.interactions_remove_restrictions_for_repo_with_http_info(owner, repo)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_remove_restrictions_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## interactions_set_restrictions_for_authenticated_user

> <InteractionLimitResponse> interactions_set_restrictions_for_authenticated_user(interaction_limit)

Set interaction restrictions for your public repositories

Temporarily restricts which type of GitHub user can interact with your public repositories. Setting the interaction limit at the user level will overwrite any interaction limits that are set for individual repositories owned by the user.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::InteractionsApi.new
interaction_limit = OpenapiClient::InteractionLimit.new({limit: OpenapiClient::InteractionGroup::EXISTING_USERS}) # InteractionLimit | 

begin
  # Set interaction restrictions for your public repositories
  result = api_instance.interactions_set_restrictions_for_authenticated_user(interaction_limit)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_set_restrictions_for_authenticated_user: #{e}"
end
```

#### Using the interactions_set_restrictions_for_authenticated_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<InteractionLimitResponse>, Integer, Hash)> interactions_set_restrictions_for_authenticated_user_with_http_info(interaction_limit)

```ruby
begin
  # Set interaction restrictions for your public repositories
  data, status_code, headers = api_instance.interactions_set_restrictions_for_authenticated_user_with_http_info(interaction_limit)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <InteractionLimitResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_set_restrictions_for_authenticated_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **interaction_limit** | [**InteractionLimit**](InteractionLimit.md) |  |  |

### Return type

[**InteractionLimitResponse**](InteractionLimitResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## interactions_set_restrictions_for_org

> <InteractionLimitResponse> interactions_set_restrictions_for_org(org, interaction_limit)

Set interaction restrictions for an organization

Temporarily restricts interactions to a certain type of GitHub user in any public repository in the given organization. You must be an organization owner to set these restrictions. Setting the interaction limit at the organization level will overwrite any interaction limits that are set for individual repositories owned by the organization.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::InteractionsApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
interaction_limit = OpenapiClient::InteractionLimit.new({limit: OpenapiClient::InteractionGroup::EXISTING_USERS}) # InteractionLimit | 

begin
  # Set interaction restrictions for an organization
  result = api_instance.interactions_set_restrictions_for_org(org, interaction_limit)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_set_restrictions_for_org: #{e}"
end
```

#### Using the interactions_set_restrictions_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<InteractionLimitResponse>, Integer, Hash)> interactions_set_restrictions_for_org_with_http_info(org, interaction_limit)

```ruby
begin
  # Set interaction restrictions for an organization
  data, status_code, headers = api_instance.interactions_set_restrictions_for_org_with_http_info(org, interaction_limit)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <InteractionLimitResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_set_restrictions_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **interaction_limit** | [**InteractionLimit**](InteractionLimit.md) |  |  |

### Return type

[**InteractionLimitResponse**](InteractionLimitResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## interactions_set_restrictions_for_repo

> <InteractionLimitResponse> interactions_set_restrictions_for_repo(owner, repo, interaction_limit)

Set interaction restrictions for a repository

Temporarily restricts interactions to a certain type of GitHub user within the given repository. You must have owner or admin access to set these restrictions. If an interaction limit is set for the user or organization that owns this repository, you will receive a `409 Conflict` response and will not be able to use this endpoint to change the interaction limit for a single repository.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::InteractionsApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
interaction_limit = OpenapiClient::InteractionLimit.new({limit: OpenapiClient::InteractionGroup::EXISTING_USERS}) # InteractionLimit | 

begin
  # Set interaction restrictions for a repository
  result = api_instance.interactions_set_restrictions_for_repo(owner, repo, interaction_limit)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_set_restrictions_for_repo: #{e}"
end
```

#### Using the interactions_set_restrictions_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<InteractionLimitResponse>, Integer, Hash)> interactions_set_restrictions_for_repo_with_http_info(owner, repo, interaction_limit)

```ruby
begin
  # Set interaction restrictions for a repository
  data, status_code, headers = api_instance.interactions_set_restrictions_for_repo_with_http_info(owner, repo, interaction_limit)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <InteractionLimitResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling InteractionsApi->interactions_set_restrictions_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **interaction_limit** | [**InteractionLimit**](InteractionLimit.md) |  |  |

### Return type

[**InteractionLimitResponse**](InteractionLimitResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

