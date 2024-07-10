# OpenapiClient::ProtectedBranch

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **required_status_checks** | [**StatusCheckPolicy**](StatusCheckPolicy.md) |  | [optional] |
| **required_pull_request_reviews** | [**ProtectedBranchRequiredPullRequestReviews**](ProtectedBranchRequiredPullRequestReviews.md) |  | [optional] |
| **required_signatures** | [**BranchProtectionRequiredSignatures**](BranchProtectionRequiredSignatures.md) |  | [optional] |
| **enforce_admins** | [**ProtectedBranchEnforceAdmins**](ProtectedBranchEnforceAdmins.md) |  | [optional] |
| **required_linear_history** | [**ProtectedBranchRequiredLinearHistory**](ProtectedBranchRequiredLinearHistory.md) |  | [optional] |
| **allow_force_pushes** | [**ProtectedBranchRequiredLinearHistory**](ProtectedBranchRequiredLinearHistory.md) |  | [optional] |
| **allow_deletions** | [**ProtectedBranchRequiredLinearHistory**](ProtectedBranchRequiredLinearHistory.md) |  | [optional] |
| **restrictions** | [**BranchRestrictionPolicy**](BranchRestrictionPolicy.md) |  | [optional] |
| **required_conversation_resolution** | [**ProtectedBranchRequiredConversationResolution**](ProtectedBranchRequiredConversationResolution.md) |  | [optional] |
| **block_creations** | [**ProtectedBranchRequiredLinearHistory**](ProtectedBranchRequiredLinearHistory.md) |  | [optional] |
| **lock_branch** | [**ProtectedBranchLockBranch**](ProtectedBranchLockBranch.md) |  | [optional] |
| **allow_fork_syncing** | [**ProtectedBranchAllowForkSyncing**](ProtectedBranchAllowForkSyncing.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProtectedBranch.new(
  url: null,
  required_status_checks: null,
  required_pull_request_reviews: null,
  required_signatures: null,
  enforce_admins: null,
  required_linear_history: null,
  allow_force_pushes: null,
  allow_deletions: null,
  restrictions: null,
  required_conversation_resolution: null,
  block_creations: null,
  lock_branch: null,
  allow_fork_syncing: null
)
```

