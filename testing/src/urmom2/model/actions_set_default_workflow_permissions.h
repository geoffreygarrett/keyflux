/*
 * actions_set_default_workflow_permissions.h
 *
 * 
 */

#ifndef _actions_set_default_workflow_permissions_H_
#define _actions_set_default_workflow_permissions_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_set_default_workflow_permissions_t actions_set_default_workflow_permissions_t;

#include "actions_default_workflow_permissions.h"

// Enum  for actions_set_default_workflow_permissions

typedef enum  { github_v3_rest_api_actions_set_default_workflow_permissions__NULL = 0, github_v3_rest_api_actions_set_default_workflow_permissions__read, github_v3_rest_api_actions_set_default_workflow_permissions__write } github_v3_rest_api_actions_set_default_workflow_permissions__e;

char* actions_set_default_workflow_permissions_default_workflow_permissions_ToString(github_v3_rest_api_actions_set_default_workflow_permissions__e default_workflow_permissions);

github_v3_rest_api_actions_set_default_workflow_permissions__e actions_set_default_workflow_permissions_default_workflow_permissions_FromString(char* default_workflow_permissions);



typedef struct actions_set_default_workflow_permissions_t {
    actions_default_workflow_permissions_t *default_workflow_permissions; // custom
    int can_approve_pull_request_reviews; //boolean

} actions_set_default_workflow_permissions_t;

actions_set_default_workflow_permissions_t *actions_set_default_workflow_permissions_create(
    actions_default_workflow_permissions_t *default_workflow_permissions,
    int can_approve_pull_request_reviews
);

void actions_set_default_workflow_permissions_free(actions_set_default_workflow_permissions_t *actions_set_default_workflow_permissions);

actions_set_default_workflow_permissions_t *actions_set_default_workflow_permissions_parseFromJSON(cJSON *actions_set_default_workflow_permissionsJSON);

cJSON *actions_set_default_workflow_permissions_convertToJSON(actions_set_default_workflow_permissions_t *actions_set_default_workflow_permissions);

#endif /* _actions_set_default_workflow_permissions_H_ */

