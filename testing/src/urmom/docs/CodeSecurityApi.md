# OpenapiClient::CodeSecurityApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**code_security_attach_configuration**](CodeSecurityApi.md#code_security_attach_configuration) | **POST** /orgs/{org}/code-security/configurations/{configuration_id}/attach | Attach a configuration to repositories |
| [**code_security_create_configuration**](CodeSecurityApi.md#code_security_create_configuration) | **POST** /orgs/{org}/code-security/configurations | Create a code security configuration |
| [**code_security_delete_configuration**](CodeSecurityApi.md#code_security_delete_configuration) | **DELETE** /orgs/{org}/code-security/configurations/{configuration_id} | Delete a code security configuration |
| [**code_security_get_configuration**](CodeSecurityApi.md#code_security_get_configuration) | **GET** /orgs/{org}/code-security/configurations/{configuration_id} | Get a code security configuration |
| [**code_security_get_configurations_for_org**](CodeSecurityApi.md#code_security_get_configurations_for_org) | **GET** /orgs/{org}/code-security/configurations | Get code security configurations for an organization |
| [**code_security_get_default_configurations**](CodeSecurityApi.md#code_security_get_default_configurations) | **GET** /orgs/{org}/code-security/configurations/defaults | Get default code security configurations |
| [**code_security_get_repositories_for_configuration**](CodeSecurityApi.md#code_security_get_repositories_for_configuration) | **GET** /orgs/{org}/code-security/configurations/{configuration_id}/repositories | Get repositories associated with a code security configuration |
| [**code_security_set_configuration_as_default**](CodeSecurityApi.md#code_security_set_configuration_as_default) | **PUT** /orgs/{org}/code-security/configurations/{configuration_id}/defaults | Set a code security configuration as a default for an organization |
| [**code_security_update_configuration**](CodeSecurityApi.md#code_security_update_configuration) | **PATCH** /orgs/{org}/code-security/configurations/{configuration_id} | Update a code security configuration |


## code_security_attach_configuration

> Object code_security_attach_configuration(org, configuration_id, code_security_attach_configuration_request)

Attach a configuration to repositories

Attach a code security configuration to a set of repositories. If the repositories specified are already attached to a configuration, they will be re-attached to the provided configuration.  If insufficient GHAS licenses are available to attach the configuration to a repository, only free features will be enabled.  The authenticated user must be an administrator or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `write:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodeSecurityApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
configuration_id = 56 # Integer | The unique identifier of the code security configuration.
code_security_attach_configuration_request = OpenapiClient::CodeSecurityAttachConfigurationRequest.new({scope: 'all'}) # CodeSecurityAttachConfigurationRequest | 

begin
  # Attach a configuration to repositories
  result = api_instance.code_security_attach_configuration(org, configuration_id, code_security_attach_configuration_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_attach_configuration: #{e}"
end
```

#### Using the code_security_attach_configuration_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Object, Integer, Hash)> code_security_attach_configuration_with_http_info(org, configuration_id, code_security_attach_configuration_request)

```ruby
begin
  # Attach a configuration to repositories
  data, status_code, headers = api_instance.code_security_attach_configuration_with_http_info(org, configuration_id, code_security_attach_configuration_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Object
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_attach_configuration_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **configuration_id** | **Integer** | The unique identifier of the code security configuration. |  |
| **code_security_attach_configuration_request** | [**CodeSecurityAttachConfigurationRequest**](CodeSecurityAttachConfigurationRequest.md) |  |  |

### Return type

**Object**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## code_security_create_configuration

> <CodeSecurityConfiguration> code_security_create_configuration(org, code_security_create_configuration_request)

Create a code security configuration

Creates a code security configuration in an organization.  The authenticated user must be an administrator or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `write:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodeSecurityApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
code_security_create_configuration_request = OpenapiClient::CodeSecurityCreateConfigurationRequest.new({name: 'name_example', description: 'description_example'}) # CodeSecurityCreateConfigurationRequest | 

begin
  # Create a code security configuration
  result = api_instance.code_security_create_configuration(org, code_security_create_configuration_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_create_configuration: #{e}"
end
```

#### Using the code_security_create_configuration_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodeSecurityConfiguration>, Integer, Hash)> code_security_create_configuration_with_http_info(org, code_security_create_configuration_request)

```ruby
begin
  # Create a code security configuration
  data, status_code, headers = api_instance.code_security_create_configuration_with_http_info(org, code_security_create_configuration_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodeSecurityConfiguration>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_create_configuration_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **code_security_create_configuration_request** | [**CodeSecurityCreateConfigurationRequest**](CodeSecurityCreateConfigurationRequest.md) |  |  |

### Return type

[**CodeSecurityConfiguration**](CodeSecurityConfiguration.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## code_security_delete_configuration

> code_security_delete_configuration(org, configuration_id)

Delete a code security configuration

Deletes the desired code security configuration from an organization. Repositories attached to the configuration will retain their settings but will no longer be associated with the configuration.  The authenticated user must be an administrator or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `write:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodeSecurityApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
configuration_id = 56 # Integer | The unique identifier of the code security configuration.

begin
  # Delete a code security configuration
  api_instance.code_security_delete_configuration(org, configuration_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_delete_configuration: #{e}"
end
```

#### Using the code_security_delete_configuration_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> code_security_delete_configuration_with_http_info(org, configuration_id)

```ruby
begin
  # Delete a code security configuration
  data, status_code, headers = api_instance.code_security_delete_configuration_with_http_info(org, configuration_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_delete_configuration_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **configuration_id** | **Integer** | The unique identifier of the code security configuration. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, application/scim+json


## code_security_get_configuration

> <CodeSecurityConfiguration> code_security_get_configuration(org, configuration_id)

Get a code security configuration

Gets a code security configuration available in an organization.  The authenticated user must be an administrator or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `write:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodeSecurityApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
configuration_id = 56 # Integer | The unique identifier of the code security configuration.

begin
  # Get a code security configuration
  result = api_instance.code_security_get_configuration(org, configuration_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_get_configuration: #{e}"
end
```

#### Using the code_security_get_configuration_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodeSecurityConfiguration>, Integer, Hash)> code_security_get_configuration_with_http_info(org, configuration_id)

```ruby
begin
  # Get a code security configuration
  data, status_code, headers = api_instance.code_security_get_configuration_with_http_info(org, configuration_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodeSecurityConfiguration>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_get_configuration_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **configuration_id** | **Integer** | The unique identifier of the code security configuration. |  |

### Return type

[**CodeSecurityConfiguration**](CodeSecurityConfiguration.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## code_security_get_configurations_for_org

> <Array<CodeSecurityConfiguration>> code_security_get_configurations_for_org(org, opts)

Get code security configurations for an organization

Lists all code security configurations available in an organization.  The authenticated user must be an administrator or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `write:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodeSecurityApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  target_type: 'global', # String | The target type of the code security configuration
  per_page: 56, # Integer | 'The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"' 
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  after: 'after_example' # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # Get code security configurations for an organization
  result = api_instance.code_security_get_configurations_for_org(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_get_configurations_for_org: #{e}"
end
```

#### Using the code_security_get_configurations_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<CodeSecurityConfiguration>>, Integer, Hash)> code_security_get_configurations_for_org_with_http_info(org, opts)

```ruby
begin
  # Get code security configurations for an organization
  data, status_code, headers = api_instance.code_security_get_configurations_for_org_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<CodeSecurityConfiguration>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_get_configurations_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **target_type** | **String** | The target type of the code security configuration | [optional][default to &#39;all&#39;] |
| **per_page** | **Integer** | &#39;The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot;&#39;  | [optional][default to 30] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |

### Return type

[**Array&lt;CodeSecurityConfiguration&gt;**](CodeSecurityConfiguration.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## code_security_get_default_configurations

> <Array<CodeSecurityDefaultConfigurationsInner>> code_security_get_default_configurations(org)

Get default code security configurations

Lists the default code security configurations for an organization.  The authenticated user must be an administrator or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `write:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodeSecurityApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get default code security configurations
  result = api_instance.code_security_get_default_configurations(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_get_default_configurations: #{e}"
end
```

#### Using the code_security_get_default_configurations_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<CodeSecurityDefaultConfigurationsInner>>, Integer, Hash)> code_security_get_default_configurations_with_http_info(org)

```ruby
begin
  # Get default code security configurations
  data, status_code, headers = api_instance.code_security_get_default_configurations_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<CodeSecurityDefaultConfigurationsInner>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_get_default_configurations_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**Array&lt;CodeSecurityDefaultConfigurationsInner&gt;**](CodeSecurityDefaultConfigurationsInner.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## code_security_get_repositories_for_configuration

> <Array<CodeSecurityConfigurationRepositories>> code_security_get_repositories_for_configuration(org, configuration_id, opts)

Get repositories associated with a code security configuration

Lists the repositories associated with a code security configuration in an organization.  The authenticated user must be an administrator or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `write:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodeSecurityApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
configuration_id = 56 # Integer | The unique identifier of the code security configuration.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  after: 'after_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  status: 'status_example' # String | A comma-separated list of statuses. If specified, only repositories with these attachment statuses will be returned.  Can be: `all`, `attached`, `attaching`, `detached`, `enforced`, `failed`, `updating`
}

begin
  # Get repositories associated with a code security configuration
  result = api_instance.code_security_get_repositories_for_configuration(org, configuration_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_get_repositories_for_configuration: #{e}"
end
```

#### Using the code_security_get_repositories_for_configuration_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<CodeSecurityConfigurationRepositories>>, Integer, Hash)> code_security_get_repositories_for_configuration_with_http_info(org, configuration_id, opts)

```ruby
begin
  # Get repositories associated with a code security configuration
  data, status_code, headers = api_instance.code_security_get_repositories_for_configuration_with_http_info(org, configuration_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<CodeSecurityConfigurationRepositories>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_get_repositories_for_configuration_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **configuration_id** | **Integer** | The unique identifier of the code security configuration. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **status** | **String** | A comma-separated list of statuses. If specified, only repositories with these attachment statuses will be returned.  Can be: &#x60;all&#x60;, &#x60;attached&#x60;, &#x60;attaching&#x60;, &#x60;detached&#x60;, &#x60;enforced&#x60;, &#x60;failed&#x60;, &#x60;updating&#x60; | [optional][default to &#39;all&#39;] |

### Return type

[**Array&lt;CodeSecurityConfigurationRepositories&gt;**](CodeSecurityConfigurationRepositories.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## code_security_set_configuration_as_default

> <CodeSecuritySetConfigurationAsDefault200Response> code_security_set_configuration_as_default(org, configuration_id, code_security_set_configuration_as_default_request)

Set a code security configuration as a default for an organization

Sets a code security configuration as a default to be applied to new repositories in your organization.  This configuration will be applied to the matching repository type (all, none, public, private and internal) by default when they are created.  The authenticated user must be an administrator or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `write:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodeSecurityApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
configuration_id = 56 # Integer | The unique identifier of the code security configuration.
code_security_set_configuration_as_default_request = OpenapiClient::CodeSecuritySetConfigurationAsDefaultRequest.new # CodeSecuritySetConfigurationAsDefaultRequest | 

begin
  # Set a code security configuration as a default for an organization
  result = api_instance.code_security_set_configuration_as_default(org, configuration_id, code_security_set_configuration_as_default_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_set_configuration_as_default: #{e}"
end
```

#### Using the code_security_set_configuration_as_default_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodeSecuritySetConfigurationAsDefault200Response>, Integer, Hash)> code_security_set_configuration_as_default_with_http_info(org, configuration_id, code_security_set_configuration_as_default_request)

```ruby
begin
  # Set a code security configuration as a default for an organization
  data, status_code, headers = api_instance.code_security_set_configuration_as_default_with_http_info(org, configuration_id, code_security_set_configuration_as_default_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodeSecuritySetConfigurationAsDefault200Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_set_configuration_as_default_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **configuration_id** | **Integer** | The unique identifier of the code security configuration. |  |
| **code_security_set_configuration_as_default_request** | [**CodeSecuritySetConfigurationAsDefaultRequest**](CodeSecuritySetConfigurationAsDefaultRequest.md) |  |  |

### Return type

[**CodeSecuritySetConfigurationAsDefault200Response**](CodeSecuritySetConfigurationAsDefault200Response.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## code_security_update_configuration

> <CodeSecurityConfiguration> code_security_update_configuration(org, configuration_id, code_security_update_configuration_request)

Update a code security configuration

Updates a code security configuration in an organization.  The authenticated user must be an administrator or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `write:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodeSecurityApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
configuration_id = 56 # Integer | The unique identifier of the code security configuration.
code_security_update_configuration_request = OpenapiClient::CodeSecurityUpdateConfigurationRequest.new # CodeSecurityUpdateConfigurationRequest | 

begin
  # Update a code security configuration
  result = api_instance.code_security_update_configuration(org, configuration_id, code_security_update_configuration_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_update_configuration: #{e}"
end
```

#### Using the code_security_update_configuration_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodeSecurityConfiguration>, Integer, Hash)> code_security_update_configuration_with_http_info(org, configuration_id, code_security_update_configuration_request)

```ruby
begin
  # Update a code security configuration
  data, status_code, headers = api_instance.code_security_update_configuration_with_http_info(org, configuration_id, code_security_update_configuration_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodeSecurityConfiguration>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodeSecurityApi->code_security_update_configuration_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **configuration_id** | **Integer** | The unique identifier of the code security configuration. |  |
| **code_security_update_configuration_request** | [**CodeSecurityUpdateConfigurationRequest**](CodeSecurityUpdateConfigurationRequest.md) |  |  |

### Return type

[**CodeSecurityConfiguration**](CodeSecurityConfiguration.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

