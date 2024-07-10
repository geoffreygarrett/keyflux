/*
 * apps_delete_authorization_request.h
 *
 * 
 */

#ifndef _apps_delete_authorization_request_H_
#define _apps_delete_authorization_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apps_delete_authorization_request_t apps_delete_authorization_request_t;




typedef struct apps_delete_authorization_request_t {
    char *access_token; // string

} apps_delete_authorization_request_t;

apps_delete_authorization_request_t *apps_delete_authorization_request_create(
    char *access_token
);

void apps_delete_authorization_request_free(apps_delete_authorization_request_t *apps_delete_authorization_request);

apps_delete_authorization_request_t *apps_delete_authorization_request_parseFromJSON(cJSON *apps_delete_authorization_requestJSON);

cJSON *apps_delete_authorization_request_convertToJSON(apps_delete_authorization_request_t *apps_delete_authorization_request);

#endif /* _apps_delete_authorization_request_H_ */

