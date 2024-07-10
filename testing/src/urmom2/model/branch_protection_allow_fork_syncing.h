/*
 * branch_protection_allow_fork_syncing.h
 *
 * Whether users can pull changes from upstream when the branch is locked. Set to &#x60;true&#x60; to allow fork syncing. Set to &#x60;false&#x60; to prevent fork syncing.
 */

#ifndef _branch_protection_allow_fork_syncing_H_
#define _branch_protection_allow_fork_syncing_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_protection_allow_fork_syncing_t branch_protection_allow_fork_syncing_t;




typedef struct branch_protection_allow_fork_syncing_t {
    int enabled; //boolean

} branch_protection_allow_fork_syncing_t;

branch_protection_allow_fork_syncing_t *branch_protection_allow_fork_syncing_create(
    int enabled
);

void branch_protection_allow_fork_syncing_free(branch_protection_allow_fork_syncing_t *branch_protection_allow_fork_syncing);

branch_protection_allow_fork_syncing_t *branch_protection_allow_fork_syncing_parseFromJSON(cJSON *branch_protection_allow_fork_syncingJSON);

cJSON *branch_protection_allow_fork_syncing_convertToJSON(branch_protection_allow_fork_syncing_t *branch_protection_allow_fork_syncing);

#endif /* _branch_protection_allow_fork_syncing_H_ */

