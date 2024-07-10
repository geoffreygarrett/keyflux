#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_review_pending_deployments_for_run_request.h"


char* stateactions_review_pending_deployments_for_run_request_ToString(github_v3_rest_api_actions_review_pending_deployments_for_run_request_STATE_e state) {
    char* stateArray[] =  { "NULL", "approved", "rejected" };
	return stateArray[state];
}

github_v3_rest_api_actions_review_pending_deployments_for_run_request_STATE_e stateactions_review_pending_deployments_for_run_request_FromString(char* state){
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

actions_review_pending_deployments_for_run_request_t *actions_review_pending_deployments_for_run_request_create(
    list_t *environment_ids,
    github_v3_rest_api_actions_review_pending_deployments_for_run_request_STATE_e state,
    char *comment
    ) {
    actions_review_pending_deployments_for_run_request_t *actions_review_pending_deployments_for_run_request_local_var = malloc(sizeof(actions_review_pending_deployments_for_run_request_t));
    if (!actions_review_pending_deployments_for_run_request_local_var) {
        return NULL;
    }
    actions_review_pending_deployments_for_run_request_local_var->environment_ids = environment_ids;
    actions_review_pending_deployments_for_run_request_local_var->state = state;
    actions_review_pending_deployments_for_run_request_local_var->comment = comment;

    return actions_review_pending_deployments_for_run_request_local_var;
}


void actions_review_pending_deployments_for_run_request_free(actions_review_pending_deployments_for_run_request_t *actions_review_pending_deployments_for_run_request) {
    if(NULL == actions_review_pending_deployments_for_run_request){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_review_pending_deployments_for_run_request->environment_ids) {
        list_ForEach(listEntry, actions_review_pending_deployments_for_run_request->environment_ids) {
            free(listEntry->data);
        }
        list_freeList(actions_review_pending_deployments_for_run_request->environment_ids);
        actions_review_pending_deployments_for_run_request->environment_ids = NULL;
    }
    if (actions_review_pending_deployments_for_run_request->comment) {
        free(actions_review_pending_deployments_for_run_request->comment);
        actions_review_pending_deployments_for_run_request->comment = NULL;
    }
    free(actions_review_pending_deployments_for_run_request);
}

cJSON *actions_review_pending_deployments_for_run_request_convertToJSON(actions_review_pending_deployments_for_run_request_t *actions_review_pending_deployments_for_run_request) {
    cJSON *item = cJSON_CreateObject();

    // actions_review_pending_deployments_for_run_request->environment_ids
    if (!actions_review_pending_deployments_for_run_request->environment_ids) {
        goto fail;
    }
    cJSON *environment_ids = cJSON_AddArrayToObject(item, "environment_ids");
    if(environment_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *environment_idsListEntry;
    list_ForEach(environment_idsListEntry, actions_review_pending_deployments_for_run_request->environment_ids) {
    if(cJSON_AddNumberToObject(environment_ids, "", *(double *)environment_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // actions_review_pending_deployments_for_run_request->state
    if (github_v3_rest_api_actions_review_pending_deployments_for_run_request_STATE_NULL == actions_review_pending_deployments_for_run_request->state) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "state", stateactions_review_pending_deployments_for_run_request_ToString(actions_review_pending_deployments_for_run_request->state)) == NULL)
    {
    goto fail; //Enum
    }


    // actions_review_pending_deployments_for_run_request->comment
    if (!actions_review_pending_deployments_for_run_request->comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "comment", actions_review_pending_deployments_for_run_request->comment) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_review_pending_deployments_for_run_request_t *actions_review_pending_deployments_for_run_request_parseFromJSON(cJSON *actions_review_pending_deployments_for_run_requestJSON){

    actions_review_pending_deployments_for_run_request_t *actions_review_pending_deployments_for_run_request_local_var = NULL;

    // define the local list for actions_review_pending_deployments_for_run_request->environment_ids
    list_t *environment_idsList = NULL;

    // actions_review_pending_deployments_for_run_request->environment_ids
    cJSON *environment_ids = cJSON_GetObjectItemCaseSensitive(actions_review_pending_deployments_for_run_requestJSON, "environment_ids");
    if (!environment_ids) {
        goto end;
    }

    
    cJSON *environment_ids_local = NULL;
    if(!cJSON_IsArray(environment_ids)) {
        goto end;//primitive container
    }
    environment_idsList = list_createList();

    cJSON_ArrayForEach(environment_ids_local, environment_ids)
    {
        if(!cJSON_IsNumber(environment_ids_local))
        {
            goto end;
        }
        double *environment_ids_local_value = (double *)calloc(1, sizeof(double));
        if(!environment_ids_local_value)
        {
            goto end;
        }
        *environment_ids_local_value = environment_ids_local->valuedouble;
        list_addElement(environment_idsList , environment_ids_local_value);
    }

    // actions_review_pending_deployments_for_run_request->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(actions_review_pending_deployments_for_run_requestJSON, "state");
    if (!state) {
        goto end;
    }

    github_v3_rest_api_actions_review_pending_deployments_for_run_request_STATE_e stateVariable;
    
    if(!cJSON_IsString(state))
    {
    goto end; //Enum
    }
    stateVariable = stateactions_review_pending_deployments_for_run_request_FromString(state->valuestring);

    // actions_review_pending_deployments_for_run_request->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(actions_review_pending_deployments_for_run_requestJSON, "comment");
    if (!comment) {
        goto end;
    }

    
    if(!cJSON_IsString(comment))
    {
    goto end; //String
    }


    actions_review_pending_deployments_for_run_request_local_var = actions_review_pending_deployments_for_run_request_create (
        environment_idsList,
        stateVariable,
        strdup(comment->valuestring)
        );

    return actions_review_pending_deployments_for_run_request_local_var;
end:
    if (environment_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, environment_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(environment_idsList);
        environment_idsList = NULL;
    }
    return NULL;

}
