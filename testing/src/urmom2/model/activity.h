/*
 * activity.h
 *
 * Activity
 */

#ifndef _activity_H_
#define _activity_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_t activity_t;

#include "nullable_simple_user.h"

// Enum ACTIVITYTYPE for activity

typedef enum  { github_v3_rest_api_activity_ACTIVITYTYPE_NULL = 0, github_v3_rest_api_activity_ACTIVITYTYPE_push, github_v3_rest_api_activity_ACTIVITYTYPE_force_push, github_v3_rest_api_activity_ACTIVITYTYPE_branch_deletion, github_v3_rest_api_activity_ACTIVITYTYPE_branch_creation, github_v3_rest_api_activity_ACTIVITYTYPE_pr_merge, github_v3_rest_api_activity_ACTIVITYTYPE_merge_queue_merge } github_v3_rest_api_activity_ACTIVITYTYPE_e;

char* activity_activity_type_ToString(github_v3_rest_api_activity_ACTIVITYTYPE_e activity_type);

github_v3_rest_api_activity_ACTIVITYTYPE_e activity_activity_type_FromString(char* activity_type);



typedef struct activity_t {
    int id; //numeric
    char *node_id; // string
    char *before; // string
    char *after; // string
    char *ref; // string
    char *timestamp; //date time
    github_v3_rest_api_activity_ACTIVITYTYPE_e activity_type; //enum
    struct nullable_simple_user_t *actor; //model

} activity_t;

activity_t *activity_create(
    int id,
    char *node_id,
    char *before,
    char *after,
    char *ref,
    char *timestamp,
    github_v3_rest_api_activity_ACTIVITYTYPE_e activity_type,
    nullable_simple_user_t *actor
);

void activity_free(activity_t *activity);

activity_t *activity_parseFromJSON(cJSON *activityJSON);

cJSON *activity_convertToJSON(activity_t *activity);

#endif /* _activity_H_ */

