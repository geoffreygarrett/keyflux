# OpenapiClient::GistSimple

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **forks** | [**Array&lt;GistSimpleForksInner&gt;**](GistSimpleForksInner.md) |  | [optional] |
| **history** | [**Array&lt;GistHistory&gt;**](GistHistory.md) |  | [optional] |
| **fork_of** | [**Gist**](Gist.md) |  | [optional] |
| **url** | **String** |  | [optional] |
| **forks_url** | **String** |  | [optional] |
| **commits_url** | **String** |  | [optional] |
| **id** | **String** |  | [optional] |
| **node_id** | **String** |  | [optional] |
| **git_pull_url** | **String** |  | [optional] |
| **git_push_url** | **String** |  | [optional] |
| **html_url** | **String** |  | [optional] |
| **files** | [**Hash&lt;String, GistSimpleFilesValue&gt;**](GistSimpleFilesValue.md) |  | [optional] |
| **public** | **Boolean** |  | [optional] |
| **created_at** | **String** |  | [optional] |
| **updated_at** | **String** |  | [optional] |
| **description** | **String** |  | [optional] |
| **comments** | **Integer** |  | [optional] |
| **user** | **String** |  | [optional] |
| **comments_url** | **String** |  | [optional] |
| **owner** | [**SimpleUser**](SimpleUser.md) |  | [optional] |
| **truncated** | **Boolean** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GistSimple.new(
  forks: null,
  history: null,
  fork_of: null,
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
  truncated: null
)
```

