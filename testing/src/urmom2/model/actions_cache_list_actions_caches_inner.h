/*
 * actions_cache_list_actions_caches_inner.h
 *
 * 
 */

#ifndef _actions_cache_list_actions_caches_inner_H_
#define _actions_cache_list_actions_caches_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_cache_list_actions_caches_inner_t actions_cache_list_actions_caches_inner_t;




typedef struct actions_cache_list_actions_caches_inner_t {
    int id; //numeric
    char *ref; // string
    char *key; // string
    char *version; // string
    char *last_accessed_at; //date time
    char *created_at; //date time
    int size_in_bytes; //numeric

} actions_cache_list_actions_caches_inner_t;

actions_cache_list_actions_caches_inner_t *actions_cache_list_actions_caches_inner_create(
    int id,
    char *ref,
    char *key,
    char *version,
    char *last_accessed_at,
    char *created_at,
    int size_in_bytes
);

void actions_cache_list_actions_caches_inner_free(actions_cache_list_actions_caches_inner_t *actions_cache_list_actions_caches_inner);

actions_cache_list_actions_caches_inner_t *actions_cache_list_actions_caches_inner_parseFromJSON(cJSON *actions_cache_list_actions_caches_innerJSON);

cJSON *actions_cache_list_actions_caches_inner_convertToJSON(actions_cache_list_actions_caches_inner_t *actions_cache_list_actions_caches_inner);

#endif /* _actions_cache_list_actions_caches_inner_H_ */

