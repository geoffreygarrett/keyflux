#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_set_selected_repos_for_org_secret_request.h"



actions_set_selected_repos_for_org_secret_request_t *actions_set_selected_repos_for_org_secret_request_create(
    list_t *selected_repository_ids
    ) {
    actions_set_selected_repos_for_org_secret_request_t *actions_set_selected_repos_for_org_secret_request_local_var = malloc(sizeof(actions_set_selected_repos_for_org_secret_request_t));
    if (!actions_set_selected_repos_for_org_secret_request_local_var) {
        return NULL;
    }
    actions_set_selected_repos_for_org_secret_request_local_var->selected_repository_ids = selected_repository_ids;

    return actions_set_selected_repos_for_org_secret_request_local_var;
}


void actions_set_selected_repos_for_org_secret_request_free(actions_set_selected_repos_for_org_secret_request_t *actions_set_selected_repos_for_org_secret_request) {
    if(NULL == actions_set_selected_repos_for_org_secret_request){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_set_selected_repos_for_org_secret_request->selected_repository_ids) {
        list_ForEach(listEntry, actions_set_selected_repos_for_org_secret_request->selected_repository_ids) {
            free(listEntry->data);
        }
        list_freeList(actions_set_selected_repos_for_org_secret_request->selected_repository_ids);
        actions_set_selected_repos_for_org_secret_request->selected_repository_ids = NULL;
    }
    free(actions_set_selected_repos_for_org_secret_request);
}

cJSON *actions_set_selected_repos_for_org_secret_request_convertToJSON(actions_set_selected_repos_for_org_secret_request_t *actions_set_selected_repos_for_org_secret_request) {
    cJSON *item = cJSON_CreateObject();

    // actions_set_selected_repos_for_org_secret_request->selected_repository_ids
    if (!actions_set_selected_repos_for_org_secret_request->selected_repository_ids) {
        goto fail;
    }
    cJSON *selected_repository_ids = cJSON_AddArrayToObject(item, "selected_repository_ids");
    if(selected_repository_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *selected_repository_idsListEntry;
    list_ForEach(selected_repository_idsListEntry, actions_set_selected_repos_for_org_secret_request->selected_repository_ids) {
    if(cJSON_AddNumberToObject(selected_repository_ids, "", *(double *)selected_repository_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_set_selected_repos_for_org_secret_request_t *actions_set_selected_repos_for_org_secret_request_parseFromJSON(cJSON *actions_set_selected_repos_for_org_secret_requestJSON){

    actions_set_selected_repos_for_org_secret_request_t *actions_set_selected_repos_for_org_secret_request_local_var = NULL;

    // define the local list for actions_set_selected_repos_for_org_secret_request->selected_repository_ids
    list_t *selected_repository_idsList = NULL;

    // actions_set_selected_repos_for_org_secret_request->selected_repository_ids
    cJSON *selected_repository_ids = cJSON_GetObjectItemCaseSensitive(actions_set_selected_repos_for_org_secret_requestJSON, "selected_repository_ids");
    if (!selected_repository_ids) {
        goto end;
    }

    
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


    actions_set_selected_repos_for_org_secret_request_local_var = actions_set_selected_repos_for_org_secret_request_create (
        selected_repository_idsList
        );

    return actions_set_selected_repos_for_org_secret_request_local_var;
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
