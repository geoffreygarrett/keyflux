# OpenapiClient::BranchProtectionRequiredSignatures

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **enabled** | **Boolean** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::BranchProtectionRequiredSignatures.new(
  url: https://api.github.com/repos/octocat/Hello-World/branches/master/protection/required_signatures,
  enabled: true
)
```

