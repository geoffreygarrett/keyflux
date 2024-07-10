/*
 * activity_mark_repo_notifications_as_read_request.h
 *
 * 
 */

#ifndef _activity_mark_repo_notifications_as_read_request_H_
#define _activity_mark_repo_notifications_as_read_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_mark_repo_notifications_as_read_request_t activity_mark_repo_notifications_as_read_request_t;




typedef struct activity_mark_repo_notifications_as_read_request_t {
    char *last_read_at; //date time

} activity_mark_repo_notifications_as_read_request_t;

activity_mark_repo_notifications_as_read_request_t *activity_mark_repo_notifications_as_read_request_create(
    char *last_read_at
);

void activity_mark_repo_notifications_as_read_request_free(activity_mark_repo_notifications_as_read_request_t *activity_mark_repo_notifications_as_read_request);

activity_mark_repo_notifications_as_read_request_t *activity_mark_repo_notifications_as_read_request_parseFromJSON(cJSON *activity_mark_repo_notifications_as_read_requestJSON);

cJSON *activity_mark_repo_notifications_as_read_request_convertToJSON(activity_mark_repo_notifications_as_read_request_t *activity_mark_repo_notifications_as_read_request);

#endif /* _activity_mark_repo_notifications_as_read_request_H_ */

