# OpenapiClient::Gist

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **forks_url** | **String** |  |  |
| **commits_url** | **String** |  |  |
| **id** | **String** |  |  |
| **node_id** | **String** |  |  |
| **git_pull_url** | **String** |  |  |
| **git_push_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **files** | [**Hash&lt;String, BaseGistFilesValue&gt;**](BaseGistFilesValue.md) |  |  |
| **public** | **Boolean** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **description** | **String** |  |  |
| **comments** | **Integer** |  |  |
| **user** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **comments_url** | **String** |  |  |
| **owner** | [**NullableSimpleUser**](NullableSimpleUser.md) |  | [optional] |
| **truncated** | **Boolean** |  | [optional] |
| **forks** | **Array&lt;Object&gt;** |  | [optional] |
| **history** | **Array&lt;Object&gt;** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Gist.new(
  url: null,
  forks_url: null,
  commits_url: null,
  id: null,
  node_id: null,
  git_pull_url: null,
  git_push_url: null,
  html_url: null,
  files: null,
  public: null,
  created_at: null,
  updated_at: null,
  description: null,
  comments: null,
  user: null,
  comments_url: null,
  owner: null,
  truncated: null,
  forks: null,
  history: null
)
```

