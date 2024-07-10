# OpenapiClient::ReposCreateOrUpdateFileContentsRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **message** | **String** | The commit message. |  |
| **content** | **String** | The new file content, using Base64 encoding. |  |
| **sha** | **String** | **Required if you are updating a file**. The blob SHA of the file being replaced. | [optional] |
| **branch** | **String** | The branch name. Default: the repository’s default branch. | [optional] |
| **committer** | [**ReposCreateOrUpdateFileContentsRequestCommitter**](ReposCreateOrUpdateFileContentsRequestCommitter.md) |  | [optional] |
| **author** | [**ReposCreateOrUpdateFileContentsRequestAuthor**](ReposCreateOrUpdateFileContentsRequestAuthor.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposCreateOrUpdateFileContentsRequest.new(
  message: null,
  content: null,
  sha: null,
  branch: null,
  committer: null,
  author: null
)
```

