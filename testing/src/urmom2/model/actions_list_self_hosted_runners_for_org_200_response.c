#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_list_self_hosted_runners_for_org_200_response.h"



actions_list_self_hosted_runners_for_org_200_response_t *actions_list_self_hosted_runners_for_org_200_response_create(
    int total_count,
    list_t *runners
    ) {
    actions_list_self_hosted_runners_for_org_200_response_t *actions_list_self_hosted_runners_for_org_200_response_local_var = malloc(sizeof(actions_list_self_hosted_runners_for_org_200_response_t));
    if (!actions_list_self_hosted_runners_for_org_200_response_local_var) {
        return NULL;
    }
    actions_list_self_hosted_runners_for_org_200_response_local_var->total_count = total_count;
    actions_list_self_hosted_runners_for_org_200_response_local_var->runners = runners;

    return actions_list_self_hosted_runners_for_org_200_response_local_var;
}


void actions_list_self_hosted_runners_for_org_200_response_free(actions_list_self_hosted_runners_for_org_200_response_t *actions_list_self_hosted_runners_for_org_200_response) {
    if(NULL == actions_list_self_hosted_runners_for_org_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_list_self_hosted_runners_for_org_200_response->runners) {
        list_ForEach(listEntry, actions_list_self_hosted_runners_for_org_200_response->runners) {
            runner_free(listEntry->data);
        }
        list_freeList(actions_list_self_hosted_runners_for_org_200_response->runners);
        actions_list_self_hosted_runners_for_org_200_response->runners = NULL;
    }
    free(actions_list_self_hosted_runners_for_org_200_response);
}

cJSON *actions_list_self_hosted_runners_for_org_200_response_convertToJSON(actions_list_self_hosted_runners_for_org_200_response_t *actions_list_self_hosted_runners_for_org_200_response) {
    cJSON *item = cJSON_CreateObject();

    // actions_list_self_hosted_runners_for_org_200_response->total_count
    if (!actions_list_self_hosted_runners_for_org_200_response->total_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_count", actions_list_self_hosted_runners_for_org_200_response->total_count) == NULL) {
    goto fail; //Numeric
    }


    // actions_list_self_hosted_runners_for_org_200_response->runners
    if (!actions_list_self_hosted_runners_for_org_200_response->runners) {
        goto fail;
    }
    cJSON *runners = cJSON_AddArrayToObject(item, "runners");
    if(runners == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *runnersListEntry;
    if (actions_list_self_hosted_runners_for_org_200_response->runners) {
    list_ForEach(runnersListEntry, actions_list_self_hosted_runners_for_org_200_response->runners) {
    cJSON *itemLocal = runner_convertToJSON(runnersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(runners, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_list_self_hosted_runners_for_org_200_response_t *actions_list_self_hosted_runners_for_org_200_response_parseFromJSON(cJSON *actions_list_self_hosted_runners_for_org_200_responseJSON){

    actions_list_self_hosted_runners_for_org_200_response_t *actions_list_self_hosted_runners_for_org_200_response_local_var = NULL;

    // define the local list for actions_list_self_hosted_runners_for_org_200_response->runners
    list_t *runnersList = NULL;

    // actions_list_self_hosted_runners_for_org_200_response->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(actions_list_self_hosted_runners_for_org_200_responseJSON, "total_count");
    if (!total_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }

    // actions_list_self_hosted_runners_for_org_200_response->runners
    cJSON *runners = cJSON_GetObjectItemCaseSensitive(actions_list_self_hosted_runners_for_org_200_responseJSON, "runners");
    if (!runners) {
        goto end;
    }

    
    cJSON *runners_local_nonprimitive = NULL;
    if(!cJSON_IsArray(runners)){
        goto end; //nonprimitive container
    }

    runnersList = list_createList();

    cJSON_ArrayForEach(runners_local_nonprimitive,runners )
    {
        if(!cJSON_IsObject(runners_local_nonprimitive)){
            goto end;
        }
        runner_t *runnersItem = runner_parseFromJSON(runners_local_nonprimitive);

        list_addElement(runnersList, runnersItem);
    }


    actions_list_self_hosted_runners_for_org_200_response_local_var = actions_list_self_hosted_runners_for_org_200_response_create (
        total_count->valuedouble,
        runnersList
        );

    return actions_list_self_hosted_runners_for_org_200_response_local_var;
end:
    if (runnersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, runnersList) {
            runner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(runnersList);
        runnersList = NULL;
    }
    return NULL;

}
