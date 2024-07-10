#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_organization_permissions.h"


char* enabled_repositoriesactions_organization_permissions_ToString(github_v3_rest_api_actions_organization_permissions__e enabled_repositories) {
    char* enabled_repositoriesArray[] =  { "NULL", "all", "none", "selected" };
	return enabled_repositoriesArray[enabled_repositories];
}

github_v3_rest_api_actions_organization_permissions__e enabled_repositoriesactions_organization_permissions_FromString(char* enabled_repositories){
    int stringToReturn = 0;
    char *enabled_repositoriesArray[] =  { "NULL", "all", "none", "selected" };
    size_t sizeofArray = sizeof(enabled_repositoriesArray) / sizeof(enabled_repositoriesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(enabled_repositories, enabled_repositoriesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* allowed_actionsactions_organization_permissions_ToString(github_v3_rest_api_actions_organization_permissions__e allowed_actions) {
    char* allowed_actionsArray[] =  { "NULL", "all", "local_only", "selected" };
	return allowed_actionsArray[allowed_actions];
}

github_v3_rest_api_actions_organization_permissions__e allowed_actionsactions_organization_permissions_FromString(char* allowed_actions){
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

actions_organization_permissions_t *actions_organization_permissions_create(
    enabled_repositories_t *enabled_repositories,
    char *selected_repositories_url,
    allowed_actions_t *allowed_actions,
    char *selected_actions_url
    ) {
    actions_organization_permissions_t *actions_organization_permissions_local_var = malloc(sizeof(actions_organization_permissions_t));
    if (!actions_organization_permissions_local_var) {
        return NULL;
    }
    actions_organization_permissions_local_var->enabled_repositories = enabled_repositories;
    actions_organization_permissions_local_var->selected_repositories_url = selected_repositories_url;
    actions_organization_permissions_local_var->allowed_actions = allowed_actions;
    actions_organization_permissions_local_var->selected_actions_url = selected_actions_url;

    return actions_organization_permissions_local_var;
}


void actions_organization_permissions_free(actions_organization_permissions_t *actions_organization_permissions) {
    if(NULL == actions_organization_permissions){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_organization_permissions->enabled_repositories) {
        enabled_repositories_free(actions_organization_permissions->enabled_repositories);
        actions_organization_permissions->enabled_repositories = NULL;
    }
    if (actions_organization_permissions->selected_repositories_url) {
        free(actions_organization_permissions->selected_repositories_url);
        actions_organization_permissions->selected_repositories_url = NULL;
    }
    if (actions_organization_permissions->allowed_actions) {
        allowed_actions_free(actions_organization_permissions->allowed_actions);
        actions_organization_permissions->allowed_actions = NULL;
    }
    if (actions_organization_permissions->selected_actions_url) {
        free(actions_organization_permissions->selected_actions_url);
        actions_organization_permissions->selected_actions_url = NULL;
    }
    free(actions_organization_permissions);
}

cJSON *actions_organization_permissions_convertToJSON(actions_organization_permissions_t *actions_organization_permissions) {
    cJSON *item = cJSON_CreateObject();

    // actions_organization_permissions->enabled_repositories
    if (github_v3_rest_api_actions_organization_permissions__NULL == actions_organization_permissions->enabled_repositories) {
        goto fail;
    }
    cJSON *enabled_repositories_local_JSON = enabled_repositories_convertToJSON(actions_organization_permissions->enabled_repositories);
    if(enabled_repositories_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "enabled_repositories", enabled_repositories_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // actions_organization_permissions->selected_repositories_url
    if(actions_organization_permissions->selected_repositories_url) {
    if(cJSON_AddStringToObject(item, "selected_repositories_url", actions_organization_permissions->selected_repositories_url) == NULL) {
    goto fail; //String
    }
    }


    // actions_organization_permissions->allowed_actions
    if(actions_organization_permissions->allowed_actions != github_v3_rest_api_actions_organization_permissions__NULL) {
    cJSON *allowed_actions_local_JSON = allowed_actions_convertToJSON(actions_organization_permissions->allowed_actions);
    if(allowed_actions_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "allowed_actions", allowed_actions_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // actions_organization_permissions->selected_actions_url
    if(actions_organization_permissions->selected_actions_url) {
    if(cJSON_AddStringToObject(item, "selected_actions_url", actions_organization_permissions->selected_actions_url) == NULL) {
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

actions_organization_permissions_t *actions_organization_permissions_parseFromJSON(cJSON *actions_organization_permissionsJSON){

    actions_organization_permissions_t *actions_organization_permissions_local_var = NULL;

    // define the local variable for actions_organization_permissions->enabled_repositories
    enabled_repositories_t *enabled_repositories_local_nonprim = NULL;

    // define the local variable for actions_organization_permissions->allowed_actions
    allowed_actions_t *allowed_actions_local_nonprim = NULL;

    // actions_organization_permissions->enabled_repositories
    cJSON *enabled_repositories = cJSON_GetObjectItemCaseSensitive(actions_organization_permissionsJSON, "enabled_repositories");
    if (!enabled_repositories) {
        goto end;
    }

    
    enabled_repositories_local_nonprim = enabled_repositories_parseFromJSON(enabled_repositories); //custom

    // actions_organization_permissions->selected_repositories_url
    cJSON *selected_repositories_url = cJSON_GetObjectItemCaseSensitive(actions_organization_permissionsJSON, "selected_repositories_url");
    if (selected_repositories_url) { 
    if(!cJSON_IsString(selected_repositories_url))
    {
    goto end; //String
    }
    }

    // actions_organization_permissions->allowed_actions
    cJSON *allowed_actions = cJSON_GetObjectItemCaseSensitive(actions_organization_permissionsJSON, "allowed_actions");
    if (allowed_actions) { 
    allowed_actions_local_nonprim = allowed_actions_parseFromJSON(allowed_actions); //custom
    }

    // actions_organization_permissions->selected_actions_url
    cJSON *selected_actions_url = cJSON_GetObjectItemCaseSensitive(actions_organization_permissionsJSON, "selected_actions_url");
    if (selected_actions_url) { 
    if(!cJSON_IsString(selected_actions_url))
    {
    goto end; //String
    }
    }


    actions_organization_permissions_local_var = actions_organization_permissions_create (
        enabled_repositories_local_nonprim,
        selected_repositories_url ? strdup(selected_repositories_url->valuestring) : NULL,
        allowed_actions ? allowed_actions_local_nonprim : NULL,
        selected_actions_url ? strdup(selected_actions_url->valuestring) : NULL
        );

    return actions_organization_permissions_local_var;
end:
    if (enabled_repositories_local_nonprim) {
        enabled_repositories_free(enabled_repositories_local_nonprim);
        enabled_repositories_local_nonprim = NULL;
    }
    if (allowed_actions_local_nonprim) {
        allowed_actions_free(allowed_actions_local_nonprim);
        allowed_actions_local_nonprim = NULL;
    }
    return NULL;

}
