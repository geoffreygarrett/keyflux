/*
 * branch_protection_lock_branch.h
 *
 * Whether to set the branch as read-only. If this is true, users will not be able to push to the branch.
 */

#ifndef _branch_protection_lock_branch_H_
#define _branch_protection_lock_branch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_protection_lock_branch_t branch_protection_lock_branch_t;




typedef struct branch_protection_lock_branch_t {
    int enabled; //boolean

} branch_protection_lock_branch_t;

branch_protection_lock_branch_t *branch_protection_lock_branch_create(
    int enabled
);

void branch_protection_lock_branch_free(branch_protection_lock_branch_t *branch_protection_lock_branch);

branch_protection_lock_branch_t *branch_protection_lock_branch_parseFromJSON(cJSON *branch_protection_lock_branchJSON);

cJSON *branch_protection_lock_branch_convertToJSON(branch_protection_lock_branch_t *branch_protection_lock_branch);

#endif /* _branch_protection_lock_branch_H_ */

