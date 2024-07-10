# OpenapiClient::ProtectedBranchRequiredPullRequestReviewsBypassPullRequestAllowances

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users** | [**Array&lt;SimpleUser&gt;**](SimpleUser.md) |  |  |
| **teams** | [**Array&lt;Team&gt;**](Team.md) |  |  |
| **apps** | [**Array&lt;Integration&gt;**](Integration.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProtectedBranchRequiredPullRequestReviewsBypassPullRequestAllowances.new(
  users: null,
  teams: null,
  apps: null
)
```

