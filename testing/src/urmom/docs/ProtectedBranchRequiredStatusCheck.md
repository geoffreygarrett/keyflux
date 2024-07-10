# OpenapiClient::ProtectedBranchRequiredStatusCheck

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  | [optional] |
| **enforcement_level** | **String** |  | [optional] |
| **contexts** | **Array&lt;String&gt;** |  |  |
| **checks** | [**Array&lt;ProtectedBranchRequiredStatusCheckChecksInner&gt;**](ProtectedBranchRequiredStatusCheckChecksInner.md) |  |  |
| **contexts_url** | **String** |  | [optional] |
| **strict** | **Boolean** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProtectedBranchRequiredStatusCheck.new(
  url: null,
  enforcement_level: null,
  contexts: null,
  checks: null,
  contexts_url: null,
  strict: null
)
```

