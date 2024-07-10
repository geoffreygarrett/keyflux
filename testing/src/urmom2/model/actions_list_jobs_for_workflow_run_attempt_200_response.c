#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_list_jobs_for_workflow_run_attempt_200_response.h"



actions_list_jobs_for_workflow_run_attempt_200_response_t *actions_list_jobs_for_workflow_run_attempt_200_response_create(
    int total_count,
    list_t *jobs
    ) {
    actions_list_jobs_for_workflow_run_attempt_200_response_t *actions_list_jobs_for_workflow_run_attempt_200_response_local_var = malloc(sizeof(actions_list_jobs_for_workflow_run_attempt_200_response_t));
    if (!actions_list_jobs_for_workflow_run_attempt_200_response_local_var) {
        return NULL;
    }
    actions_list_jobs_for_workflow_run_attempt_200_response_local_var->total_count = total_count;
    actions_list_jobs_for_workflow_run_attempt_200_response_local_var->jobs = jobs;

    return actions_list_jobs_for_workflow_run_attempt_200_response_local_var;
}


void actions_list_jobs_for_workflow_run_attempt_200_response_free(actions_list_jobs_for_workflow_run_attempt_200_response_t *actions_list_jobs_for_workflow_run_attempt_200_response) {
    if(NULL == actions_list_jobs_for_workflow_run_attempt_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_list_jobs_for_workflow_run_attempt_200_response->jobs) {
        list_ForEach(listEntry, actions_list_jobs_for_workflow_run_attempt_200_response->jobs) {
            job_free(listEntry->data);
        }
        list_freeList(actions_list_jobs_for_workflow_run_attempt_200_response->jobs);
        actions_list_jobs_for_workflow_run_attempt_200_response->jobs = NULL;
    }
    free(actions_list_jobs_for_workflow_run_attempt_200_response);
}

cJSON *actions_list_jobs_for_workflow_run_attempt_200_response_convertToJSON(actions_list_jobs_for_workflow_run_attempt_200_response_t *actions_list_jobs_for_workflow_run_attempt_200_response) {
    cJSON *item = cJSON_CreateObject();

    // actions_list_jobs_for_workflow_run_attempt_200_response->total_count
    if (!actions_list_jobs_for_workflow_run_attempt_200_response->total_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_count", actions_list_jobs_for_workflow_run_attempt_200_response->total_count) == NULL) {
    goto fail; //Numeric
    }


    // actions_list_jobs_for_workflow_run_attempt_200_response->jobs
    if (!actions_list_jobs_for_workflow_run_attempt_200_response->jobs) {
        goto fail;
    }
    cJSON *jobs = cJSON_AddArrayToObject(item, "jobs");
    if(jobs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *jobsListEntry;
    if (actions_list_jobs_for_workflow_run_attempt_200_response->jobs) {
    list_ForEach(jobsListEntry, actions_list_jobs_for_workflow_run_attempt_200_response->jobs) {
    cJSON *itemLocal = job_convertToJSON(jobsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(jobs, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_list_jobs_for_workflow_run_attempt_200_response_t *actions_list_jobs_for_workflow_run_attempt_200_response_parseFromJSON(cJSON *actions_list_jobs_for_workflow_run_attempt_200_responseJSON){

    actions_list_jobs_for_workflow_run_attempt_200_response_t *actions_list_jobs_for_workflow_run_attempt_200_response_local_var = NULL;

    // define the local list for actions_list_jobs_for_workflow_run_attempt_200_response->jobs
    list_t *jobsList = NULL;

    // actions_list_jobs_for_workflow_run_attempt_200_response->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(actions_list_jobs_for_workflow_run_attempt_200_responseJSON, "total_count");
    if (!total_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }

    // actions_list_jobs_for_workflow_run_attempt_200_response->jobs
    cJSON *jobs = cJSON_GetObjectItemCaseSensitive(actions_list_jobs_for_workflow_run_attempt_200_responseJSON, "jobs");
    if (!jobs) {
        goto end;
    }

    
    cJSON *jobs_local_nonprimitive = NULL;
    if(!cJSON_IsArray(jobs)){
        goto end; //nonprimitive container
    }

    jobsList = list_createList();

    cJSON_ArrayForEach(jobs_local_nonprimitive,jobs )
    {
        if(!cJSON_IsObject(jobs_local_nonprimitive)){
            goto end;
        }
        job_t *jobsItem = job_parseFromJSON(jobs_local_nonprimitive);

        list_addElement(jobsList, jobsItem);
    }


    actions_list_jobs_for_workflow_run_attempt_200_response_local_var = actions_list_jobs_for_workflow_run_attempt_200_response_create (
        total_count->valuedouble,
        jobsList
        );

    return actions_list_jobs_for_workflow_run_attempt_200_response_local_var;
end:
    if (jobsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, jobsList) {
            job_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(jobsList);
        jobsList = NULL;
    }
    return NULL;

}
