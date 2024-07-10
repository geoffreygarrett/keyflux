#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_cache_list_actions_caches_inner.h"



actions_cache_list_actions_caches_inner_t *actions_cache_list_actions_caches_inner_create(
    int id,
    char *ref,
    char *key,
    char *version,
    char *last_accessed_at,
    char *created_at,
    int size_in_bytes
    ) {
    actions_cache_list_actions_caches_inner_t *actions_cache_list_actions_caches_inner_local_var = malloc(sizeof(actions_cache_list_actions_caches_inner_t));
    if (!actions_cache_list_actions_caches_inner_local_var) {
        return NULL;
    }
    actions_cache_list_actions_caches_inner_local_var->id = id;
    actions_cache_list_actions_caches_inner_local_var->ref = ref;
    actions_cache_list_actions_caches_inner_local_var->key = key;
    actions_cache_list_actions_caches_inner_local_var->version = version;
    actions_cache_list_actions_caches_inner_local_var->last_accessed_at = last_accessed_at;
    actions_cache_list_actions_caches_inner_local_var->created_at = created_at;
    actions_cache_list_actions_caches_inner_local_var->size_in_bytes = size_in_bytes;

    return actions_cache_list_actions_caches_inner_local_var;
}


void actions_cache_list_actions_caches_inner_free(actions_cache_list_actions_caches_inner_t *actions_cache_list_actions_caches_inner) {
    if(NULL == actions_cache_list_actions_caches_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_cache_list_actions_caches_inner->ref) {
        free(actions_cache_list_actions_caches_inner->ref);
        actions_cache_list_actions_caches_inner->ref = NULL;
    }
    if (actions_cache_list_actions_caches_inner->key) {
        free(actions_cache_list_actions_caches_inner->key);
        actions_cache_list_actions_caches_inner->key = NULL;
    }
    if (actions_cache_list_actions_caches_inner->version) {
        free(actions_cache_list_actions_caches_inner->version);
        actions_cache_list_actions_caches_inner->version = NULL;
    }
    if (actions_cache_list_actions_caches_inner->last_accessed_at) {
        free(actions_cache_list_actions_caches_inner->last_accessed_at);
        actions_cache_list_actions_caches_inner->last_accessed_at = NULL;
    }
    if (actions_cache_list_actions_caches_inner->created_at) {
        free(actions_cache_list_actions_caches_inner->created_at);
        actions_cache_list_actions_caches_inner->created_at = NULL;
    }
    free(actions_cache_list_actions_caches_inner);
}

cJSON *actions_cache_list_actions_caches_inner_convertToJSON(actions_cache_list_actions_caches_inner_t *actions_cache_list_actions_caches_inner) {
    cJSON *item = cJSON_CreateObject();

    // actions_cache_list_actions_caches_inner->id
    if(actions_cache_list_actions_caches_inner->id) {
    if(cJSON_AddNumberToObject(item, "id", actions_cache_list_actions_caches_inner->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_cache_list_actions_caches_inner->ref
    if(actions_cache_list_actions_caches_inner->ref) {
    if(cJSON_AddStringToObject(item, "ref", actions_cache_list_actions_caches_inner->ref) == NULL) {
    goto fail; //String
    }
    }


    // actions_cache_list_actions_caches_inner->key
    if(actions_cache_list_actions_caches_inner->key) {
    if(cJSON_AddStringToObject(item, "key", actions_cache_list_actions_caches_inner->key) == NULL) {
    goto fail; //String
    }
    }


    // actions_cache_list_actions_caches_inner->version
    if(actions_cache_list_actions_caches_inner->version) {
    if(cJSON_AddStringToObject(item, "version", actions_cache_list_actions_caches_inner->version) == NULL) {
    goto fail; //String
    }
    }


    // actions_cache_list_actions_caches_inner->last_accessed_at
    if(actions_cache_list_actions_caches_inner->last_accessed_at) {
    if(cJSON_AddStringToObject(item, "last_accessed_at", actions_cache_list_actions_caches_inner->last_accessed_at) == NULL) {
    goto fail; //Date-Time
    }
    }


    // actions_cache_list_actions_caches_inner->created_at
    if(actions_cache_list_actions_caches_inner->created_at) {
    if(cJSON_AddStringToObject(item, "created_at", actions_cache_list_actions_caches_inner->created_at) == NULL) {
    goto fail; //Date-Time
    }
    }


    // actions_cache_list_actions_caches_inner->size_in_bytes
    if(actions_cache_list_actions_caches_inner->size_in_bytes) {
    if(cJSON_AddNumberToObject(item, "size_in_bytes", actions_cache_list_actions_caches_inner->size_in_bytes) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_cache_list_actions_caches_inner_t *actions_cache_list_actions_caches_inner_parseFromJSON(cJSON *actions_cache_list_actions_caches_innerJSON){

    actions_cache_list_actions_caches_inner_t *actions_cache_list_actions_caches_inner_local_var = NULL;

    // actions_cache_list_actions_caches_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(actions_cache_list_actions_caches_innerJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // actions_cache_list_actions_caches_inner->ref
    cJSON *ref = cJSON_GetObjectItemCaseSensitive(actions_cache_list_actions_caches_innerJSON, "ref");
    if (ref) { 
    if(!cJSON_IsString(ref))
    {
    goto end; //String
    }
    }

    // actions_cache_list_actions_caches_inner->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(actions_cache_list_actions_caches_innerJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }
    }

    // actions_cache_list_actions_caches_inner->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(actions_cache_list_actions_caches_innerJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version))
    {
    goto end; //String
    }
    }

    // actions_cache_list_actions_caches_inner->last_accessed_at
    cJSON *last_accessed_at = cJSON_GetObjectItemCaseSensitive(actions_cache_list_actions_caches_innerJSON, "last_accessed_at");
    if (last_accessed_at) { 
    if(!cJSON_IsString(last_accessed_at))
    {
    goto end; //DateTime
    }
    }

    // actions_cache_list_actions_caches_inner->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(actions_cache_list_actions_caches_innerJSON, "created_at");
    if (created_at) { 
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }
    }

    // actions_cache_list_actions_caches_inner->size_in_bytes
    cJSON *size_in_bytes = cJSON_GetObjectItemCaseSensitive(actions_cache_list_actions_caches_innerJSON, "size_in_bytes");
    if (size_in_bytes) { 
    if(!cJSON_IsNumber(size_in_bytes))
    {
    goto end; //Numeric
    }
    }


    actions_cache_list_actions_caches_inner_local_var = actions_cache_list_actions_caches_inner_create (
        id ? id->valuedouble : 0,
        ref ? strdup(ref->valuestring) : NULL,
        key ? strdup(key->valuestring) : NULL,
        version ? strdup(version->valuestring) : NULL,
        last_accessed_at ? strdup(last_accessed_at->valuestring) : NULL,
        created_at ? strdup(created_at->valuestring) : NULL,
        size_in_bytes ? size_in_bytes->valuedouble : 0
        );

    return actions_cache_list_actions_caches_inner_local_var;
end:
    return NULL;

}
