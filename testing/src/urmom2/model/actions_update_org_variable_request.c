#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_update_org_variable_request.h"


char* visibilityactions_update_org_variable_request_ToString(github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_e visibility) {
    char* visibilityArray[] =  { "NULL", "all", "private", "selected" };
	return visibilityArray[visibility];
}

github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_e visibilityactions_update_org_variable_request_FromString(char* visibility){
    int stringToReturn = 0;
    char *visibilityArray[] =  { "NULL", "all", "private", "selected" };
    size_t sizeofArray = sizeof(visibilityArray) / sizeof(visibilityArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(visibility, visibilityArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

actions_update_org_variable_request_t *actions_update_org_variable_request_create(
    char *name,
    char *value,
    github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_e visibility,
    list_t *selected_repository_ids
    ) {
    actions_update_org_variable_request_t *actions_update_org_variable_request_local_var = malloc(sizeof(actions_update_org_variable_request_t));
    if (!actions_update_org_variable_request_local_var) {
        return NULL;
    }
    actions_update_org_variable_request_local_var->name = name;
    actions_update_org_variable_request_local_var->value = value;
    actions_update_org_variable_request_local_var->visibility = visibility;
    actions_update_org_variable_request_local_var->selected_repository_ids = selected_repository_ids;

    return actions_update_org_variable_request_local_var;
}


void actions_update_org_variable_request_free(actions_update_org_variable_request_t *actions_update_org_variable_request) {
    if(NULL == actions_update_org_variable_request){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_update_org_variable_request->name) {
        free(actions_update_org_variable_request->name);
        actions_update_org_variable_request->name = NULL;
    }
    if (actions_update_org_variable_request->value) {
        free(actions_update_org_variable_request->value);
        actions_update_org_variable_request->value = NULL;
    }
    if (actions_update_org_variable_request->selected_repository_ids) {
        list_ForEach(listEntry, actions_update_org_variable_request->selected_repository_ids) {
            free(listEntry->data);
        }
        list_freeList(actions_update_org_variable_request->selected_repository_ids);
        actions_update_org_variable_request->selected_repository_ids = NULL;
    }
    free(actions_update_org_variable_request);
}

cJSON *actions_update_org_variable_request_convertToJSON(actions_update_org_variable_request_t *actions_update_org_variable_request) {
    cJSON *item = cJSON_CreateObject();

    // actions_update_org_variable_request->name
    if(actions_update_org_variable_request->name) {
    if(cJSON_AddStringToObject(item, "name", actions_update_org_variable_request->name) == NULL) {
    goto fail; //String
    }
    }


    // actions_update_org_variable_request->value
    if(actions_update_org_variable_request->value) {
    if(cJSON_AddStringToObject(item, "value", actions_update_org_variable_request->value) == NULL) {
    goto fail; //String
    }
    }


    // actions_update_org_variable_request->visibility
    if(actions_update_org_variable_request->visibility != github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_NULL) {
    if(cJSON_AddStringToObject(item, "visibility", visibilityactions_update_org_variable_request_ToString(actions_update_org_variable_request->visibility)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // actions_update_org_variable_request->selected_repository_ids
    if(actions_update_org_variable_request->selected_repository_ids) {
    cJSON *selected_repository_ids = cJSON_AddArrayToObject(item, "selected_repository_ids");
    if(selected_repository_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_repository_idsListEntry;
    list_ForEach(selected_repository_idsListEntry, actions_update_org_variable_request->selected_repository_ids) {
    if(cJSON_AddNumberToObject(selected_repository_ids, "", *(double *)selected_repository_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_update_org_variable_request_t *actions_update_org_variable_request_parseFromJSON(cJSON *actions_update_org_variable_requestJSON){

    actions_update_org_variable_request_t *actions_update_org_variable_request_local_var = NULL;

    // define the local list for actions_update_org_variable_request->selected_repository_ids
    list_t *selected_repository_idsList = NULL;

    // actions_update_org_variable_request->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(actions_update_org_variable_requestJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // actions_update_org_variable_request->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(actions_update_org_variable_requestJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }

    // actions_update_org_variable_request->visibility
    cJSON *visibility = cJSON_GetObjectItemCaseSensitive(actions_update_org_variable_requestJSON, "visibility");
    github_v3_rest_api_actions_update_org_variable_request_VISIBILITY_e visibilityVariable;
    if (visibility) { 
    if(!cJSON_IsString(visibility))
    {
    goto end; //Enum
    }
    visibilityVariable = visibilityactions_update_org_variable_request_FromString(visibility->valuestring);
    }

    // actions_update_org_variable_request->selected_repository_ids
    cJSON *selected_repository_ids = cJSON_GetObjectItemCaseSensitive(actions_update_org_variable_requestJSON, "selected_repository_ids");
    if (selected_repository_ids) { 
    cJSON *selected_repository_ids_local = NULL;
    if(!cJSON_IsArray(selected_repository_ids)) {
        goto end;//primitive container
    }
    selected_repository_idsList = list_createList();

    cJSON_ArrayForEach(selected_repository_ids_local, selected_repository_ids)
    {
        if(!cJSON_IsNumber(selected_repository_ids_local))
        {
            goto end;
        }
        double *selected_repository_ids_local_value = (double *)calloc(1, sizeof(double));
        if(!selected_repository_ids_local_value)
        {
            goto end;
        }
        *selected_repository_ids_local_value = selected_repository_ids_local->valuedouble;
        list_addElement(selected_repository_idsList , selected_repository_ids_local_value);
    }
    }


    actions_update_org_variable_request_local_var = actions_update_org_variable_request_create (
        name ? strdup(name->valuestring) : NULL,
        value ? strdup(value->valuestring) : NULL,
        visibility ? visibilityVariable : -1,
        selected_repository_ids ? selected_repository_idsList : NULL
        );

    return actions_update_org_variable_request_local_var;
end:
    if (selected_repository_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_repository_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_repository_idsList);
        selected_repository_idsList = NULL;
    }
    return NULL;

}
