# OpenapiClient::CodesOfConductApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**codes_of_conduct_get_all_codes_of_conduct**](CodesOfConductApi.md#codes_of_conduct_get_all_codes_of_conduct) | **GET** /codes_of_conduct | Get all codes of conduct |
| [**codes_of_conduct_get_conduct_code**](CodesOfConductApi.md#codes_of_conduct_get_conduct_code) | **GET** /codes_of_conduct/{key} | Get a code of conduct |


## codes_of_conduct_get_all_codes_of_conduct

> <Array<CodeOfConduct>> codes_of_conduct_get_all_codes_of_conduct

Get all codes of conduct

Returns array of all GitHub's codes of conduct.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodesOfConductApi.new

begin
  # Get all codes of conduct
  result = api_instance.codes_of_conduct_get_all_codes_of_conduct
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodesOfConductApi->codes_of_conduct_get_all_codes_of_conduct: #{e}"
end
```

#### Using the codes_of_conduct_get_all_codes_of_conduct_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<CodeOfConduct>>, Integer, Hash)> codes_of_conduct_get_all_codes_of_conduct_with_http_info

```ruby
begin
  # Get all codes of conduct
  data, status_code, headers = api_instance.codes_of_conduct_get_all_codes_of_conduct_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<CodeOfConduct>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodesOfConductApi->codes_of_conduct_get_all_codes_of_conduct_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Array&lt;CodeOfConduct&gt;**](CodeOfConduct.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## codes_of_conduct_get_conduct_code

> <CodeOfConduct> codes_of_conduct_get_conduct_code(key)

Get a code of conduct

Returns information about the specified GitHub code of conduct.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::CodesOfConductApi.new
key = 'key_example' # String | 

begin
  # Get a code of conduct
  result = api_instance.codes_of_conduct_get_conduct_code(key)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodesOfConductApi->codes_of_conduct_get_conduct_code: #{e}"
end
```

#### Using the codes_of_conduct_get_conduct_code_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CodeOfConduct>, Integer, Hash)> codes_of_conduct_get_conduct_code_with_http_info(key)

```ruby
begin
  # Get a code of conduct
  data, status_code, headers = api_instance.codes_of_conduct_get_conduct_code_with_http_info(key)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CodeOfConduct>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CodesOfConductApi->codes_of_conduct_get_conduct_code_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **key** | **String** |  |  |

### Return type

[**CodeOfConduct**](CodeOfConduct.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

