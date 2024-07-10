/*
 * actions_billing_usage.h
 *
 * 
 */

#ifndef _actions_billing_usage_H_
#define _actions_billing_usage_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_billing_usage_t actions_billing_usage_t;

#include "actions_billing_usage_minutes_used_breakdown.h"



typedef struct actions_billing_usage_t {
    int total_minutes_used; //numeric
    int total_paid_minutes_used; //numeric
    int included_minutes; //numeric
    struct actions_billing_usage_minutes_used_breakdown_t *minutes_used_breakdown; //model

} actions_billing_usage_t;

actions_billing_usage_t *actions_billing_usage_create(
    int total_minutes_used,
    int total_paid_minutes_used,
    int included_minutes,
    actions_billing_usage_minutes_used_breakdown_t *minutes_used_breakdown
);

void actions_billing_usage_free(actions_billing_usage_t *actions_billing_usage);

actions_billing_usage_t *actions_billing_usage_parseFromJSON(cJSON *actions_billing_usageJSON);

cJSON *actions_billing_usage_convertToJSON(actions_billing_usage_t *actions_billing_usage);

#endif /* _actions_billing_usage_H_ */

