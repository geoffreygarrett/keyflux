/*
 * apps_create_installation_access_token_request.h
 *
 * 
 */

#ifndef _apps_create_installation_access_token_request_H_
#define _apps_create_installation_access_token_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apps_create_installation_access_token_request_t apps_create_installation_access_token_request_t;

#include "app_permissions.h"



typedef struct apps_create_installation_access_token_request_t {
    list_t *repositories; //primitive container
    list_t *repository_ids; //primitive container
    struct app_permissions_t *permissions; //model

} apps_create_installation_access_token_request_t;

apps_create_installation_access_token_request_t *apps_create_installation_access_token_request_create(
    list_t *repositories,
    list_t *repository_ids,
    app_permissions_t *permissions
);

void apps_create_installation_access_token_request_free(apps_create_installation_access_token_request_t *apps_create_installation_access_token_request);

apps_create_installation_access_token_request_t *apps_create_installation_access_token_request_parseFromJSON(cJSON *apps_create_installation_access_token_requestJSON);

cJSON *apps_create_installation_access_token_request_convertToJSON(apps_create_installation_access_token_request_t *apps_create_installation_access_token_request);

#endif /* _apps_create_installation_access_token_request_H_ */

