# OpenapiClient::GistCommit

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **version** | **String** |  |  |
| **user** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **change_status** | [**GistHistoryChangeStatus**](GistHistoryChangeStatus.md) |  |  |
| **committed_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GistCommit.new(
  url: https://api.github.com/gists/aa5a315d61ae9438b18d/57a7f021a713b1c5a6a199b54cc514735d2d462f,
  version: 57a7f021a713b1c5a6a199b54cc514735d2d462f,
  user: null,
  change_status: null,
  committed_at: 2010-04-14T02:15:15Z
)
```

