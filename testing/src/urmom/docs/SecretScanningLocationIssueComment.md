# OpenapiClient::SecretScanningLocationIssueComment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **issue_comment_url** | **String** | The API URL to get the issue comment where the secret was detected. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecretScanningLocationIssueComment.new(
  issue_comment_url: https://api.github.com/repos/octocat/Hello-World/issues/comments/1081119451
)
```

