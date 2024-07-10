# OpenapiClient::EmojisApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**emojis_get**](EmojisApi.md#emojis_get) | **GET** /emojis | Get emojis |


## emojis_get

> Hash&lt;String, String&gt; emojis_get

Get emojis

Lists all the emojis available to use on GitHub.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::EmojisApi.new

begin
  # Get emojis
  result = api_instance.emojis_get
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling EmojisApi->emojis_get: #{e}"
end
```

#### Using the emojis_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Hash&lt;String, String&gt;, Integer, Hash)> emojis_get_with_http_info

```ruby
begin
  # Get emojis
  data, status_code, headers = api_instance.emojis_get_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Hash&lt;String, String&gt;
rescue OpenapiClient::ApiError => e
  puts "Error when calling EmojisApi->emojis_get_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

**Hash&lt;String, String&gt;**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

