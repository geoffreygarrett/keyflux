/*
 * branch_with_protection__links.h
 *
 * 
 */

#ifndef _branch_with_protection__links_H_
#define _branch_with_protection__links_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_with_protection__links_t branch_with_protection__links_t;




typedef struct branch_with_protection__links_t {
    char *html; // string
    char *self; // string

} branch_with_protection__links_t;

branch_with_protection__links_t *branch_with_protection__links_create(
    char *html,
    char *self
);

void branch_with_protection__links_free(branch_with_protection__links_t *branch_with_protection__links);

branch_with_protection__links_t *branch_with_protection__links_parseFromJSON(cJSON *branch_with_protection__linksJSON);

cJSON *branch_with_protection__links_convertToJSON(branch_with_protection__links_t *branch_with_protection__links);

#endif /* _branch_with_protection__links_H_ */

