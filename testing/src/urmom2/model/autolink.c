#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "autolink.h"



autolink_t *autolink_create(
    int id,
    char *key_prefix,
    char *url_template,
    int is_alphanumeric
    ) {
    autolink_t *autolink_local_var = malloc(sizeof(autolink_t));
    if (!autolink_local_var) {
        return NULL;
    }
    autolink_local_var->id = id;
    autolink_local_var->key_prefix = key_prefix;
    autolink_local_var->url_template = url_template;
    autolink_local_var->is_alphanumeric = is_alphanumeric;

    return autolink_local_var;
}


void autolink_free(autolink_t *autolink) {
    if(NULL == autolink){
        return ;
    }
    listEntry_t *listEntry;
    if (autolink->key_prefix) {
        free(autolink->key_prefix);
        autolink->key_prefix = NULL;
    }
    if (autolink->url_template) {
        free(autolink->url_template);
        autolink->url_template = NULL;
    }
    free(autolink);
}

cJSON *autolink_convertToJSON(autolink_t *autolink) {
    cJSON *item = cJSON_CreateObject();

    // autolink->id
    if (!autolink->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", autolink->id) == NULL) {
    goto fail; //Numeric
    }


    // autolink->key_prefix
    if (!autolink->key_prefix) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "key_prefix", autolink->key_prefix) == NULL) {
    goto fail; //String
    }


    // autolink->url_template
    if (!autolink->url_template) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url_template", autolink->url_template) == NULL) {
    goto fail; //String
    }


    // autolink->is_alphanumeric
    if (!autolink->is_alphanumeric) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "is_alphanumeric", autolink->is_alphanumeric) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

autolink_t *autolink_parseFromJSON(cJSON *autolinkJSON){

    autolink_t *autolink_local_var = NULL;

    // autolink->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(autolinkJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // autolink->key_prefix
    cJSON *key_prefix = cJSON_GetObjectItemCaseSensitive(autolinkJSON, "key_prefix");
    if (!key_prefix) {
        goto end;
    }

    
    if(!cJSON_IsString(key_prefix))
    {
    goto end; //String
    }

    // autolink->url_template
    cJSON *url_template = cJSON_GetObjectItemCaseSensitive(autolinkJSON, "url_template");
    if (!url_template) {
        goto end;
    }

    
    if(!cJSON_IsString(url_template))
    {
    goto end; //String
    }

    // autolink->is_alphanumeric
    cJSON *is_alphanumeric = cJSON_GetObjectItemCaseSensitive(autolinkJSON, "is_alphanumeric");
    if (!is_alphanumeric) {
        goto end;
    }

    
    if(!cJSON_IsBool(is_alphanumeric))
    {
    goto end; //Bool
    }


    autolink_local_var = autolink_create (
        id->valuedouble,
        strdup(key_prefix->valuestring),
        strdup(url_template->valuestring),
        is_alphanumeric->valueint
        );

    return autolink_local_var;
end:
    return NULL;

}
