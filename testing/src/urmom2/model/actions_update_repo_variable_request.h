/*
 * actions_update_repo_variable_request.h
 *
 * 
 */

#ifndef _actions_update_repo_variable_request_H_
#define _actions_update_repo_variable_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_update_repo_variable_request_t actions_update_repo_variable_request_t;




typedef struct actions_update_repo_variable_request_t {
    char *name; // string
    char *value; // string

} actions_update_repo_variable_request_t;

actions_update_repo_variable_request_t *actions_update_repo_variable_request_create(
    char *name,
    char *value
);

void actions_update_repo_variable_request_free(actions_update_repo_variable_request_t *actions_update_repo_variable_request);

actions_update_repo_variable_request_t *actions_update_repo_variable_request_parseFromJSON(cJSON *actions_update_repo_variable_requestJSON);

cJSON *actions_update_repo_variable_request_convertToJSON(actions_update_repo_variable_request_t *actions_update_repo_variable_request);

#endif /* _actions_update_repo_variable_request_H_ */

