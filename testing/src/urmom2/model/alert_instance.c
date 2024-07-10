#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "alert_instance.h"


char* statealert_instance_ToString(github_v3_rest_api_alert_instance_STATE_e state) {
    char* stateArray[] =  { "NULL", "open", "dismissed", "fixed" };
	return stateArray[state];
}

github_v3_rest_api_alert_instance_STATE_e statealert_instance_FromString(char* state){
    int stringToReturn = 0;
    char *stateArray[] =  { "NULL", "open", "dismissed", "fixed" };
    size_t sizeofArray = sizeof(stateArray) / sizeof(stateArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(state, stateArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

alert_instance_t *alert_instance_create(
    char *analysis_key,
    char *category,
    list_t *classifications,
    char *commit_sha,
    char *environment,
    alert_instance_location_t *location,
    code_scanning_alert_instance_message_t *message,
    char *ref,
    github_v3_rest_api_alert_instance_STATE_e state
    ) {
    alert_instance_t *alert_instance_local_var = malloc(sizeof(alert_instance_t));
    if (!alert_instance_local_var) {
        return NULL;
    }
    alert_instance_local_var->analysis_key = analysis_key;
    alert_instance_local_var->category = category;
    alert_instance_local_var->classifications = classifications;
    alert_instance_local_var->commit_sha = commit_sha;
    alert_instance_local_var->environment = environment;
    alert_instance_local_var->location = location;
    alert_instance_local_var->message = message;
    alert_instance_local_var->ref = ref;
    alert_instance_local_var->state = state;

    return alert_instance_local_var;
}


void alert_instance_free(alert_instance_t *alert_instance) {
    if(NULL == alert_instance){
        return ;
    }
    listEntry_t *listEntry;
    if (alert_instance->analysis_key) {
        free(alert_instance->analysis_key);
        alert_instance->analysis_key = NULL;
    }
    if (alert_instance->category) {
        free(alert_instance->category);
        alert_instance->category = NULL;
    }
    if (alert_instance->classifications) {
        list_ForEach(listEntry, alert_instance->classifications) {
            free(listEntry->data);
        }
        list_freeList(alert_instance->classifications);
        alert_instance->classifications = NULL;
    }
    if (alert_instance->commit_sha) {
        free(alert_instance->commit_sha);
        alert_instance->commit_sha = NULL;
    }
    if (alert_instance->environment) {
        free(alert_instance->environment);
        alert_instance->environment = NULL;
    }
    if (alert_instance->location) {
        alert_instance_location_free(alert_instance->location);
        alert_instance->location = NULL;
    }
    if (alert_instance->message) {
        code_scanning_alert_instance_message_free(alert_instance->message);
        alert_instance->message = NULL;
    }
    if (alert_instance->ref) {
        free(alert_instance->ref);
        alert_instance->ref = NULL;
    }
    free(alert_instance);
}

cJSON *alert_instance_convertToJSON(alert_instance_t *alert_instance) {
    cJSON *item = cJSON_CreateObject();

    // alert_instance->analysis_key
    if (!alert_instance->analysis_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "analysis_key", alert_instance->analysis_key) == NULL) {
    goto fail; //String
    }


    // alert_instance->category
    if(alert_instance->category) {
    if(cJSON_AddStringToObject(item, "category", alert_instance->category) == NULL) {
    goto fail; //String
    }
    }


    // alert_instance->classifications
    if(alert_instance->classifications) {
    cJSON *classifications = cJSON_AddArrayToObject(item, "classifications");
    if(classifications == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *classificationsListEntry;
    list_ForEach(classificationsListEntry, alert_instance->classifications) {
    if(cJSON_AddStringToObject(classifications, "", (char*)classificationsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // alert_instance->commit_sha
    if(alert_instance->commit_sha) {
    if(cJSON_AddStringToObject(item, "commit_sha", alert_instance->commit_sha) == NULL) {
    goto fail; //String
    }
    }


    // alert_instance->environment
    if (!alert_instance->environment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "environment", alert_instance->environment) == NULL) {
    goto fail; //String
    }


    // alert_instance->location
    if(alert_instance->location) {
    cJSON *location_local_JSON = alert_instance_location_convertToJSON(alert_instance->location);
    if(location_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "location", location_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // alert_instance->message
    if(alert_instance->message) {
    cJSON *message_local_JSON = code_scanning_alert_instance_message_convertToJSON(alert_instance->message);
    if(message_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "message", message_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // alert_instance->ref
    if (!alert_instance->ref) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ref", alert_instance->ref) == NULL) {
    goto fail; //String
    }


    // alert_instance->state
    if (github_v3_rest_api_alert_instance_STATE_NULL == alert_instance->state) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "state", statealert_instance_ToString(alert_instance->state)) == NULL)
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

alert_instance_t *alert_instance_parseFromJSON(cJSON *alert_instanceJSON){

    alert_instance_t *alert_instance_local_var = NULL;

    // define the local list for alert_instance->classifications
    list_t *classificationsList = NULL;

    // define the local variable for alert_instance->location
    alert_instance_location_t *location_local_nonprim = NULL;

    // define the local variable for alert_instance->message
    code_scanning_alert_instance_message_t *message_local_nonprim = NULL;

    // alert_instance->analysis_key
    cJSON *analysis_key = cJSON_GetObjectItemCaseSensitive(alert_instanceJSON, "analysis_key");
    if (!analysis_key) {
        goto end;
    }

    
    if(!cJSON_IsString(analysis_key))
    {
    goto end; //String
    }

    // alert_instance->category
    cJSON *category = cJSON_GetObjectItemCaseSensitive(alert_instanceJSON, "category");
    if (category) { 
    if(!cJSON_IsString(category))
    {
    goto end; //String
    }
    }

    // alert_instance->classifications
    cJSON *classifications = cJSON_GetObjectItemCaseSensitive(alert_instanceJSON, "classifications");
    if (classifications) { 
    cJSON *classifications_local = NULL;
    if(!cJSON_IsArray(classifications)) {
        goto end;//primitive container
    }
    classificationsList = list_createList();

    cJSON_ArrayForEach(classifications_local, classifications)
    {
        if(!cJSON_IsString(classifications_local))
        {
            goto end;
        }
        list_addElement(classificationsList , strdup(classifications_local->valuestring));
    }
    }

    // alert_instance->commit_sha
    cJSON *commit_sha = cJSON_GetObjectItemCaseSensitive(alert_instanceJSON, "commit_sha");
    if (commit_sha) { 
    if(!cJSON_IsString(commit_sha))
    {
    goto end; //String
    }
    }

    // alert_instance->environment
    cJSON *environment = cJSON_GetObjectItemCaseSensitive(alert_instanceJSON, "environment");
    if (!environment) {
        goto end;
    }

    
    if(!cJSON_IsString(environment))
    {
    goto end; //String
    }

    // alert_instance->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(alert_instanceJSON, "location");
    if (location) { 
    location_local_nonprim = alert_instance_location_parseFromJSON(location); //nonprimitive
    }

    // alert_instance->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(alert_instanceJSON, "message");
    if (message) { 
    message_local_nonprim = code_scanning_alert_instance_message_parseFromJSON(message); //nonprimitive
    }

    // alert_instance->ref
    cJSON *ref = cJSON_GetObjectItemCaseSensitive(alert_instanceJSON, "ref");
    if (!ref) {
        goto end;
    }

    
    if(!cJSON_IsString(ref))
    {
    goto end; //String
    }

    // alert_instance->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(alert_instanceJSON, "state");
    if (!state) {
        goto end;
    }

    github_v3_rest_api_alert_instance_STATE_e stateVariable;
    
    if(!cJSON_IsString(state))
    {
    goto end; //Enum
    }
    stateVariable = statealert_instance_FromString(state->valuestring);


    alert_instance_local_var = alert_instance_create (
        strdup(analysis_key->valuestring),
        category ? strdup(category->valuestring) : NULL,
        classifications ? classificationsList : NULL,
        commit_sha ? strdup(commit_sha->valuestring) : NULL,
        strdup(environment->valuestring),
        location ? location_local_nonprim : NULL,
        message ? message_local_nonprim : NULL,
        strdup(ref->valuestring),
        stateVariable
        );

    return alert_instance_local_var;
end:
    if (classificationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, classificationsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(classificationsList);
        classificationsList = NULL;
    }
    if (location_local_nonprim) {
        alert_instance_location_free(location_local_nonprim);
        location_local_nonprim = NULL;
    }
    if (message_local_nonprim) {
        code_scanning_alert_instance_message_free(message_local_nonprim);
        message_local_nonprim = NULL;
    }
    return NULL;

}
