# OpenapiClient::BranchProtection

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  | [optional] |
| **enabled** | **Boolean** |  | [optional] |
| **required_status_checks** | [**ProtectedBranchRequiredStatusCheck**](ProtectedBranchRequiredStatusCheck.md) |  | [optional] |
| **enforce_admins** | [**ProtectedBranchAdminEnforced**](ProtectedBranchAdminEnforced.md) |  | [optional] |
| **required_pull_request_reviews** | [**ProtectedBranchPullRequestReview**](ProtectedBranchPullRequestReview.md) |  | [optional] |
| **restrictions** | [**BranchRestrictionPolicy**](BranchRestrictionPolicy.md) |  | [optional] |
| **required_linear_history** | [**BranchProtectionRequiredLinearHistory**](BranchProtectionRequiredLinearHistory.md) |  | [optional] |
| **allow_force_pushes** | [**BranchProtectionRequiredLinearHistory**](BranchProtectionRequiredLinearHistory.md) |  | [optional] |
| **allow_deletions** | [**BranchProtectionRequiredLinearHistory**](BranchProtectionRequiredLinearHistory.md) |  | [optional] |
| **block_creations** | [**BranchProtectionRequiredLinearHistory**](BranchProtectionRequiredLinearHistory.md) |  | [optional] |
| **required_conversation_resolution** | [**BranchProtectionRequiredLinearHistory**](BranchProtectionRequiredLinearHistory.md) |  | [optional] |
| **name** | **String** |  | [optional] |
| **protection_url** | **String** |  | [optional] |
| **required_signatures** | [**BranchProtectionRequiredSignatures**](BranchProtectionRequiredSignatures.md) |  | [optional] |
| **lock_branch** | [**BranchProtectionLockBranch**](BranchProtectionLockBranch.md) |  | [optional] |
| **allow_fork_syncing** | [**BranchProtectionAllowForkSyncing**](BranchProtectionAllowForkSyncing.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::BranchProtection.new(
  url: null,
  enabled: null,
  required_status_checks: null,
  enforce_admins: null,
  required_pull_request_reviews: null,
  restrictions: null,
  required_linear_history: null,
  allow_force_pushes: null,
  allow_deletions: null,
  block_creations: null,
  required_conversation_resolution: null,
  name: &quot;branch/with/protection&quot;,
  protection_url: &quot;https://api.github.com/repos/owner-79e94e2d36b3fd06a32bb213/AAA_Public_Repo/branches/branch/with/protection/protection&quot;,
  required_signatures: null,
  lock_branch: null,
  allow_fork_syncing: null
)
```

