/*
 * actions_create_repo_variable_request.h
 *
 * 
 */

#ifndef _actions_create_repo_variable_request_H_
#define _actions_create_repo_variable_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_create_repo_variable_request_t actions_create_repo_variable_request_t;




typedef struct actions_create_repo_variable_request_t {
    char *name; // string
    char *value; // string

} actions_create_repo_variable_request_t;

actions_create_repo_variable_request_t *actions_create_repo_variable_request_create(
    char *name,
    char *value
);

void actions_create_repo_variable_request_free(actions_create_repo_variable_request_t *actions_create_repo_variable_request);

actions_create_repo_variable_request_t *actions_create_repo_variable_request_parseFromJSON(cJSON *actions_create_repo_variable_requestJSON);

cJSON *actions_create_repo_variable_request_convertToJSON(actions_create_repo_variable_request_t *actions_create_repo_variable_request);

#endif /* _actions_create_repo_variable_request_H_ */

