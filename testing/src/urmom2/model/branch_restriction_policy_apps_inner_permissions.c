#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_restriction_policy_apps_inner_permissions.h"



branch_restriction_policy_apps_inner_permissions_t *branch_restriction_policy_apps_inner_permissions_create(
    char *metadata,
    char *contents,
    char *issues,
    char *single_file
    ) {
    branch_restriction_policy_apps_inner_permissions_t *branch_restriction_policy_apps_inner_permissions_local_var = malloc(sizeof(branch_restriction_policy_apps_inner_permissions_t));
    if (!branch_restriction_policy_apps_inner_permissions_local_var) {
        return NULL;
    }
    branch_restriction_policy_apps_inner_permissions_local_var->metadata = metadata;
    branch_restriction_policy_apps_inner_permissions_local_var->contents = contents;
    branch_restriction_policy_apps_inner_permissions_local_var->issues = issues;
    branch_restriction_policy_apps_inner_permissions_local_var->single_file = single_file;

    return branch_restriction_policy_apps_inner_permissions_local_var;
}


void branch_restriction_policy_apps_inner_permissions_free(branch_restriction_policy_apps_inner_permissions_t *branch_restriction_policy_apps_inner_permissions) {
    if(NULL == branch_restriction_policy_apps_inner_permissions){
        return ;
    }
    listEntry_t *listEntry;
    if (branch_restriction_policy_apps_inner_permissions->metadata) {
        free(branch_restriction_policy_apps_inner_permissions->metadata);
        branch_restriction_policy_apps_inner_permissions->metadata = NULL;
    }
    if (branch_restriction_policy_apps_inner_permissions->contents) {
        free(branch_restriction_policy_apps_inner_permissions->contents);
        branch_restriction_policy_apps_inner_permissions->contents = NULL;
    }
    if (branch_restriction_policy_apps_inner_permissions->issues) {
        free(branch_restriction_policy_apps_inner_permissions->issues);
        branch_restriction_policy_apps_inner_permissions->issues = NULL;
    }
    if (branch_restriction_policy_apps_inner_permissions->single_file) {
        free(branch_restriction_policy_apps_inner_permissions->single_file);
        branch_restriction_policy_apps_inner_permissions->single_file = NULL;
    }
    free(branch_restriction_policy_apps_inner_permissions);
}

cJSON *branch_restriction_policy_apps_inner_permissions_convertToJSON(branch_restriction_policy_apps_inner_permissions_t *branch_restriction_policy_apps_inner_permissions) {
    cJSON *item = cJSON_CreateObject();

    // branch_restriction_policy_apps_inner_permissions->metadata
    if(branch_restriction_policy_apps_inner_permissions->metadata) {
    if(cJSON_AddStringToObject(item, "metadata", branch_restriction_policy_apps_inner_permissions->metadata) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_permissions->contents
    if(branch_restriction_policy_apps_inner_permissions->contents) {
    if(cJSON_AddStringToObject(item, "contents", branch_restriction_policy_apps_inner_permissions->contents) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_permissions->issues
    if(branch_restriction_policy_apps_inner_permissions->issues) {
    if(cJSON_AddStringToObject(item, "issues", branch_restriction_policy_apps_inner_permissions->issues) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_permissions->single_file
    if(branch_restriction_policy_apps_inner_permissions->single_file) {
    if(cJSON_AddStringToObject(item, "single_file", branch_restriction_policy_apps_inner_permissions->single_file) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branch_restriction_policy_apps_inner_permissions_t *branch_restriction_policy_apps_inner_permissions_parseFromJSON(cJSON *branch_restriction_policy_apps_inner_permissionsJSON){

    branch_restriction_policy_apps_inner_permissions_t *branch_restriction_policy_apps_inner_permissions_local_var = NULL;

    // branch_restriction_policy_apps_inner_permissions->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_permissionsJSON, "metadata");
    if (metadata) { 
    if(!cJSON_IsString(metadata))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_permissions->contents
    cJSON *contents = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_permissionsJSON, "contents");
    if (contents) { 
    if(!cJSON_IsString(contents))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_permissions->issues
    cJSON *issues = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_permissionsJSON, "issues");
    if (issues) { 
    if(!cJSON_IsString(issues))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_permissions->single_file
    cJSON *single_file = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_permissionsJSON, "single_file");
    if (single_file) { 
    if(!cJSON_IsString(single_file))
    {
    goto end; //String
    }
    }


    branch_restriction_policy_apps_inner_permissions_local_var = branch_restriction_policy_apps_inner_permissions_create (
        metadata ? strdup(metadata->valuestring) : NULL,
        contents ? strdup(contents->valuestring) : NULL,
        issues ? strdup(issues->valuestring) : NULL,
        single_file ? strdup(single_file->valuestring) : NULL
        );

    return branch_restriction_policy_apps_inner_permissions_local_var;
end:
    return NULL;

}
