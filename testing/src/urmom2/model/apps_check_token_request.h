/*
 * apps_check_token_request.h
 *
 * 
 */

#ifndef _apps_check_token_request_H_
#define _apps_check_token_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apps_check_token_request_t apps_check_token_request_t;




typedef struct apps_check_token_request_t {
    char *access_token; // string

} apps_check_token_request_t;

apps_check_token_request_t *apps_check_token_request_create(
    char *access_token
);

void apps_check_token_request_free(apps_check_token_request_t *apps_check_token_request);

apps_check_token_request_t *apps_check_token_request_parseFromJSON(cJSON *apps_check_token_requestJSON);

cJSON *apps_check_token_request_convertToJSON(apps_check_token_request_t *apps_check_token_request);

#endif /* _apps_check_token_request_H_ */

