#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_cache_usage_org_enterprise.h"



actions_cache_usage_org_enterprise_t *actions_cache_usage_org_enterprise_create(
    int total_active_caches_count,
    int total_active_caches_size_in_bytes
    ) {
    actions_cache_usage_org_enterprise_t *actions_cache_usage_org_enterprise_local_var = malloc(sizeof(actions_cache_usage_org_enterprise_t));
    if (!actions_cache_usage_org_enterprise_local_var) {
        return NULL;
    }
    actions_cache_usage_org_enterprise_local_var->total_active_caches_count = total_active_caches_count;
    actions_cache_usage_org_enterprise_local_var->total_active_caches_size_in_bytes = total_active_caches_size_in_bytes;

    return actions_cache_usage_org_enterprise_local_var;
}


void actions_cache_usage_org_enterprise_free(actions_cache_usage_org_enterprise_t *actions_cache_usage_org_enterprise) {
    if(NULL == actions_cache_usage_org_enterprise){
        return ;
    }
    listEntry_t *listEntry;
    free(actions_cache_usage_org_enterprise);
}

cJSON *actions_cache_usage_org_enterprise_convertToJSON(actions_cache_usage_org_enterprise_t *actions_cache_usage_org_enterprise) {
    cJSON *item = cJSON_CreateObject();

    // actions_cache_usage_org_enterprise->total_active_caches_count
    if (!actions_cache_usage_org_enterprise->total_active_caches_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_active_caches_count", actions_cache_usage_org_enterprise->total_active_caches_count) == NULL) {
    goto fail; //Numeric
    }


    // actions_cache_usage_org_enterprise->total_active_caches_size_in_bytes
    if (!actions_cache_usage_org_enterprise->total_active_caches_size_in_bytes) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_active_caches_size_in_bytes", actions_cache_usage_org_enterprise->total_active_caches_size_in_bytes) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_cache_usage_org_enterprise_t *actions_cache_usage_org_enterprise_parseFromJSON(cJSON *actions_cache_usage_org_enterpriseJSON){

    actions_cache_usage_org_enterprise_t *actions_cache_usage_org_enterprise_local_var = NULL;

    // actions_cache_usage_org_enterprise->total_active_caches_count
    cJSON *total_active_caches_count = cJSON_GetObjectItemCaseSensitive(actions_cache_usage_org_enterpriseJSON, "total_active_caches_count");
    if (!total_active_caches_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_active_caches_count))
    {
    goto end; //Numeric
    }

    // actions_cache_usage_org_enterprise->total_active_caches_size_in_bytes
    cJSON *total_active_caches_size_in_bytes = cJSON_GetObjectItemCaseSensitive(actions_cache_usage_org_enterpriseJSON, "total_active_caches_size_in_bytes");
    if (!total_active_caches_size_in_bytes) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_active_caches_size_in_bytes))
    {
    goto end; //Numeric
    }


    actions_cache_usage_org_enterprise_local_var = actions_cache_usage_org_enterprise_create (
        total_active_caches_count->valuedouble,
        total_active_caches_size_in_bytes->valuedouble
        );

    return actions_cache_usage_org_enterprise_local_var;
end:
    return NULL;

}
