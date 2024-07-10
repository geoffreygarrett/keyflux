#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_secret.h"



actions_secret_t *actions_secret_create(
    char *name,
    char *created_at,
    char *updated_at
    ) {
    actions_secret_t *actions_secret_local_var = malloc(sizeof(actions_secret_t));
    if (!actions_secret_local_var) {
        return NULL;
    }
    actions_secret_local_var->name = name;
    actions_secret_local_var->created_at = created_at;
    actions_secret_local_var->updated_at = updated_at;

    return actions_secret_local_var;
}


void actions_secret_free(actions_secret_t *actions_secret) {
    if(NULL == actions_secret){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_secret->name) {
        free(actions_secret->name);
        actions_secret->name = NULL;
    }
    if (actions_secret->created_at) {
        free(actions_secret->created_at);
        actions_secret->created_at = NULL;
    }
    if (actions_secret->updated_at) {
        free(actions_secret->updated_at);
        actions_secret->updated_at = NULL;
    }
    free(actions_secret);
}

cJSON *actions_secret_convertToJSON(actions_secret_t *actions_secret) {
    cJSON *item = cJSON_CreateObject();

    // actions_secret->name
    if (!actions_secret->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", actions_secret->name) == NULL) {
    goto fail; //String
    }


    // actions_secret->created_at
    if (!actions_secret->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", actions_secret->created_at) == NULL) {
    goto fail; //Date-Time
    }


    // actions_secret->updated_at
    if (!actions_secret->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updated_at", actions_secret->updated_at) == NULL) {
    goto fail; //Date-Time
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_secret_t *actions_secret_parseFromJSON(cJSON *actions_secretJSON){

    actions_secret_t *actions_secret_local_var = NULL;

    // actions_secret->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(actions_secretJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // actions_secret->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(actions_secretJSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }

    // actions_secret->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(actions_secretJSON, "updated_at");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }


    actions_secret_local_var = actions_secret_create (
        strdup(name->valuestring),
        strdup(created_at->valuestring),
        strdup(updated_at->valuestring)
        );

    return actions_secret_local_var;
end:
    return NULL;

}
