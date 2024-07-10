# OpenapiClient::ShortBranch

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** |  |  |
| **commit** | [**ShortBranchCommit**](ShortBranchCommit.md) |  |  |
| **protected** | **Boolean** |  |  |
| **protection** | [**BranchProtection**](BranchProtection.md) |  | [optional] |
| **protection_url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ShortBranch.new(
  name: null,
  commit: null,
  protected: null,
  protection: null,
  protection_url: null
)
```

