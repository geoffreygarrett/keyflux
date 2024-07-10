/*
 * activity_mark_notifications_as_read_202_response.h
 *
 * 
 */

#ifndef _activity_mark_notifications_as_read_202_response_H_
#define _activity_mark_notifications_as_read_202_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_mark_notifications_as_read_202_response_t activity_mark_notifications_as_read_202_response_t;




typedef struct activity_mark_notifications_as_read_202_response_t {
    char *message; // string

} activity_mark_notifications_as_read_202_response_t;

activity_mark_notifications_as_read_202_response_t *activity_mark_notifications_as_read_202_response_create(
    char *message
);

void activity_mark_notifications_as_read_202_response_free(activity_mark_notifications_as_read_202_response_t *activity_mark_notifications_as_read_202_response);

activity_mark_notifications_as_read_202_response_t *activity_mark_notifications_as_read_202_response_parseFromJSON(cJSON *activity_mark_notifications_as_read_202_responseJSON);

cJSON *activity_mark_notifications_as_read_202_response_convertToJSON(activity_mark_notifications_as_read_202_response_t *activity_mark_notifications_as_read_202_response);

#endif /* _activity_mark_notifications_as_read_202_response_H_ */

