/*
 * branch_restriction_policy_teams_inner.h
 *
 * 
 */

#ifndef _branch_restriction_policy_teams_inner_H_
#define _branch_restriction_policy_teams_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_restriction_policy_teams_inner_t branch_restriction_policy_teams_inner_t;




typedef struct branch_restriction_policy_teams_inner_t {
    int id; //numeric
    char *node_id; // string
    char *url; // string
    char *html_url; // string
    char *name; // string
    char *slug; // string
    char *description; // string
    char *privacy; // string
    char *notification_setting; // string
    char *permission; // string
    char *members_url; // string
    char *repositories_url; // string
    char *parent; // string

} branch_restriction_policy_teams_inner_t;

branch_restriction_policy_teams_inner_t *branch_restriction_policy_teams_inner_create(
    int id,
    char *node_id,
    char *url,
    char *html_url,
    char *name,
    char *slug,
    char *description,
    char *privacy,
    char *notification_setting,
    char *permission,
    char *members_url,
    char *repositories_url,
    char *parent
);

void branch_restriction_policy_teams_inner_free(branch_restriction_policy_teams_inner_t *branch_restriction_policy_teams_inner);

branch_restriction_policy_teams_inner_t *branch_restriction_policy_teams_inner_parseFromJSON(cJSON *branch_restriction_policy_teams_innerJSON);

cJSON *branch_restriction_policy_teams_inner_convertToJSON(branch_restriction_policy_teams_inner_t *branch_restriction_policy_teams_inner);

#endif /* _branch_restriction_policy_teams_inner_H_ */

