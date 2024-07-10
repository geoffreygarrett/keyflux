#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_create_or_update_repo_secret_request.h"



actions_create_or_update_repo_secret_request_t *actions_create_or_update_repo_secret_request_create(
    char *encrypted_value,
    char *key_id
    ) {
    actions_create_or_update_repo_secret_request_t *actions_create_or_update_repo_secret_request_local_var = malloc(sizeof(actions_create_or_update_repo_secret_request_t));
    if (!actions_create_or_update_repo_secret_request_local_var) {
        return NULL;
    }
    actions_create_or_update_repo_secret_request_local_var->encrypted_value = encrypted_value;
    actions_create_or_update_repo_secret_request_local_var->key_id = key_id;

    return actions_create_or_update_repo_secret_request_local_var;
}


void actions_create_or_update_repo_secret_request_free(actions_create_or_update_repo_secret_request_t *actions_create_or_update_repo_secret_request) {
    if(NULL == actions_create_or_update_repo_secret_request){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_create_or_update_repo_secret_request->encrypted_value) {
        free(actions_create_or_update_repo_secret_request->encrypted_value);
        actions_create_or_update_repo_secret_request->encrypted_value = NULL;
    }
    if (actions_create_or_update_repo_secret_request->key_id) {
        free(actions_create_or_update_repo_secret_request->key_id);
        actions_create_or_update_repo_secret_request->key_id = NULL;
    }
    free(actions_create_or_update_repo_secret_request);
}

cJSON *actions_create_or_update_repo_secret_request_convertToJSON(actions_create_or_update_repo_secret_request_t *actions_create_or_update_repo_secret_request) {
    cJSON *item = cJSON_CreateObject();

    // actions_create_or_update_repo_secret_request->encrypted_value
    if(actions_create_or_update_repo_secret_request->encrypted_value) {
    if(cJSON_AddStringToObject(item, "encrypted_value", actions_create_or_update_repo_secret_request->encrypted_value) == NULL) {
    goto fail; //String
    }
    }


    // actions_create_or_update_repo_secret_request->key_id
    if(actions_create_or_update_repo_secret_request->key_id) {
    if(cJSON_AddStringToObject(item, "key_id", actions_create_or_update_repo_secret_request->key_id) == NULL) {
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

actions_create_or_update_repo_secret_request_t *actions_create_or_update_repo_secret_request_parseFromJSON(cJSON *actions_create_or_update_repo_secret_requestJSON){

    actions_create_or_update_repo_secret_request_t *actions_create_or_update_repo_secret_request_local_var = NULL;

    // actions_create_or_update_repo_secret_request->encrypted_value
    cJSON *encrypted_value = cJSON_GetObjectItemCaseSensitive(actions_create_or_update_repo_secret_requestJSON, "encrypted_value");
    if (encrypted_value) { 
    if(!cJSON_IsString(encrypted_value))
    {
    goto end; //String
    }
    }

    // actions_create_or_update_repo_secret_request->key_id
    cJSON *key_id = cJSON_GetObjectItemCaseSensitive(actions_create_or_update_repo_secret_requestJSON, "key_id");
    if (key_id) { 
    if(!cJSON_IsString(key_id))
    {
    goto end; //String
    }
    }


    actions_create_or_update_repo_secret_request_local_var = actions_create_or_update_repo_secret_request_create (
        encrypted_value ? strdup(encrypted_value->valuestring) : NULL,
        key_id ? strdup(key_id->valuestring) : NULL
        );

    return actions_create_or_update_repo_secret_request_local_var;
end:
    return NULL;

}
