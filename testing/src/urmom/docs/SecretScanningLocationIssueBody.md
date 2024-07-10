# OpenapiClient::SecretScanningLocationIssueBody

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **issue_body_url** | **String** | The API URL to get the issue where the secret was detected. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecretScanningLocationIssueBody.new(
  issue_body_url: https://api.github.com/repos/octocat/Hello-World/issues/1347
)
```

