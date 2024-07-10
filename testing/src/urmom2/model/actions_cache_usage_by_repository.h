/*
 * actions_cache_usage_by_repository.h
 *
 * GitHub Actions Cache Usage by repository.
 */

#ifndef _actions_cache_usage_by_repository_H_
#define _actions_cache_usage_by_repository_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_cache_usage_by_repository_t actions_cache_usage_by_repository_t;




typedef struct actions_cache_usage_by_repository_t {
    char *full_name; // string
    int active_caches_size_in_bytes; //numeric
    int active_caches_count; //numeric

} actions_cache_usage_by_repository_t;

actions_cache_usage_by_repository_t *actions_cache_usage_by_repository_create(
    char *full_name,
    int active_caches_size_in_bytes,
    int active_caches_count
);

void actions_cache_usage_by_repository_free(actions_cache_usage_by_repository_t *actions_cache_usage_by_repository);

actions_cache_usage_by_repository_t *actions_cache_usage_by_repository_parseFromJSON(cJSON *actions_cache_usage_by_repositoryJSON);

cJSON *actions_cache_usage_by_repository_convertToJSON(actions_cache_usage_by_repository_t *actions_cache_usage_by_repository);

#endif /* _actions_cache_usage_by_repository_H_ */

