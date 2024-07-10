# OpenapiClient::BranchWithProtection

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** |  |  |
| **commit** | [**Commit**](Commit.md) |  |  |
| **_links** | [**BranchWithProtectionLinks**](BranchWithProtectionLinks.md) |  |  |
| **protected** | **Boolean** |  |  |
| **protection** | [**BranchProtection**](BranchProtection.md) |  |  |
| **protection_url** | **String** |  |  |
| **pattern** | **String** |  | [optional] |
| **required_approving_review_count** | **Integer** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::BranchWithProtection.new(
  name: null,
  commit: null,
  _links: null,
  protected: null,
  protection: null,
  protection_url: null,
  pattern: &quot;mas*&quot;,
  required_approving_review_count: 1
)
```

