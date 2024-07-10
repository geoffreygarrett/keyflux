/*
 * actions_get_actions_cache_usage_by_repo_for_org_200_response.h
 *
 * 
 */

#ifndef _actions_get_actions_cache_usage_by_repo_for_org_200_response_H_
#define _actions_get_actions_cache_usage_by_repo_for_org_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_get_actions_cache_usage_by_repo_for_org_200_response_t actions_get_actions_cache_usage_by_repo_for_org_200_response_t;

#include "actions_cache_usage_by_repository.h"



typedef struct actions_get_actions_cache_usage_by_repo_for_org_200_response_t {
    int total_count; //numeric
    list_t *repository_cache_usages; //nonprimitive container

} actions_get_actions_cache_usage_by_repo_for_org_200_response_t;

actions_get_actions_cache_usage_by_repo_for_org_200_response_t *actions_get_actions_cache_usage_by_repo_for_org_200_response_create(
    int total_count,
    list_t *repository_cache_usages
);

void actions_get_actions_cache_usage_by_repo_for_org_200_response_free(actions_get_actions_cache_usage_by_repo_for_org_200_response_t *actions_get_actions_cache_usage_by_repo_for_org_200_response);

actions_get_actions_cache_usage_by_repo_for_org_200_response_t *actions_get_actions_cache_usage_by_repo_for_org_200_response_parseFromJSON(cJSON *actions_get_actions_cache_usage_by_repo_for_org_200_responseJSON);

cJSON *actions_get_actions_cache_usage_by_repo_for_org_200_response_convertToJSON(actions_get_actions_cache_usage_by_repo_for_org_200_response_t *actions_get_actions_cache_usage_by_repo_for_org_200_response);

#endif /* _actions_get_actions_cache_usage_by_repo_for_org_200_response_H_ */

