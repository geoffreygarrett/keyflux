/*
 * branch_restriction_policy_apps_inner_owner.h
 *
 * 
 */

#ifndef _branch_restriction_policy_apps_inner_owner_H_
#define _branch_restriction_policy_apps_inner_owner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_restriction_policy_apps_inner_owner_t branch_restriction_policy_apps_inner_owner_t;




typedef struct branch_restriction_policy_apps_inner_owner_t {
    char *login; // string
    int id; //numeric
    char *node_id; // string
    char *url; // string
    char *repos_url; // string
    char *events_url; // string
    char *hooks_url; // string
    char *issues_url; // string
    char *members_url; // string
    char *public_members_url; // string
    char *avatar_url; // string
    char *description; // string
    char *gravatar_id; // string
    char *html_url; // string
    char *followers_url; // string
    char *following_url; // string
    char *gists_url; // string
    char *starred_url; // string
    char *subscriptions_url; // string
    char *organizations_url; // string
    char *received_events_url; // string
    char *type; // string
    int site_admin; //boolean

} branch_restriction_policy_apps_inner_owner_t;

branch_restriction_policy_apps_inner_owner_t *branch_restriction_policy_apps_inner_owner_create(
    char *login,
    int id,
    char *node_id,
    char *url,
    char *repos_url,
    char *events_url,
    char *hooks_url,
    char *issues_url,
    char *members_url,
    char *public_members_url,
    char *avatar_url,
    char *description,
    char *gravatar_id,
    char *html_url,
    char *followers_url,
    char *following_url,
    char *gists_url,
    char *starred_url,
    char *subscriptions_url,
    char *organizations_url,
    char *received_events_url,
    char *type,
    int site_admin
);

void branch_restriction_policy_apps_inner_owner_free(branch_restriction_policy_apps_inner_owner_t *branch_restriction_policy_apps_inner_owner);

branch_restriction_policy_apps_inner_owner_t *branch_restriction_policy_apps_inner_owner_parseFromJSON(cJSON *branch_restriction_policy_apps_inner_ownerJSON);

cJSON *branch_restriction_policy_apps_inner_owner_convertToJSON(branch_restriction_policy_apps_inner_owner_t *branch_restriction_policy_apps_inner_owner);

#endif /* _branch_restriction_policy_apps_inner_owner_H_ */

