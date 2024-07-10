# OpenapiClient::ProtectedBranchRequiredPullRequestReviewsDismissalRestrictions

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **users_url** | **String** |  |  |
| **teams_url** | **String** |  |  |
| **users** | [**Array&lt;SimpleUser&gt;**](SimpleUser.md) |  |  |
| **teams** | [**Array&lt;Team&gt;**](Team.md) |  |  |
| **apps** | [**Array&lt;Integration&gt;**](Integration.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProtectedBranchRequiredPullRequestReviewsDismissalRestrictions.new(
  url: null,
  users_url: null,
  teams_url: null,
  users: null,
  teams: null,
  apps: null
)
```

