/*
 * actions_set_selected_repos_for_org_secret_request.h
 *
 * 
 */

#ifndef _actions_set_selected_repos_for_org_secret_request_H_
#define _actions_set_selected_repos_for_org_secret_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_set_selected_repos_for_org_secret_request_t actions_set_selected_repos_for_org_secret_request_t;




typedef struct actions_set_selected_repos_for_org_secret_request_t {
    list_t *selected_repository_ids; //primitive container

} actions_set_selected_repos_for_org_secret_request_t;

actions_set_selected_repos_for_org_secret_request_t *actions_set_selected_repos_for_org_secret_request_create(
    list_t *selected_repository_ids
);

void actions_set_selected_repos_for_org_secret_request_free(actions_set_selected_repos_for_org_secret_request_t *actions_set_selected_repos_for_org_secret_request);

actions_set_selected_repos_for_org_secret_request_t *actions_set_selected_repos_for_org_secret_request_parseFromJSON(cJSON *actions_set_selected_repos_for_org_secret_requestJSON);

cJSON *actions_set_selected_repos_for_org_secret_request_convertToJSON(actions_set_selected_repos_for_org_secret_request_t *actions_set_selected_repos_for_org_secret_request);

#endif /* _actions_set_selected_repos_for_org_secret_request_H_ */

