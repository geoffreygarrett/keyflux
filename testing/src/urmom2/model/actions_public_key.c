#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_public_key.h"



actions_public_key_t *actions_public_key_create(
    char *key_id,
    char *key,
    int id,
    char *url,
    char *title,
    char *created_at
    ) {
    actions_public_key_t *actions_public_key_local_var = malloc(sizeof(actions_public_key_t));
    if (!actions_public_key_local_var) {
        return NULL;
    }
    actions_public_key_local_var->key_id = key_id;
    actions_public_key_local_var->key = key;
    actions_public_key_local_var->id = id;
    actions_public_key_local_var->url = url;
    actions_public_key_local_var->title = title;
    actions_public_key_local_var->created_at = created_at;

    return actions_public_key_local_var;
}


void actions_public_key_free(actions_public_key_t *actions_public_key) {
    if(NULL == actions_public_key){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_public_key->key_id) {
        free(actions_public_key->key_id);
        actions_public_key->key_id = NULL;
    }
    if (actions_public_key->key) {
        free(actions_public_key->key);
        actions_public_key->key = NULL;
    }
    if (actions_public_key->url) {
        free(actions_public_key->url);
        actions_public_key->url = NULL;
    }
    if (actions_public_key->title) {
        free(actions_public_key->title);
        actions_public_key->title = NULL;
    }
    if (actions_public_key->created_at) {
        free(actions_public_key->created_at);
        actions_public_key->created_at = NULL;
    }
    free(actions_public_key);
}

cJSON *actions_public_key_convertToJSON(actions_public_key_t *actions_public_key) {
    cJSON *item = cJSON_CreateObject();

    // actions_public_key->key_id
    if (!actions_public_key->key_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "key_id", actions_public_key->key_id) == NULL) {
    goto fail; //String
    }


    // actions_public_key->key
    if (!actions_public_key->key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "key", actions_public_key->key) == NULL) {
    goto fail; //String
    }


    // actions_public_key->id
    if(actions_public_key->id) {
    if(cJSON_AddNumberToObject(item, "id", actions_public_key->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_public_key->url
    if(actions_public_key->url) {
    if(cJSON_AddStringToObject(item, "url", actions_public_key->url) == NULL) {
    goto fail; //String
    }
    }


    // actions_public_key->title
    if(actions_public_key->title) {
    if(cJSON_AddStringToObject(item, "title", actions_public_key->title) == NULL) {
    goto fail; //String
    }
    }


    // actions_public_key->created_at
    if(actions_public_key->created_at) {
    if(cJSON_AddStringToObject(item, "created_at", actions_public_key->created_at) == NULL) {
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

actions_public_key_t *actions_public_key_parseFromJSON(cJSON *actions_public_keyJSON){

    actions_public_key_t *actions_public_key_local_var = NULL;

    // actions_public_key->key_id
    cJSON *key_id = cJSON_GetObjectItemCaseSensitive(actions_public_keyJSON, "key_id");
    if (!key_id) {
        goto end;
    }

    
    if(!cJSON_IsString(key_id))
    {
    goto end; //String
    }

    // actions_public_key->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(actions_public_keyJSON, "key");
    if (!key) {
        goto end;
    }

    
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }

    // actions_public_key->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(actions_public_keyJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // actions_public_key->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(actions_public_keyJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }

    // actions_public_key->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(actions_public_keyJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }
    }

    // actions_public_key->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(actions_public_keyJSON, "created_at");
    if (created_at) { 
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }
    }


    actions_public_key_local_var = actions_public_key_create (
        strdup(key_id->valuestring),
        strdup(key->valuestring),
        id ? id->valuedouble : 0,
        url ? strdup(url->valuestring) : NULL,
        title ? strdup(title->valuestring) : NULL,
        created_at ? strdup(created_at->valuestring) : NULL
        );

    return actions_public_key_local_var;
end:
    return NULL;

}
