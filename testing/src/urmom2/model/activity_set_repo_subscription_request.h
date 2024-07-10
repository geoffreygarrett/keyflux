/*
 * activity_set_repo_subscription_request.h
 *
 * 
 */

#ifndef _activity_set_repo_subscription_request_H_
#define _activity_set_repo_subscription_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_set_repo_subscription_request_t activity_set_repo_subscription_request_t;




typedef struct activity_set_repo_subscription_request_t {
    int subscribed; //boolean
    int ignored; //boolean

} activity_set_repo_subscription_request_t;

activity_set_repo_subscription_request_t *activity_set_repo_subscription_request_create(
    int subscribed,
    int ignored
);

void activity_set_repo_subscription_request_free(activity_set_repo_subscription_request_t *activity_set_repo_subscription_request);

activity_set_repo_subscription_request_t *activity_set_repo_subscription_request_parseFromJSON(cJSON *activity_set_repo_subscription_requestJSON);

cJSON *activity_set_repo_subscription_request_convertToJSON(activity_set_repo_subscription_request_t *activity_set_repo_subscription_request);

#endif /* _activity_set_repo_subscription_request_H_ */

