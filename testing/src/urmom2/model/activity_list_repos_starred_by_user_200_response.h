/*
 * activity_list_repos_starred_by_user_200_response.h
 *
 * 
 */

#ifndef _activity_list_repos_starred_by_user_200_response_H_
#define _activity_list_repos_starred_by_user_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_list_repos_starred_by_user_200_response_t activity_list_repos_starred_by_user_200_response_t;

#include "repository.h"
#include "starred_repository.h"



typedef struct activity_list_repos_starred_by_user_200_response_t {

} activity_list_repos_starred_by_user_200_response_t;

activity_list_repos_starred_by_user_200_response_t *activity_list_repos_starred_by_user_200_response_create(
);

void activity_list_repos_starred_by_user_200_response_free(activity_list_repos_starred_by_user_200_response_t *activity_list_repos_starred_by_user_200_response);

activity_list_repos_starred_by_user_200_response_t *activity_list_repos_starred_by_user_200_response_parseFromJSON(cJSON *activity_list_repos_starred_by_user_200_responseJSON);

cJSON *activity_list_repos_starred_by_user_200_response_convertToJSON(activity_list_repos_starred_by_user_200_response_t *activity_list_repos_starred_by_user_200_response);

#endif /* _activity_list_repos_starred_by_user_200_response_H_ */

