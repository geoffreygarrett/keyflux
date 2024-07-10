# OpenapiClient::ReposMergeRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **base** | **String** | The name of the base branch that the head will be merged into. |  |
| **head** | **String** | The head to merge. This can be a branch name or a commit SHA1. |  |
| **commit_message** | **String** | Commit message to use for the merge commit. If omitted, a default message will be used. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposMergeRequest.new(
  base: null,
  head: null,
  commit_message: null
)
```

