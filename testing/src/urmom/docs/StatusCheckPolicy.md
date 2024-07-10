# OpenapiClient::StatusCheckPolicy

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **strict** | **Boolean** |  |  |
| **contexts** | **Array&lt;String&gt;** |  |  |
| **checks** | [**Array&lt;StatusCheckPolicyChecksInner&gt;**](StatusCheckPolicyChecksInner.md) |  |  |
| **contexts_url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::StatusCheckPolicy.new(
  url: https://api.github.com/repos/octocat/Hello-World/branches/master/protection/required_status_checks,
  strict: true,
  contexts: [&quot;continuous-integration/travis-ci&quot;],
  checks: null,
  contexts_url: https://api.github.com/repos/octocat/Hello-World/branches/master/protection/required_status_checks/contexts
)
```

