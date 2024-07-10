/*
 * actions_generate_runner_jitconfig_for_org_201_response.h
 *
 * 
 */

#ifndef _actions_generate_runner_jitconfig_for_org_201_response_H_
#define _actions_generate_runner_jitconfig_for_org_201_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_generate_runner_jitconfig_for_org_201_response_t actions_generate_runner_jitconfig_for_org_201_response_t;

#include "runner.h"



typedef struct actions_generate_runner_jitconfig_for_org_201_response_t {
    struct runner_t *runner; //model
    char *encoded_jit_config; // string

} actions_generate_runner_jitconfig_for_org_201_response_t;

actions_generate_runner_jitconfig_for_org_201_response_t *actions_generate_runner_jitconfig_for_org_201_response_create(
    runner_t *runner,
    char *encoded_jit_config
);

void actions_generate_runner_jitconfig_for_org_201_response_free(actions_generate_runner_jitconfig_for_org_201_response_t *actions_generate_runner_jitconfig_for_org_201_response);

actions_generate_runner_jitconfig_for_org_201_response_t *actions_generate_runner_jitconfig_for_org_201_response_parseFromJSON(cJSON *actions_generate_runner_jitconfig_for_org_201_responseJSON);

cJSON *actions_generate_runner_jitconfig_for_org_201_response_convertToJSON(actions_generate_runner_jitconfig_for_org_201_response_t *actions_generate_runner_jitconfig_for_org_201_response);

#endif /* _actions_generate_runner_jitconfig_for_org_201_response_H_ */

