# OpenapiClient::SecretScanningLocationPullRequestReviewComment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **pull_request_review_comment_url** | **String** | The API URL to get the pull request review comment where the secret was detected. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecretScanningLocationPullRequestReviewComment.new(
  pull_request_review_comment_url: https://api.github.com/repos/octocat/Hello-World/pulls/comments/12
)
```

