/*
 * branch_with_protection.h
 *
 * Branch With Protection
 */

#ifndef _branch_with_protection_H_
#define _branch_with_protection_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_with_protection_t branch_with_protection_t;

#include "branch_protection.h"
#include "branch_with_protection__links.h"
#include "commit.h"



typedef struct branch_with_protection_t {
    char *name; // string
    struct commit_t *commit; //model
    struct branch_with_protection__links_t *_links; //model
    int _protected; //boolean
    struct branch_protection_t *protection; //model
    char *protection_url; // string
    char *pattern; // string
    int required_approving_review_count; //numeric

} branch_with_protection_t;

branch_with_protection_t *branch_with_protection_create(
    char *name,
    commit_t *commit,
    branch_with_protection__links_t *_links,
    int _protected,
    branch_protection_t *protection,
    char *protection_url,
    char *pattern,
    int required_approving_review_count
);

void branch_with_protection_free(branch_with_protection_t *branch_with_protection);

branch_with_protection_t *branch_with_protection_parseFromJSON(cJSON *branch_with_protectionJSON);

cJSON *branch_with_protection_convertToJSON(branch_with_protection_t *branch_with_protection);

#endif /* _branch_with_protection_H_ */

