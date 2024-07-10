# OpenapiClient::CommitSearchResultItem

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **sha** | **String** |  |  |
| **html_url** | **String** |  |  |
| **comments_url** | **String** |  |  |
| **commit** | [**CommitSearchResultItemCommit**](CommitSearchResultItemCommit.md) |  |  |
| **author** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **committer** | [**NullableGitUser**](NullableGitUser.md) |  |  |
| **parents** | [**Array&lt;FileCommitCommitParentsInner&gt;**](FileCommitCommitParentsInner.md) |  |  |
| **repository** | [**MinimalRepository**](MinimalRepository.md) |  |  |
| **score** | **Float** |  |  |
| **node_id** | **String** |  |  |
| **text_matches** | [**Array&lt;SearchResultTextMatchesInner&gt;**](SearchResultTextMatchesInner.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CommitSearchResultItem.new(
  url: null,
  sha: null,
  html_url: null,
  comments_url: null,
  commit: null,
  author: null,
  committer: null,
  parents: null,
  repository: null,
  score: null,
  node_id: null,
  text_matches: null
)
```

