#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_list_repo_workflows_200_response.h"



actions_list_repo_workflows_200_response_t *actions_list_repo_workflows_200_response_create(
    int total_count,
    list_t *workflows
    ) {
    actions_list_repo_workflows_200_response_t *actions_list_repo_workflows_200_response_local_var = malloc(sizeof(actions_list_repo_workflows_200_response_t));
    if (!actions_list_repo_workflows_200_response_local_var) {
        return NULL;
    }
    actions_list_repo_workflows_200_response_local_var->total_count = total_count;
    actions_list_repo_workflows_200_response_local_var->workflows = workflows;

    return actions_list_repo_workflows_200_response_local_var;
}


void actions_list_repo_workflows_200_response_free(actions_list_repo_workflows_200_response_t *actions_list_repo_workflows_200_response) {
    if(NULL == actions_list_repo_workflows_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_list_repo_workflows_200_response->workflows) {
        list_ForEach(listEntry, actions_list_repo_workflows_200_response->workflows) {
            workflow_free(listEntry->data);
        }
        list_freeList(actions_list_repo_workflows_200_response->workflows);
        actions_list_repo_workflows_200_response->workflows = NULL;
    }
    free(actions_list_repo_workflows_200_response);
}

cJSON *actions_list_repo_workflows_200_response_convertToJSON(actions_list_repo_workflows_200_response_t *actions_list_repo_workflows_200_response) {
    cJSON *item = cJSON_CreateObject();

    // actions_list_repo_workflows_200_response->total_count
    if (!actions_list_repo_workflows_200_response->total_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_count", actions_list_repo_workflows_200_response->total_count) == NULL) {
    goto fail; //Numeric
    }


    // actions_list_repo_workflows_200_response->workflows
    if (!actions_list_repo_workflows_200_response->workflows) {
        goto fail;
    }
    cJSON *workflows = cJSON_AddArrayToObject(item, "workflows");
    if(workflows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *workflowsListEntry;
    if (actions_list_repo_workflows_200_response->workflows) {
    list_ForEach(workflowsListEntry, actions_list_repo_workflows_200_response->workflows) {
    cJSON *itemLocal = workflow_convertToJSON(workflowsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(workflows, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_list_repo_workflows_200_response_t *actions_list_repo_workflows_200_response_parseFromJSON(cJSON *actions_list_repo_workflows_200_responseJSON){

    actions_list_repo_workflows_200_response_t *actions_list_repo_workflows_200_response_local_var = NULL;

    // define the local list for actions_list_repo_workflows_200_response->workflows
    list_t *workflowsList = NULL;

    // actions_list_repo_workflows_200_response->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(actions_list_repo_workflows_200_responseJSON, "total_count");
    if (!total_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }

    // actions_list_repo_workflows_200_response->workflows
    cJSON *workflows = cJSON_GetObjectItemCaseSensitive(actions_list_repo_workflows_200_responseJSON, "workflows");
    if (!workflows) {
        goto end;
    }

    
    cJSON *workflows_local_nonprimitive = NULL;
    if(!cJSON_IsArray(workflows)){
        goto end; //nonprimitive container
    }

    workflowsList = list_createList();

    cJSON_ArrayForEach(workflows_local_nonprimitive,workflows )
    {
        if(!cJSON_IsObject(workflows_local_nonprimitive)){
            goto end;
        }
        workflow_t *workflowsItem = workflow_parseFromJSON(workflows_local_nonprimitive);

        list_addElement(workflowsList, workflowsItem);
    }


    actions_list_repo_workflows_200_response_local_var = actions_list_repo_workflows_200_response_create (
        total_count->valuedouble,
        workflowsList
        );

    return actions_list_repo_workflows_200_response_local_var;
end:
    if (workflowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, workflowsList) {
            workflow_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(workflowsList);
        workflowsList = NULL;
    }
    return NULL;

}
