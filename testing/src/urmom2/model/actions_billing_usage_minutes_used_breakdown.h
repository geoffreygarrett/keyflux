/*
 * actions_billing_usage_minutes_used_breakdown.h
 *
 * 
 */

#ifndef _actions_billing_usage_minutes_used_breakdown_H_
#define _actions_billing_usage_minutes_used_breakdown_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_billing_usage_minutes_used_breakdown_t actions_billing_usage_minutes_used_breakdown_t;




typedef struct actions_billing_usage_minutes_used_breakdown_t {
    int ubuntu; //numeric
    int macos; //numeric
    int windows; //numeric
    int ubuntu_4_core; //numeric
    int ubuntu_8_core; //numeric
    int ubuntu_16_core; //numeric
    int ubuntu_32_core; //numeric
    int ubuntu_64_core; //numeric
    int windows_4_core; //numeric
    int windows_8_core; //numeric
    int windows_16_core; //numeric
    int windows_32_core; //numeric
    int windows_64_core; //numeric
    int macos_12_core; //numeric
    int total; //numeric

} actions_billing_usage_minutes_used_breakdown_t;

actions_billing_usage_minutes_used_breakdown_t *actions_billing_usage_minutes_used_breakdown_create(
    int ubuntu,
    int macos,
    int windows,
    int ubuntu_4_core,
    int ubuntu_8_core,
    int ubuntu_16_core,
    int ubuntu_32_core,
    int ubuntu_64_core,
    int windows_4_core,
    int windows_8_core,
    int windows_16_core,
    int windows_32_core,
    int windows_64_core,
    int macos_12_core,
    int total
);

void actions_billing_usage_minutes_used_breakdown_free(actions_billing_usage_minutes_used_breakdown_t *actions_billing_usage_minutes_used_breakdown);

actions_billing_usage_minutes_used_breakdown_t *actions_billing_usage_minutes_used_breakdown_parseFromJSON(cJSON *actions_billing_usage_minutes_used_breakdownJSON);

cJSON *actions_billing_usage_minutes_used_breakdown_convertToJSON(actions_billing_usage_minutes_used_breakdown_t *actions_billing_usage_minutes_used_breakdown);

#endif /* _actions_billing_usage_minutes_used_breakdown_H_ */

