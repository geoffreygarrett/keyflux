/*
 * alert_instance.h
 *
 * 
 */

#ifndef _alert_instance_H_
#define _alert_instance_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct alert_instance_t alert_instance_t;

#include "alert_instance_location.h"
#include "code_scanning_alert_instance_message.h"

// Enum STATE for alert_instance

typedef enum  { github_v3_rest_api_alert_instance_STATE_NULL = 0, github_v3_rest_api_alert_instance_STATE_open, github_v3_rest_api_alert_instance_STATE_dismissed, github_v3_rest_api_alert_instance_STATE_fixed } github_v3_rest_api_alert_instance_STATE_e;

char* alert_instance_state_ToString(github_v3_rest_api_alert_instance_STATE_e state);

github_v3_rest_api_alert_instance_STATE_e alert_instance_state_FromString(char* state);



typedef struct alert_instance_t {
    char *analysis_key; // string
    char *category; // string
    list_t *classifications; //primitive container
    char *commit_sha; // string
    char *environment; // string
    struct alert_instance_location_t *location; //model
    struct code_scanning_alert_instance_message_t *message; //model
    char *ref; // string
    github_v3_rest_api_alert_instance_STATE_e state; //enum

} alert_instance_t;

alert_instance_t *alert_instance_create(
    char *analysis_key,
    char *category,
    list_t *classifications,
    char *commit_sha,
    char *environment,
    alert_instance_location_t *location,
    code_scanning_alert_instance_message_t *message,
    char *ref,
    github_v3_rest_api_alert_instance_STATE_e state
);

void alert_instance_free(alert_instance_t *alert_instance);

alert_instance_t *alert_instance_parseFromJSON(cJSON *alert_instanceJSON);

cJSON *alert_instance_convertToJSON(alert_instance_t *alert_instance);

#endif /* _alert_instance_H_ */

