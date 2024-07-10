# OpenapiClient::FileCommitCommit

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **sha** | **String** |  | [optional] |
| **node_id** | **String** |  | [optional] |
| **url** | **String** |  | [optional] |
| **html_url** | **String** |  | [optional] |
| **author** | [**FileCommitCommitAuthor**](FileCommitCommitAuthor.md) |  | [optional] |
| **committer** | [**FileCommitCommitAuthor**](FileCommitCommitAuthor.md) |  | [optional] |
| **message** | **String** |  | [optional] |
| **tree** | [**FileCommitCommitTree**](FileCommitCommitTree.md) |  | [optional] |
| **parents** | [**Array&lt;FileCommitCommitParentsInner&gt;**](FileCommitCommitParentsInner.md) |  | [optional] |
| **verification** | [**FileCommitCommitVerification**](FileCommitCommitVerification.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::FileCommitCommit.new(
  sha: null,
  node_id: null,
  url: null,
  html_url: null,
  author: null,
  committer: null,
  message: null,
  tree: null,
  parents: null,
  verification: null
)
```

