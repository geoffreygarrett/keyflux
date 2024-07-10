#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_re_run_job_for_workflow_run_request.h"



actions_re_run_job_for_workflow_run_request_t *actions_re_run_job_for_workflow_run_request_create(
    int enable_debug_logging
    ) {
    actions_re_run_job_for_workflow_run_request_t *actions_re_run_job_for_workflow_run_request_local_var = malloc(sizeof(actions_re_run_job_for_workflow_run_request_t));
    if (!actions_re_run_job_for_workflow_run_request_local_var) {
        return NULL;
    }
    actions_re_run_job_for_workflow_run_request_local_var->enable_debug_logging = enable_debug_logging;

    return actions_re_run_job_for_workflow_run_request_local_var;
}


void actions_re_run_job_for_workflow_run_request_free(actions_re_run_job_for_workflow_run_request_t *actions_re_run_job_for_workflow_run_request) {
    if(NULL == actions_re_run_job_for_workflow_run_request){
        return ;
    }
    listEntry_t *listEntry;
    free(actions_re_run_job_for_workflow_run_request);
}

cJSON *actions_re_run_job_for_workflow_run_request_convertToJSON(actions_re_run_job_for_workflow_run_request_t *actions_re_run_job_for_workflow_run_request) {
    cJSON *item = cJSON_CreateObject();

    // actions_re_run_job_for_workflow_run_request->enable_debug_logging
    if(actions_re_run_job_for_workflow_run_request->enable_debug_logging) {
    if(cJSON_AddBoolToObject(item, "enable_debug_logging", actions_re_run_job_for_workflow_run_request->enable_debug_logging) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_re_run_job_for_workflow_run_request_t *actions_re_run_job_for_workflow_run_request_parseFromJSON(cJSON *actions_re_run_job_for_workflow_run_requestJSON){

    actions_re_run_job_for_workflow_run_request_t *actions_re_run_job_for_workflow_run_request_local_var = NULL;

    // actions_re_run_job_for_workflow_run_request->enable_debug_logging
    cJSON *enable_debug_logging = cJSON_GetObjectItemCaseSensitive(actions_re_run_job_for_workflow_run_requestJSON, "enable_debug_logging");
    if (enable_debug_logging) { 
    if(!cJSON_IsBool(enable_debug_logging))
    {
    goto end; //Bool
    }
    }


    actions_re_run_job_for_workflow_run_request_local_var = actions_re_run_job_for_workflow_run_request_create (
        enable_debug_logging ? enable_debug_logging->valueint : 0
        );

    return actions_re_run_job_for_workflow_run_request_local_var;
end:
    return NULL;

}
