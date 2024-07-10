/*
 * actions_review_custom_gates_for_run_request.h
 *
 * 
 */

#ifndef _actions_review_custom_gates_for_run_request_H_
#define _actions_review_custom_gates_for_run_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_review_custom_gates_for_run_request_t actions_review_custom_gates_for_run_request_t;

#include "review_custom_gates_comment_required.h"
#include "review_custom_gates_state_required.h"

// Enum STATE for actions_review_custom_gates_for_run_request

typedef enum  { github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_NULL = 0, github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_approved, github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_rejected } github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_e;

char* actions_review_custom_gates_for_run_request_state_ToString(github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_e state);

github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_e actions_review_custom_gates_for_run_request_state_FromString(char* state);



typedef struct actions_review_custom_gates_for_run_request_t {
    char *environment_name; // string
    char *comment; // string
    github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_e state; //enum

} actions_review_custom_gates_for_run_request_t;

actions_review_custom_gates_for_run_request_t *actions_review_custom_gates_for_run_request_create(
    char *environment_name,
    char *comment,
    github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_e state
);

void actions_review_custom_gates_for_run_request_free(actions_review_custom_gates_for_run_request_t *actions_review_custom_gates_for_run_request);

actions_review_custom_gates_for_run_request_t *actions_review_custom_gates_for_run_request_parseFromJSON(cJSON *actions_review_custom_gates_for_run_requestJSON);

cJSON *actions_review_custom_gates_for_run_request_convertToJSON(actions_review_custom_gates_for_run_request_t *actions_review_custom_gates_for_run_request);

#endif /* _actions_review_custom_gates_for_run_request_H_ */

