#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_get_default_workflow_permissions.h"


char* default_workflow_permissionsactions_get_default_workflow_permissions_ToString(github_v3_rest_api_actions_get_default_workflow_permissions__e default_workflow_permissions) {
    char* default_workflow_permissionsArray[] =  { "NULL", "read", "write" };
	return default_workflow_permissionsArray[default_workflow_permissions];
}

github_v3_rest_api_actions_get_default_workflow_permissions__e default_workflow_permissionsactions_get_default_workflow_permissions_FromString(char* default_workflow_permissions){
    int stringToReturn = 0;
    char *default_workflow_permissionsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(default_workflow_permissionsArray) / sizeof(default_workflow_permissionsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(default_workflow_permissions, default_workflow_permissionsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

actions_get_default_workflow_permissions_t *actions_get_default_workflow_permissions_create(
    actions_default_workflow_permissions_t *default_workflow_permissions,
    int can_approve_pull_request_reviews
    ) {
    actions_get_default_workflow_permissions_t *actions_get_default_workflow_permissions_local_var = malloc(sizeof(actions_get_default_workflow_permissions_t));
    if (!actions_get_default_workflow_permissions_local_var) {
        return NULL;
    }
    actions_get_default_workflow_permissions_local_var->default_workflow_permissions = default_workflow_permissions;
    actions_get_default_workflow_permissions_local_var->can_approve_pull_request_reviews = can_approve_pull_request_reviews;

    return actions_get_default_workflow_permissions_local_var;
}


void actions_get_default_workflow_permissions_free(actions_get_default_workflow_permissions_t *actions_get_default_workflow_permissions) {
    if(NULL == actions_get_default_workflow_permissions){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_get_default_workflow_permissions->default_workflow_permissions) {
        actions_default_workflow_permissions_free(actions_get_default_workflow_permissions->default_workflow_permissions);
        actions_get_default_workflow_permissions->default_workflow_permissions = NULL;
    }
    free(actions_get_default_workflow_permissions);
}

cJSON *actions_get_default_workflow_permissions_convertToJSON(actions_get_default_workflow_permissions_t *actions_get_default_workflow_permissions) {
    cJSON *item = cJSON_CreateObject();

    // actions_get_default_workflow_permissions->default_workflow_permissions
    if (github_v3_rest_api_actions_get_default_workflow_permissions__NULL == actions_get_default_workflow_permissions->default_workflow_permissions) {
        goto fail;
    }
    cJSON *default_workflow_permissions_local_JSON = actions_default_workflow_permissions_convertToJSON(actions_get_default_workflow_permissions->default_workflow_permissions);
    if(default_workflow_permissions_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "default_workflow_permissions", default_workflow_permissions_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // actions_get_default_workflow_permissions->can_approve_pull_request_reviews
    if (!actions_get_default_workflow_permissions->can_approve_pull_request_reviews) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "can_approve_pull_request_reviews", actions_get_default_workflow_permissions->can_approve_pull_request_reviews) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_get_default_workflow_permissions_t *actions_get_default_workflow_permissions_parseFromJSON(cJSON *actions_get_default_workflow_permissionsJSON){

    actions_get_default_workflow_permissions_t *actions_get_default_workflow_permissions_local_var = NULL;

    // define the local variable for actions_get_default_workflow_permissions->default_workflow_permissions
    actions_default_workflow_permissions_t *default_workflow_permissions_local_nonprim = NULL;

    // actions_get_default_workflow_permissions->default_workflow_permissions
    cJSON *default_workflow_permissions = cJSON_GetObjectItemCaseSensitive(actions_get_default_workflow_permissionsJSON, "default_workflow_permissions");
    if (!default_workflow_permissions) {
        goto end;
    }

    
    default_workflow_permissions_local_nonprim = actions_default_workflow_permissions_parseFromJSON(default_workflow_permissions); //custom

    // actions_get_default_workflow_permissions->can_approve_pull_request_reviews
    cJSON *can_approve_pull_request_reviews = cJSON_GetObjectItemCaseSensitive(actions_get_default_workflow_permissionsJSON, "can_approve_pull_request_reviews");
    if (!can_approve_pull_request_reviews) {
        goto end;
    }

    
    if(!cJSON_IsBool(can_approve_pull_request_reviews))
    {
    goto end; //Bool
    }


    actions_get_default_workflow_permissions_local_var = actions_get_default_workflow_permissions_create (
        default_workflow_permissions_local_nonprim,
        can_approve_pull_request_reviews->valueint
        );

    return actions_get_default_workflow_permissions_local_var;
end:
    if (default_workflow_permissions_local_nonprim) {
        actions_default_workflow_permissions_free(default_workflow_permissions_local_nonprim);
        default_workflow_permissions_local_nonprim = NULL;
    }
    return NULL;

}
