/*
 * branch_restriction_policy.h
 *
 * Branch Restriction Policy
 */

#ifndef _branch_restriction_policy_H_
#define _branch_restriction_policy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_restriction_policy_t branch_restriction_policy_t;

#include "branch_restriction_policy_apps_inner.h"
#include "branch_restriction_policy_teams_inner.h"
#include "branch_restriction_policy_users_inner.h"



typedef struct branch_restriction_policy_t {
    char *url; // string
    char *users_url; // string
    char *teams_url; // string
    char *apps_url; // string
    list_t *users; //nonprimitive container
    list_t *teams; //nonprimitive container
    list_t *apps; //nonprimitive container

} branch_restriction_policy_t;

branch_restriction_policy_t *branch_restriction_policy_create(
    char *url,
    char *users_url,
    char *teams_url,
    char *apps_url,
    list_t *users,
    list_t *teams,
    list_t *apps
);

void branch_restriction_policy_free(branch_restriction_policy_t *branch_restriction_policy);

branch_restriction_policy_t *branch_restriction_policy_parseFromJSON(cJSON *branch_restriction_policyJSON);

cJSON *branch_restriction_policy_convertToJSON(branch_restriction_policy_t *branch_restriction_policy);

#endif /* _branch_restriction_policy_H_ */

