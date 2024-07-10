#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_get_actions_cache_usage_by_repo_for_org_200_response.h"



actions_get_actions_cache_usage_by_repo_for_org_200_response_t *actions_get_actions_cache_usage_by_repo_for_org_200_response_create(
    int total_count,
    list_t *repository_cache_usages
    ) {
    actions_get_actions_cache_usage_by_repo_for_org_200_response_t *actions_get_actions_cache_usage_by_repo_for_org_200_response_local_var = malloc(sizeof(actions_get_actions_cache_usage_by_repo_for_org_200_response_t));
    if (!actions_get_actions_cache_usage_by_repo_for_org_200_response_local_var) {
        return NULL;
    }
    actions_get_actions_cache_usage_by_repo_for_org_200_response_local_var->total_count = total_count;
    actions_get_actions_cache_usage_by_repo_for_org_200_response_local_var->repository_cache_usages = repository_cache_usages;

    return actions_get_actions_cache_usage_by_repo_for_org_200_response_local_var;
}


void actions_get_actions_cache_usage_by_repo_for_org_200_response_free(actions_get_actions_cache_usage_by_repo_for_org_200_response_t *actions_get_actions_cache_usage_by_repo_for_org_200_response) {
    if(NULL == actions_get_actions_cache_usage_by_repo_for_org_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_get_actions_cache_usage_by_repo_for_org_200_response->repository_cache_usages) {
        list_ForEach(listEntry, actions_get_actions_cache_usage_by_repo_for_org_200_response->repository_cache_usages) {
            actions_cache_usage_by_repository_free(listEntry->data);
        }
        list_freeList(actions_get_actions_cache_usage_by_repo_for_org_200_response->repository_cache_usages);
        actions_get_actions_cache_usage_by_repo_for_org_200_response->repository_cache_usages = NULL;
    }
    free(actions_get_actions_cache_usage_by_repo_for_org_200_response);
}

cJSON *actions_get_actions_cache_usage_by_repo_for_org_200_response_convertToJSON(actions_get_actions_cache_usage_by_repo_for_org_200_response_t *actions_get_actions_cache_usage_by_repo_for_org_200_response) {
    cJSON *item = cJSON_CreateObject();

    // actions_get_actions_cache_usage_by_repo_for_org_200_response->total_count
    if (!actions_get_actions_cache_usage_by_repo_for_org_200_response->total_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_count", actions_get_actions_cache_usage_by_repo_for_org_200_response->total_count) == NULL) {
    goto fail; //Numeric
    }


    // actions_get_actions_cache_usage_by_repo_for_org_200_response->repository_cache_usages
    if (!actions_get_actions_cache_usage_by_repo_for_org_200_response->repository_cache_usages) {
        goto fail;
    }
    cJSON *repository_cache_usages = cJSON_AddArrayToObject(item, "repository_cache_usages");
    if(repository_cache_usages == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *repository_cache_usagesListEntry;
    if (actions_get_actions_cache_usage_by_repo_for_org_200_response->repository_cache_usages) {
    list_ForEach(repository_cache_usagesListEntry, actions_get_actions_cache_usage_by_repo_for_org_200_response->repository_cache_usages) {
    cJSON *itemLocal = actions_cache_usage_by_repository_convertToJSON(repository_cache_usagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(repository_cache_usages, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_get_actions_cache_usage_by_repo_for_org_200_response_t *actions_get_actions_cache_usage_by_repo_for_org_200_response_parseFromJSON(cJSON *actions_get_actions_cache_usage_by_repo_for_org_200_responseJSON){

    actions_get_actions_cache_usage_by_repo_for_org_200_response_t *actions_get_actions_cache_usage_by_repo_for_org_200_response_local_var = NULL;

    // define the local list for actions_get_actions_cache_usage_by_repo_for_org_200_response->repository_cache_usages
    list_t *repository_cache_usagesList = NULL;

    // actions_get_actions_cache_usage_by_repo_for_org_200_response->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(actions_get_actions_cache_usage_by_repo_for_org_200_responseJSON, "total_count");
    if (!total_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }

    // actions_get_actions_cache_usage_by_repo_for_org_200_response->repository_cache_usages
    cJSON *repository_cache_usages = cJSON_GetObjectItemCaseSensitive(actions_get_actions_cache_usage_by_repo_for_org_200_responseJSON, "repository_cache_usages");
    if (!repository_cache_usages) {
        goto end;
    }

    
    cJSON *repository_cache_usages_local_nonprimitive = NULL;
    if(!cJSON_IsArray(repository_cache_usages)){
        goto end; //nonprimitive container
    }

    repository_cache_usagesList = list_createList();

    cJSON_ArrayForEach(repository_cache_usages_local_nonprimitive,repository_cache_usages )
    {
        if(!cJSON_IsObject(repository_cache_usages_local_nonprimitive)){
            goto end;
        }
        actions_cache_usage_by_repository_t *repository_cache_usagesItem = actions_cache_usage_by_repository_parseFromJSON(repository_cache_usages_local_nonprimitive);

        list_addElement(repository_cache_usagesList, repository_cache_usagesItem);
    }


    actions_get_actions_cache_usage_by_repo_for_org_200_response_local_var = actions_get_actions_cache_usage_by_repo_for_org_200_response_create (
        total_count->valuedouble,
        repository_cache_usagesList
        );

    return actions_get_actions_cache_usage_by_repo_for_org_200_response_local_var;
end:
    if (repository_cache_usagesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, repository_cache_usagesList) {
            actions_cache_usage_by_repository_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(repository_cache_usagesList);
        repository_cache_usagesList = NULL;
    }
    return NULL;

}
