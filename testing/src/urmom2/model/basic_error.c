#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "basic_error.h"



basic_error_t *basic_error_create(
    char *message,
    char *documentation_url,
    char *url,
    char *status
    ) {
    basic_error_t *basic_error_local_var = malloc(sizeof(basic_error_t));
    if (!basic_error_local_var) {
        return NULL;
    }
    basic_error_local_var->message = message;
    basic_error_local_var->documentation_url = documentation_url;
    basic_error_local_var->url = url;
    basic_error_local_var->status = status;

    return basic_error_local_var;
}


void basic_error_free(basic_error_t *basic_error) {
    if(NULL == basic_error){
        return ;
    }
    listEntry_t *listEntry;
    if (basic_error->message) {
        free(basic_error->message);
        basic_error->message = NULL;
    }
    if (basic_error->documentation_url) {
        free(basic_error->documentation_url);
        basic_error->documentation_url = NULL;
    }
    if (basic_error->url) {
        free(basic_error->url);
        basic_error->url = NULL;
    }
    if (basic_error->status) {
        free(basic_error->status);
        basic_error->status = NULL;
    }
    free(basic_error);
}

cJSON *basic_error_convertToJSON(basic_error_t *basic_error) {
    cJSON *item = cJSON_CreateObject();

    // basic_error->message
    if(basic_error->message) {
    if(cJSON_AddStringToObject(item, "message", basic_error->message) == NULL) {
    goto fail; //String
    }
    }


    // basic_error->documentation_url
    if(basic_error->documentation_url) {
    if(cJSON_AddStringToObject(item, "documentation_url", basic_error->documentation_url) == NULL) {
    goto fail; //String
    }
    }


    // basic_error->url
    if(basic_error->url) {
    if(cJSON_AddStringToObject(item, "url", basic_error->url) == NULL) {
    goto fail; //String
    }
    }


    // basic_error->status
    if(basic_error->status) {
    if(cJSON_AddStringToObject(item, "status", basic_error->status) == NULL) {
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

basic_error_t *basic_error_parseFromJSON(cJSON *basic_errorJSON){

    basic_error_t *basic_error_local_var = NULL;

    // basic_error->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(basic_errorJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // basic_error->documentation_url
    cJSON *documentation_url = cJSON_GetObjectItemCaseSensitive(basic_errorJSON, "documentation_url");
    if (documentation_url) { 
    if(!cJSON_IsString(documentation_url))
    {
    goto end; //String
    }
    }

    // basic_error->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(basic_errorJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }

    // basic_error->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(basic_errorJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }
    }


    basic_error_local_var = basic_error_create (
        message ? strdup(message->valuestring) : NULL,
        documentation_url ? strdup(documentation_url->valuestring) : NULL,
        url ? strdup(url->valuestring) : NULL,
        status ? strdup(status->valuestring) : NULL
        );

    return basic_error_local_var;
end:
    return NULL;

}
