#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activity_mark_repo_notifications_as_read_request.h"



activity_mark_repo_notifications_as_read_request_t *activity_mark_repo_notifications_as_read_request_create(
    char *last_read_at
    ) {
    activity_mark_repo_notifications_as_read_request_t *activity_mark_repo_notifications_as_read_request_local_var = malloc(sizeof(activity_mark_repo_notifications_as_read_request_t));
    if (!activity_mark_repo_notifications_as_read_request_local_var) {
        return NULL;
    }
    activity_mark_repo_notifications_as_read_request_local_var->last_read_at = last_read_at;

    return activity_mark_repo_notifications_as_read_request_local_var;
}


void activity_mark_repo_notifications_as_read_request_free(activity_mark_repo_notifications_as_read_request_t *activity_mark_repo_notifications_as_read_request) {
    if(NULL == activity_mark_repo_notifications_as_read_request){
        return ;
    }
    listEntry_t *listEntry;
    if (activity_mark_repo_notifications_as_read_request->last_read_at) {
        free(activity_mark_repo_notifications_as_read_request->last_read_at);
        activity_mark_repo_notifications_as_read_request->last_read_at = NULL;
    }
    free(activity_mark_repo_notifications_as_read_request);
}

cJSON *activity_mark_repo_notifications_as_read_request_convertToJSON(activity_mark_repo_notifications_as_read_request_t *activity_mark_repo_notifications_as_read_request) {
    cJSON *item = cJSON_CreateObject();

    // activity_mark_repo_notifications_as_read_request->last_read_at
    if(activity_mark_repo_notifications_as_read_request->last_read_at) {
    if(cJSON_AddStringToObject(item, "last_read_at", activity_mark_repo_notifications_as_read_request->last_read_at) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activity_mark_repo_notifications_as_read_request_t *activity_mark_repo_notifications_as_read_request_parseFromJSON(cJSON *activity_mark_repo_notifications_as_read_requestJSON){

    activity_mark_repo_notifications_as_read_request_t *activity_mark_repo_notifications_as_read_request_local_var = NULL;

    // activity_mark_repo_notifications_as_read_request->last_read_at
    cJSON *last_read_at = cJSON_GetObjectItemCaseSensitive(activity_mark_repo_notifications_as_read_requestJSON, "last_read_at");
    if (last_read_at) { 
    if(!cJSON_IsString(last_read_at))
    {
    goto end; //DateTime
    }
    }


    activity_mark_repo_notifications_as_read_request_local_var = activity_mark_repo_notifications_as_read_request_create (
        last_read_at ? strdup(last_read_at->valuestring) : NULL
        );

    return activity_mark_repo_notifications_as_read_request_local_var;
end:
    return NULL;

}
