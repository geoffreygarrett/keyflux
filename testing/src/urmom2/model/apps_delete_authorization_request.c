#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apps_delete_authorization_request.h"



apps_delete_authorization_request_t *apps_delete_authorization_request_create(
    char *access_token
    ) {
    apps_delete_authorization_request_t *apps_delete_authorization_request_local_var = malloc(sizeof(apps_delete_authorization_request_t));
    if (!apps_delete_authorization_request_local_var) {
        return NULL;
    }
    apps_delete_authorization_request_local_var->access_token = access_token;

    return apps_delete_authorization_request_local_var;
}


void apps_delete_authorization_request_free(apps_delete_authorization_request_t *apps_delete_authorization_request) {
    if(NULL == apps_delete_authorization_request){
        return ;
    }
    listEntry_t *listEntry;
    if (apps_delete_authorization_request->access_token) {
        free(apps_delete_authorization_request->access_token);
        apps_delete_authorization_request->access_token = NULL;
    }
    free(apps_delete_authorization_request);
}

cJSON *apps_delete_authorization_request_convertToJSON(apps_delete_authorization_request_t *apps_delete_authorization_request) {
    cJSON *item = cJSON_CreateObject();

    // apps_delete_authorization_request->access_token
    if (!apps_delete_authorization_request->access_token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "access_token", apps_delete_authorization_request->access_token) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

apps_delete_authorization_request_t *apps_delete_authorization_request_parseFromJSON(cJSON *apps_delete_authorization_requestJSON){

    apps_delete_authorization_request_t *apps_delete_authorization_request_local_var = NULL;

    // apps_delete_authorization_request->access_token
    cJSON *access_token = cJSON_GetObjectItemCaseSensitive(apps_delete_authorization_requestJSON, "access_token");
    if (!access_token) {
        goto end;
    }

    
    if(!cJSON_IsString(access_token))
    {
    goto end; //String
    }


    apps_delete_authorization_request_local_var = apps_delete_authorization_request_create (
        strdup(access_token->valuestring)
        );

    return apps_delete_authorization_request_local_var;
end:
    return NULL;

}
