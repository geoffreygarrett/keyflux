/*
 * check_run_output.h
 *
 * 
 */

#ifndef _check_run_output_H_
#define _check_run_output_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct check_run_output_t check_run_output_t;




typedef struct check_run_output_t {
    char *title; // string
    char *summary; // string
    char *text; // string
    int annotations_count; //numeric
    char *annotations_url; // string

} check_run_output_t;

check_run_output_t *check_run_output_create(
    char *title,
    char *summary,
    char *text,
    int annotations_count,
    char *annotations_url
);

void check_run_output_free(check_run_output_t *check_run_output);

check_run_output_t *check_run_output_parseFromJSON(cJSON *check_run_outputJSON);

cJSON *check_run_output_convertToJSON(check_run_output_t *check_run_output);

#endif /* _check_run_output_H_ */

