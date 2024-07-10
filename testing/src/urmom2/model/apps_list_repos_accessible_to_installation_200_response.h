/*
 * apps_list_repos_accessible_to_installation_200_response.h
 *
 * 
 */

#ifndef _apps_list_repos_accessible_to_installation_200_response_H_
#define _apps_list_repos_accessible_to_installation_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apps_list_repos_accessible_to_installation_200_response_t apps_list_repos_accessible_to_installation_200_response_t;

#include "repository.h"



typedef struct apps_list_repos_accessible_to_installation_200_response_t {
    int total_count; //numeric
    list_t *repositories; //nonprimitive container
    char *repository_selection; // string

} apps_list_repos_accessible_to_installation_200_response_t;

apps_list_repos_accessible_to_installation_200_response_t *apps_list_repos_accessible_to_installation_200_response_create(
    int total_count,
    list_t *repositories,
    char *repository_selection
);

void apps_list_repos_accessible_to_installation_200_response_free(apps_list_repos_accessible_to_installation_200_response_t *apps_list_repos_accessible_to_installation_200_response);

apps_list_repos_accessible_to_installation_200_response_t *apps_list_repos_accessible_to_installation_200_response_parseFromJSON(cJSON *apps_list_repos_accessible_to_installation_200_responseJSON);

cJSON *apps_list_repos_accessible_to_installation_200_response_convertToJSON(apps_list_repos_accessible_to_installation_200_response_t *apps_list_repos_accessible_to_installation_200_response);

#endif /* _apps_list_repos_accessible_to_installation_200_response_H_ */

