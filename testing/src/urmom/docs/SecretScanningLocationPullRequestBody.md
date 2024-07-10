# OpenapiClient::SecretScanningLocationPullRequestBody

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **pull_request_body_url** | **String** | The API URL to get the pull request where the secret was detected. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecretScanningLocationPullRequestBody.new(
  pull_request_body_url: https://api.github.com/repos/octocat/Hello-World/pull/2846
)
```

