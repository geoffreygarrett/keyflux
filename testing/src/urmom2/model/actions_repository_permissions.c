#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_repository_permissions.h"


char* allowed_actionsactions_repository_permissions_ToString(github_v3_rest_api_actions_repository_permissions__e allowed_actions) {
    char* allowed_actionsArray[] =  { "NULL", "all", "local_only", "selected" };
	return allowed_actionsArray[allowed_actions];
}

github_v3_rest_api_actions_repository_permissions__e allowed_actionsactions_repository_permissions_FromString(char* allowed_actions){
    int stringToReturn = 0;
    char *allowed_actionsArray[] =  { "NULL", "all", "local_only", "selected" };
    size_t sizeofArray = sizeof(allowed_actionsArray) / sizeof(allowed_actionsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(allowed_actions, allowed_actionsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

actions_repository_permissions_t *actions_repository_permissions_create(
    int enabled,
    allowed_actions_t *allowed_actions,
    char *selected_actions_url
    ) {
    actions_repository_permissions_t *actions_repository_permissions_local_var = malloc(sizeof(actions_repository_permissions_t));
    if (!actions_repository_permissions_local_var) {
        return NULL;
    }
    actions_repository_permissions_local_var->enabled = enabled;
    actions_repository_permissions_local_var->allowed_actions = allowed_actions;
    actions_repository_permissions_local_var->selected_actions_url = selected_actions_url;

    return actions_repository_permissions_local_var;
}


void actions_repository_permissions_free(actions_repository_permissions_t *actions_repository_permissions) {
    if(NULL == actions_repository_permissions){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_repository_permissions->allowed_actions) {
        allowed_actions_free(actions_repository_permissions->allowed_actions);
        actions_repository_permissions->allowed_actions = NULL;
    }
    if (actions_repository_permissions->selected_actions_url) {
        free(actions_repository_permissions->selected_actions_url);
        actions_repository_permissions->selected_actions_url = NULL;
    }
    free(actions_repository_permissions);
}

cJSON *actions_repository_permissions_convertToJSON(actions_repository_permissions_t *actions_repository_permissions) {
    cJSON *item = cJSON_CreateObject();

    // actions_repository_permissions->enabled
    if (!actions_repository_permissions->enabled) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "enabled", actions_repository_permissions->enabled) == NULL) {
    goto fail; //Bool
    }


    // actions_repository_permissions->allowed_actions
    if(actions_repository_permissions->allowed_actions != github_v3_rest_api_actions_repository_permissions__NULL) {
    cJSON *allowed_actions_local_JSON = allowed_actions_convertToJSON(actions_repository_permissions->allowed_actions);
    if(allowed_actions_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "allowed_actions", allowed_actions_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // actions_repository_permissions->selected_actions_url
    if(actions_repository_permissions->selected_actions_url) {
    if(cJSON_AddStringToObject(item, "selected_actions_url", actions_repository_permissions->selected_actions_url) == NULL) {
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

actions_repository_permissions_t *actions_repository_permissions_parseFromJSON(cJSON *actions_repository_permissionsJSON){

    actions_repository_permissions_t *actions_repository_permissions_local_var = NULL;

    // define the local variable for actions_repository_permissions->allowed_actions
    allowed_actions_t *allowed_actions_local_nonprim = NULL;

    // actions_repository_permissions->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(actions_repository_permissionsJSON, "enabled");
    if (!enabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }

    // actions_repository_permissions->allowed_actions
    cJSON *allowed_actions = cJSON_GetObjectItemCaseSensitive(actions_repository_permissionsJSON, "allowed_actions");
    if (allowed_actions) { 
    allowed_actions_local_nonprim = allowed_actions_parseFromJSON(allowed_actions); //custom
    }

    // actions_repository_permissions->selected_actions_url
    cJSON *selected_actions_url = cJSON_GetObjectItemCaseSensitive(actions_repository_permissionsJSON, "selected_actions_url");
    if (selected_actions_url) { 
    if(!cJSON_IsString(selected_actions_url))
    {
    goto end; //String
    }
    }


    actions_repository_permissions_local_var = actions_repository_permissions_create (
        enabled->valueint,
        allowed_actions ? allowed_actions_local_nonprim : NULL,
        selected_actions_url ? strdup(selected_actions_url->valuestring) : NULL
        );

    return actions_repository_permissions_local_var;
end:
    if (allowed_actions_local_nonprim) {
        allowed_actions_free(allowed_actions_local_nonprim);
        allowed_actions_local_nonprim = NULL;
    }
    return NULL;

}
