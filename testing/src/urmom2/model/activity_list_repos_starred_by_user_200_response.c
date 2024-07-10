#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activity_list_repos_starred_by_user_200_response.h"



activity_list_repos_starred_by_user_200_response_t *activity_list_repos_starred_by_user_200_response_create(
    ) {
    activity_list_repos_starred_by_user_200_response_t *activity_list_repos_starred_by_user_200_response_local_var = malloc(sizeof(activity_list_repos_starred_by_user_200_response_t));
    if (!activity_list_repos_starred_by_user_200_response_local_var) {
        return NULL;
    }

    return activity_list_repos_starred_by_user_200_response_local_var;
}


void activity_list_repos_starred_by_user_200_response_free(activity_list_repos_starred_by_user_200_response_t *activity_list_repos_starred_by_user_200_response) {
    if(NULL == activity_list_repos_starred_by_user_200_response){
        return ;
    }
    listEntry_t *listEntry;
    free(activity_list_repos_starred_by_user_200_response);
}

cJSON *activity_list_repos_starred_by_user_200_response_convertToJSON(activity_list_repos_starred_by_user_200_response_t *activity_list_repos_starred_by_user_200_response) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activity_list_repos_starred_by_user_200_response_t *activity_list_repos_starred_by_user_200_response_parseFromJSON(cJSON *activity_list_repos_starred_by_user_200_responseJSON){

    activity_list_repos_starred_by_user_200_response_t *activity_list_repos_starred_by_user_200_response_local_var = NULL;


    activity_list_repos_starred_by_user_200_response_local_var = activity_list_repos_starred_by_user_200_response_create (
        );

    return activity_list_repos_starred_by_user_200_response_local_var;
end:
    return NULL;

}
