#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apps_check_token_request.h"



apps_check_token_request_t *apps_check_token_request_create(
    char *access_token
    ) {
    apps_check_token_request_t *apps_check_token_request_local_var = malloc(sizeof(apps_check_token_request_t));
    if (!apps_check_token_request_local_var) {
        return NULL;
    }
    apps_check_token_request_local_var->access_token = access_token;

    return apps_check_token_request_local_var;
}


void apps_check_token_request_free(apps_check_token_request_t *apps_check_token_request) {
    if(NULL == apps_check_token_request){
        return ;
    }
    listEntry_t *listEntry;
    if (apps_check_token_request->access_token) {
        free(apps_check_token_request->access_token);
        apps_check_token_request->access_token = NULL;
    }
    free(apps_check_token_request);
}

cJSON *apps_check_token_request_convertToJSON(apps_check_token_request_t *apps_check_token_request) {
    cJSON *item = cJSON_CreateObject();

    // apps_check_token_request->access_token
    if (!apps_check_token_request->access_token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "access_token", apps_check_token_request->access_token) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

apps_check_token_request_t *apps_check_token_request_parseFromJSON(cJSON *apps_check_token_requestJSON){

    apps_check_token_request_t *apps_check_token_request_local_var = NULL;

    // apps_check_token_request->access_token
    cJSON *access_token = cJSON_GetObjectItemCaseSensitive(apps_check_token_requestJSON, "access_token");
    if (!access_token) {
        goto end;
    }

    
    if(!cJSON_IsString(access_token))
    {
    goto end; //String
    }


    apps_check_token_request_local_var = apps_check_token_request_create (
        strdup(access_token->valuestring)
        );

    return apps_check_token_request_local_var;
end:
    return NULL;

}
