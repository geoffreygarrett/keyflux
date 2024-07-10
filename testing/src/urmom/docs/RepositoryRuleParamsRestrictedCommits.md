# OpenapiClient::RepositoryRuleParamsRestrictedCommits

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **oid** | **String** | Full or abbreviated commit hash to reject |  |
| **reason** | **String** | Reason for restriction | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRuleParamsRestrictedCommits.new(
  oid: null,
  reason: null
)
```

