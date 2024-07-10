# OpenapiClient::LicensesApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**licenses_get**](LicensesApi.md#licenses_get) | **GET** /licenses/{license} | Get a license |
| [**licenses_get_all_commonly_used**](LicensesApi.md#licenses_get_all_commonly_used) | **GET** /licenses | Get all commonly used licenses |
| [**licenses_get_for_repo**](LicensesApi.md#licenses_get_for_repo) | **GET** /repos/{owner}/{repo}/license | Get the license for a repository |


## licenses_get

> <License> licenses_get(license)

Get a license

Gets information about a specific license. For more information, see \"[Licensing a repository ](https://docs.github.com/repositories/managing-your-repositorys-settings-and-features/customizing-your-repository/licensing-a-repository).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::LicensesApi.new
license = 'license_example' # String | 

begin
  # Get a license
  result = api_instance.licenses_get(license)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling LicensesApi->licenses_get: #{e}"
end
```

#### Using the licenses_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<License>, Integer, Hash)> licenses_get_with_http_info(license)

```ruby
begin
  # Get a license
  data, status_code, headers = api_instance.licenses_get_with_http_info(license)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <License>
rescue OpenapiClient::ApiError => e
  puts "Error when calling LicensesApi->licenses_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **license** | **String** |  |  |

### Return type

[**License**](License.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## licenses_get_all_commonly_used

> <Array<LicenseSimple>> licenses_get_all_commonly_used(opts)

Get all commonly used licenses

Lists the most commonly used licenses on GitHub. For more information, see \"[Licensing a repository ](https://docs.github.com/repositories/managing-your-repositorys-settings-and-features/customizing-your-repository/licensing-a-repository).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::LicensesApi.new
opts = {
  featured: true, # Boolean | 
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # Get all commonly used licenses
  result = api_instance.licenses_get_all_commonly_used(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling LicensesApi->licenses_get_all_commonly_used: #{e}"
end
```

#### Using the licenses_get_all_commonly_used_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<LicenseSimple>>, Integer, Hash)> licenses_get_all_commonly_used_with_http_info(opts)

```ruby
begin
  # Get all commonly used licenses
  data, status_code, headers = api_instance.licenses_get_all_commonly_used_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<LicenseSimple>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling LicensesApi->licenses_get_all_commonly_used_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **featured** | **Boolean** |  | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;LicenseSimple&gt;**](LicenseSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## licenses_get_for_repo

> <LicenseContent> licenses_get_for_repo(owner, repo, opts)

Get the license for a repository

This method returns the contents of the repository's license file, if one is detected.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw contents of the license. - **`application/vnd.github.html+json`**: Returns the license contents in HTML. Markup languages are rendered to HTML using GitHub's open-source [Markup library](https://github.com/github/markup).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::LicensesApi.new
owner = 'owner_example' # String | The account owner of the repository. The name is not case sensitive.
repo = 'repo_example' # String | The name of the repository without the `.git` extension. The name is not case sensitive.
opts = {
  ref: 'ref_example' # String | The Git reference for the results you want to list. The `ref` for a branch can be formatted either as `refs/heads/<branch name>` or simply `<branch name>`. To reference a pull request use `refs/pull/<number>/merge`.
}

begin
  # Get the license for a repository
  result = api_instance.licenses_get_for_repo(owner, repo, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling LicensesApi->licenses_get_for_repo: #{e}"
end
```

#### Using the licenses_get_for_repo_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<LicenseContent>, Integer, Hash)> licenses_get_for_repo_with_http_info(owner, repo, opts)

```ruby
begin
  # Get the license for a repository
  data, status_code, headers = api_instance.licenses_get_for_repo_with_http_info(owner, repo, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <LicenseContent>
rescue OpenapiClient::ApiError => e
  puts "Error when calling LicensesApi->licenses_get_for_repo_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | **String** | The account owner of the repository. The name is not case sensitive. |  |
| **repo** | **String** | The name of the repository without the &#x60;.git&#x60; extension. The name is not case sensitive. |  |
| **ref** | **String** | The Git reference for the results you want to list. The &#x60;ref&#x60; for a branch can be formatted either as &#x60;refs/heads/&lt;branch name&gt;&#x60; or simply &#x60;&lt;branch name&gt;&#x60;. To reference a pull request use &#x60;refs/pull/&lt;number&gt;/merge&#x60;. | [optional] |

### Return type

[**LicenseContent**](LicenseContent.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

