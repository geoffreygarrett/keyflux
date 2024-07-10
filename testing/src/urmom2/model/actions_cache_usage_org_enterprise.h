/*
 * actions_cache_usage_org_enterprise.h
 *
 * 
 */

#ifndef _actions_cache_usage_org_enterprise_H_
#define _actions_cache_usage_org_enterprise_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_cache_usage_org_enterprise_t actions_cache_usage_org_enterprise_t;




typedef struct actions_cache_usage_org_enterprise_t {
    int total_active_caches_count; //numeric
    int total_active_caches_size_in_bytes; //numeric

} actions_cache_usage_org_enterprise_t;

actions_cache_usage_org_enterprise_t *actions_cache_usage_org_enterprise_create(
    int total_active_caches_count,
    int total_active_caches_size_in_bytes
);

void actions_cache_usage_org_enterprise_free(actions_cache_usage_org_enterprise_t *actions_cache_usage_org_enterprise);

actions_cache_usage_org_enterprise_t *actions_cache_usage_org_enterprise_parseFromJSON(cJSON *actions_cache_usage_org_enterpriseJSON);

cJSON *actions_cache_usage_org_enterprise_convertToJSON(actions_cache_usage_org_enterprise_t *actions_cache_usage_org_enterprise);

#endif /* _actions_cache_usage_org_enterprise_H_ */

