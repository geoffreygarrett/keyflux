/*
 * actions_create_or_update_org_secret_request.h
 *
 * 
 */

#ifndef _actions_create_or_update_org_secret_request_H_
#define _actions_create_or_update_org_secret_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_create_or_update_org_secret_request_t actions_create_or_update_org_secret_request_t;


// Enum VISIBILITY for actions_create_or_update_org_secret_request

typedef enum  { github_v3_rest_api_actions_create_or_update_org_secret_request_VISIBILITY_NULL = 0, github_v3_rest_api_actions_create_or_update_org_secret_request_VISIBILITY_all, github_v3_rest_api_actions_create_or_update_org_secret_request_VISIBILITY__private, github_v3_rest_api_actions_create_or_update_org_secret_request_VISIBILITY_selected } github_v3_rest_api_actions_create_or_update_org_secret_request_VISIBILITY_e;

char* actions_create_or_update_org_secret_request_visibility_ToString(github_v3_rest_api_actions_create_or_update_org_secret_request_VISIBILITY_e visibility);

github_v3_rest_api_actions_create_or_update_org_secret_request_VISIBILITY_e actions_create_or_update_org_secret_request_visibility_FromString(char* visibility);



typedef struct actions_create_or_update_org_secret_request_t {
    char *encrypted_value; // string
    char *key_id; // string
    github_v3_rest_api_actions_create_or_update_org_secret_request_VISIBILITY_e visibility; //enum
    list_t *selected_repository_ids; //primitive container

} actions_create_or_update_org_secret_request_t;

actions_create_or_update_org_secret_request_t *actions_create_or_update_org_secret_request_create(
    char *encrypted_value,
    char *key_id,
    github_v3_rest_api_actions_create_or_update_org_secret_request_VISIBILITY_e visibility,
    list_t *selected_repository_ids
);

void actions_create_or_update_org_secret_request_free(actions_create_or_update_org_secret_request_t *actions_create_or_update_org_secret_request);

actions_create_or_update_org_secret_request_t *actions_create_or_update_org_secret_request_parseFromJSON(cJSON *actions_create_or_update_org_secret_requestJSON);

cJSON *actions_create_or_update_org_secret_request_convertToJSON(actions_create_or_update_org_secret_request_t *actions_create_or_update_org_secret_request);

#endif /* _actions_create_or_update_org_secret_request_H_ */

