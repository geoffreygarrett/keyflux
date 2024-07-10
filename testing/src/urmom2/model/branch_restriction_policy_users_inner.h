/*
 * branch_restriction_policy_users_inner.h
 *
 * 
 */

#ifndef _branch_restriction_policy_users_inner_H_
#define _branch_restriction_policy_users_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_restriction_policy_users_inner_t branch_restriction_policy_users_inner_t;




typedef struct branch_restriction_policy_users_inner_t {
    char *login; // string
    long id; //numeric
    char *node_id; // string
    char *avatar_url; // string
    char *gravatar_id; // string
    char *url; // string
    char *html_url; // string
    char *followers_url; // string
    char *following_url; // string
    char *gists_url; // string
    char *starred_url; // string
    char *subscriptions_url; // string
    char *organizations_url; // string
    char *repos_url; // string
    char *events_url; // string
    char *received_events_url; // string
    char *type; // string
    int site_admin; //boolean

} branch_restriction_policy_users_inner_t;

branch_restriction_policy_users_inner_t *branch_restriction_policy_users_inner_create(
    char *login,
    long id,
    char *node_id,
    char *avatar_url,
    char *gravatar_id,
    char *url,
    char *html_url,
    char *followers_url,
    char *following_url,
    char *gists_url,
    char *starred_url,
    char *subscriptions_url,
    char *organizations_url,
    char *repos_url,
    char *events_url,
    char *received_events_url,
    char *type,
    int site_admin
);

void branch_restriction_policy_users_inner_free(branch_restriction_policy_users_inner_t *branch_restriction_policy_users_inner);

branch_restriction_policy_users_inner_t *branch_restriction_policy_users_inner_parseFromJSON(cJSON *branch_restriction_policy_users_innerJSON);

cJSON *branch_restriction_policy_users_inner_convertToJSON(branch_restriction_policy_users_inner_t *branch_restriction_policy_users_inner);

#endif /* _branch_restriction_policy_users_inner_H_ */

