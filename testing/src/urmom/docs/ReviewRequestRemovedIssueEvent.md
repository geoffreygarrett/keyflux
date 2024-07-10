# OpenapiClient::ReviewRequestRemovedIssueEvent

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
| **review_requester** | [**SimpleUser**](SimpleUser.md) |  |  |
| **requested_team** | [**Team**](Team.md) |  | [optional] |
| **requested_reviewer** | [**SimpleUser**](SimpleUser.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReviewRequestRemovedIssueEvent.new(
  id: null,
  node_id: null,
  url: null,
  actor: null,
  event: null,
  commit_id: null,
  commit_url: null,
  created_at: null,
  performed_via_github_app: null,
  review_requester: null,
  requested_team: null,
  requested_reviewer: null
)
```

