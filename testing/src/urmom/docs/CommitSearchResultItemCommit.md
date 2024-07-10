# OpenapiClient::CommitSearchResultItemCommit

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **author** | [**CommitSearchResultItemCommitAuthor**](CommitSearchResultItemCommitAuthor.md) |  |  |
| **committer** | [**NullableGitUser**](NullableGitUser.md) |  |  |
| **comment_count** | **Integer** |  |  |
| **message** | **String** |  |  |
| **tree** | [**ShortBranchCommit**](ShortBranchCommit.md) |  |  |
| **url** | **String** |  |  |
| **verification** | [**Verification**](Verification.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CommitSearchResultItemCommit.new(
  author: null,
  committer: null,
  comment_count: null,
  message: null,
  tree: null,
  url: null,
  verification: null
)
```

