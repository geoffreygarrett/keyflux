/*
 * actions_organization_permissions.h
 *
 * 
 */

#ifndef _actions_organization_permissions_H_
#define _actions_organization_permissions_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_organization_permissions_t actions_organization_permissions_t;

#include "allowed_actions.h"
#include "enabled_repositories.h"

// Enum  for actions_organization_permissions

typedef enum  { github_v3_rest_api_actions_organization_permissions__NULL = 0, github_v3_rest_api_actions_organization_permissions__all, github_v3_rest_api_actions_organization_permissions__none, github_v3_rest_api_actions_organization_permissions__selected } github_v3_rest_api_actions_organization_permissions__e;

char* actions_organization_permissions_enabled_repositories_ToString(github_v3_rest_api_actions_organization_permissions__e enabled_repositories);

github_v3_rest_api_actions_organization_permissions__e actions_organization_permissions_enabled_repositories_FromString(char* enabled_repositories);

// Enum  for actions_organization_permissions

typedef enum  { github_v3_rest_api_actions_organization_permissions__NULL = 0, github_v3_rest_api_actions_organization_permissions__all, github_v3_rest_api_actions_organization_permissions__local_only, github_v3_rest_api_actions_organization_permissions__selected } github_v3_rest_api_actions_organization_permissions__e;

char* actions_organization_permissions_allowed_actions_ToString(github_v3_rest_api_actions_organization_permissions__e allowed_actions);

github_v3_rest_api_actions_organization_permissions__e actions_organization_permissions_allowed_actions_FromString(char* allowed_actions);



typedef struct actions_organization_permissions_t {
    enabled_repositories_t *enabled_repositories; // custom
    char *selected_repositories_url; // string
    allowed_actions_t *allowed_actions; // custom
    char *selected_actions_url; // string

} actions_organization_permissions_t;

actions_organization_permissions_t *actions_organization_permissions_create(
    enabled_repositories_t *enabled_repositories,
    char *selected_repositories_url,
    allowed_actions_t *allowed_actions,
    char *selected_actions_url
);

void actions_organization_permissions_free(actions_organization_permissions_t *actions_organization_permissions);

actions_organization_permissions_t *actions_organization_permissions_parseFromJSON(cJSON *actions_organization_permissionsJSON);

cJSON *actions_organization_permissions_convertToJSON(actions_organization_permissions_t *actions_organization_permissions);

#endif /* _actions_organization_permissions_H_ */

