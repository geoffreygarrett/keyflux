/*
 * auto_merge.h
 *
 * The status of auto merging a pull request.
 */

#ifndef _auto_merge_H_
#define _auto_merge_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct auto_merge_t auto_merge_t;

#include "simple_user.h"

// Enum MERGEMETHOD for auto_merge

typedef enum  { github_v3_rest_api_auto_merge_MERGEMETHOD_NULL = 0, github_v3_rest_api_auto_merge_MERGEMETHOD_merge, github_v3_rest_api_auto_merge_MERGEMETHOD_squash, github_v3_rest_api_auto_merge_MERGEMETHOD_rebase } github_v3_rest_api_auto_merge_MERGEMETHOD_e;

char* auto_merge_merge_method_ToString(github_v3_rest_api_auto_merge_MERGEMETHOD_e merge_method);

github_v3_rest_api_auto_merge_MERGEMETHOD_e auto_merge_merge_method_FromString(char* merge_method);



typedef struct auto_merge_t {
    struct simple_user_t *enabled_by; //model
    github_v3_rest_api_auto_merge_MERGEMETHOD_e merge_method; //enum
    char *commit_title; // string
    char *commit_message; // string

} auto_merge_t;

auto_merge_t *auto_merge_create(
    simple_user_t *enabled_by,
    github_v3_rest_api_auto_merge_MERGEMETHOD_e merge_method,
    char *commit_title,
    char *commit_message
);

void auto_merge_free(auto_merge_t *auto_merge);

auto_merge_t *auto_merge_parseFromJSON(cJSON *auto_mergeJSON);

cJSON *auto_merge_convertToJSON(auto_merge_t *auto_merge);

#endif /* _auto_merge_H_ */

