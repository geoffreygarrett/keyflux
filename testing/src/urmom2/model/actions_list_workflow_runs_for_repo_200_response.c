#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_list_workflow_runs_for_repo_200_response.h"



actions_list_workflow_runs_for_repo_200_response_t *actions_list_workflow_runs_for_repo_200_response_create(
    int total_count,
    list_t *workflow_runs
    ) {
    actions_list_workflow_runs_for_repo_200_response_t *actions_list_workflow_runs_for_repo_200_response_local_var = malloc(sizeof(actions_list_workflow_runs_for_repo_200_response_t));
    if (!actions_list_workflow_runs_for_repo_200_response_local_var) {
        return NULL;
    }
    actions_list_workflow_runs_for_repo_200_response_local_var->total_count = total_count;
    actions_list_workflow_runs_for_repo_200_response_local_var->workflow_runs = workflow_runs;

    return actions_list_workflow_runs_for_repo_200_response_local_var;
}


void actions_list_workflow_runs_for_repo_200_response_free(actions_list_workflow_runs_for_repo_200_response_t *actions_list_workflow_runs_for_repo_200_response) {
    if(NULL == actions_list_workflow_runs_for_repo_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_list_workflow_runs_for_repo_200_response->workflow_runs) {
        list_ForEach(listEntry, actions_list_workflow_runs_for_repo_200_response->workflow_runs) {
            workflow_run_free(listEntry->data);
        }
        list_freeList(actions_list_workflow_runs_for_repo_200_response->workflow_runs);
        actions_list_workflow_runs_for_repo_200_response->workflow_runs = NULL;
    }
    free(actions_list_workflow_runs_for_repo_200_response);
}

cJSON *actions_list_workflow_runs_for_repo_200_response_convertToJSON(actions_list_workflow_runs_for_repo_200_response_t *actions_list_workflow_runs_for_repo_200_response) {
    cJSON *item = cJSON_CreateObject();

    // actions_list_workflow_runs_for_repo_200_response->total_count
    if (!actions_list_workflow_runs_for_repo_200_response->total_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_count", actions_list_workflow_runs_for_repo_200_response->total_count) == NULL) {
    goto fail; //Numeric
    }


    // actions_list_workflow_runs_for_repo_200_response->workflow_runs
    if (!actions_list_workflow_runs_for_repo_200_response->workflow_runs) {
        goto fail;
    }
    cJSON *workflow_runs = cJSON_AddArrayToObject(item, "workflow_runs");
    if(workflow_runs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *workflow_runsListEntry;
    if (actions_list_workflow_runs_for_repo_200_response->workflow_runs) {
    list_ForEach(workflow_runsListEntry, actions_list_workflow_runs_for_repo_200_response->workflow_runs) {
    cJSON *itemLocal = workflow_run_convertToJSON(workflow_runsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(workflow_runs, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_list_workflow_runs_for_repo_200_response_t *actions_list_workflow_runs_for_repo_200_response_parseFromJSON(cJSON *actions_list_workflow_runs_for_repo_200_responseJSON){

    actions_list_workflow_runs_for_repo_200_response_t *actions_list_workflow_runs_for_repo_200_response_local_var = NULL;

    // define the local list for actions_list_workflow_runs_for_repo_200_response->workflow_runs
    list_t *workflow_runsList = NULL;

    // actions_list_workflow_runs_for_repo_200_response->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(actions_list_workflow_runs_for_repo_200_responseJSON, "total_count");
    if (!total_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }

    // actions_list_workflow_runs_for_repo_200_response->workflow_runs
    cJSON *workflow_runs = cJSON_GetObjectItemCaseSensitive(actions_list_workflow_runs_for_repo_200_responseJSON, "workflow_runs");
    if (!workflow_runs) {
        goto end;
    }

    
    cJSON *workflow_runs_local_nonprimitive = NULL;
    if(!cJSON_IsArray(workflow_runs)){
        goto end; //nonprimitive container
    }

    workflow_runsList = list_createList();

    cJSON_ArrayForEach(workflow_runs_local_nonprimitive,workflow_runs )
    {
        if(!cJSON_IsObject(workflow_runs_local_nonprimitive)){
            goto end;
        }
        workflow_run_t *workflow_runsItem = workflow_run_parseFromJSON(workflow_runs_local_nonprimitive);

        list_addElement(workflow_runsList, workflow_runsItem);
    }


    actions_list_workflow_runs_for_repo_200_response_local_var = actions_list_workflow_runs_for_repo_200_response_create (
        total_count->valuedouble,
        workflow_runsList
        );

    return actions_list_workflow_runs_for_repo_200_response_local_var;
end:
    if (workflow_runsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, workflow_runsList) {
            workflow_run_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(workflow_runsList);
        workflow_runsList = NULL;
    }
    return NULL;

}
