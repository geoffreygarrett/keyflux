#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activity_mark_repo_notifications_as_read_202_response.h"



activity_mark_repo_notifications_as_read_202_response_t *activity_mark_repo_notifications_as_read_202_response_create(
    char *message,
    char *url
    ) {
    activity_mark_repo_notifications_as_read_202_response_t *activity_mark_repo_notifications_as_read_202_response_local_var = malloc(sizeof(activity_mark_repo_notifications_as_read_202_response_t));
    if (!activity_mark_repo_notifications_as_read_202_response_local_var) {
        return NULL;
    }
    activity_mark_repo_notifications_as_read_202_response_local_var->message = message;
    activity_mark_repo_notifications_as_read_202_response_local_var->url = url;

    return activity_mark_repo_notifications_as_read_202_response_local_var;
}


void activity_mark_repo_notifications_as_read_202_response_free(activity_mark_repo_notifications_as_read_202_response_t *activity_mark_repo_notifications_as_read_202_response) {
    if(NULL == activity_mark_repo_notifications_as_read_202_response){
        return ;
    }
    listEntry_t *listEntry;
    if (activity_mark_repo_notifications_as_read_202_response->message) {
        free(activity_mark_repo_notifications_as_read_202_response->message);
        activity_mark_repo_notifications_as_read_202_response->message = NULL;
    }
    if (activity_mark_repo_notifications_as_read_202_response->url) {
        free(activity_mark_repo_notifications_as_read_202_response->url);
        activity_mark_repo_notifications_as_read_202_response->url = NULL;
    }
    free(activity_mark_repo_notifications_as_read_202_response);
}

cJSON *activity_mark_repo_notifications_as_read_202_response_convertToJSON(activity_mark_repo_notifications_as_read_202_response_t *activity_mark_repo_notifications_as_read_202_response) {
    cJSON *item = cJSON_CreateObject();

    // activity_mark_repo_notifications_as_read_202_response->message
    if(activity_mark_repo_notifications_as_read_202_response->message) {
    if(cJSON_AddStringToObject(item, "message", activity_mark_repo_notifications_as_read_202_response->message) == NULL) {
    goto fail; //String
    }
    }


    // activity_mark_repo_notifications_as_read_202_response->url
    if(activity_mark_repo_notifications_as_read_202_response->url) {
    if(cJSON_AddStringToObject(item, "url", activity_mark_repo_notifications_as_read_202_response->url) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activity_mark_repo_notifications_as_read_202_response_t *activity_mark_repo_notifications_as_read_202_response_parseFromJSON(cJSON *activity_mark_repo_notifications_as_read_202_responseJSON){

    activity_mark_repo_notifications_as_read_202_response_t *activity_mark_repo_notifications_as_read_202_response_local_var = NULL;

    // activity_mark_repo_notifications_as_read_202_response->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(activity_mark_repo_notifications_as_read_202_responseJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // activity_mark_repo_notifications_as_read_202_response->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(activity_mark_repo_notifications_as_read_202_responseJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }


    activity_mark_repo_notifications_as_read_202_response_local_var = activity_mark_repo_notifications_as_read_202_response_create (
        message ? strdup(message->valuestring) : NULL,
        url ? strdup(url->valuestring) : NULL
        );

    return activity_mark_repo_notifications_as_read_202_response_local_var;
end:
    return NULL;

}
