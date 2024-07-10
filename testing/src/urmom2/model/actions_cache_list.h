/*
 * actions_cache_list.h
 *
 * Repository actions caches
 */

#ifndef _actions_cache_list_H_
#define _actions_cache_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_cache_list_t actions_cache_list_t;

#include "actions_cache_list_actions_caches_inner.h"



typedef struct actions_cache_list_t {
    int total_count; //numeric
    list_t *actions_caches; //nonprimitive container

} actions_cache_list_t;

actions_cache_list_t *actions_cache_list_create(
    int total_count,
    list_t *actions_caches
);

void actions_cache_list_free(actions_cache_list_t *actions_cache_list);

actions_cache_list_t *actions_cache_list_parseFromJSON(cJSON *actions_cache_listJSON);

cJSON *actions_cache_list_convertToJSON(actions_cache_list_t *actions_cache_list);

#endif /* _actions_cache_list_H_ */

