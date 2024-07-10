# branch_protection_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**url** | **char \*** |  | [optional] 
**enabled** | **int** |  | [optional] 
**required_status_checks** | [**protected_branch_required_status_check_t**](protected_branch_required_status_check.md) \* |  | [optional] 
**enforce_admins** | [**protected_branch_admin_enforced_t**](protected_branch_admin_enforced.md) \* |  | [optional] 
**required_pull_request_reviews** | [**protected_branch_pull_request_review_t**](protected_branch_pull_request_review.md) \* |  | [optional] 
**restrictions** | [**branch_restriction_policy_t**](branch_restriction_policy.md) \* |  | [optional] 
**required_linear_history** | [**branch_protection_required_linear_history_t**](branch_protection_required_linear_history.md) \* |  | [optional] 
**allow_force_pushes** | [**branch_protection_required_linear_history_t**](branch_protection_required_linear_history.md) \* |  | [optional] 
**allow_deletions** | [**branch_protection_required_linear_history_t**](branch_protection_required_linear_history.md) \* |  | [optional] 
**block_creations** | [**branch_protection_required_linear_history_t**](branch_protection_required_linear_history.md) \* |  | [optional] 
**required_conversation_resolution** | [**branch_protection_required_linear_history_t**](branch_protection_required_linear_history.md) \* |  | [optional] 
**name** | **char \*** |  | [optional] 
**protection_url** | **char \*** |  | [optional] 
**required_signatures** | [**branch_protection_required_signatures_t**](branch_protection_required_signatures.md) \* |  | [optional] 
**lock_branch** | [**branch_protection_lock_branch_t**](branch_protection_lock_branch.md) \* |  | [optional] 
**allow_fork_syncing** | [**branch_protection_allow_fork_syncing_t**](branch_protection_allow_fork_syncing.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


