#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_review_custom_gates_for_run_request.h"


char* stateactions_review_custom_gates_for_run_request_ToString(github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_e state) {
    char* stateArray[] =  { "NULL", "approved", "rejected" };
	return stateArray[state];
}

github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_e stateactions_review_custom_gates_for_run_request_FromString(char* state){
    int stringToReturn = 0;
    char *stateArray[] =  { "NULL", "approved", "rejected" };
    size_t sizeofArray = sizeof(stateArray) / sizeof(stateArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(state, stateArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

actions_review_custom_gates_for_run_request_t *actions_review_custom_gates_for_run_request_create(
    char *environment_name,
    char *comment,
    github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_e state
    ) {
    actions_review_custom_gates_for_run_request_t *actions_review_custom_gates_for_run_request_local_var = malloc(sizeof(actions_review_custom_gates_for_run_request_t));
    if (!actions_review_custom_gates_for_run_request_local_var) {
        return NULL;
    }
    actions_review_custom_gates_for_run_request_local_var->environment_name = environment_name;
    actions_review_custom_gates_for_run_request_local_var->comment = comment;
    actions_review_custom_gates_for_run_request_local_var->state = state;

    return actions_review_custom_gates_for_run_request_local_var;
}


void actions_review_custom_gates_for_run_request_free(actions_review_custom_gates_for_run_request_t *actions_review_custom_gates_for_run_request) {
    if(NULL == actions_review_custom_gates_for_run_request){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_review_custom_gates_for_run_request->environment_name) {
        free(actions_review_custom_gates_for_run_request->environment_name);
        actions_review_custom_gates_for_run_request->environment_name = NULL;
    }
    if (actions_review_custom_gates_for_run_request->comment) {
        free(actions_review_custom_gates_for_run_request->comment);
        actions_review_custom_gates_for_run_request->comment = NULL;
    }
    free(actions_review_custom_gates_for_run_request);
}

cJSON *actions_review_custom_gates_for_run_request_convertToJSON(actions_review_custom_gates_for_run_request_t *actions_review_custom_gates_for_run_request) {
    cJSON *item = cJSON_CreateObject();

    // actions_review_custom_gates_for_run_request->environment_name
    if (!actions_review_custom_gates_for_run_request->environment_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "environment_name", actions_review_custom_gates_for_run_request->environment_name) == NULL) {
    goto fail; //String
    }


    // actions_review_custom_gates_for_run_request->comment
    if (!actions_review_custom_gates_for_run_request->comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "comment", actions_review_custom_gates_for_run_request->comment) == NULL) {
    goto fail; //String
    }


    // actions_review_custom_gates_for_run_request->state
    if (github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_NULL == actions_review_custom_gates_for_run_request->state) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "state", stateactions_review_custom_gates_for_run_request_ToString(actions_review_custom_gates_for_run_request->state)) == NULL)
    {
    goto fail; //Enum
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_review_custom_gates_for_run_request_t *actions_review_custom_gates_for_run_request_parseFromJSON(cJSON *actions_review_custom_gates_for_run_requestJSON){

    actions_review_custom_gates_for_run_request_t *actions_review_custom_gates_for_run_request_local_var = NULL;

    // actions_review_custom_gates_for_run_request->environment_name
    cJSON *environment_name = cJSON_GetObjectItemCaseSensitive(actions_review_custom_gates_for_run_requestJSON, "environment_name");
    if (!environment_name) {
        goto end;
    }

    
    if(!cJSON_IsString(environment_name))
    {
    goto end; //String
    }

    // actions_review_custom_gates_for_run_request->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(actions_review_custom_gates_for_run_requestJSON, "comment");
    if (!comment) {
        goto end;
    }

    
    if(!cJSON_IsString(comment))
    {
    goto end; //String
    }

    // actions_review_custom_gates_for_run_request->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(actions_review_custom_gates_for_run_requestJSON, "state");
    if (!state) {
        goto end;
    }

    github_v3_rest_api_actions_review_custom_gates_for_run_request_STATE_e stateVariable;
    
    if(!cJSON_IsString(state))
    {
    goto end; //Enum
    }
    stateVariable = stateactions_review_custom_gates_for_run_request_FromString(state->valuestring);


    actions_review_custom_gates_for_run_request_local_var = actions_review_custom_gates_for_run_request_create (
        strdup(environment_name->valuestring),
        strdup(comment->valuestring),
        stateVariable
        );

    return actions_review_custom_gates_for_run_request_local_var;
end:
    return NULL;

}
