# OpenapiClient::MarkdownApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**markdown_render**](MarkdownApi.md#markdown_render) | **POST** /markdown | Render a Markdown document |
| [**markdown_render_raw**](MarkdownApi.md#markdown_render_raw) | **POST** /markdown/raw | Render a Markdown document in raw mode |


## markdown_render

> String markdown_render(markdown_render_request)

Render a Markdown document



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MarkdownApi.new
markdown_render_request = OpenapiClient::MarkdownRenderRequest.new({text: 'text_example'}) # MarkdownRenderRequest | 

begin
  # Render a Markdown document
  result = api_instance.markdown_render(markdown_render_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MarkdownApi->markdown_render: #{e}"
end
```

#### Using the markdown_render_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(String, Integer, Hash)> markdown_render_with_http_info(markdown_render_request)

```ruby
begin
  # Render a Markdown document
  data, status_code, headers = api_instance.markdown_render_with_http_info(markdown_render_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => String
rescue OpenapiClient::ApiError => e
  puts "Error when calling MarkdownApi->markdown_render_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **markdown_render_request** | [**MarkdownRenderRequest**](MarkdownRenderRequest.md) |  |  |

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: text/html


## markdown_render_raw

> String markdown_render_raw(opts)

Render a Markdown document in raw mode

You must send Markdown as plain text (using a `Content-Type` header of `text/plain` or `text/x-markdown`) to this endpoint, rather than using JSON format. In raw mode, [GitHub Flavored Markdown](https://github.github.com/gfm/) is not supported and Markdown will be rendered in plain format like a README.md file. Markdown content must be 400 KB or less.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::MarkdownApi.new
opts = {
  body: '{"text":"Hello **world**"}' # String | 
}

begin
  # Render a Markdown document in raw mode
  result = api_instance.markdown_render_raw(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MarkdownApi->markdown_render_raw: #{e}"
end
```

#### Using the markdown_render_raw_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(String, Integer, Hash)> markdown_render_raw_with_http_info(opts)

```ruby
begin
  # Render a Markdown document in raw mode
  data, status_code, headers = api_instance.markdown_render_raw_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => String
rescue OpenapiClient::ApiError => e
  puts "Error when calling MarkdownApi->markdown_render_raw_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **body** | **String** |  | [optional] |

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: text/plain, text/x-markdown
- **Accept**: text/html

