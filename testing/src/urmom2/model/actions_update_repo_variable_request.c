#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_update_repo_variable_request.h"



actions_update_repo_variable_request_t *actions_update_repo_variable_request_create(
    char *name,
    char *value
    ) {
    actions_update_repo_variable_request_t *actions_update_repo_variable_request_local_var = malloc(sizeof(actions_update_repo_variable_request_t));
    if (!actions_update_repo_variable_request_local_var) {
        return NULL;
    }
    actions_update_repo_variable_request_local_var->name = name;
    actions_update_repo_variable_request_local_var->value = value;

    return actions_update_repo_variable_request_local_var;
}


void actions_update_repo_variable_request_free(actions_update_repo_variable_request_t *actions_update_repo_variable_request) {
    if(NULL == actions_update_repo_variable_request){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_update_repo_variable_request->name) {
        free(actions_update_repo_variable_request->name);
        actions_update_repo_variable_request->name = NULL;
    }
    if (actions_update_repo_variable_request->value) {
        free(actions_update_repo_variable_request->value);
        actions_update_repo_variable_request->value = NULL;
    }
    free(actions_update_repo_variable_request);
}

cJSON *actions_update_repo_variable_request_convertToJSON(actions_update_repo_variable_request_t *actions_update_repo_variable_request) {
    cJSON *item = cJSON_CreateObject();

    // actions_update_repo_variable_request->name
    if(actions_update_repo_variable_request->name) {
    if(cJSON_AddStringToObject(item, "name", actions_update_repo_variable_request->name) == NULL) {
    goto fail; //String
    }
    }


    // actions_update_repo_variable_request->value
    if(actions_update_repo_variable_request->value) {
    if(cJSON_AddStringToObject(item, "value", actions_update_repo_variable_request->value) == NULL) {
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

actions_update_repo_variable_request_t *actions_update_repo_variable_request_parseFromJSON(cJSON *actions_update_repo_variable_requestJSON){

    actions_update_repo_variable_request_t *actions_update_repo_variable_request_local_var = NULL;

    // actions_update_repo_variable_request->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(actions_update_repo_variable_requestJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // actions_update_repo_variable_request->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(actions_update_repo_variable_requestJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }


    actions_update_repo_variable_request_local_var = actions_update_repo_variable_request_create (
        name ? strdup(name->valuestring) : NULL,
        value ? strdup(value->valuestring) : NULL
        );

    return actions_update_repo_variable_request_local_var;
end:
    return NULL;

}
