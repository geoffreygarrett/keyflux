#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apps_create_from_manifest_201_response_all_of.h"



apps_create_from_manifest_201_response_all_of_t *apps_create_from_manifest_201_response_all_of_create(
    char *client_id,
    char *client_secret,
    char *webhook_secret,
    char *pem
    ) {
    apps_create_from_manifest_201_response_all_of_t *apps_create_from_manifest_201_response_all_of_local_var = malloc(sizeof(apps_create_from_manifest_201_response_all_of_t));
    if (!apps_create_from_manifest_201_response_all_of_local_var) {
        return NULL;
    }
    apps_create_from_manifest_201_response_all_of_local_var->client_id = client_id;
    apps_create_from_manifest_201_response_all_of_local_var->client_secret = client_secret;
    apps_create_from_manifest_201_response_all_of_local_var->webhook_secret = webhook_secret;
    apps_create_from_manifest_201_response_all_of_local_var->pem = pem;

    return apps_create_from_manifest_201_response_all_of_local_var;
}


void apps_create_from_manifest_201_response_all_of_free(apps_create_from_manifest_201_response_all_of_t *apps_create_from_manifest_201_response_all_of) {
    if(NULL == apps_create_from_manifest_201_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (apps_create_from_manifest_201_response_all_of->client_id) {
        free(apps_create_from_manifest_201_response_all_of->client_id);
        apps_create_from_manifest_201_response_all_of->client_id = NULL;
    }
    if (apps_create_from_manifest_201_response_all_of->client_secret) {
        free(apps_create_from_manifest_201_response_all_of->client_secret);
        apps_create_from_manifest_201_response_all_of->client_secret = NULL;
    }
    if (apps_create_from_manifest_201_response_all_of->webhook_secret) {
        free(apps_create_from_manifest_201_response_all_of->webhook_secret);
        apps_create_from_manifest_201_response_all_of->webhook_secret = NULL;
    }
    if (apps_create_from_manifest_201_response_all_of->pem) {
        free(apps_create_from_manifest_201_response_all_of->pem);
        apps_create_from_manifest_201_response_all_of->pem = NULL;
    }
    free(apps_create_from_manifest_201_response_all_of);
}

cJSON *apps_create_from_manifest_201_response_all_of_convertToJSON(apps_create_from_manifest_201_response_all_of_t *apps_create_from_manifest_201_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // apps_create_from_manifest_201_response_all_of->client_id
    if (!apps_create_from_manifest_201_response_all_of->client_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "client_id", apps_create_from_manifest_201_response_all_of->client_id) == NULL) {
    goto fail; //String
    }


    // apps_create_from_manifest_201_response_all_of->client_secret
    if (!apps_create_from_manifest_201_response_all_of->client_secret) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "client_secret", apps_create_from_manifest_201_response_all_of->client_secret) == NULL) {
    goto fail; //String
    }


    // apps_create_from_manifest_201_response_all_of->webhook_secret
    if (!apps_create_from_manifest_201_response_all_of->webhook_secret) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "webhook_secret", apps_create_from_manifest_201_response_all_of->webhook_secret) == NULL) {
    goto fail; //String
    }


    // apps_create_from_manifest_201_response_all_of->pem
    if (!apps_create_from_manifest_201_response_all_of->pem) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pem", apps_create_from_manifest_201_response_all_of->pem) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

apps_create_from_manifest_201_response_all_of_t *apps_create_from_manifest_201_response_all_of_parseFromJSON(cJSON *apps_create_from_manifest_201_response_all_ofJSON){

    apps_create_from_manifest_201_response_all_of_t *apps_create_from_manifest_201_response_all_of_local_var = NULL;

    // apps_create_from_manifest_201_response_all_of->client_id
    cJSON *client_id = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_response_all_ofJSON, "client_id");
    if (!client_id) {
        goto end;
    }

    
    if(!cJSON_IsString(client_id))
    {
    goto end; //String
    }

    // apps_create_from_manifest_201_response_all_of->client_secret
    cJSON *client_secret = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_response_all_ofJSON, "client_secret");
    if (!client_secret) {
        goto end;
    }

    
    if(!cJSON_IsString(client_secret))
    {
    goto end; //String
    }

    // apps_create_from_manifest_201_response_all_of->webhook_secret
    cJSON *webhook_secret = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_response_all_ofJSON, "webhook_secret");
    if (!webhook_secret) {
        goto end;
    }

    
    if(!cJSON_IsString(webhook_secret))
    {
    goto end; //String
    }

    // apps_create_from_manifest_201_response_all_of->pem
    cJSON *pem = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_response_all_ofJSON, "pem");
    if (!pem) {
        goto end;
    }

    
    if(!cJSON_IsString(pem))
    {
    goto end; //String
    }


    apps_create_from_manifest_201_response_all_of_local_var = apps_create_from_manifest_201_response_all_of_create (
        strdup(client_id->valuestring),
        strdup(client_secret->valuestring),
        strdup(webhook_secret->valuestring),
        strdup(pem->valuestring)
        );

    return apps_create_from_manifest_201_response_all_of_local_var;
end:
    return NULL;

}
