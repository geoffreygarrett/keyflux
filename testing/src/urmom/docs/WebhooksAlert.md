# OpenapiClient::WebhooksAlert

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **affected_package_name** | **String** |  |  |
| **affected_range** | **String** |  |  |
| **created_at** | **String** |  |  |
| **dismiss_reason** | **String** |  | [optional] |
| **dismissed_at** | **String** |  | [optional] |
| **dismisser** | [**User**](User.md) |  | [optional] |
| **external_identifier** | **String** |  |  |
| **external_reference** | **String** |  |  |
| **fix_reason** | **String** |  | [optional] |
| **fixed_at** | **Time** |  | [optional] |
| **fixed_in** | **String** |  | [optional] |
| **ghsa_id** | **String** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **number** | **Integer** |  |  |
| **severity** | **String** |  |  |
| **state** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhooksAlert.new(
  affected_package_name: null,
  affected_range: null,
  created_at: null,
  dismiss_reason: null,
  dismissed_at: null,
  dismisser: null,
  external_identifier: null,
  external_reference: null,
  fix_reason: null,
  fixed_at: null,
  fixed_in: null,
  ghsa_id: null,
  id: null,
  node_id: null,
  number: null,
  severity: null,
  state: null
)
```

