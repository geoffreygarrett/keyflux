#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_cache_usage_by_repository.h"



actions_cache_usage_by_repository_t *actions_cache_usage_by_repository_create(
    char *full_name,
    int active_caches_size_in_bytes,
    int active_caches_count
    ) {
    actions_cache_usage_by_repository_t *actions_cache_usage_by_repository_local_var = malloc(sizeof(actions_cache_usage_by_repository_t));
    if (!actions_cache_usage_by_repository_local_var) {
        return NULL;
    }
    actions_cache_usage_by_repository_local_var->full_name = full_name;
    actions_cache_usage_by_repository_local_var->active_caches_size_in_bytes = active_caches_size_in_bytes;
    actions_cache_usage_by_repository_local_var->active_caches_count = active_caches_count;

    return actions_cache_usage_by_repository_local_var;
}


void actions_cache_usage_by_repository_free(actions_cache_usage_by_repository_t *actions_cache_usage_by_repository) {
    if(NULL == actions_cache_usage_by_repository){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_cache_usage_by_repository->full_name) {
        free(actions_cache_usage_by_repository->full_name);
        actions_cache_usage_by_repository->full_name = NULL;
    }
    free(actions_cache_usage_by_repository);
}

cJSON *actions_cache_usage_by_repository_convertToJSON(actions_cache_usage_by_repository_t *actions_cache_usage_by_repository) {
    cJSON *item = cJSON_CreateObject();

    // actions_cache_usage_by_repository->full_name
    if (!actions_cache_usage_by_repository->full_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "full_name", actions_cache_usage_by_repository->full_name) == NULL) {
    goto fail; //String
    }


    // actions_cache_usage_by_repository->active_caches_size_in_bytes
    if (!actions_cache_usage_by_repository->active_caches_size_in_bytes) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "active_caches_size_in_bytes", actions_cache_usage_by_repository->active_caches_size_in_bytes) == NULL) {
    goto fail; //Numeric
    }


    // actions_cache_usage_by_repository->active_caches_count
    if (!actions_cache_usage_by_repository->active_caches_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "active_caches_count", actions_cache_usage_by_repository->active_caches_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_cache_usage_by_repository_t *actions_cache_usage_by_repository_parseFromJSON(cJSON *actions_cache_usage_by_repositoryJSON){

    actions_cache_usage_by_repository_t *actions_cache_usage_by_repository_local_var = NULL;

    // actions_cache_usage_by_repository->full_name
    cJSON *full_name = cJSON_GetObjectItemCaseSensitive(actions_cache_usage_by_repositoryJSON, "full_name");
    if (!full_name) {
        goto end;
    }

    
    if(!cJSON_IsString(full_name))
    {
    goto end; //String
    }

    // actions_cache_usage_by_repository->active_caches_size_in_bytes
    cJSON *active_caches_size_in_bytes = cJSON_GetObjectItemCaseSensitive(actions_cache_usage_by_repositoryJSON, "active_caches_size_in_bytes");
    if (!active_caches_size_in_bytes) {
        goto end;
    }

    
    if(!cJSON_IsNumber(active_caches_size_in_bytes))
    {
    goto end; //Numeric
    }

    // actions_cache_usage_by_repository->active_caches_count
    cJSON *active_caches_count = cJSON_GetObjectItemCaseSensitive(actions_cache_usage_by_repositoryJSON, "active_caches_count");
    if (!active_caches_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(active_caches_count))
    {
    goto end; //Numeric
    }


    actions_cache_usage_by_repository_local_var = actions_cache_usage_by_repository_create (
        strdup(full_name->valuestring),
        active_caches_size_in_bytes->valuedouble,
        active_caches_count->valuedouble
        );

    return actions_cache_usage_by_repository_local_var;
end:
    return NULL;

}
