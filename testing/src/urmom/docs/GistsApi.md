# OpenapiClient::GistsApi

All URIs are relative to *https://api.github.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**gists_check_is_starred**](GistsApi.md#gists_check_is_starred) | **GET** /gists/{gist_id}/star | Check if a gist is starred |
| [**gists_create**](GistsApi.md#gists_create) | **POST** /gists | Create a gist |
| [**gists_create_comment**](GistsApi.md#gists_create_comment) | **POST** /gists/{gist_id}/comments | Create a gist comment |
| [**gists_delete**](GistsApi.md#gists_delete) | **DELETE** /gists/{gist_id} | Delete a gist |
| [**gists_delete_comment**](GistsApi.md#gists_delete_comment) | **DELETE** /gists/{gist_id}/comments/{comment_id} | Delete a gist comment |
| [**gists_fork**](GistsApi.md#gists_fork) | **POST** /gists/{gist_id}/forks | Fork a gist |
| [**gists_get**](GistsApi.md#gists_get) | **GET** /gists/{gist_id} | Get a gist |
| [**gists_get_comment**](GistsApi.md#gists_get_comment) | **GET** /gists/{gist_id}/comments/{comment_id} | Get a gist comment |
| [**gists_get_revision**](GistsApi.md#gists_get_revision) | **GET** /gists/{gist_id}/{sha} | Get a gist revision |
| [**gists_list**](GistsApi.md#gists_list) | **GET** /gists | List gists for the authenticated user |
| [**gists_list_comments**](GistsApi.md#gists_list_comments) | **GET** /gists/{gist_id}/comments | List gist comments |
| [**gists_list_commits**](GistsApi.md#gists_list_commits) | **GET** /gists/{gist_id}/commits | List gist commits |
| [**gists_list_for_user**](GistsApi.md#gists_list_for_user) | **GET** /users/{username}/gists | List gists for a user |
| [**gists_list_forks**](GistsApi.md#gists_list_forks) | **GET** /gists/{gist_id}/forks | List gist forks |
| [**gists_list_public**](GistsApi.md#gists_list_public) | **GET** /gists/public | List public gists |
| [**gists_list_starred**](GistsApi.md#gists_list_starred) | **GET** /gists/starred | List starred gists |
| [**gists_star**](GistsApi.md#gists_star) | **PUT** /gists/{gist_id}/star | Star a gist |
| [**gists_unstar**](GistsApi.md#gists_unstar) | **DELETE** /gists/{gist_id}/star | Unstar a gist |
| [**gists_update**](GistsApi.md#gists_update) | **PATCH** /gists/{gist_id} | Update a gist |
| [**gists_update_comment**](GistsApi.md#gists_update_comment) | **PATCH** /gists/{gist_id}/comments/{comment_id} | Update a gist comment |


## gists_check_is_starred

> gists_check_is_starred(gist_id)

Check if a gist is starred



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.

begin
  # Check if a gist is starred
  api_instance.gists_check_is_starred(gist_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_check_is_starred: #{e}"
end
```

#### Using the gists_check_is_starred_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> gists_check_is_starred_with_http_info(gist_id)

```ruby
begin
  # Check if a gist is starred
  data, status_code, headers = api_instance.gists_check_is_starred_with_http_info(gist_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_check_is_starred_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_create

> <GistSimple> gists_create(gists_create_request)

Create a gist

Allows you to add a new gist with one or more files.  **Note:** Don't name your files \"gistfile\" with a numerical suffix. This is the format of the automatic naming scheme that Gist uses internally.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gists_create_request = OpenapiClient::GistsCreateRequest.new({files: { key: OpenapiClient::GistsCreateRequestFilesValue.new({content: 'content_example'})}}) # GistsCreateRequest | 

begin
  # Create a gist
  result = api_instance.gists_create(gists_create_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_create: #{e}"
end
```

#### Using the gists_create_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GistSimple>, Integer, Hash)> gists_create_with_http_info(gists_create_request)

```ruby
begin
  # Create a gist
  data, status_code, headers = api_instance.gists_create_with_http_info(gists_create_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GistSimple>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_create_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gists_create_request** | [**GistsCreateRequest**](GistsCreateRequest.md) |  |  |

### Return type

[**GistSimple**](GistSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## gists_create_comment

> <GistComment> gists_create_comment(gist_id, gists_create_comment_request)

Create a gist comment

Creates a comment on a gist.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown. This is the default if you do not pass any specific media type. - **`application/vnd.github.base64+json`**: Returns the base64-encoded contents. This can be useful if your gist contains any invalid UTF-8 sequences.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.
gists_create_comment_request = OpenapiClient::GistsCreateCommentRequest.new({body: 'Body of the attachment'}) # GistsCreateCommentRequest | 

begin
  # Create a gist comment
  result = api_instance.gists_create_comment(gist_id, gists_create_comment_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_create_comment: #{e}"
end
```

#### Using the gists_create_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GistComment>, Integer, Hash)> gists_create_comment_with_http_info(gist_id, gists_create_comment_request)

```ruby
begin
  # Create a gist comment
  data, status_code, headers = api_instance.gists_create_comment_with_http_info(gist_id, gists_create_comment_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GistComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_create_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |
| **gists_create_comment_request** | [**GistsCreateCommentRequest**](GistsCreateCommentRequest.md) |  |  |

### Return type

[**GistComment**](GistComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## gists_delete

> gists_delete(gist_id)

Delete a gist



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.

begin
  # Delete a gist
  api_instance.gists_delete(gist_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_delete: #{e}"
end
```

#### Using the gists_delete_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> gists_delete_with_http_info(gist_id)

```ruby
begin
  # Delete a gist
  data, status_code, headers = api_instance.gists_delete_with_http_info(gist_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_delete_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_delete_comment

> gists_delete_comment(gist_id, comment_id)

Delete a gist comment



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.
comment_id = 56 # Integer | The unique identifier of the comment.

begin
  # Delete a gist comment
  api_instance.gists_delete_comment(gist_id, comment_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_delete_comment: #{e}"
end
```

#### Using the gists_delete_comment_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> gists_delete_comment_with_http_info(gist_id, comment_id)

```ruby
begin
  # Delete a gist comment
  data, status_code, headers = api_instance.gists_delete_comment_with_http_info(gist_id, comment_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_delete_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_fork

> <BaseGist> gists_fork(gist_id)

Fork a gist



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.

begin
  # Fork a gist
  result = api_instance.gists_fork(gist_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_fork: #{e}"
end
```

#### Using the gists_fork_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<BaseGist>, Integer, Hash)> gists_fork_with_http_info(gist_id)

```ruby
begin
  # Fork a gist
  data, status_code, headers = api_instance.gists_fork_with_http_info(gist_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <BaseGist>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_fork_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |

### Return type

[**BaseGist**](BaseGist.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_get

> <GistSimple> gists_get(gist_id)

Get a gist

Gets a specified gist.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown. This is the default if you do not pass any specific media type. - **`application/vnd.github.base64+json`**: Returns the base64-encoded contents. This can be useful if your gist contains any invalid UTF-8 sequences.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.

begin
  # Get a gist
  result = api_instance.gists_get(gist_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_get: #{e}"
end
```

#### Using the gists_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GistSimple>, Integer, Hash)> gists_get_with_http_info(gist_id)

```ruby
begin
  # Get a gist
  data, status_code, headers = api_instance.gists_get_with_http_info(gist_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GistSimple>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |

### Return type

[**GistSimple**](GistSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_get_comment

> <GistComment> gists_get_comment(gist_id, comment_id)

Get a gist comment

Gets a comment on a gist.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown. This is the default if you do not pass any specific media type. - **`application/vnd.github.base64+json`**: Returns the base64-encoded contents. This can be useful if your gist contains any invalid UTF-8 sequences.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.
comment_id = 56 # Integer | The unique identifier of the comment.

begin
  # Get a gist comment
  result = api_instance.gists_get_comment(gist_id, comment_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_get_comment: #{e}"
end
```

#### Using the gists_get_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GistComment>, Integer, Hash)> gists_get_comment_with_http_info(gist_id, comment_id)

```ruby
begin
  # Get a gist comment
  data, status_code, headers = api_instance.gists_get_comment_with_http_info(gist_id, comment_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GistComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_get_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |

### Return type

[**GistComment**](GistComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_get_revision

> <GistSimple> gists_get_revision(gist_id, sha)

Get a gist revision

Gets a specified gist revision.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown. This is the default if you do not pass any specific media type. - **`application/vnd.github.base64+json`**: Returns the base64-encoded contents. This can be useful if your gist contains any invalid UTF-8 sequences.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.
sha = 'sha_example' # String | 

begin
  # Get a gist revision
  result = api_instance.gists_get_revision(gist_id, sha)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_get_revision: #{e}"
end
```

#### Using the gists_get_revision_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GistSimple>, Integer, Hash)> gists_get_revision_with_http_info(gist_id, sha)

```ruby
begin
  # Get a gist revision
  data, status_code, headers = api_instance.gists_get_revision_with_http_info(gist_id, sha)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GistSimple>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_get_revision_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |
| **sha** | **String** |  |  |

### Return type

[**GistSimple**](GistSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_list

> <Array<BaseGist>> gists_list(opts)

List gists for the authenticated user

Lists the authenticated user's gists or if called anonymously, this endpoint returns all public gists:

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
opts = {
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List gists for the authenticated user
  result = api_instance.gists_list(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list: #{e}"
end
```

#### Using the gists_list_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<BaseGist>>, Integer, Hash)> gists_list_with_http_info(opts)

```ruby
begin
  # List gists for the authenticated user
  data, status_code, headers = api_instance.gists_list_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<BaseGist>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;BaseGist&gt;**](BaseGist.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_list_comments

> <Array<GistComment>> gists_list_comments(gist_id, opts)

List gist comments

Lists the comments on a gist.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown. This is the default if you do not pass any specific media type. - **`application/vnd.github.base64+json`**: Returns the base64-encoded contents. This can be useful if your gist contains any invalid UTF-8 sequences.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List gist comments
  result = api_instance.gists_list_comments(gist_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_comments: #{e}"
end
```

#### Using the gists_list_comments_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<GistComment>>, Integer, Hash)> gists_list_comments_with_http_info(gist_id, opts)

```ruby
begin
  # List gist comments
  data, status_code, headers = api_instance.gists_list_comments_with_http_info(gist_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<GistComment>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_comments_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;GistComment&gt;**](GistComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_list_commits

> <Array<GistCommit>> gists_list_commits(gist_id, opts)

List gist commits



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List gist commits
  result = api_instance.gists_list_commits(gist_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_commits: #{e}"
end
```

#### Using the gists_list_commits_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<GistCommit>>, Integer, Hash)> gists_list_commits_with_http_info(gist_id, opts)

```ruby
begin
  # List gist commits
  data, status_code, headers = api_instance.gists_list_commits_with_http_info(gist_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<GistCommit>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_commits_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;GistCommit&gt;**](GistCommit.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_list_for_user

> <Array<BaseGist>> gists_list_for_user(username, opts)

List gists for a user

Lists public gists for the specified user:

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
username = 'username_example' # String | The handle for the GitHub user account.
opts = {
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List gists for a user
  result = api_instance.gists_list_for_user(username, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_for_user: #{e}"
end
```

#### Using the gists_list_for_user_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<BaseGist>>, Integer, Hash)> gists_list_for_user_with_http_info(username, opts)

```ruby
begin
  # List gists for a user
  data, status_code, headers = api_instance.gists_list_for_user_with_http_info(username, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<BaseGist>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_for_user_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **username** | **String** | The handle for the GitHub user account. |  |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;BaseGist&gt;**](BaseGist.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_list_forks

> <Array<GistSimple>> gists_list_forks(gist_id, opts)

List gist forks



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.
opts = {
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List gist forks
  result = api_instance.gists_list_forks(gist_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_forks: #{e}"
end
```

#### Using the gists_list_forks_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<GistSimple>>, Integer, Hash)> gists_list_forks_with_http_info(gist_id, opts)

```ruby
begin
  # List gist forks
  data, status_code, headers = api_instance.gists_list_forks_with_http_info(gist_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<GistSimple>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_forks_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;GistSimple&gt;**](GistSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_list_public

> <Array<BaseGist>> gists_list_public(opts)

List public gists

List public gists sorted by most recently updated to least recently updated.  Note: With [pagination](https://docs.github.com/rest/guides/using-pagination-in-the-rest-api), you can fetch up to 3000 gists. For example, you can fetch 100 pages with 30 gists per page or 30 pages with 100 gists per page.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
opts = {
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List public gists
  result = api_instance.gists_list_public(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_public: #{e}"
end
```

#### Using the gists_list_public_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<BaseGist>>, Integer, Hash)> gists_list_public_with_http_info(opts)

```ruby
begin
  # List public gists
  data, status_code, headers = api_instance.gists_list_public_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<BaseGist>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_public_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;BaseGist&gt;**](BaseGist.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_list_starred

> <Array<BaseGist>> gists_list_starred(opts)

List starred gists

List the authenticated user's starred gists:

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
opts = {
  since: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`.
  per_page: 56, # Integer | The number of results per page (max 100). For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
  page: 56 # Integer | The page number of the results to fetch. For more information, see \"[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\"
}

begin
  # List starred gists
  result = api_instance.gists_list_starred(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_starred: #{e}"
end
```

#### Using the gists_list_starred_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<BaseGist>>, Integer, Hash)> gists_list_starred_with_http_info(opts)

```ruby
begin
  # List starred gists
  data, status_code, headers = api_instance.gists_list_starred_with_http_info(opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<BaseGist>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_list_starred_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **since** | **Time** | Only show results that were last updated after the given time. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |
| **per_page** | **Integer** | The number of results per page (max 100). For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 30] |
| **page** | **Integer** | The page number of the results to fetch. For more information, see \&quot;[Using pagination in the REST API](https://docs.github.com/rest/using-the-rest-api/using-pagination-in-the-rest-api).\&quot; | [optional][default to 1] |

### Return type

[**Array&lt;BaseGist&gt;**](BaseGist.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_star

> gists_star(gist_id)

Star a gist

Note that you'll need to set `Content-Length` to zero when calling out to this endpoint. For more information, see \"[HTTP method](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#http-method).\"

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.

begin
  # Star a gist
  api_instance.gists_star(gist_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_star: #{e}"
end
```

#### Using the gists_star_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> gists_star_with_http_info(gist_id)

```ruby
begin
  # Star a gist
  data, status_code, headers = api_instance.gists_star_with_http_info(gist_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_star_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_unstar

> gists_unstar(gist_id)

Unstar a gist



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.

begin
  # Unstar a gist
  api_instance.gists_unstar(gist_id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_unstar: #{e}"
end
```

#### Using the gists_unstar_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> gists_unstar_with_http_info(gist_id)

```ruby
begin
  # Unstar a gist
  data, status_code, headers = api_instance.gists_unstar_with_http_info(gist_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_unstar_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |

### Return type

nil (empty response body)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gists_update

> <GistSimple> gists_update(gist_id, gists_update_request)

Update a gist

Allows you to update a gist's description and to update, delete, or rename gist files. Files from the previous version of the gist that aren't explicitly changed during an edit are unchanged.  At least one of `description` or `files` is required.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown. This is the default if you do not pass any specific media type. - **`application/vnd.github.base64+json`**: Returns the base64-encoded contents. This can be useful if your gist contains any invalid UTF-8 sequences.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.
gists_update_request = OpenapiClient::GistsUpdateRequest.new # GistsUpdateRequest | 

begin
  # Update a gist
  result = api_instance.gists_update(gist_id, gists_update_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_update: #{e}"
end
```

#### Using the gists_update_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GistSimple>, Integer, Hash)> gists_update_with_http_info(gist_id, gists_update_request)

```ruby
begin
  # Update a gist
  data, status_code, headers = api_instance.gists_update_with_http_info(gist_id, gists_update_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GistSimple>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_update_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |
| **gists_update_request** | [**GistsUpdateRequest**](GistsUpdateRequest.md) |  |  |

### Return type

[**GistSimple**](GistSimple.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## gists_update_comment

> <GistComment> gists_update_comment(gist_id, comment_id, gists_create_comment_request)

Update a gist comment

Updates a comment on a gist.  This endpoint supports the following custom media types. For more information, see \"[Media types](https://docs.github.com/rest/using-the-rest-api/getting-started-with-the-rest-api#media-types).\"  - **`application/vnd.github.raw+json`**: Returns the raw markdown. This is the default if you do not pass any specific media type. - **`application/vnd.github.base64+json`**: Returns the base64-encoded contents. This can be useful if your gist contains any invalid UTF-8 sequences.

### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::GistsApi.new
gist_id = 'gist_id_example' # String | The unique identifier of the gist.
comment_id = 56 # Integer | The unique identifier of the comment.
gists_create_comment_request = OpenapiClient::GistsCreateCommentRequest.new({body: 'Body of the attachment'}) # GistsCreateCommentRequest | 

begin
  # Update a gist comment
  result = api_instance.gists_update_comment(gist_id, comment_id, gists_create_comment_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_update_comment: #{e}"
end
```

#### Using the gists_update_comment_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<GistComment>, Integer, Hash)> gists_update_comment_with_http_info(gist_id, comment_id, gists_create_comment_request)

```ruby
begin
  # Update a gist comment
  data, status_code, headers = api_instance.gists_update_comment_with_http_info(gist_id, comment_id, gists_create_comment_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <GistComment>
rescue OpenapiClient::ApiError => e
  puts "Error when calling GistsApi->gists_update_comment_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gist_id** | **String** | The unique identifier of the gist. |  |
| **comment_id** | **Integer** | The unique identifier of the comment. |  |
| **gists_create_comment_request** | [**GistsCreateCommentRequest**](GistsCreateCommentRequest.md) |  |  |

### Return type

[**GistComment**](GistComment.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

