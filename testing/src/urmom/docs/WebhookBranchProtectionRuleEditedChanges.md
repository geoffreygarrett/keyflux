# OpenapiClient::WebhookBranchProtectionRuleEditedChanges

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **admin_enforced** | [**WebhookBranchProtectionRuleEditedChangesAdminEnforced**](WebhookBranchProtectionRuleEditedChangesAdminEnforced.md) |  | [optional] |
| **authorized_actor_names** | [**WebhookBranchProtectionRuleEditedChangesAuthorizedActorNames**](WebhookBranchProtectionRuleEditedChangesAuthorizedActorNames.md) |  | [optional] |
| **authorized_actors_only** | [**WebhookBranchProtectionRuleEditedChangesAdminEnforced**](WebhookBranchProtectionRuleEditedChangesAdminEnforced.md) |  | [optional] |
| **authorized_dismissal_actors_only** | [**WebhookBranchProtectionRuleEditedChangesAdminEnforced**](WebhookBranchProtectionRuleEditedChangesAdminEnforced.md) |  | [optional] |
| **linear_history_requirement_enforcement_level** | [**WebhookBranchProtectionRuleEditedChangesLinearHistoryRequirementEnforcementLevel**](WebhookBranchProtectionRuleEditedChangesLinearHistoryRequirementEnforcementLevel.md) |  | [optional] |
| **lock_branch_enforcement_level** | [**WebhookBranchProtectionRuleEditedChangesLinearHistoryRequirementEnforcementLevel**](WebhookBranchProtectionRuleEditedChangesLinearHistoryRequirementEnforcementLevel.md) |  | [optional] |
| **lock_allows_fork_sync** | [**WebhookBranchProtectionRuleEditedChangesAdminEnforced**](WebhookBranchProtectionRuleEditedChangesAdminEnforced.md) |  | [optional] |
| **pull_request_reviews_enforcement_level** | [**WebhookBranchProtectionRuleEditedChangesLinearHistoryRequirementEnforcementLevel**](WebhookBranchProtectionRuleEditedChangesLinearHistoryRequirementEnforcementLevel.md) |  | [optional] |
| **require_last_push_approval** | [**WebhookBranchProtectionRuleEditedChangesAdminEnforced**](WebhookBranchProtectionRuleEditedChangesAdminEnforced.md) |  | [optional] |
| **required_status_checks** | [**WebhookBranchProtectionRuleEditedChangesAuthorizedActorNames**](WebhookBranchProtectionRuleEditedChangesAuthorizedActorNames.md) |  | [optional] |
| **required_status_checks_enforcement_level** | [**WebhookBranchProtectionRuleEditedChangesLinearHistoryRequirementEnforcementLevel**](WebhookBranchProtectionRuleEditedChangesLinearHistoryRequirementEnforcementLevel.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookBranchProtectionRuleEditedChanges.new(
  admin_enforced: null,
  authorized_actor_names: null,
  authorized_actors_only: null,
  authorized_dismissal_actors_only: null,
  linear_history_requirement_enforcement_level: null,
  lock_branch_enforcement_level: null,
  lock_allows_fork_sync: null,
  pull_request_reviews_enforcement_level: null,
  require_last_push_approval: null,
  required_status_checks: null,
  required_status_checks_enforcement_level: null
)
```

