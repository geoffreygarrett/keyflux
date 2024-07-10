/*
 * actions_repository_permissions.h
 *
 * 
 */

#ifndef _actions_repository_permissions_H_
#define _actions_repository_permissions_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_repository_permissions_t actions_repository_permissions_t;

#include "allowed_actions.h"

// Enum  for actions_repository_permissions

typedef enum  { github_v3_rest_api_actions_repository_permissions__NULL = 0, github_v3_rest_api_actions_repository_permissions__all, github_v3_rest_api_actions_repository_permissions__local_only, github_v3_rest_api_actions_repository_permissions__selected } github_v3_rest_api_actions_repository_permissions__e;

char* actions_repository_permissions_allowed_actions_ToString(github_v3_rest_api_actions_repository_permissions__e allowed_actions);

github_v3_rest_api_actions_repository_permissions__e actions_repository_permissions_allowed_actions_FromString(char* allowed_actions);



typedef struct actions_repository_permissions_t {
    int enabled; //boolean
    allowed_actions_t *allowed_actions; // custom
    char *selected_actions_url; // string

} actions_repository_permissions_t;

actions_repository_permissions_t *actions_repository_permissions_create(
    int enabled,
    allowed_actions_t *allowed_actions,
    char *selected_actions_url
);

void actions_repository_permissions_free(actions_repository_permissions_t *actions_repository_permissions);

actions_repository_permissions_t *actions_repository_permissions_parseFromJSON(cJSON *actions_repository_permissionsJSON);

cJSON *actions_repository_permissions_convertToJSON(actions_repository_permissions_t *actions_repository_permissions);

#endif /* _actions_repository_permissions_H_ */

