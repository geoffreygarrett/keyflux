#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apps_update_webhook_config_for_app_request.h"



apps_update_webhook_config_for_app_request_t *apps_update_webhook_config_for_app_request_create(
    char *url,
    char *content_type,
    char *secret,
    webhook_config_insecure_ssl_t *insecure_ssl
    ) {
    apps_update_webhook_config_for_app_request_t *apps_update_webhook_config_for_app_request_local_var = malloc(sizeof(apps_update_webhook_config_for_app_request_t));
    if (!apps_update_webhook_config_for_app_request_local_var) {
        return NULL;
    }
    apps_update_webhook_config_for_app_request_local_var->url = url;
    apps_update_webhook_config_for_app_request_local_var->content_type = content_type;
    apps_update_webhook_config_for_app_request_local_var->secret = secret;
    apps_update_webhook_config_for_app_request_local_var->insecure_ssl = insecure_ssl;

    return apps_update_webhook_config_for_app_request_local_var;
}


void apps_update_webhook_config_for_app_request_free(apps_update_webhook_config_for_app_request_t *apps_update_webhook_config_for_app_request) {
    if(NULL == apps_update_webhook_config_for_app_request){
        return ;
    }
    listEntry_t *listEntry;
    if (apps_update_webhook_config_for_app_request->url) {
        free(apps_update_webhook_config_for_app_request->url);
        apps_update_webhook_config_for_app_request->url = NULL;
    }
    if (apps_update_webhook_config_for_app_request->content_type) {
        free(apps_update_webhook_config_for_app_request->content_type);
        apps_update_webhook_config_for_app_request->content_type = NULL;
    }
    if (apps_update_webhook_config_for_app_request->secret) {
        free(apps_update_webhook_config_for_app_request->secret);
        apps_update_webhook_config_for_app_request->secret = NULL;
    }
    if (apps_update_webhook_config_for_app_request->insecure_ssl) {
        webhook_config_insecure_ssl_free(apps_update_webhook_config_for_app_request->insecure_ssl);
        apps_update_webhook_config_for_app_request->insecure_ssl = NULL;
    }
    free(apps_update_webhook_config_for_app_request);
}

cJSON *apps_update_webhook_config_for_app_request_convertToJSON(apps_update_webhook_config_for_app_request_t *apps_update_webhook_config_for_app_request) {
    cJSON *item = cJSON_CreateObject();

    // apps_update_webhook_config_for_app_request->url
    if(apps_update_webhook_config_for_app_request->url) {
    if(cJSON_AddStringToObject(item, "url", apps_update_webhook_config_for_app_request->url) == NULL) {
    goto fail; //String
    }
    }


    // apps_update_webhook_config_for_app_request->content_type
    if(apps_update_webhook_config_for_app_request->content_type) {
    if(cJSON_AddStringToObject(item, "content_type", apps_update_webhook_config_for_app_request->content_type) == NULL) {
    goto fail; //String
    }
    }


    // apps_update_webhook_config_for_app_request->secret
    if(apps_update_webhook_config_for_app_request->secret) {
    if(cJSON_AddStringToObject(item, "secret", apps_update_webhook_config_for_app_request->secret) == NULL) {
    goto fail; //String
    }
    }


    // apps_update_webhook_config_for_app_request->insecure_ssl
    if(apps_update_webhook_config_for_app_request->insecure_ssl) {
    cJSON *insecure_ssl_local_JSON = webhook_config_insecure_ssl_convertToJSON(apps_update_webhook_config_for_app_request->insecure_ssl);
    if(insecure_ssl_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "insecure_ssl", insecure_ssl_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

apps_update_webhook_config_for_app_request_t *apps_update_webhook_config_for_app_request_parseFromJSON(cJSON *apps_update_webhook_config_for_app_requestJSON){

    apps_update_webhook_config_for_app_request_t *apps_update_webhook_config_for_app_request_local_var = NULL;

    // define the local variable for apps_update_webhook_config_for_app_request->insecure_ssl
    webhook_config_insecure_ssl_t *insecure_ssl_local_nonprim = NULL;

    // apps_update_webhook_config_for_app_request->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(apps_update_webhook_config_for_app_requestJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }

    // apps_update_webhook_config_for_app_request->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(apps_update_webhook_config_for_app_requestJSON, "content_type");
    if (content_type) { 
    if(!cJSON_IsString(content_type))
    {
    goto end; //String
    }
    }

    // apps_update_webhook_config_for_app_request->secret
    cJSON *secret = cJSON_GetObjectItemCaseSensitive(apps_update_webhook_config_for_app_requestJSON, "secret");
    if (secret) { 
    if(!cJSON_IsString(secret))
    {
    goto end; //String
    }
    }

    // apps_update_webhook_config_for_app_request->insecure_ssl
    cJSON *insecure_ssl = cJSON_GetObjectItemCaseSensitive(apps_update_webhook_config_for_app_requestJSON, "insecure_ssl");
    if (insecure_ssl) { 
    insecure_ssl_local_nonprim = webhook_config_insecure_ssl_parseFromJSON(insecure_ssl); //nonprimitive
    }


    apps_update_webhook_config_for_app_request_local_var = apps_update_webhook_config_for_app_request_create (
        url ? strdup(url->valuestring) : NULL,
        content_type ? strdup(content_type->valuestring) : NULL,
        secret ? strdup(secret->valuestring) : NULL,
        insecure_ssl ? insecure_ssl_local_nonprim : NULL
        );

    return apps_update_webhook_config_for_app_request_local_var;
end:
    if (insecure_ssl_local_nonprim) {
        webhook_config_insecure_ssl_free(insecure_ssl_local_nonprim);
        insecure_ssl_local_nonprim = NULL;
    }
    return NULL;

}
