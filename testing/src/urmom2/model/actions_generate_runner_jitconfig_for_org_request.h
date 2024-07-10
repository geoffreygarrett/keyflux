/*
 * actions_generate_runner_jitconfig_for_org_request.h
 *
 * 
 */

#ifndef _actions_generate_runner_jitconfig_for_org_request_H_
#define _actions_generate_runner_jitconfig_for_org_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_generate_runner_jitconfig_for_org_request_t actions_generate_runner_jitconfig_for_org_request_t;




typedef struct actions_generate_runner_jitconfig_for_org_request_t {
    char *name; // string
    int runner_group_id; //numeric
    list_t *labels; //primitive container
    char *work_folder; // string

} actions_generate_runner_jitconfig_for_org_request_t;

actions_generate_runner_jitconfig_for_org_request_t *actions_generate_runner_jitconfig_for_org_request_create(
    char *name,
    int runner_group_id,
    list_t *labels,
    char *work_folder
);

void actions_generate_runner_jitconfig_for_org_request_free(actions_generate_runner_jitconfig_for_org_request_t *actions_generate_runner_jitconfig_for_org_request);

actions_generate_runner_jitconfig_for_org_request_t *actions_generate_runner_jitconfig_for_org_request_parseFromJSON(cJSON *actions_generate_runner_jitconfig_for_org_requestJSON);

cJSON *actions_generate_runner_jitconfig_for_org_request_convertToJSON(actions_generate_runner_jitconfig_for_org_request_t *actions_generate_runner_jitconfig_for_org_request);

#endif /* _actions_generate_runner_jitconfig_for_org_request_H_ */

