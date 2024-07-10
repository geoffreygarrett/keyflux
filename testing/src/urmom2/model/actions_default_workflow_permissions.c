#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_default_workflow_permissions.h"


char* actions_default_workflow_permissions_actions_default_workflow_permissions_ToString(github_v3_rest_api_actions_default_workflow_permissions__e actions_default_workflow_permissions) {
    char *actions_default_workflow_permissionsArray[] =  { "NULL", "read", "write" };
    return actions_default_workflow_permissionsArray[actions_default_workflow_permissions];
}

github_v3_rest_api_actions_default_workflow_permissions__e actions_default_workflow_permissions_actions_default_workflow_permissions_FromString(char* actions_default_workflow_permissions) {
    int stringToReturn = 0;
    char *actions_default_workflow_permissionsArray[] =  { "NULL", "read", "write" };
    size_t sizeofArray = sizeof(actions_default_workflow_permissionsArray) / sizeof(actions_default_workflow_permissionsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(actions_default_workflow_permissions, actions_default_workflow_permissionsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *actions_default_workflow_permissions_actions_default_workflow_permissions_convertToJSON(github_v3_rest_api_actions_default_workflow_permissions__e actions_default_workflow_permissions) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "actions_default_workflow_permissions", actions_default_workflow_permissions_actions_default_workflow_permissions_ToString(actions_default_workflow_permissions)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

github_v3_rest_api_actions_default_workflow_permissions__e actions_default_workflow_permissions_actions_default_workflow_permissions_parseFromJSON(cJSON *actions_default_workflow_permissionsJSON) {
    github_v3_rest_api_actions_default_workflow_permissions__e *actions_default_workflow_permissions = NULL;
    github_v3_rest_api_actions_default_workflow_permissions__e actions_default_workflow_permissionsVariable;
    cJSON *actions_default_workflow_permissionsVar = cJSON_GetObjectItemCaseSensitive(actions_default_workflow_permissionsJSON, "actions_default_workflow_permissions");
    if(!cJSON_IsString(actions_default_workflow_permissionsVar) || (actions_default_workflow_permissionsVar->valuestring == NULL)){
        goto end;
    }
    actions_default_workflow_permissionsVariable = actions_default_workflow_permissions_actions_default_workflow_permissions_FromString(actions_default_workflow_permissionsVar->valuestring);
    return actions_default_workflow_permissionsVariable;
end:
    return 0;
}
