# OpenapiClient::BillingApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**billing_get_github_actions_billing_org**](BillingApi.md#billing_get_github_actions_billing_org) | **GET** /orgs/{org}/settings/billing/actions | Get GitHub Actions billing for an organization |
| [**billing_get_github_actions_billing_user**](BillingApi.md#billing_get_github_actions_billing_user) | **GET** /users/{username}/settings/billing/actions | Get GitHub Actions billing for a user |
| [**billing_get_github_packages_billing_org**](BillingApi.md#billing_get_github_packages_billing_org) | **GET** /orgs/{org}/settings/billing/packages | Get GitHub Packages billing for an organization |
| [**billing_get_github_packages_billing_user**](BillingApi.md#billing_get_github_packages_billing_user) | **GET** /users/{username}/settings/billing/packages | Get GitHub Packages billing for a user |
| [**billing_get_shared_storage_billing_org**](BillingApi.md#billing_get_shared_storage_billing_org) | **GET** /orgs/{org}/settings/billing/shared-storage | Get shared storage billing for an organization |
| [**billing_get_shared_storage_billing_user**](BillingApi.md#billing_get_shared_storage_billing_user) | **GET** /users/{username}/settings/billing/shared-storage | Get shared storage billing for a user |


## billing_get_github_actions_billing_org

> <ActionsBillingUsage> billing_get_github_actions_billing_org(org)

Get GitHub Actions billing for an organization

Gets the summary of the free and paid GitHub Actions minutes used.  Paid minutes only apply to workflows in private repositories that use GitHub-hosted runners. Minutes used is listed for each GitHub-hosted runner operating system. Any job re-runs are also included in the usage. The usage returned includes any minute multipliers for macOS and Windows runners, and is rounded up to the nearest whole minute. For more information, see \"[Managing billing for GitHub Actions](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-actions)\".  OAuth app tokens and personal access tokens (classic) need the `repo` or `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::BillingApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get GitHub Actions billing for an organization
  result = api_instance.billing_get_github_actions_billing_org(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling BillingApi->billing_get_github_actions_billing_org: #{e}"
end
```

#### Using the billing_get_github_actions_billing_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsBillingUsage>, Integer, Hash)> billing_get_github_actions_billing_org_with_http_info(org)

```ruby
begin
  # Get GitHub Actions billing for an organization
  data, status_code, headers = api_instance.billing_get_github_actions_billing_org_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsBillingUsage>
rescue OpenapiClient::ApiError => e
  puts "Error when calling BillingApi->billing_get_github_actions_billing_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**ActionsBillingUsage**](ActionsBillingUsage.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## billing_get_github_actions_billing_user

> <ActionsBillingUsage> billing_get_github_actions_billing_user(username)

Get GitHub Actions billing for a user

Gets the summary of the free and paid GitHub Actions minutes used.  Paid minutes only apply to workflows in private repositories that use GitHub-hosted runners. Minutes used is listed for each GitHub-hosted runner operating system. Any job re-runs are also included in the usage. The usage returned includes any minute multipliers for macOS and Windows runners, and is rounded up to the nearest whole minute. For more information, see \"[Managing billing for GitHub Actions](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-actions)\".  OAuth app tokens and personal access tokens (classic) need the `user` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::BillingApi.new
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Get GitHub Actions billing for a user
  result = api_instance.billing_get_github_actions_billing_user(username)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling BillingApi->billing_get_github_actions_billing_user: #{e}"
end
```

#### Using the billing_get_github_actions_billing_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ActionsBillingUsage>, Integer, Hash)> billing_get_github_actions_billing_user_with_http_info(username)

```ruby
begin
  # Get GitHub Actions billing for a user
  data, status_code, headers = api_instance.billing_get_github_actions_billing_user_with_http_info(username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ActionsBillingUsage>
rescue OpenapiClient::ApiError => e
  puts "Error when calling BillingApi->billing_get_github_actions_billing_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

[**ActionsBillingUsage**](ActionsBillingUsage.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## billing_get_github_packages_billing_org

> <PackagesBillingUsage> billing_get_github_packages_billing_org(org)

Get GitHub Packages billing for an organization

Gets the free and paid storage used for GitHub Packages in gigabytes.  Paid minutes only apply to packages stored for private repositories. For more information, see \"[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\"  OAuth app tokens and personal access tokens (classic) need the `repo` or `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::BillingApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get GitHub Packages billing for an organization
  result = api_instance.billing_get_github_packages_billing_org(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling BillingApi->billing_get_github_packages_billing_org: #{e}"
end
```

#### Using the billing_get_github_packages_billing_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PackagesBillingUsage>, Integer, Hash)> billing_get_github_packages_billing_org_with_http_info(org)

```ruby
begin
  # Get GitHub Packages billing for an organization
  data, status_code, headers = api_instance.billing_get_github_packages_billing_org_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PackagesBillingUsage>
rescue OpenapiClient::ApiError => e
  puts "Error when calling BillingApi->billing_get_github_packages_billing_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**PackagesBillingUsage**](PackagesBillingUsage.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## billing_get_github_packages_billing_user

> <PackagesBillingUsage> billing_get_github_packages_billing_user(username)

Get GitHub Packages billing for a user

Gets the free and paid storage used for GitHub Packages in gigabytes.  Paid minutes only apply to packages stored for private repositories. For more information, see \"[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\"  OAuth app tokens and personal access tokens (classic) need the `user` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::BillingApi.new
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Get GitHub Packages billing for a user
  result = api_instance.billing_get_github_packages_billing_user(username)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling BillingApi->billing_get_github_packages_billing_user: #{e}"
end
```

#### Using the billing_get_github_packages_billing_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PackagesBillingUsage>, Integer, Hash)> billing_get_github_packages_billing_user_with_http_info(username)

```ruby
begin
  # Get GitHub Packages billing for a user
  data, status_code, headers = api_instance.billing_get_github_packages_billing_user_with_http_info(username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PackagesBillingUsage>
rescue OpenapiClient::ApiError => e
  puts "Error when calling BillingApi->billing_get_github_packages_billing_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

[**PackagesBillingUsage**](PackagesBillingUsage.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## billing_get_shared_storage_billing_org

> <CombinedBillingUsage> billing_get_shared_storage_billing_org(org)

Get shared storage billing for an organization

Gets the estimated paid and estimated total storage used for GitHub Actions and GitHub Packages.  Paid minutes only apply to packages stored for private repositories. For more information, see \"[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\"  OAuth app tokens and personal access tokens (classic) need the `repo` or `admin:org` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::BillingApi.new
org = 'org_example' # String | The organization name. The name is not case sensitive.

begin
  # Get shared storage billing for an organization
  result = api_instance.billing_get_shared_storage_billing_org(org)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling BillingApi->billing_get_shared_storage_billing_org: #{e}"
end
```

#### Using the billing_get_shared_storage_billing_org_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CombinedBillingUsage>, Integer, Hash)> billing_get_shared_storage_billing_org_with_http_info(org)

```ruby
begin
  # Get shared storage billing for an organization
  data, status_code, headers = api_instance.billing_get_shared_storage_billing_org_with_http_info(org)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CombinedBillingUsage>
rescue OpenapiClient::ApiError => e
  puts "Error when calling BillingApi->billing_get_shared_storage_billing_org_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **org** | **String** | The organization name. The name is not case sensitive. |  |

### Return type

[**CombinedBillingUsage**](CombinedBillingUsage.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## billing_get_shared_storage_billing_user

> <CombinedBillingUsage> billing_get_shared_storage_billing_user(username)

Get shared storage billing for a user

Gets the estimated paid and estimated total storage used for GitHub Actions and GitHub Packages.  Paid minutes only apply to packages stored for private repositories. For more information, see \"[Managing billing for GitHub Packages](https://docs.github.com/github/setting-up-and-managing-billing-and-payments-on-github/managing-billing-for-github-packages).\"  OAuth app tokens and personal access tokens (classic) need the `user` scope to use this endpoint.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::BillingApi.new
username = 'username_example' # String | The handle for the GitHub user account.

begin
  # Get shared storage billing for a user
  result = api_instance.billing_get_shared_storage_billing_user(username)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling BillingApi->billing_get_shared_storage_billing_user: #{e}"
end
```

#### Using the billing_get_shared_storage_billing_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CombinedBillingUsage>, Integer, Hash)> billing_get_shared_storage_billing_user_with_http_info(username)

```ruby
begin
  # Get shared storage billing for a user
  data, status_code, headers = api_instance.billing_get_shared_storage_billing_user_with_http_info(username)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CombinedBillingUsage>
rescue OpenapiClient::ApiError => e
  puts "Error when calling BillingApi->billing_get_shared_storage_billing_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |

### Return type

[**CombinedBillingUsage**](CombinedBillingUsage.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

