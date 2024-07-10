#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_protection.h"



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
    ) {
    branch_protection_t *branch_protection_local_var = malloc(sizeof(branch_protection_t));
    if (!branch_protection_local_var) {
        return NULL;
    }
    branch_protection_local_var->url = url;
    branch_protection_local_var->enabled = enabled;
    branch_protection_local_var->required_status_checks = required_status_checks;
    branch_protection_local_var->enforce_admins = enforce_admins;
    branch_protection_local_var->required_pull_request_reviews = required_pull_request_reviews;
    branch_protection_local_var->restrictions = restrictions;
    branch_protection_local_var->required_linear_history = required_linear_history;
    branch_protection_local_var->allow_force_pushes = allow_force_pushes;
    branch_protection_local_var->allow_deletions = allow_deletions;
    branch_protection_local_var->block_creations = block_creations;
    branch_protection_local_var->required_conversation_resolution = required_conversation_resolution;
    branch_protection_local_var->name = name;
    branch_protection_local_var->protection_url = protection_url;
    branch_protection_local_var->required_signatures = required_signatures;
    branch_protection_local_var->lock_branch = lock_branch;
    branch_protection_local_var->allow_fork_syncing = allow_fork_syncing;

    return branch_protection_local_var;
}


void branch_protection_free(branch_protection_t *branch_protection) {
    if(NULL == branch_protection){
        return ;
    }
    listEntry_t *listEntry;
    if (branch_protection->url) {
        free(branch_protection->url);
        branch_protection->url = NULL;
    }
    if (branch_protection->required_status_checks) {
        protected_branch_required_status_check_free(branch_protection->required_status_checks);
        branch_protection->required_status_checks = NULL;
    }
    if (branch_protection->enforce_admins) {
        protected_branch_admin_enforced_free(branch_protection->enforce_admins);
        branch_protection->enforce_admins = NULL;
    }
    if (branch_protection->required_pull_request_reviews) {
        protected_branch_pull_request_review_free(branch_protection->required_pull_request_reviews);
        branch_protection->required_pull_request_reviews = NULL;
    }
    if (branch_protection->restrictions) {
        branch_restriction_policy_free(branch_protection->restrictions);
        branch_protection->restrictions = NULL;
    }
    if (branch_protection->required_linear_history) {
        branch_protection_required_linear_history_free(branch_protection->required_linear_history);
        branch_protection->required_linear_history = NULL;
    }
    if (branch_protection->allow_force_pushes) {
        branch_protection_required_linear_history_free(branch_protection->allow_force_pushes);
        branch_protection->allow_force_pushes = NULL;
    }
    if (branch_protection->allow_deletions) {
        branch_protection_required_linear_history_free(branch_protection->allow_deletions);
        branch_protection->allow_deletions = NULL;
    }
    if (branch_protection->block_creations) {
        branch_protection_required_linear_history_free(branch_protection->block_creations);
        branch_protection->block_creations = NULL;
    }
    if (branch_protection->required_conversation_resolution) {
        branch_protection_required_linear_history_free(branch_protection->required_conversation_resolution);
        branch_protection->required_conversation_resolution = NULL;
    }
    if (branch_protection->name) {
        free(branch_protection->name);
        branch_protection->name = NULL;
    }
    if (branch_protection->protection_url) {
        free(branch_protection->protection_url);
        branch_protection->protection_url = NULL;
    }
    if (branch_protection->required_signatures) {
        branch_protection_required_signatures_free(branch_protection->required_signatures);
        branch_protection->required_signatures = NULL;
    }
    if (branch_protection->lock_branch) {
        branch_protection_lock_branch_free(branch_protection->lock_branch);
        branch_protection->lock_branch = NULL;
    }
    if (branch_protection->allow_fork_syncing) {
        branch_protection_allow_fork_syncing_free(branch_protection->allow_fork_syncing);
        branch_protection->allow_fork_syncing = NULL;
    }
    free(branch_protection);
}

