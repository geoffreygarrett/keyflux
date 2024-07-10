#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authorization_app.h"



authorization_app_t *authorization_app_create(
    char *client_id,
    char *name,
    char *url
    ) {
    authorization_app_t *authorization_app_local_var = malloc(sizeof(authorization_app_t));
    if (!authorization_app_local_var) {
        return NULL;
    }
    authorization_app_local_var->client_id = client_id;
    authorization_app_local_var->name = name;
    authorization_app_local_var->url = url;

    return authorization_app_local_var;
}


void authorization_app_free(authorization_app_t *authorization_app) {
    if(NULL == authorization_app){
        return ;
    }
    listEntry_t *listEntry;
    if (authorization_app->client_id) {
        free(authorization_app->client_id);
        authorization_app->client_id = NULL;
    }
    if (authorization_app->name) {
        free(authorization_app->name);
        authorization_app->name = NULL;
    }
    if (authorization_app->url) {
        free(authorization_app->url);
        authorization_app->url = NULL;
    }
    free(authorization_app);
}

cJSON *authorization_app_convertToJSON(authorization_app_t *authorization_app) {
    cJSON *item = cJSON_CreateObject();

    // authorization_app->client_id
    if (!authorization_app->client_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "client_id", authorization_app->client_id) == NULL) {
    goto fail; //String
    }


    // authorization_app->name
    if (!authorization_app->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", authorization_app->name) == NULL) {
    goto fail; //String
    }


    // authorization_app->url
    if (!authorization_app->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", authorization_app->url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

authorization_app_t *authorization_app_parseFromJSON(cJSON *authorization_appJSON){

    authorization_app_t *authorization_app_local_var = NULL;

    // authorization_app->client_id
    cJSON *client_id = cJSON_GetObjectItemCaseSensitive(authorization_appJSON, "client_id");
    if (!client_id) {
        goto end;
    }

    
    if(!cJSON_IsString(client_id))
    {
    goto end; //String
    }

    // authorization_app->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(authorization_appJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // authorization_app->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(authorization_appJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }


    authorization_app_local_var = authorization_app_create (
        strdup(client_id->valuestring),
        strdup(name->valuestring),
        strdup(url->valuestring)
        );

    return authorization_app_local_var;
end:
    return NULL;

}
