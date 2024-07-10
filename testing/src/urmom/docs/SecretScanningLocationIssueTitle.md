# OpenapiClient::SecretScanningLocationIssueTitle

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **issue_title_url** | **String** | The API URL to get the issue where the secret was detected. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecretScanningLocationIssueTitle.new(
  issue_title_url: https://api.github.com/repos/octocat/Hello-World/issues/1347
)
```

