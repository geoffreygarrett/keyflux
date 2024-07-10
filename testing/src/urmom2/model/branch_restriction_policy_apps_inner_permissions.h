/*
 * branch_restriction_policy_apps_inner_permissions.h
 *
 * 
 */

#ifndef _branch_restriction_policy_apps_inner_permissions_H_
#define _branch_restriction_policy_apps_inner_permissions_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_restriction_policy_apps_inner_permissions_t branch_restriction_policy_apps_inner_permissions_t;




typedef struct branch_restriction_policy_apps_inner_permissions_t {
    char *metadata; // string
    char *contents; // string
    char *issues; // string
    char *single_file; // string

} branch_restriction_policy_apps_inner_permissions_t;

branch_restriction_policy_apps_inner_permissions_t *branch_restriction_policy_apps_inner_permissions_create(
    char *metadata,
    char *contents,
    char *issues,
    char *single_file
);

void branch_restriction_policy_apps_inner_permissions_free(branch_restriction_policy_apps_inner_permissions_t *branch_restriction_policy_apps_inner_permissions);

branch_restriction_policy_apps_inner_permissions_t *branch_restriction_policy_apps_inner_permissions_parseFromJSON(cJSON *branch_restriction_policy_apps_inner_permissionsJSON);

cJSON *branch_restriction_policy_apps_inner_permissions_convertToJSON(branch_restriction_policy_apps_inner_permissions_t *branch_restriction_policy_apps_inner_permissions);

#endif /* _branch_restriction_policy_apps_inner_permissions_H_ */

