#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activity.h"


char* activity_typeactivity_ToString(github_v3_rest_api_activity_ACTIVITYTYPE_e activity_type) {
    char* activity_typeArray[] =  { "NULL", "push", "force_push", "branch_deletion", "branch_creation", "pr_merge", "merge_queue_merge" };
	return activity_typeArray[activity_type];
}

github_v3_rest_api_activity_ACTIVITYTYPE_e activity_typeactivity_FromString(char* activity_type){
    int stringToReturn = 0;
    char *activity_typeArray[] =  { "NULL", "push", "force_push", "branch_deletion", "branch_creation", "pr_merge", "merge_queue_merge" };
    size_t sizeofArray = sizeof(activity_typeArray) / sizeof(activity_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(activity_type, activity_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

activity_t *activity_create(
    int id,
    char *node_id,
    char *before,
    char *after,
    char *ref,
    char *timestamp,
    github_v3_rest_api_activity_ACTIVITYTYPE_e activity_type,
    nullable_simple_user_t *actor
    ) {
    activity_t *activity_local_var = malloc(sizeof(activity_t));
    if (!activity_local_var) {
        return NULL;
    }
    activity_local_var->id = id;
    activity_local_var->node_id = node_id;
    activity_local_var->before = before;
    activity_local_var->after = after;
    activity_local_var->ref = ref;
    activity_local_var->timestamp = timestamp;
    activity_local_var->activity_type = activity_type;
    activity_local_var->actor = actor;

    return activity_local_var;
}


void activity_free(activity_t *activity) {
    if(NULL == activity){
        return ;
    }
    listEntry_t *listEntry;
    if (activity->node_id) {
        free(activity->node_id);
        activity->node_id = NULL;
    }
    if (activity->before) {
        free(activity->before);
        activity->before = NULL;
    }
    if (activity->after) {
        free(activity->after);
        activity->after = NULL;
    }
    if (activity->ref) {
        free(activity->ref);
        activity->ref = NULL;
    }
    if (activity->timestamp) {
        free(activity->timestamp);
        activity->timestamp = NULL;
    }
    if (activity->actor) {
        nullable_simple_user_free(activity->actor);
        activity->actor = NULL;
    }
    free(activity);
}

cJSON *activity_convertToJSON(activity_t *activity) {
    cJSON *item = cJSON_CreateObject();

    // activity->id
    if (!activity->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", activity->id) == NULL) {
    goto fail; //Numeric
    }


    // activity->node_id
    if (!activity->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", activity->node_id) == NULL) {
    goto fail; //String
    }


    // activity->before
    if (!activity->before) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "before", activity->before) == NULL) {
    goto fail; //String
    }


    // activity->after
    if (!activity->after) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "after", activity->after) == NULL) {
    goto fail; //String
    }


    // activity->ref
    if (!activity->ref) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ref", activity->ref) == NULL) {
    goto fail; //String
    }


    // activity->timestamp
    if (!activity->timestamp) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "timestamp", activity->timestamp) == NULL) {
    goto fail; //Date-Time
    }


    // activity->activity_type
    if (github_v3_rest_api_activity_ACTIVITYTYPE_NULL == activity->activity_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "activity_type", activity_typeactivity_ToString(activity->activity_type)) == NULL)
    {
    goto fail; //Enum
    }


    // activity->actor
    if (!activity->actor) {
        goto fail;
    }
    cJSON *actor_local_JSON = nullable_simple_user_convertToJSON(activity->actor);
    if(actor_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "actor", actor_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activity_t *activity_parseFromJSON(cJSON *activityJSON){

    activity_t *activity_local_var = NULL;

    // define the local variable for activity->actor
    nullable_simple_user_t *actor_local_nonprim = NULL;

    // activity->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(activityJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // activity->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(activityJSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // activity->before
    cJSON *before = cJSON_GetObjectItemCaseSensitive(activityJSON, "before");
    if (!before) {
        goto end;
    }

    
    if(!cJSON_IsString(before))
    {
    goto end; //String
    }

    // activity->after
    cJSON *after = cJSON_GetObjectItemCaseSensitive(activityJSON, "after");
    if (!after) {
        goto end;
    }

    
    if(!cJSON_IsString(after))
    {
    goto end; //String
    }

    // activity->ref
    cJSON *ref = cJSON_GetObjectItemCaseSensitive(activityJSON, "ref");
    if (!ref) {
        goto end;
    }

    
    if(!cJSON_IsString(ref))
    {
    goto end; //String
    }

    // activity->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(activityJSON, "timestamp");
    if (!timestamp) {
        goto end;
    }

    
    if(!cJSON_IsString(timestamp))
    {
    goto end; //DateTime
    }

    // activity->activity_type
    cJSON *activity_type = cJSON_GetObjectItemCaseSensitive(activityJSON, "activity_type");
    if (!activity_type) {
        goto end;
    }

    github_v3_rest_api_activity_ACTIVITYTYPE_e activity_typeVariable;
    
    if(!cJSON_IsString(activity_type))
    {
    goto end; //Enum
    }
    activity_typeVariable = activity_typeactivity_FromString(activity_type->valuestring);

    // activity->actor
    cJSON *actor = cJSON_GetObjectItemCaseSensitive(activityJSON, "actor");
    if (!actor) {
        goto end;
    }

    
    actor_local_nonprim = nullable_simple_user_parseFromJSON(actor); //nonprimitive


    activity_local_var = activity_create (
        id->valuedouble,
        strdup(node_id->valuestring),
        strdup(before->valuestring),
        strdup(after->valuestring),
        strdup(ref->valuestring),
        strdup(timestamp->valuestring),
        activity_typeVariable,
        actor_local_nonprim
        );

    return activity_local_var;
end:
    if (actor_local_nonprim) {
        nullable_simple_user_free(actor_local_nonprim);
        actor_local_nonprim = NULL;
    }
    return NULL;

}
