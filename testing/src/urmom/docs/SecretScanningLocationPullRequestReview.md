# OpenapiClient::SecretScanningLocationPullRequestReview

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **pull_request_review_url** | **String** | The API URL to get the pull request review where the secret was detected. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecretScanningLocationPullRequestReview.new(
  pull_request_review_url: https://api.github.com/repos/octocat/Hello-World/pulls/2846/reviews/80
)
```

