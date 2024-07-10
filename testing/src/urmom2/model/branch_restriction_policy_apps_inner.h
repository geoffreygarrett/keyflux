/*
 * branch_restriction_policy_apps_inner.h
 *
 * 
 */

#ifndef _branch_restriction_policy_apps_inner_H_
#define _branch_restriction_policy_apps_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_restriction_policy_apps_inner_t branch_restriction_policy_apps_inner_t;

#include "branch_restriction_policy_apps_inner_owner.h"
#include "branch_restriction_policy_apps_inner_permissions.h"



typedef struct branch_restriction_policy_apps_inner_t {
    int id; //numeric
    char *slug; // string
    char *node_id; // string
    struct branch_restriction_policy_apps_inner_owner_t *owner; //model
    char *name; // string
    char *description; // string
    char *external_url; // string
    char *html_url; // string
    char *created_at; // string
    char *updated_at; // string
    struct branch_restriction_policy_apps_inner_permissions_t *permissions; //model
    list_t *events; //primitive container

} branch_restriction_policy_apps_inner_t;

branch_restriction_policy_apps_inner_t *branch_restriction_policy_apps_inner_create(
    int id,
    char *slug,
    char *node_id,
    branch_restriction_policy_apps_inner_owner_t *owner,
    char *name,
    char *description,
    char *external_url,
    char *html_url,
    char *created_at,
    char *updated_at,
    branch_restriction_policy_apps_inner_permissions_t *permissions,
    list_t *events
);

void branch_restriction_policy_apps_inner_free(branch_restriction_policy_apps_inner_t *branch_restriction_policy_apps_inner);

branch_restriction_policy_apps_inner_t *branch_restriction_policy_apps_inner_parseFromJSON(cJSON *branch_restriction_policy_apps_innerJSON);

cJSON *branch_restriction_policy_apps_inner_convertToJSON(branch_restriction_policy_apps_inner_t *branch_restriction_policy_apps_inner);

#endif /* _branch_restriction_policy_apps_inner_H_ */

