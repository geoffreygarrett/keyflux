/*
 * actions_list_jobs_for_workflow_run_attempt_200_response.h
 *
 * 
 */

#ifndef _actions_list_jobs_for_workflow_run_attempt_200_response_H_
#define _actions_list_jobs_for_workflow_run_attempt_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_list_jobs_for_workflow_run_attempt_200_response_t actions_list_jobs_for_workflow_run_attempt_200_response_t;

#include "job.h"



typedef struct actions_list_jobs_for_workflow_run_attempt_200_response_t {
    int total_count; //numeric
    list_t *jobs; //nonprimitive container

} actions_list_jobs_for_workflow_run_attempt_200_response_t;

actions_list_jobs_for_workflow_run_attempt_200_response_t *actions_list_jobs_for_workflow_run_attempt_200_response_create(
    int total_count,
    list_t *jobs
);

void actions_list_jobs_for_workflow_run_attempt_200_response_free(actions_list_jobs_for_workflow_run_attempt_200_response_t *actions_list_jobs_for_workflow_run_attempt_200_response);

actions_list_jobs_for_workflow_run_attempt_200_response_t *actions_list_jobs_for_workflow_run_attempt_200_response_parseFromJSON(cJSON *actions_list_jobs_for_workflow_run_attempt_200_responseJSON);

cJSON *actions_list_jobs_for_workflow_run_attempt_200_response_convertToJSON(actions_list_jobs_for_workflow_run_attempt_200_response_t *actions_list_jobs_for_workflow_run_attempt_200_response);

#endif /* _actions_list_jobs_for_workflow_run_attempt_200_response_H_ */

