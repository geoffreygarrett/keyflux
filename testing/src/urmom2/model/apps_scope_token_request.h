/*
 * apps_scope_token_request.h
 *
 * 
 */

#ifndef _apps_scope_token_request_H_
#define _apps_scope_token_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apps_scope_token_request_t apps_scope_token_request_t;

#include "app_permissions.h"



typedef struct apps_scope_token_request_t {
    char *access_token; // string
    char *target; // string
    int target_id; //numeric
    list_t *repositories; //primitive container
    list_t *repository_ids; //primitive container
    struct app_permissions_t *permissions; //model

} apps_scope_token_request_t;

apps_scope_token_request_t *apps_scope_token_request_create(
    char *access_token,
    char *target,
    int target_id,
    list_t *repositories,
    list_t *repository_ids,
    app_permissions_t *permissions
);

void apps_scope_token_request_free(apps_scope_token_request_t *apps_scope_token_request);

apps_scope_token_request_t *apps_scope_token_request_parseFromJSON(cJSON *apps_scope_token_requestJSON);

cJSON *apps_scope_token_request_convertToJSON(apps_scope_token_request_t *apps_scope_token_request);

#endif /* _apps_scope_token_request_H_ */

