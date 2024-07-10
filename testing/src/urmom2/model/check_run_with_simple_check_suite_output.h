/*
 * check_run_with_simple_check_suite_output.h
 *
 * 
 */

#ifndef _check_run_with_simple_check_suite_output_H_
#define _check_run_with_simple_check_suite_output_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct check_run_with_simple_check_suite_output_t check_run_with_simple_check_suite_output_t;




typedef struct check_run_with_simple_check_suite_output_t {
    int annotations_count; //numeric
    char *annotations_url; // string
    char *summary; // string
    char *text; // string
    char *title; // string

} check_run_with_simple_check_suite_output_t;

check_run_with_simple_check_suite_output_t *check_run_with_simple_check_suite_output_create(
    int annotations_count,
    char *annotations_url,
    char *summary,
    char *text,
    char *title
);

void check_run_with_simple_check_suite_output_free(check_run_with_simple_check_suite_output_t *check_run_with_simple_check_suite_output);

check_run_with_simple_check_suite_output_t *check_run_with_simple_check_suite_output_parseFromJSON(cJSON *check_run_with_simple_check_suite_outputJSON);

cJSON *check_run_with_simple_check_suite_output_convertToJSON(check_run_with_simple_check_suite_output_t *check_run_with_simple_check_suite_output);

#endif /* _check_run_with_simple_check_suite_output_H_ */

