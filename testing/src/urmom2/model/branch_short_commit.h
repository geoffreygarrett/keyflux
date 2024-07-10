/*
 * branch_short_commit.h
 *
 * 
 */

#ifndef _branch_short_commit_H_
#define _branch_short_commit_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_short_commit_t branch_short_commit_t;




typedef struct branch_short_commit_t {
    char *sha; // string
    char *url; // string

} branch_short_commit_t;

branch_short_commit_t *branch_short_commit_create(
    char *sha,
    char *url
);

void branch_short_commit_free(branch_short_commit_t *branch_short_commit);

branch_short_commit_t *branch_short_commit_parseFromJSON(cJSON *branch_short_commitJSON);

cJSON *branch_short_commit_convertToJSON(branch_short_commit_t *branch_short_commit);

#endif /* _branch_short_commit_H_ */

