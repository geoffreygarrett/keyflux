# OpenapiClient::CommitParentsInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **sha** | **String** |  |  |
| **url** | **String** |  |  |
| **html_url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CommitParentsInner.new(
  sha: 7638417db6d59f3c431d3e1f261cc637155684cd,
  url: https://api.github.com/repos/octocat/Hello-World/commits/7638417db6d59f3c431d3e1f261cc637155684cd,
  html_url: https://github.com/octocat/Hello-World/commit/7638417db6d59f3c431d3e1f261cc637155684cd
)
```

