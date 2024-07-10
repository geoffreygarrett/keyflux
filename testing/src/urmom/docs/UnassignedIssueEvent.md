# OpenapiClient::UnassignedIssueEvent

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **url** | **String** |  |  |
| **actor** | [**SimpleUser**](SimpleUser.md) |  |  |
| **event** | **String** |  |  |
| **commit_id** | **String** |  |  |
| **commit_url** | **String** |  |  |
| **created_at** | **String** |  |  |
| **performed_via_github_app** | [**NullableIntegration**](NullableIntegration.md) |  |  |
| **assignee** | [**SimpleUser**](SimpleUser.md) |  |  |
| **assigner** | [**SimpleUser**](SimpleUser.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::UnassignedIssueEvent.new(
  id: null,
  node_id: null,
  url: null,
  actor: null,
  event: null,
  commit_id: null,
  commit_url: null,
  created_at: null,
  performed_via_github_app: null,
  assignee: null,
  assigner: null
)
```

