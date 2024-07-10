/*
 * check_run_pull_request.h
 *
 * 
 */

#ifndef _check_run_pull_request_H_
#define _check_run_pull_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct check_run_pull_request_t check_run_pull_request_t;

#include "check_run_pull_request_base.h"



typedef struct check_run_pull_request_t {
    struct check_run_pull_request_base_t *base; //model
    struct check_run_pull_request_base_t *head; //model
    int id; //numeric
    int number; //numeric
    char *url; // string

} check_run_pull_request_t;

check_run_pull_request_t *check_run_pull_request_create(
    check_run_pull_request_base_t *base,
    check_run_pull_request_base_t *head,
    int id,
    int number,
    char *url
);

void check_run_pull_request_free(check_run_pull_request_t *check_run_pull_request);

check_run_pull_request_t *check_run_pull_request_parseFromJSON(cJSON *check_run_pull_requestJSON);

cJSON *check_run_pull_request_convertToJSON(check_run_pull_request_t *check_run_pull_request);

#endif /* _check_run_pull_request_H_ */

