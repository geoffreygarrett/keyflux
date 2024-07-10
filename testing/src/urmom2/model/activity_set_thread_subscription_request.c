#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activity_set_thread_subscription_request.h"



activity_set_thread_subscription_request_t *activity_set_thread_subscription_request_create(
    int ignored
    ) {
    activity_set_thread_subscription_request_t *activity_set_thread_subscription_request_local_var = malloc(sizeof(activity_set_thread_subscription_request_t));
    if (!activity_set_thread_subscription_request_local_var) {
        return NULL;
    }
    activity_set_thread_subscription_request_local_var->ignored = ignored;

    return activity_set_thread_subscription_request_local_var;
}


void activity_set_thread_subscription_request_free(activity_set_thread_subscription_request_t *activity_set_thread_subscription_request) {
    if(NULL == activity_set_thread_subscription_request){
        return ;
    }
    listEntry_t *listEntry;
    free(activity_set_thread_subscription_request);
}

cJSON *activity_set_thread_subscription_request_convertToJSON(activity_set_thread_subscription_request_t *activity_set_thread_subscription_request) {
    cJSON *item = cJSON_CreateObject();

    // activity_set_thread_subscription_request->ignored
    if(activity_set_thread_subscription_request->ignored) {
    if(cJSON_AddBoolToObject(item, "ignored", activity_set_thread_subscription_request->ignored) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activity_set_thread_subscription_request_t *activity_set_thread_subscription_request_parseFromJSON(cJSON *activity_set_thread_subscription_requestJSON){

    activity_set_thread_subscription_request_t *activity_set_thread_subscription_request_local_var = NULL;

    // activity_set_thread_subscription_request->ignored
    cJSON *ignored = cJSON_GetObjectItemCaseSensitive(activity_set_thread_subscription_requestJSON, "ignored");
    if (ignored) { 
    if(!cJSON_IsBool(ignored))
    {
    goto end; //Bool
    }
    }


    activity_set_thread_subscription_request_local_var = activity_set_thread_subscription_request_create (
        ignored ? ignored->valueint : 0
        );

    return activity_set_thread_subscription_request_local_var;
end:
    return NULL;

}
