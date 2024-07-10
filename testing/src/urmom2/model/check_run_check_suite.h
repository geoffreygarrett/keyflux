/*
 * check_run_check_suite.h
 *
 * 
 */

#ifndef _check_run_check_suite_H_
#define _check_run_check_suite_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct check_run_check_suite_t check_run_check_suite_t;




typedef struct check_run_check_suite_t {
    int id; //numeric

} check_run_check_suite_t;

check_run_check_suite_t *check_run_check_suite_create(
    int id
);

void check_run_check_suite_free(check_run_check_suite_t *check_run_check_suite);

check_run_check_suite_t *check_run_check_suite_parseFromJSON(cJSON *check_run_check_suiteJSON);

cJSON *check_run_check_suite_convertToJSON(check_run_check_suite_t *check_run_check_suite);

#endif /* _check_run_check_suite_H_ */