cJSON *branch_protection_convertToJSON(branch_protection_t *branch_protection) {
    cJSON *item = cJSON_CreateObject();

    // branch_protection->url
    if(branch_protection->url) {
    if(cJSON_AddStringToObject(item, "url", branch_protection->url) == NULL) {
    goto fail; //String
    }
    }


    // branch_protection->enabled
    if(branch_protection->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", branch_protection->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // branch_protection->required_status_checks
    if(branch_protection->required_status_checks) {
    cJSON *required_status_checks_local_JSON = protected_branch_required_status_check_convertToJSON(branch_protection->required_status_checks);
    if(required_status_checks_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "required_status_checks", required_status_checks_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_protection->enforce_admins
    if(branch_protection->enforce_admins) {
    cJSON *enforce_admins_local_JSON = protected_branch_admin_enforced_convertToJSON(branch_protection->enforce_admins);
    if(enforce_admins_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "enforce_admins", enforce_admins_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_protection->required_pull_request_reviews
    if(branch_protection->required_pull_request_reviews) {
    cJSON *required_pull_request_reviews_local_JSON = protected_branch_pull_request_review_convertToJSON(branch_protection->required_pull_request_reviews);
    if(required_pull_request_reviews_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "required_pull_request_reviews", required_pull_request_reviews_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_protection->restrictions
    if(branch_protection->restrictions) {
    cJSON *restrictions_local_JSON = branch_restriction_policy_convertToJSON(branch_protection->restrictions);
    if(restrictions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "restrictions", restrictions_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_protection->required_linear_history
    if(branch_protection->required_linear_history) {
    cJSON *required_linear_history_local_JSON = branch_protection_required_linear_history_convertToJSON(branch_protection->required_linear_history);
    if(required_linear_history_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "required_linear_history", required_linear_history_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_protection->allow_force_pushes
    if(branch_protection->allow_force_pushes) {
    cJSON *allow_force_pushes_local_JSON = branch_protection_required_linear_history_convertToJSON(branch_protection->allow_force_pushes);
    if(allow_force_pushes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "allow_force_pushes", allow_force_pushes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_protection->allow_deletions
    if(branch_protection->allow_deletions) {
    cJSON *allow_deletions_local_JSON = branch_protection_required_linear_history_convertToJSON(branch_protection->allow_deletions);
    if(allow_deletions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "allow_deletions", allow_deletions_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_protection->block_creations
    if(branch_protection->block_creations) {
    cJSON *block_creations_local_JSON = branch_protection_required_linear_history_convertToJSON(branch_protection->block_creations);
    if(block_creations_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "block_creations", block_creations_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_protection->required_conversation_resolution
    if(branch_protection->required_conversation_resolution) {
    cJSON *required_conversation_resolution_local_JSON = branch_protection_required_linear_history_convertToJSON(branch_protection->required_conversation_resolution);
    if(required_conversation_resolution_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "required_conversation_resolution", required_conversation_resolution_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_protection->name
    if(branch_protection->name) {
    if(cJSON_AddStringToObject(item, "name", branch_protection->name) == NULL) {
    goto fail; //String
    }
    }


    // branch_protection->protection_url
    if(branch_protection->protection_url) {
    if(cJSON_AddStringToObject(item, "protection_url", branch_protection->protection_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_protection->required_signatures
    if(branch_protection->required_signatures) {
    cJSON *required_signatures_local_JSON = branch_protection_required_signatures_convertToJSON(branch_protection->required_signatures);
    if(required_signatures_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "required_signatures", required_signatures_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_protection->lock_branch
    if(branch_protection->lock_branch) {
    cJSON *lock_branch_local_JSON = branch_protection_lock_branch_convertToJSON(branch_protection->lock_branch);
    if(lock_branch_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "lock_branch", lock_branch_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_protection->allow_fork_syncing
    if(branch_protection->allow_fork_syncing) {
    cJSON *allow_fork_syncing_local_JSON = branch_protection_allow_fork_syncing_convertToJSON(branch_protection->allow_fork_syncing);
    if(allow_fork_syncing_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "allow_fork_syncing", allow_fork_syncing_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branch_protection_t *branch_protection_parseFromJSON(cJSON *branch_protectionJSON){

    branch_protection_t *branch_protection_local_var = NULL;

    // define the local variable for branch_protection->required_status_checks
    protected_branch_required_status_check_t *required_status_checks_local_nonprim = NULL;

    // define the local variable for branch_protection->enforce_admins
    protected_branch_admin_enforced_t *enforce_admins_local_nonprim = NULL;

    // define the local variable for branch_protection->required_pull_request_reviews
    protected_branch_pull_request_review_t *required_pull_request_reviews_local_nonprim = NULL;

    // define the local variable for branch_protection->restrictions
    branch_restriction_policy_t *restrictions_local_nonprim = NULL;

    // define the local variable for branch_protection->required_linear_history
    branch_protection_required_linear_history_t *required_linear_history_local_nonprim = NULL;

    // define the local variable for branch_protection->allow_force_pushes
    branch_protection_required_linear_history_t *allow_force_pushes_local_nonprim = NULL;

    // define the local variable for branch_protection->allow_deletions
    branch_protection_required_linear_history_t *allow_deletions_local_nonprim = NULL;

    // define the local variable for branch_protection->block_creations
    branch_protection_required_linear_history_t *block_creations_local_nonprim = NULL;

    // define the local variable for branch_protection->required_conversation_resolution
    branch_protection_required_linear_history_t *required_conversation_resolution_local_nonprim = NULL;

    // define the local variable for branch_protection->required_signatures
    branch_protection_required_signatures_t *required_signatures_local_nonprim = NULL;

    // define the local variable for branch_protection->lock_branch
    branch_protection_lock_branch_t *lock_branch_local_nonprim = NULL;

    // define the local variable for branch_protection->allow_fork_syncing
    branch_protection_allow_fork_syncing_t *allow_fork_syncing_local_nonprim = NULL;

    // branch_protection->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }

    // branch_protection->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // branch_protection->required_status_checks
    cJSON *required_status_checks = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "required_status_checks");
    if (required_status_checks) { 
    required_status_checks_local_nonprim = protected_branch_required_status_check_parseFromJSON(required_status_checks); //nonprimitive
    }

    // branch_protection->enforce_admins
    cJSON *enforce_admins = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "enforce_admins");
    if (enforce_admins) { 
    enforce_admins_local_nonprim = protected_branch_admin_enforced_parseFromJSON(enforce_admins); //nonprimitive
    }

    // branch_protection->required_pull_request_reviews
    cJSON *required_pull_request_reviews = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "required_pull_request_reviews");
    if (required_pull_request_reviews) { 
    required_pull_request_reviews_local_nonprim = protected_branch_pull_request_review_parseFromJSON(required_pull_request_reviews); //nonprimitive
    }

    // branch_protection->restrictions
    cJSON *restrictions = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "restrictions");
    if (restrictions) { 
    restrictions_local_nonprim = branch_restriction_policy_parseFromJSON(restrictions); //nonprimitive
    }

    // branch_protection->required_linear_history
    cJSON *required_linear_history = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "required_linear_history");
    if (required_linear_history) { 
    required_linear_history_local_nonprim = branch_protection_required_linear_history_parseFromJSON(required_linear_history); //nonprimitive
    }

    // branch_protection->allow_force_pushes
    cJSON *allow_force_pushes = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "allow_force_pushes");
    if (allow_force_pushes) { 
    allow_force_pushes_local_nonprim = branch_protection_required_linear_history_parseFromJSON(allow_force_pushes); //nonprimitive
    }

    // branch_protection->allow_deletions
    cJSON *allow_deletions = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "allow_deletions");
    if (allow_deletions) { 
    allow_deletions_local_nonprim = branch_protection_required_linear_history_parseFromJSON(allow_deletions); //nonprimitive
    }

    // branch_protection->block_creations
    cJSON *block_creations = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "block_creations");
    if (block_creations) { 
    block_creations_local_nonprim = branch_protection_required_linear_history_parseFromJSON(block_creations); //nonprimitive
    }

    // branch_protection->required_conversation_resolution
    cJSON *required_conversation_resolution = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "required_conversation_resolution");
    if (required_conversation_resolution) { 
    required_conversation_resolution_local_nonprim = branch_protection_required_linear_history_parseFromJSON(required_conversation_resolution); //nonprimitive
    }

    // branch_protection->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // branch_protection->protection_url
    cJSON *protection_url = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "protection_url");
    if (protection_url) { 
    if(!cJSON_IsString(protection_url))
    {
    goto end; //String
    }
    }

    // branch_protection->required_signatures
    cJSON *required_signatures = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "required_signatures");
    if (required_signatures) { 
    required_signatures_local_nonprim = branch_protection_required_signatures_parseFromJSON(required_signatures); //nonprimitive
    }

    // branch_protection->lock_branch
    cJSON *lock_branch = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "lock_branch");
    if (lock_branch) { 
    lock_branch_local_nonprim = branch_protection_lock_branch_parseFromJSON(lock_branch); //nonprimitive
    }

    // branch_protection->allow_fork_syncing
    cJSON *allow_fork_syncing = cJSON_GetObjectItemCaseSensitive(branch_protectionJSON, "allow_fork_syncing");
    if (allow_fork_syncing) { 
    allow_fork_syncing_local_nonprim = branch_protection_allow_fork_syncing_parseFromJSON(allow_fork_syncing); //nonprimitive
    }


    branch_protection_local_var = branch_protection_create (
        url ? strdup(url->valuestring) : NULL,
        enabled ? enabled->valueint : 0,
        required_status_checks ? required_status_checks_local_nonprim : NULL,
        enforce_admins ? enforce_admins_local_nonprim : NULL,
        required_pull_request_reviews ? required_pull_request_reviews_local_nonprim : NULL,
        restrictions ? restrictions_local_nonprim : NULL,
        required_linear_history ? required_linear_history_local_nonprim : NULL,
        allow_force_pushes ? allow_force_pushes_local_nonprim : NULL,
        allow_deletions ? allow_deletions_local_nonprim : NULL,
        block_creations ? block_creations_local_nonprim : NULL,
        required_conversation_resolution ? required_conversation_resolution_local_nonprim : NULL,
        name ? strdup(name->valuestring) : NULL,
        protection_url ? strdup(protection_url->valuestring) : NULL,
        required_signatures ? required_signatures_local_nonprim : NULL,
        lock_branch ? lock_branch_local_nonprim : NULL,
        allow_fork_syncing ? allow_fork_syncing_local_nonprim : NULL
        );

    return branch_protection_local_var;
end:
    if (required_status_checks_local_nonprim) {
        protected_branch_required_status_check_free(required_status_checks_local_nonprim);
        required_status_checks_local_nonprim = NULL;
    }
    if (enforce_admins_local_nonprim) {
        protected_branch_admin_enforced_free(enforce_admins_local_nonprim);
        enforce_admins_local_nonprim = NULL;
    }
    if (required_pull_request_reviews_local_nonprim) {
        protected_branch_pull_request_review_free(required_pull_request_reviews_local_nonprim);
        required_pull_request_reviews_local_nonprim = NULL;
    }
    if (restrictions_local_nonprim) {
        branch_restriction_policy_free(restrictions_local_nonprim);
        restrictions_local_nonprim = NULL;
    }
    if (required_linear_history_local_nonprim) {
        branch_protection_required_linear_history_free(required_linear_history_local_nonprim);
        required_linear_history_local_nonprim = NULL;
    }
    if (allow_force_pushes_local_nonprim) {
        branch_protection_required_linear_history_free(allow_force_pushes_local_nonprim);
        allow_force_pushes_local_nonprim = NULL;
    }
    if (allow_deletions_local_nonprim) {
        branch_protection_required_linear_history_free(allow_deletions_local_nonprim);
        allow_deletions_local_nonprim = NULL;
    }
    if (block_creations_local_nonprim) {
        branch_protection_required_linear_history_free(block_creations_local_nonprim);
        block_creations_local_nonprim = NULL;
    }
    if (required_conversation_resolution_local_nonprim) {
        branch_protection_required_linear_history_free(required_conversation_resolution_local_nonprim);
        required_conversation_resolution_local_nonprim = NULL;
    }
    if (required_signatures_local_nonprim) {
        branch_protection_required_signatures_free(required_signatures_local_nonprim);
        required_signatures_local_nonprim = NULL;
    }
    if (lock_branch_local_nonprim) {
        branch_protection_lock_branch_free(lock_branch_local_nonprim);
        lock_branch_local_nonprim = NULL;
    }
    if (allow_fork_syncing_local_nonprim) {
        branch_protection_allow_fork_syncing_free(allow_fork_syncing_local_nonprim);
        allow_fork_syncing_local_nonprim = NULL;
    }
    return NULL;

}
