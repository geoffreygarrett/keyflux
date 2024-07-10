# OpenapiClient::ProtectedBranchPullRequestReviewBypassPullRequestAllowances

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **users** | [**Array&lt;SimpleUser&gt;**](SimpleUser.md) | The list of users allowed to bypass pull request requirements. | [optional] |
| **teams** | [**Array&lt;Team&gt;**](Team.md) | The list of teams allowed to bypass pull request requirements. | [optional] |
| **apps** | [**Array&lt;Integration&gt;**](Integration.md) | The list of apps allowed to bypass pull request requirements. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProtectedBranchPullRequestReviewBypassPullRequestAllowances.new(
  users: null,
  teams: null,
  apps: null
)
```

