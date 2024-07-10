# OpenapiClient::ReposDeleteFileRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **message** | **String** | The commit message. |  |
| **sha** | **String** | The blob SHA of the file being deleted. |  |
| **branch** | **String** | The branch name. Default: the repository’s default branch | [optional] |
| **committer** | [**ReposDeleteFileRequestCommitter**](ReposDeleteFileRequestCommitter.md) |  | [optional] |
| **author** | [**ReposDeleteFileRequestAuthor**](ReposDeleteFileRequestAuthor.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposDeleteFileRequest.new(
  message: null,
  sha: null,
  branch: null,
  committer: null,
  author: null
)
```

