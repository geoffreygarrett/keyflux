# OpenapiClient::SecretScanningApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**secret_scanning_get_alert**](SecretScanningApi.md#secret_scanning_get_alert) | **GET** /repos/{owner}/{repo}/secret-scanning/alerts/{alert_number} | Get a secret scanning alert |
| [**secret_scanning_list_alerts_for_enterprise**](SecretScanningApi.md#secret_scanning_list_alerts_for_enterprise) | **GET** /enterprises/{enterprise}/secret-scanning/alerts | List secret scanning alerts for an enterprise |
| [**secret_scanning_list_alerts_for_org**](SecretScanningApi.md#secret_scanning_list_alerts_for_org) | **GET** /orgs/{org}/secret-scanning/alerts | List secret scanning alerts for an organization |
| [**secret_scanning_list_alerts_for_repo**](SecretScanningApi.md#secret_scanning_list_alerts_for_repo) | **GET** /repos/{owner}/{repo}/secret-scanning/alerts | List secret scanning alerts for a repository |
| [**secret_scanning_list_locations_for_alert**](SecretScanningApi.md#secret_scanning_list_locations_for_alert) | **GET** /repos/{owner}/{repo}/secret-scanning/alerts/{alert_number}/locations | List locations for a secret scanning alert |
| [**secret_scanning_update_alert**](SecretScanningApi.md#secret_scanning_update_alert) | **PATCH** /repos/{owner}/{repo}/secret-scanning/alerts/{alert_number} | Update a secret scanning alert |


## secret_scanning_get_alert

> <SecretScanningAlert> secret_scanning_get_alert(owner, repo, alert_number)

Get a secret scanning alert

Gets a single secret scanning alert detected in an eligible repository.  The authenticated user must be an administrator for the repository or for the organization that owns the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` or `security_events` scope to use this endpoint. If this endpoint is only used with public repositories, the token can use the `public_repo` scope instead.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecretScanningApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
alert_number = 56 # Integer | The number that identifies an alert. You can find this at the end of the URL for a code scanning alert within GitHub, and in the `number` field in the response from the `GET /repos/{owner}/{repo}/code-scanning/alerts` operation.

begin
  # Get a secret scanning alert
  result = api_instance.secret_scanning_get_alert(owner, repo, alert_number)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecretScanningApi->secret_scanning_get_alert: #{e}"
end
```

#### Using the secret_scanning_get_alert_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SecretScanningAlert>, Integer, Hash)> secret_scanning_get_alert_with_http_info(owner, repo, alert_number)

```ruby
begin
  # Get a secret scanning alert
  data, status_code, headers = api_instance.secret_scanning_get_alert_with_http_info(owner, repo, alert_number)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SecretScanningAlert>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecretScanningApi->secret_scanning_get_alert_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **alert_number** | **Integer** | The number that identifies an alert. You can find this at the end of the URL for a code scanning alert within GitHub, and in the &#x60;number&#x60; field in the response from the &#x60;GET /repos/{owner}/{repo}/code-scanning/alerts&#x60; operation. |  |

### Return type

[**SecretScanningAlert**](SecretScanningAlert.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## secret_scanning_list_alerts_for_enterprise

> <Array<OrganizationSecretScanningAlert>> secret_scanning_list_alerts_for_enterprise(enterprise, opts)

List secret scanning alerts for an enterprise

Lists secret scanning alerts for eligible repositories in an enterprise, from newest to oldest.  Alerts are only returned for organizations in the enterprise for which the authenticated user is an organization owner or a [security manager](https://docs.github.com/organizations/managing-peoples-access-to-your-organization-with-roles/managing-security-managers-in-your-organization).  The authenticated user must be a member of the enterprise in order to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` scope or `security_events` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecretScanningApi.new
enterprise = 'enterprise_example' # String | The slug version of the enterprise name. You can also substitute this value with the enterprise id.
opts = {
  state: 'open', # String | Set to `open` or `resolved` to only list secret scanning alerts in a specific state.
  secret_type: 'secret_type_example', # String | A comma-separated list of secret types to return. By default all secret types are returned. See \"[Secret scanning patterns](https://docs.github.com/code-security/secret-scanning/secret-scanning-patterns#supported-secrets-for-advanced-security)\" for a complete list of secret types.
  resolution: 'resolution_example', # String | A comma-separated list of resolutions. Only secret scanning alerts with one of these resolutions are listed. Valid resolutions are `false_positive`, `wont_fix`, `revoked`, `pattern_edited`, `pattern_deleted` or `used_in_tests`.
  sort: 'created', # String | The property to sort the results by. `created` means when the alert was created. `updated` means when the alert was updated or resolved.
  direction: 'asc', # String | The direction to sort the results by.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  after: 'after_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  validity: 'validity_example' # String | A comma-separated list of validities that, when present, will return alerts that match the validities in this list. Valid options are `active`, `inactive`, and `unknown`.
}

begin
  # List secret scanning alerts for an enterprise
  result = api_instance.secret_scanning_list_alerts_for_enterprise(enterprise, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecretScanningApi->secret_scanning_list_alerts_for_enterprise: #{e}"
end
```

#### Using the secret_scanning_list_alerts_for_enterprise_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrganizationSecretScanningAlert>>, Integer, Hash)> secret_scanning_list_alerts_for_enterprise_with_http_info(enterprise, opts)

```ruby
begin
  # List secret scanning alerts for an enterprise
  data, status_code, headers = api_instance.secret_scanning_list_alerts_for_enterprise_with_http_info(enterprise, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrganizationSecretScanningAlert>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecretScanningApi->secret_scanning_list_alerts_for_enterprise_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enterprise** | **String** | The slug version of the enterprise name. You can also substitute this value with the enterprise id. |  |
| **state** | **String** | Set to &#x60;open&#x60; or &#x60;resolved&#x60; to only list secret scanning alerts in a specific state. | [optional] |
| **secret_type** | **String** | A comma-separated list of secret types to return. By default all secret types are returned. See \&quot;[Secret scanning patterns](https://docs.github.com/code-security/secret-scanning/secret-scanning-patterns#supported-secrets-for-advanced-security)\&quot; for a complete list of secret types. | [optional] |
| **resolution** | **String** | A comma-separated list of resolutions. Only secret scanning alerts with one of these resolutions are listed. Valid resolutions are &#x60;false_positive&#x60;, &#x60;wont_fix&#x60;, &#x60;revoked&#x60;, &#x60;pattern_edited&#x60;, &#x60;pattern_deleted&#x60; or &#x60;used_in_tests&#x60;. | [optional] |
| **sort** | **String** | The property to sort the results by. &#x60;created&#x60; means when the alert was created. &#x60;updated&#x60; means when the alert was updated or resolved. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results before this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for results after this cursor. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional] |
| **validity** | **String** | A comma-separated list of validities that, when present, will return alerts that match the validities in this list. Valid options are &#x60;active&#x60;, &#x60;inactive&#x60;, and &#x60;unknown&#x60;. | [optional] |

### Return type

[**Array&lt;OrganizationSecretScanningAlert&gt;**](OrganizationSecretScanningAlert.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## secret_scanning_list_alerts_for_org

> <Array<OrganizationSecretScanningAlert>> secret_scanning_list_alerts_for_org(org, opts)

List secret scanning alerts for an organization

Lists secret scanning alerts for eligible repositories in an organization, from newest to oldest.  The authenticated user must be an administrator or security manager for the organization to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` or `security_events` scope to use this endpoint. If this endpoint is only used with public repositories, the token can use the `public_repo` scope instead.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecretScanningApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.
opts = {
  state: 'open', # String | Set to `open` or `resolved` to only list secret scanning alerts in a specific state.
  secret_type: 'secret_type_example', # String | A comma-separated list of secret types to return. By default all secret types are returned. See \"[Secret scanning patterns](https://docs.github.com/code-security/secret-scanning/secret-scanning-patterns#supported-secrets-for-advanced-security)\" for a complete list of secret types.
  resolution: 'resolution_example', # String | A comma-separated list of resolutions. Only secret scanning alerts with one of these resolutions are listed. Valid resolutions are `false_positive`, `wont_fix`, `revoked`, `pattern_edited`, `pattern_deleted` or `used_in_tests`.
  sort: 'created', # String | The property to sort the results by. `created` means when the alert was created. `updated` means when the alert was updated or resolved.
  direction: 'asc', # String | The direction to sort the results by.
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for events before this cursor. To receive an initial cursor on your first request, include an empty \"before\" query string.
  after: 'after_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for events after this cursor.  To receive an initial cursor on your first request, include an empty \"after\" query string.
  validity: 'validity_example' # String | A comma-separated list of validities that, when present, will return alerts that match the validities in this list. Valid options are `active`, `inactive`, and `unknown`.
}

begin
  # List secret scanning alerts for an organization
  result = api_instance.secret_scanning_list_alerts_for_org(org, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecretScanningApi->secret_scanning_list_alerts_for_org: #{e}"
end
```

#### Using the secret_scanning_list_alerts_for_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<OrganizationSecretScanningAlert>>, Integer, Hash)> secret_scanning_list_alerts_for_org_with_http_info(org, opts)

```ruby
begin
  # List secret scanning alerts for an organization
  data, status_code, headers = api_instance.secret_scanning_list_alerts_for_org_with_http_info(org, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<OrganizationSecretScanningAlert>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecretScanningApi->secret_scanning_list_alerts_for_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |
| **state** | **String** | Set to &#x60;open&#x60; or &#x60;resolved&#x60; to only list secret scanning alerts in a specific state. | [optional] |
| **secret_type** | **String** | A comma-separated list of secret types to return. By default all secret types are returned. See \&quot;[Secret scanning patterns](https://docs.github.com/code-security/secret-scanning/secret-scanning-patterns#supported-secrets-for-advanced-security)\&quot; for a complete list of secret types. | [optional] |
| **resolution** | **String** | A comma-separated list of resolutions. Only secret scanning alerts with one of these resolutions are listed. Valid resolutions are &#x60;false_positive&#x60;, &#x60;wont_fix&#x60;, &#x60;revoked&#x60;, &#x60;pattern_edited&#x60;, &#x60;pattern_deleted&#x60; or &#x60;used_in_tests&#x60;. | [optional] |
| **sort** | **String** | The property to sort the results by. &#x60;created&#x60; means when the alert was created. &#x60;updated&#x60; means when the alert was updated or resolved. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for events before this cursor. To receive an initial cursor on your first request, include an empty \&quot;before\&quot; query string. | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for events after this cursor.  To receive an initial cursor on your first request, include an empty \&quot;after\&quot; query string. | [optional] |
| **validity** | **String** | A comma-separated list of validities that, when present, will return alerts that match the validities in this list. Valid options are &#x60;active&#x60;, &#x60;inactive&#x60;, and &#x60;unknown&#x60;. | [optional] |

### Return type

[**Array&lt;OrganizationSecretScanningAlert&gt;**](OrganizationSecretScanningAlert.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## secret_scanning_list_alerts_for_repo

> <Array<SecretScanningAlert>> secret_scanning_list_alerts_for_repo(owner, repo, opts)

List secret scanning alerts for a repository

Lists secret scanning alerts for an eligible repository, from newest to oldest.  The authenticated user must be an administrator for the repository or for the organization that owns the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` or `security_events` scope to use this endpoint. If this endpoint is only used with public repositories, the token can use the `public_repo` scope instead.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecretScanningApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  state: 'open', # String | Set to `open` or `resolved` to only list secret scanning alerts in a specific state.
  secret_type: 'secret_type_example', # String | A comma-separated list of secret types to return. By default all secret types are returned. See \"[Secret scanning patterns](https://docs.github.com/code-security/secret-scanning/secret-scanning-patterns#supported-secrets-for-advanced-security)\" for a complete list of secret types.
  resolution: 'resolution_example', # String | A comma-separated list of resolutions. Only secret scanning alerts with one of these resolutions are listed. Valid resolutions are `false_positive`, `wont_fix`, `revoked`, `pattern_edited`, `pattern_deleted` or `used_in_tests`.
  sort: 'created', # String | The property to sort the results by. `created` means when the alert was created. `updated` means when the alert was updated or resolved.
  direction: 'asc', # String | The direction to sort the results by.
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  before: 'before_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for events before this cursor. To receive an initial cursor on your first request, include an empty \"before\" query string.
  after: 'after_example', # String | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for events after this cursor.  To receive an initial cursor on your first request, include an empty \"after\" query string.
  validity: 'validity_example' # String | A comma-separated list of validities that, when present, will return alerts that match the validities in this list. Valid options are `active`, `inactive`, and `unknown`.
}

begin
  # List secret scanning alerts for a repository
  result = api_instance.secret_scanning_list_alerts_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecretScanningApi->secret_scanning_list_alerts_for_repo: #{e}"
end
```

#### Using the secret_scanning_list_alerts_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SecretScanningAlert>>, Integer, Hash)> secret_scanning_list_alerts_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # List secret scanning alerts for a repository
  data, status_code, headers = api_instance.secret_scanning_list_alerts_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SecretScanningAlert>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecretScanningApi->secret_scanning_list_alerts_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **state** | **String** | Set to &#x60;open&#x60; or &#x60;resolved&#x60; to only list secret scanning alerts in a specific state. | [optional] |
| **secret_type** | **String** | A comma-separated list of secret types to return. By default all secret types are returned. See \&quot;[Secret scanning patterns](https://docs.github.com/code-security/secret-scanning/secret-scanning-patterns#supported-secrets-for-advanced-security)\&quot; for a complete list of secret types. | [optional] |
| **resolution** | **String** | A comma-separated list of resolutions. Only secret scanning alerts with one of these resolutions are listed. Valid resolutions are &#x60;false_positive&#x60;, &#x60;wont_fix&#x60;, &#x60;revoked&#x60;, &#x60;pattern_edited&#x60;, &#x60;pattern_deleted&#x60; or &#x60;used_in_tests&#x60;. | [optional] |
| **sort** | **String** | The property to sort the results by. &#x60;created&#x60; means when the alert was created. &#x60;updated&#x60; means when the alert was updated or resolved. | [optional][default to &#39;created&#39;] |
| **direction** | **String** | The direction to sort the results by. | [optional][default to &#39;desc&#39;] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **before** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for events before this cursor. To receive an initial cursor on your first request, include an empty \&quot;before\&quot; query string. | [optional] |
| **after** | **String** | A cursor, as given in the [Link header](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api#using-link-headers). If specified, the query only searches for events after this cursor.  To receive an initial cursor on your first request, include an empty \&quot;after\&quot; query string. | [optional] |
| **validity** | **String** | A comma-separated list of validities that, when present, will return alerts that match the validities in this list. Valid options are &#x60;active&#x60;, &#x60;inactive&#x60;, and &#x60;unknown&#x60;. | [optional] |

### Return type

[**Array&lt;SecretScanningAlert&gt;**](SecretScanningAlert.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## secret_scanning_list_locations_for_alert

> <Array<SecretScanningLocation>> secret_scanning_list_locations_for_alert(owner, repo, alert_number, opts)

List locations for a secret scanning alert

Lists all locations for a given secret scanning alert for an eligible repository.  The authenticated user must be an administrator for the repository or for the organization that owns the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` or `security_events` scope to use this endpoint. If this endpoint is only used with public repositories, the token can use the `public_repo` scope instead.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecretScanningApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
alert_number = 56 # Integer | The number that identifies an alert. You can find this at the end of the URL for a code scanning alert within GitHub, and in the `number` field in the response from the `GET /repos/{owner}/{repo}/code-scanning/alerts` operation.
opts = {
  page: 56, # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  per_page: 56 # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List locations for a secret scanning alert
  result = api_instance.secret_scanning_list_locations_for_alert(owner, repo, alert_number, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecretScanningApi->secret_scanning_list_locations_for_alert: #{e}"
end
```

#### Using the secret_scanning_list_locations_for_alert_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<SecretScanningLocation>>, Integer, Hash)> secret_scanning_list_locations_for_alert_with_http_info(owner, repo, alert_number, opts)

```ruby
begin
  # List locations for a secret scanning alert
  data, status_code, headers = api_instance.secret_scanning_list_locations_for_alert_with_http_info(owner, repo, alert_number, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<SecretScanningLocation>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecretScanningApi->secret_scanning_list_locations_for_alert_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **alert_number** | **Integer** | The number that identifies an alert. You can find this at the end of the URL for a code scanning alert within GitHub, and in the &#x60;number&#x60; field in the response from the &#x60;GET /repos/{owner}/{repo}/code-scanning/alerts&#x60; operation. |  |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |

### Return type

[**Array&lt;SecretScanningLocation&gt;**](SecretScanningLocation.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## secret_scanning_update_alert

> <SecretScanningAlert> secret_scanning_update_alert(owner, repo, alert_number, secret_scanning_update_alert_request)

Update a secret scanning alert

Updates the status of a secret scanning alert in an eligible repository.  The authenticated user must be an administrator for the repository or for the organization that owns the repository to use this endpoint.  OAuth app tokens and personal access tokens (classic) need the `repo` or `security_events` scope to use this endpoint. If this endpoint is only used with public repositories, the token can use the `public_repo` scope instead.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::SecretScanningApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
alert_number = 56 # Integer | The number that identifies an alert. You can find this at the end of the URL for a code scanning alert within GitHub, and in the `number` field in the response from the `GET /repos/{owner}/{repo}/code-scanning/alerts` operation.
secret_scanning_update_alert_request = OpenapiClient::SecretScanningUpdateAlertRequest.new({state: OpenapiClient::SecretScanningAlertState::OPEN}) # SecretScanningUpdateAlertRequest | 

begin
  # Update a secret scanning alert
  result = api_instance.secret_scanning_update_alert(owner, repo, alert_number, secret_scanning_update_alert_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecretScanningApi->secret_scanning_update_alert: #{e}"
end
```

#### Using the secret_scanning_update_alert_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<SecretScanningAlert>, Integer, Hash)> secret_scanning_update_alert_with_http_info(owner, repo, alert_number, secret_scanning_update_alert_request)

```ruby
begin
  # Update a secret scanning alert
  data, status_code, headers = api_instance.secret_scanning_update_alert_with_http_info(owner, repo, alert_number, secret_scanning_update_alert_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <SecretScanningAlert>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SecretScanningApi->secret_scanning_update_alert_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **alert_number** | **Integer** | The number that identifies an alert. You can find this at the end of the URL for a code scanning alert within GitHub, and in the &#x60;number&#x60; field in the response from the &#x60;GET /repos/{owner}/{repo}/code-scanning/alerts&#x60; operation. |  |
| **secret_scanning_update_alert_request** | [**SecretScanningUpdateAlertRequest**](SecretScanningUpdateAlertRequest.md) |  |  |

### Return type

[**SecretScanningAlert**](SecretScanningAlert.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

