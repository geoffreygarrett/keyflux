/*
 * check_run_pull_request_base.h
 *
 * 
 */

#ifndef _check_run_pull_request_base_H_
#define _check_run_pull_request_base_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct check_run_pull_request_base_t check_run_pull_request_base_t;

#include "repo_ref.h"



typedef struct check_run_pull_request_base_t {
    char *ref; // string
    struct repo_ref_t *repo; //model
    char *sha; // string

} check_run_pull_request_base_t;

check_run_pull_request_base_t *check_run_pull_request_base_create(
    char *ref,
    repo_ref_t *repo,
    char *sha
);

void check_run_pull_request_base_free(check_run_pull_request_base_t *check_run_pull_request_base);

check_run_pull_request_base_t *check_run_pull_request_base_parseFromJSON(cJSON *check_run_pull_request_baseJSON);

cJSON *check_run_pull_request_base_convertToJSON(check_run_pull_request_base_t *check_run_pull_request_base);

#endif /* _check_run_pull_request_base_H_ */

