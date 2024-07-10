# OpenapiClient::WebhooksRule

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **admin_enforced** | **Boolean** |  |  |
| **allow_deletions_enforcement_level** | **String** |  |  |
| **allow_force_pushes_enforcement_level** | **String** |  |  |
| **authorized_actor_names** | **Array&lt;String&gt;** |  |  |
| **authorized_actors_only** | **Boolean** |  |  |
| **authorized_dismissal_actors_only** | **Boolean** |  |  |
| **create_protected** | **Boolean** |  | [optional] |
| **created_at** | **Time** |  |  |
| **dismiss_stale_reviews_on_push** | **Boolean** |  |  |
| **id** | **Integer** |  |  |
| **ignore_approvals_from_contributors** | **Boolean** |  |  |
| **linear_history_requirement_enforcement_level** | **String** |  |  |
| **lock_branch_enforcement_level** | **String** | The enforcement level of the branch lock setting. &#x60;off&#x60; means the branch is not locked, &#x60;non_admins&#x60; means the branch is read-only for non_admins, and &#x60;everyone&#x60; means the branch is read-only for everyone. |  |
| **lock_allows_fork_sync** | **Boolean** | Whether users can pull changes from upstream when the branch is locked. Set to &#x60;true&#x60; to allow users to pull changes from upstream when the branch is locked. This setting is only applicable for forks. | [optional] |
| **merge_queue_enforcement_level** | **String** |  |  |
| **name** | **String** |  |  |
| **pull_request_reviews_enforcement_level** | **String** |  |  |
| **repository_id** | **Integer** |  |  |
| **require_code_owner_review** | **Boolean** |  |  |
| **require_last_push_approval** | **Boolean** | Whether the most recent push must be approved by someone other than the person who pushed it | [optional] |
| **required_approving_review_count** | **Integer** |  |  |
| **required_conversation_resolution_level** | **String** |  |  |
| **required_deployments_enforcement_level** | **String** |  |  |
| **required_status_checks** | **Array&lt;String&gt;** |  |  |
| **required_status_checks_enforcement_level** | **String** |  |  |
| **signature_requirement_enforcement_level** | **String** |  |  |
| **strict_required_status_checks_policy** | **Boolean** |  |  |
| **updated_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhooksRule.new(
  admin_enforced: null,
  allow_deletions_enforcement_level: null,
  allow_force_pushes_enforcement_level: null,
  authorized_actor_names: null,
  authorized_actors_only: null,
  authorized_dismissal_actors_only: null,
  create_protected: null,
  created_at: null,
  dismiss_stale_reviews_on_push: null,
  id: null,
  ignore_approvals_from_contributors: null,
  linear_history_requirement_enforcement_level: null,
  lock_branch_enforcement_level: null,
  lock_allows_fork_sync: null,
  merge_queue_enforcement_level: null,
  name: null,
  pull_request_reviews_enforcement_level: null,
  repository_id: null,
  require_code_owner_review: null,
  require_last_push_approval: null,
  required_approving_review_count: null,
  required_conversation_resolution_level: null,
  required_deployments_enforcement_level: null,
  required_status_checks: null,
  required_status_checks_enforcement_level: null,
  signature_requirement_enforcement_level: null,
  strict_required_status_checks_policy: null,
  updated_at: null
)
```

