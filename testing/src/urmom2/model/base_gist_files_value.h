/*
 * base_gist_files_value.h
 *
 * 
 */

#ifndef _base_gist_files_value_H_
#define _base_gist_files_value_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct base_gist_files_value_t base_gist_files_value_t;




typedef struct base_gist_files_value_t {
    char *filename; // string
    char *type; // string
    char *language; // string
    char *raw_url; // string
    int size; //numeric

} base_gist_files_value_t;

base_gist_files_value_t *base_gist_files_value_create(
    char *filename,
    char *type,
    char *language,
    char *raw_url,
    int size
);

void base_gist_files_value_free(base_gist_files_value_t *base_gist_files_value);

base_gist_files_value_t *base_gist_files_value_parseFromJSON(cJSON *base_gist_files_valueJSON);

cJSON *base_gist_files_value_convertToJSON(base_gist_files_value_t *base_gist_files_value);

#endif /* _base_gist_files_value_H_ */

