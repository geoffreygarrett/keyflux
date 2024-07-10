# OpenapiClient::CommitCommit

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **author** | [**NullableGitUser**](NullableGitUser.md) |  |  |
| **committer** | [**NullableGitUser**](NullableGitUser.md) |  |  |
| **message** | **String** |  |  |
| **comment_count** | **Integer** |  |  |
| **tree** | [**CommitCommitTree**](CommitCommitTree.md) |  |  |
| **verification** | [**Verification**](Verification.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CommitCommit.new(
  url: https://api.github.com/repos/octocat/Hello-World/commits/6dcb09b5b57875f334f61aebed695e2e4193db5e,
  author: null,
  committer: null,
  message: Fix all the bugs,
  comment_count: 0,
  tree: null,
  verification: null
)
```

