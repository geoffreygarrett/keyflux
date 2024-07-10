# OpenapiClient::SecretScanningLocationPullRequestComment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **pull_request_comment_url** | **String** | The API URL to get the pull request comment where the secret was detected. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecretScanningLocationPullRequestComment.new(
  pull_request_comment_url: https://api.github.com/repos/octocat/Hello-World/issues/comments/1081119451
)
```

