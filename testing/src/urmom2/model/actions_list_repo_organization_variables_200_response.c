#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_list_repo_organization_variables_200_response.h"



actions_list_repo_organization_variables_200_response_t *actions_list_repo_organization_variables_200_response_create(
    int total_count,
    list_t *variables
    ) {
    actions_list_repo_organization_variables_200_response_t *actions_list_repo_organization_variables_200_response_local_var = malloc(sizeof(actions_list_repo_organization_variables_200_response_t));
    if (!actions_list_repo_organization_variables_200_response_local_var) {
        return NULL;
    }
    actions_list_repo_organization_variables_200_response_local_var->total_count = total_count;
    actions_list_repo_organization_variables_200_response_local_var->variables = variables;

    return actions_list_repo_organization_variables_200_response_local_var;
}


void actions_list_repo_organization_variables_200_response_free(actions_list_repo_organization_variables_200_response_t *actions_list_repo_organization_variables_200_response) {
    if(NULL == actions_list_repo_organization_variables_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_list_repo_organization_variables_200_response->variables) {
        list_ForEach(listEntry, actions_list_repo_organization_variables_200_response->variables) {
            actions_variable_free(listEntry->data);
        }
        list_freeList(actions_list_repo_organization_variables_200_response->variables);
        actions_list_repo_organization_variables_200_response->variables = NULL;
    }
    free(actions_list_repo_organization_variables_200_response);
}

cJSON *actions_list_repo_organization_variables_200_response_convertToJSON(actions_list_repo_organization_variables_200_response_t *actions_list_repo_organization_variables_200_response) {
    cJSON *item = cJSON_CreateObject();

    // actions_list_repo_organization_variables_200_response->total_count
    if (!actions_list_repo_organization_variables_200_response->total_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_count", actions_list_repo_organization_variables_200_response->total_count) == NULL) {
    goto fail; //Numeric
    }


    // actions_list_repo_organization_variables_200_response->variables
    if (!actions_list_repo_organization_variables_200_response->variables) {
        goto fail;
    }
    cJSON *variables = cJSON_AddArrayToObject(item, "variables");
    if(variables == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *variablesListEntry;
    if (actions_list_repo_organization_variables_200_response->variables) {
    list_ForEach(variablesListEntry, actions_list_repo_organization_variables_200_response->variables) {
    cJSON *itemLocal = actions_variable_convertToJSON(variablesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(variables, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_list_repo_organization_variables_200_response_t *actions_list_repo_organization_variables_200_response_parseFromJSON(cJSON *actions_list_repo_organization_variables_200_responseJSON){

    actions_list_repo_organization_variables_200_response_t *actions_list_repo_organization_variables_200_response_local_var = NULL;

    // define the local list for actions_list_repo_organization_variables_200_response->variables
    list_t *variablesList = NULL;

    // actions_list_repo_organization_variables_200_response->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(actions_list_repo_organization_variables_200_responseJSON, "total_count");
    if (!total_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }

    // actions_list_repo_organization_variables_200_response->variables
    cJSON *variables = cJSON_GetObjectItemCaseSensitive(actions_list_repo_organization_variables_200_responseJSON, "variables");
    if (!variables) {
        goto end;
    }

    
    cJSON *variables_local_nonprimitive = NULL;
    if(!cJSON_IsArray(variables)){
        goto end; //nonprimitive container
    }

    variablesList = list_createList();

    cJSON_ArrayForEach(variables_local_nonprimitive,variables )
    {
        if(!cJSON_IsObject(variables_local_nonprimitive)){
            goto end;
        }
        actions_variable_t *variablesItem = actions_variable_parseFromJSON(variables_local_nonprimitive);

        list_addElement(variablesList, variablesItem);
    }


    actions_list_repo_organization_variables_200_response_local_var = actions_list_repo_organization_variables_200_response_create (
        total_count->valuedouble,
        variablesList
        );

    return actions_list_repo_organization_variables_200_response_local_var;
end:
    if (variablesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, variablesList) {
            actions_variable_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(variablesList);
        variablesList = NULL;
    }
    return NULL;

}
