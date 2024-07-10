/*
 * branch_protection.h
 *
 * Branch Protection
 */

#ifndef _branch_protection_H_
#define _branch_protection_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_protection_t branch_protection_t;

#include "branch_protection_allow_fork_syncing.h"
#include "branch_protection_lock_branch.h"
#include "branch_protection_required_linear_history.h"
#include "branch_protection_required_signatures.h"
#include "branch_restriction_policy.h"
#include "protected_branch_admin_enforced.h"
#include "protected_branch_pull_request_review.h"
#include "protected_branch_required_status_check.h"



typedef struct branch_protection_t {
    char *url; // string
    int enabled; //boolean
    struct protected_branch_required_status_check_t *required_status_checks; //model
    struct protected_branch_admin_enforced_t *enforce_admins; //model
    struct protected_branch_pull_request_review_t *required_pull_request_reviews; //model
    struct branch_restriction_policy_t *restrictions; //model
    struct branch_protection_required_linear_history_t *required_linear_history; //model
    struct branch_protection_required_linear_history_t *allow_force_pushes; //model
    struct branch_protection_required_linear_history_t *allow_deletions; //model
    struct branch_protection_required_linear_history_t *block_creations; //model
    struct branch_protection_required_linear_history_t *required_conversation_resolution; //model
    char *name; // string
    char *protection_url; // string
    struct branch_protection_required_signatures_t *required_signatures; //model
    struct branch_protection_lock_branch_t *lock_branch; //model
    struct branch_protection_allow_fork_syncing_t *allow_fork_syncing; //model

} branch_protection_t;

branch_protection_t *branch_protection_create(
    char *url,
    int enabled,
    protected_branch_required_status_check_t *required_status_checks,
    protected_branch_admin_enforced_t *enforce_admins,
    protected_branch_pull_request_review_t *required_pull_request_reviews,
    branch_restriction_policy_t *restrictions,
    branch_protection_required_linear_history_t *required_linear_history,
    branch_protection_required_linear_history_t *allow_force_pushes,
    branch_protection_required_linear_history_t *allow_deletions,
    branch_protection_required_linear_history_t *block_creations,
    branch_protection_required_linear_history_t *required_conversation_resolution,
    char *name,
    char *protection_url,
    branch_protection_required_signatures_t *required_signatures,
    branch_protection_lock_branch_t *lock_branch,
    branch_protection_allow_fork_syncing_t *allow_fork_syncing
);

void branch_protection_free(branch_protection_t *branch_protection);

branch_protection_t *branch_protection_parseFromJSON(cJSON *branch_protectionJSON);

cJSON *branch_protection_convertToJSON(branch_protection_t *branch_protection);

#endif /* _branch_protection_H_ */

