/*
 * actions_re_run_job_for_workflow_run_request.h
 *
 * 
 */

#ifndef _actions_re_run_job_for_workflow_run_request_H_
#define _actions_re_run_job_for_workflow_run_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_re_run_job_for_workflow_run_request_t actions_re_run_job_for_workflow_run_request_t;




typedef struct actions_re_run_job_for_workflow_run_request_t {
    int enable_debug_logging; //boolean

} actions_re_run_job_for_workflow_run_request_t;

actions_re_run_job_for_workflow_run_request_t *actions_re_run_job_for_workflow_run_request_create(
    int enable_debug_logging
);

void actions_re_run_job_for_workflow_run_request_free(actions_re_run_job_for_workflow_run_request_t *actions_re_run_job_for_workflow_run_request);

actions_re_run_job_for_workflow_run_request_t *actions_re_run_job_for_workflow_run_request_parseFromJSON(cJSON *actions_re_run_job_for_workflow_run_requestJSON);

cJSON *actions_re_run_job_for_workflow_run_request_convertToJSON(actions_re_run_job_for_workflow_run_request_t *actions_re_run_job_for_workflow_run_request);

#endif /* _actions_re_run_job_for_workflow_run_request_H_ */

