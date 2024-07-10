/*
 * autolink.h
 *
 * An autolink reference.
 */

#ifndef _autolink_H_
#define _autolink_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct autolink_t autolink_t;




typedef struct autolink_t {
    int id; //numeric
    char *key_prefix; // string
    char *url_template; // string
    int is_alphanumeric; //boolean

} autolink_t;

autolink_t *autolink_create(
    int id,
    char *key_prefix,
    char *url_template,
    int is_alphanumeric
);

void autolink_free(autolink_t *autolink);

autolink_t *autolink_parseFromJSON(cJSON *autolinkJSON);

cJSON *autolink_convertToJSON(autolink_t *autolink);

#endif /* _autolink_H_ */

