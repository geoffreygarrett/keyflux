#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_set_github_actions_permissions_organization_request.h"


char* enabled_repositoriesactions_set_github_actions_permissions_organization_request_ToString(github_v3_rest_api_actions_set_github_actions_permissions_organization_request__e enabled_repositories) {
    char* enabled_repositoriesArray[] =  { "NULL", "all", "none", "selected" };
	return enabled_repositoriesArray[enabled_repositories];
}

github_v3_rest_api_actions_set_github_actions_permissions_organization_request__e enabled_repositoriesactions_set_github_actions_permissions_organization_request_FromString(char* enabled_repositories){
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
char* allowed_actionsactions_set_github_actions_permissions_organization_request_ToString(github_v3_rest_api_actions_set_github_actions_permissions_organization_request__e allowed_actions) {
    char* allowed_actionsArray[] =  { "NULL", "all", "local_only", "selected" };
	return allowed_actionsArray[allowed_actions];
}

github_v3_rest_api_actions_set_github_actions_permissions_organization_request__e allowed_actionsactions_set_github_actions_permissions_organization_request_FromString(char* allowed_actions){
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

actions_set_github_actions_permissions_organization_request_t *actions_set_github_actions_permissions_organization_request_create(
    enabled_repositories_t *enabled_repositories,
    allowed_actions_t *allowed_actions
    ) {
    actions_set_github_actions_permissions_organization_request_t *actions_set_github_actions_permissions_organization_request_local_var = malloc(sizeof(actions_set_github_actions_permissions_organization_request_t));
    if (!actions_set_github_actions_permissions_organization_request_local_var) {
        return NULL;
    }
    actions_set_github_actions_permissions_organization_request_local_var->enabled_repositories = enabled_repositories;
    actions_set_github_actions_permissions_organization_request_local_var->allowed_actions = allowed_actions;

    return actions_set_github_actions_permissions_organization_request_local_var;
}


void actions_set_github_actions_permissions_organization_request_free(actions_set_github_actions_permissions_organization_request_t *actions_set_github_actions_permissions_organization_request) {
    if(NULL == actions_set_github_actions_permissions_organization_request){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_set_github_actions_permissions_organization_request->enabled_repositories) {
        enabled_repositories_free(actions_set_github_actions_permissions_organization_request->enabled_repositories);
        actions_set_github_actions_permissions_organization_request->enabled_repositories = NULL;
    }
    if (actions_set_github_actions_permissions_organization_request->allowed_actions) {
        allowed_actions_free(actions_set_github_actions_permissions_organization_request->allowed_actions);
        actions_set_github_actions_permissions_organization_request->allowed_actions = NULL;
    }
    free(actions_set_github_actions_permissions_organization_request);
}

cJSON *actions_set_github_actions_permissions_organization_request_convertToJSON(actions_set_github_actions_permissions_organization_request_t *actions_set_github_actions_permissions_organization_request) {
    cJSON *item = cJSON_CreateObject();

    // actions_set_github_actions_permissions_organization_request->enabled_repositories
    if (github_v3_rest_api_actions_set_github_actions_permissions_organization_request__NULL == actions_set_github_actions_permissions_organization_request->enabled_repositories) {
        goto fail;
    }
    cJSON *enabled_repositories_local_JSON = enabled_repositories_convertToJSON(actions_set_github_actions_permissions_organization_request->enabled_repositories);
    if(enabled_repositories_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "enabled_repositories", enabled_repositories_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // actions_set_github_actions_permissions_organization_request->allowed_actions
    if(actions_set_github_actions_permissions_organization_request->allowed_actions != github_v3_rest_api_actions_set_github_actions_permissions_organization_request__NULL) {
    cJSON *allowed_actions_local_JSON = allowed_actions_convertToJSON(actions_set_github_actions_permissions_organization_request->allowed_actions);
    if(allowed_actions_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "allowed_actions", allowed_actions_local_JSON);
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

actions_set_github_actions_permissions_organization_request_t *actions_set_github_actions_permissions_organization_request_parseFromJSON(cJSON *actions_set_github_actions_permissions_organization_requestJSON){

    actions_set_github_actions_permissions_organization_request_t *actions_set_github_actions_permissions_organization_request_local_var = NULL;

    // define the local variable for actions_set_github_actions_permissions_organization_request->enabled_repositories
    enabled_repositories_t *enabled_repositories_local_nonprim = NULL;

    // define the local variable for actions_set_github_actions_permissions_organization_request->allowed_actions
    allowed_actions_t *allowed_actions_local_nonprim = NULL;

    // actions_set_github_actions_permissions_organization_request->enabled_repositories
    cJSON *enabled_repositories = cJSON_GetObjectItemCaseSensitive(actions_set_github_actions_permissions_organization_requestJSON, "enabled_repositories");
    if (!enabled_repositories) {
        goto end;
    }

    
    enabled_repositories_local_nonprim = enabled_repositories_parseFromJSON(enabled_repositories); //custom

    // actions_set_github_actions_permissions_organization_request->allowed_actions
    cJSON *allowed_actions = cJSON_GetObjectItemCaseSensitive(actions_set_github_actions_permissions_organization_requestJSON, "allowed_actions");
    if (allowed_actions) { 
    allowed_actions_local_nonprim = allowed_actions_parseFromJSON(allowed_actions); //custom
    }


    actions_set_github_actions_permissions_organization_request_local_var = actions_set_github_actions_permissions_organization_request_create (
        enabled_repositories_local_nonprim,
        allowed_actions ? allowed_actions_local_nonprim : NULL
        );

    return actions_set_github_actions_permissions_organization_request_local_var;
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
