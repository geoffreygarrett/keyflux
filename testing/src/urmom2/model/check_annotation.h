/*
 * check_annotation.h
 *
 * Check Annotation
 */

#ifndef _check_annotation_H_
#define _check_annotation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct check_annotation_t check_annotation_t;




typedef struct check_annotation_t {
    char *path; // string
    int start_line; //numeric
    int end_line; //numeric
    int start_column; //numeric
    int end_column; //numeric
    char *annotation_level; // string
    char *title; // string
    char *message; // string
    char *raw_details; // string
    char *blob_href; // string

} check_annotation_t;

check_annotation_t *check_annotation_create(
    char *path,
    int start_line,
    int end_line,
    int start_column,
    int end_column,
    char *annotation_level,
    char *title,
    char *message,
    char *raw_details,
    char *blob_href
);

void check_annotation_free(check_annotation_t *check_annotation);

check_annotation_t *check_annotation_parseFromJSON(cJSON *check_annotationJSON);

cJSON *check_annotation_convertToJSON(check_annotation_t *check_annotation);

#endif /* _check_annotation_H_ */

