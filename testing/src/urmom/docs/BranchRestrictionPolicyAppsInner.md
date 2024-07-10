# OpenapiClient::BranchRestrictionPolicyAppsInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  | [optional] |
| **slug** | **String** |  | [optional] |
| **node_id** | **String** |  | [optional] |
| **owner** | [**BranchRestrictionPolicyAppsInnerOwner**](BranchRestrictionPolicyAppsInnerOwner.md) |  | [optional] |
| **name** | **String** |  | [optional] |
| **description** | **String** |  | [optional] |
| **external_url** | **String** |  | [optional] |
| **html_url** | **String** |  | [optional] |
| **created_at** | **String** |  | [optional] |
| **updated_at** | **String** |  | [optional] |
| **permissions** | [**BranchRestrictionPolicyAppsInnerPermissions**](BranchRestrictionPolicyAppsInnerPermissions.md) |  | [optional] |
| **events** | **Array&lt;String&gt;** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::BranchRestrictionPolicyAppsInner.new(
  id: null,
  slug: null,
  node_id: null,
  owner: null,
  name: null,
  description: null,
  external_url: null,
  html_url: null,
  created_at: null,
  updated_at: null,
  permissions: null,
  events: null
)
```

