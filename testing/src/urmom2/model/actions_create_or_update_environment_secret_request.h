/*
 * actions_create_or_update_environment_secret_request.h
 *
 * 
 */

#ifndef _actions_create_or_update_environment_secret_request_H_
#define _actions_create_or_update_environment_secret_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_create_or_update_environment_secret_request_t actions_create_or_update_environment_secret_request_t;




typedef struct actions_create_or_update_environment_secret_request_t {
    char *encrypted_value; // string
    char *key_id; // string

} actions_create_or_update_environment_secret_request_t;

actions_create_or_update_environment_secret_request_t *actions_create_or_update_environment_secret_request_create(
    char *encrypted_value,
    char *key_id
);

void actions_create_or_update_environment_secret_request_free(actions_create_or_update_environment_secret_request_t *actions_create_or_update_environment_secret_request);

actions_create_or_update_environment_secret_request_t *actions_create_or_update_environment_secret_request_parseFromJSON(cJSON *actions_create_or_update_environment_secret_requestJSON);

cJSON *actions_create_or_update_environment_secret_request_convertToJSON(actions_create_or_update_environment_secret_request_t *actions_create_or_update_environment_secret_request);

#endif /* _actions_create_or_update_environment_secret_request_H_ */

