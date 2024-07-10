/*
 * alert_instance_location.h
 *
 * 
 */

#ifndef _alert_instance_location_H_
#define _alert_instance_location_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct alert_instance_location_t alert_instance_location_t;




typedef struct alert_instance_location_t {
    int end_column; //numeric
    int end_line; //numeric
    char *path; // string
    int start_column; //numeric
    int start_line; //numeric

} alert_instance_location_t;

alert_instance_location_t *alert_instance_location_create(
    int end_column,
    int end_line,
    char *path,
    int start_column,
    int start_line
);

void alert_instance_location_free(alert_instance_location_t *alert_instance_location);

alert_instance_location_t *alert_instance_location_parseFromJSON(cJSON *alert_instance_locationJSON);

cJSON *alert_instance_location_convertToJSON(alert_instance_location_t *alert_instance_location);

#endif /* _alert_instance_location_H_ */

