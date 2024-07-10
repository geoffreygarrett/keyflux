#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "allowed_actions.h"


char* allowed_actions_allowed_actions_ToString(github_v3_rest_api_allowed_actions__e allowed_actions) {
    char *allowed_actionsArray[] =  { "NULL", "all", "local_only", "selected" };
    return allowed_actionsArray[allowed_actions];
}

github_v3_rest_api_allowed_actions__e allowed_actions_allowed_actions_FromString(char* allowed_actions) {
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

cJSON *allowed_actions_allowed_actions_convertToJSON(github_v3_rest_api_allowed_actions__e allowed_actions) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "allowed_actions", allowed_actions_allowed_actions_ToString(allowed_actions)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

github_v3_rest_api_allowed_actions__e allowed_actions_allowed_actions_parseFromJSON(cJSON *allowed_actionsJSON) {
    github_v3_rest_api_allowed_actions__e *allowed_actions = NULL;
    github_v3_rest_api_allowed_actions__e allowed_actionsVariable;
    cJSON *allowed_actionsVar = cJSON_GetObjectItemCaseSensitive(allowed_actionsJSON, "allowed_actions");
    if(!cJSON_IsString(allowed_actionsVar) || (allowed_actionsVar->valuestring == NULL)){
        goto end;
    }
    allowed_actionsVariable = allowed_actions_allowed_actions_FromString(allowed_actionsVar->valuestring);
    return allowed_actionsVariable;
end:
    return 0;
}
