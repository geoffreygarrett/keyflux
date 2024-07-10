#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_workflow_access_to_repository.h"


char* access_levelactions_workflow_access_to_repository_ToString(github_v3_rest_api_actions_workflow_access_to_repository_ACCESSLEVEL_e access_level) {
    char* access_levelArray[] =  { "NULL", "none", "user", "organization" };
	return access_levelArray[access_level];
}

github_v3_rest_api_actions_workflow_access_to_repository_ACCESSLEVEL_e access_levelactions_workflow_access_to_repository_FromString(char* access_level){
    int stringToReturn = 0;
    char *access_levelArray[] =  { "NULL", "none", "user", "organization" };
    size_t sizeofArray = sizeof(access_levelArray) / sizeof(access_levelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(access_level, access_levelArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

actions_workflow_access_to_repository_t *actions_workflow_access_to_repository_create(
    github_v3_rest_api_actions_workflow_access_to_repository_ACCESSLEVEL_e access_level
    ) {
    actions_workflow_access_to_repository_t *actions_workflow_access_to_repository_local_var = malloc(sizeof(actions_workflow_access_to_repository_t));
    if (!actions_workflow_access_to_repository_local_var) {
        return NULL;
    }
    actions_workflow_access_to_repository_local_var->access_level = access_level;

    return actions_workflow_access_to_repository_local_var;
}


void actions_workflow_access_to_repository_free(actions_workflow_access_to_repository_t *actions_workflow_access_to_repository) {
    if(NULL == actions_workflow_access_to_repository){
        return ;
    }
    listEntry_t *listEntry;
    free(actions_workflow_access_to_repository);
}

cJSON *actions_workflow_access_to_repository_convertToJSON(actions_workflow_access_to_repository_t *actions_workflow_access_to_repository) {
    cJSON *item = cJSON_CreateObject();

    // actions_workflow_access_to_repository->access_level
    if (github_v3_rest_api_actions_workflow_access_to_repository_ACCESSLEVEL_NULL == actions_workflow_access_to_repository->access_level) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "access_level", access_levelactions_workflow_access_to_repository_ToString(actions_workflow_access_to_repository->access_level)) == NULL)
    {
    goto fail; //Enum
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_workflow_access_to_repository_t *actions_workflow_access_to_repository_parseFromJSON(cJSON *actions_workflow_access_to_repositoryJSON){

    actions_workflow_access_to_repository_t *actions_workflow_access_to_repository_local_var = NULL;

    // actions_workflow_access_to_repository->access_level
    cJSON *access_level = cJSON_GetObjectItemCaseSensitive(actions_workflow_access_to_repositoryJSON, "access_level");
    if (!access_level) {
        goto end;
    }

    github_v3_rest_api_actions_workflow_access_to_repository_ACCESSLEVEL_e access_levelVariable;
    
    if(!cJSON_IsString(access_level))
    {
    goto end; //Enum
    }
    access_levelVariable = access_levelactions_workflow_access_to_repository_FromString(access_level->valuestring);


    actions_workflow_access_to_repository_local_var = actions_workflow_access_to_repository_create (
        access_levelVariable
        );

    return actions_workflow_access_to_repository_local_var;
end:
    return NULL;

}
