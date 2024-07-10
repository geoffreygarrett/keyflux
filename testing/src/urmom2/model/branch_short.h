/*
 * branch_short.h
 *
 * Branch Short
 */

#ifndef _branch_short_H_
#define _branch_short_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_short_t branch_short_t;

#include "branch_short_commit.h"



typedef struct branch_short_t {
    char *name; // string
    struct branch_short_commit_t *commit; //model
    int _protected; //boolean

} branch_short_t;

branch_short_t *branch_short_create(
    char *name,
    branch_short_commit_t *commit,
    int _protected
);

void branch_short_free(branch_short_t *branch_short);

branch_short_t *branch_short_parseFromJSON(cJSON *branch_shortJSON);

cJSON *branch_short_convertToJSON(branch_short_t *branch_short);

#endif /* _branch_short_H_ */

