# OpenapiClient::GitignoreApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**gitignore_get_all_templates**](GitignoreApi.md#gitignore_get_all_templates) | **GET** /gitignore/templates | Get all gitignore templates |
| [**gitignore_get_template**](GitignoreApi.md#gitignore_get_template) | **GET** /gitignore/templates/{name} | Get a gitignore template |


## gitignore_get_all_templates

> Array&lt;String&gt; gitignore_get_all_templates

Get all gitignore templates

List all templates available to pass as an option when [creating a repository](https://docs.github.com/rest/repos/repos#create-a-repository-for-the-authenticated-user).

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitignoreApi.new

begin
  # Get all gitignore templates
  result = api_instance.gitignore_get_all_templates
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitignoreApi->gitignore_get_all_templates: #{e}"
end
```

#### Using the gitignore_get_all_templates_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Array&lt;String&gt;, Integer, Hash)> gitignore_get_all_templates_with_http_info

```ruby
begin
  # Get all gitignore templates
  data, status_code, headers = api_instance.gitignore_get_all_templates_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Array&lt;String&gt;
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitignoreApi->gitignore_get_all_templates_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

**Array&lt;String&gt;**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gitignore_get_template

> <GitignoreTemplate> gitignore_get_template(name)

Get a gitignore template

Get the content of a gitignore template.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw .gitignore contents.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GitignoreApi.new
name = 'name_example' # String | 

begin
  # Get a gitignore template
  result = api_instance.gitignore_get_template(name)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitignoreApi->gitignore_get_template: #{e}"
end
```

#### Using the gitignore_get_template_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GitignoreTemplate>, Integer, Hash)> gitignore_get_template_with_http_info(name)

```ruby
begin
  # Get a gitignore template
  data, status_code, headers = api_instance.gitignore_get_template_with_http_info(name)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GitignoreTemplate>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GitignoreApi->gitignore_get_template_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** |  |  |

### Return type

[**GitignoreTemplate**](GitignoreTemplate.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

