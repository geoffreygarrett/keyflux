#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_cache_list.h"



actions_cache_list_t *actions_cache_list_create(
    int total_count,
    list_t *actions_caches
    ) {
    actions_cache_list_t *actions_cache_list_local_var = malloc(sizeof(actions_cache_list_t));
    if (!actions_cache_list_local_var) {
        return NULL;
    }
    actions_cache_list_local_var->total_count = total_count;
    actions_cache_list_local_var->actions_caches = actions_caches;

    return actions_cache_list_local_var;
}


void actions_cache_list_free(actions_cache_list_t *actions_cache_list) {
    if(NULL == actions_cache_list){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_cache_list->actions_caches) {
        list_ForEach(listEntry, actions_cache_list->actions_caches) {
            actions_cache_list_actions_caches_inner_free(listEntry->data);
        }
        list_freeList(actions_cache_list->actions_caches);
        actions_cache_list->actions_caches = NULL;
    }
    free(actions_cache_list);
}

cJSON *actions_cache_list_convertToJSON(actions_cache_list_t *actions_cache_list) {
    cJSON *item = cJSON_CreateObject();

    // actions_cache_list->total_count
    if (!actions_cache_list->total_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_count", actions_cache_list->total_count) == NULL) {
    goto fail; //Numeric
    }


    // actions_cache_list->actions_caches
    if (!actions_cache_list->actions_caches) {
        goto fail;
    }
    cJSON *actions_caches = cJSON_AddArrayToObject(item, "actions_caches");
    if(actions_caches == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *actions_cachesListEntry;
    if (actions_cache_list->actions_caches) {
    list_ForEach(actions_cachesListEntry, actions_cache_list->actions_caches) {
    cJSON *itemLocal = actions_cache_list_actions_caches_inner_convertToJSON(actions_cachesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(actions_caches, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_cache_list_t *actions_cache_list_parseFromJSON(cJSON *actions_cache_listJSON){

    actions_cache_list_t *actions_cache_list_local_var = NULL;

    // define the local list for actions_cache_list->actions_caches
    list_t *actions_cachesList = NULL;

    // actions_cache_list->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(actions_cache_listJSON, "total_count");
    if (!total_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }

    // actions_cache_list->actions_caches
    cJSON *actions_caches = cJSON_GetObjectItemCaseSensitive(actions_cache_listJSON, "actions_caches");
    if (!actions_caches) {
        goto end;
    }

    
    cJSON *actions_caches_local_nonprimitive = NULL;
    if(!cJSON_IsArray(actions_caches)){
        goto end; //nonprimitive container
    }

    actions_cachesList = list_createList();

    cJSON_ArrayForEach(actions_caches_local_nonprimitive,actions_caches )
    {
        if(!cJSON_IsObject(actions_caches_local_nonprimitive)){
            goto end;
        }
        actions_cache_list_actions_caches_inner_t *actions_cachesItem = actions_cache_list_actions_caches_inner_parseFromJSON(actions_caches_local_nonprimitive);

        list_addElement(actions_cachesList, actions_cachesItem);
    }


    actions_cache_list_local_var = actions_cache_list_create (
        total_count->valuedouble,
        actions_cachesList
        );

    return actions_cache_list_local_var;
end:
    if (actions_cachesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, actions_cachesList) {
            actions_cache_list_actions_caches_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(actions_cachesList);
        actions_cachesList = NULL;
    }
    return NULL;

}
