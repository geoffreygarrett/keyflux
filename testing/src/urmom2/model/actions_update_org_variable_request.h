/*
 * actions_update_org_variable_request.h
 *
 * 
 */

#ifndef _actions_update_org_variable_request_H_
#define _actions_update_org_variable_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_update_org_variable_request_t actions_update_org_variable_request_t;


// Enum VISIBILITY for actions_update_org_variable_request

typedef enum  { github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_NULL = 0, github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_all, github_v3_rest_api_actions_update_org_variable_request_VISIBILITY__private, github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_selected } github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_e;

char* actions_update_org_variable_request_visibility_ToString(github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_e visibility);

github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_e actions_update_org_variable_request_visibility_FromString(char* visibility);



typedef struct actions_update_org_variable_request_t {
    char *name; // string
    char *value; // string
    github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_e visibility; //enum
    list_t *selected_repository_ids; //primitive container

} actions_update_org_variable_request_t;

actions_update_org_variable_request_t *actions_update_org_variable_request_create(
    char *name,
    char *value,
    github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_e visibility,
    list_t *selected_repository_ids
);

void actions_update_org_variable_request_free(actions_update_org_variable_request_t *actions_update_org_variable_request);

actions_update_org_variable_request_t *actions_update_org_variable_request_parseFromJSON(cJSON *actions_update_org_variable_requestJSON);

cJSON *actions_update_org_variable_request_convertToJSON(actions_update_org_variable_request_t *actions_update_org_variable_request);

#endif /* _actions_update_org_variable_request_H_ */

