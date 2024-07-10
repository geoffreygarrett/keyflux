/*
 * allowed_actions.h
 *
 * The permissions policy that controls the actions and reusable workflows that are allowed to run.
 */

#ifndef _allowed_actions_H_
#define _allowed_actions_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct allowed_actions_t allowed_actions_t;


// Enum  for allowed_actions

typedef enum { github_v3_rest_api_allowed_actions__NULL = 0, github_v3_rest_api_allowed_actions__all, github_v3_rest_api_allowed_actions__local_only, github_v3_rest_api_allowed_actions__selected } github_v3_rest_api_allowed_actions__e;

char* allowed_actions_allowed_actions_ToString(github_v3_rest_api_allowed_actions__e allowed_actions);

github_v3_rest_api_allowed_actions__e allowed_actions_allowed_actions_FromString(char* allowed_actions);

//cJSON *allowed_actions_allowed_actions_convertToJSON(github_v3_rest_api_allowed_actions__e allowed_actions);

//github_v3_rest_api_allowed_actions__e allowed_actions_allowed_actions_parseFromJSON(cJSON *allowed_actionsJSON);

#endif /* _allowed_actions_H_ */

