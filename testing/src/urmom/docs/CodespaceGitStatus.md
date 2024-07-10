# OpenapiClient::CodespaceGitStatus

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ahead** | **Integer** | The number of commits the local repository is ahead of the remote. | [optional] |
| **behind** | **Integer** | The number of commits the local repository is behind the remote. | [optional] |
| **has_unpushed_changes** | **Boolean** | Whether the local repository has unpushed changes. | [optional] |
| **has_uncommitted_changes** | **Boolean** | Whether the local repository has uncommitted changes. | [optional] |
| **ref** | **String** | The current branch (or SHA if in detached HEAD state) of the local repository. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodespaceGitStatus.new(
  ahead: 0,
  behind: 0,
  has_unpushed_changes: null,
  has_uncommitted_changes: null,
  ref: main
)
```

