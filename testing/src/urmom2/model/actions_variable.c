#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_variable.h"



actions_variable_t *actions_variable_create(
    char *name,
    char *value,
    char *created_at,
    char *updated_at
    ) {
    actions_variable_t *actions_variable_local_var = malloc(sizeof(actions_variable_t));
    if (!actions_variable_local_var) {
        return NULL;
    }
    actions_variable_local_var->name = name;
    actions_variable_local_var->value = value;
    actions_variable_local_var->created_at = created_at;
    actions_variable_local_var->updated_at = updated_at;

    return actions_variable_local_var;
}


void actions_variable_free(actions_variable_t *actions_variable) {
    if(NULL == actions_variable){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_variable->name) {
        free(actions_variable->name);
        actions_variable->name = NULL;
    }
    if (actions_variable->value) {
        free(actions_variable->value);
        actions_variable->value = NULL;
    }
    if (actions_variable->created_at) {
        free(actions_variable->created_at);
        actions_variable->created_at = NULL;
    }
    if (actions_variable->updated_at) {
        free(actions_variable->updated_at);
        actions_variable->updated_at = NULL;
    }
    free(actions_variable);
}

cJSON *actions_variable_convertToJSON(actions_variable_t *actions_variable) {
    cJSON *item = cJSON_CreateObject();

    // actions_variable->name
    if (!actions_variable->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", actions_variable->name) == NULL) {
    goto fail; //String
    }


    // actions_variable->value
    if (!actions_variable->value) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "value", actions_variable->value) == NULL) {
    goto fail; //String
    }


    // actions_variable->created_at
    if (!actions_variable->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", actions_variable->created_at) == NULL) {
    goto fail; //Date-Time
    }


    // actions_variable->updated_at
    if (!actions_variable->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updated_at", actions_variable->updated_at) == NULL) {
    goto fail; //Date-Time
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_variable_t *actions_variable_parseFromJSON(cJSON *actions_variableJSON){

    actions_variable_t *actions_variable_local_var = NULL;

    // actions_variable->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(actions_variableJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // actions_variable->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(actions_variableJSON, "value");
    if (!value) {
        goto end;
    }

    
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }

    // actions_variable->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(actions_variableJSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }

    // actions_variable->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(actions_variableJSON, "updated_at");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }


    actions_variable_local_var = actions_variable_create (
        strdup(name->valuestring),
        strdup(value->valuestring),
        strdup(created_at->valuestring),
        strdup(updated_at->valuestring)
        );

    return actions_variable_local_var;
end:
    return NULL;

}
