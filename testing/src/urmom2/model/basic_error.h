/*
 * basic_error.h
 *
 * Basic Error
 */

#ifndef _basic_error_H_
#define _basic_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct basic_error_t basic_error_t;




typedef struct basic_error_t {
    char *message; // string
    char *documentation_url; // string
    char *url; // string
    char *status; // string

} basic_error_t;

basic_error_t *basic_error_create(
    char *message,
    char *documentation_url,
    char *url,
    char *status
);

void basic_error_free(basic_error_t *basic_error);

basic_error_t *basic_error_parseFromJSON(cJSON *basic_errorJSON);

cJSON *basic_error_convertToJSON(basic_error_t *basic_error);

#endif /* _basic_error_H_ */

