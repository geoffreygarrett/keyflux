#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_list_selected_repositories_enabled_github_actions_organization_200_response.h"



actions_list_selected_repositories_enabled_github_actions_organization_200_response_t *actions_list_selected_repositories_enabled_github_actions_organization_200_response_create(
    double total_count,
    list_t *repositories
    ) {
    actions_list_selected_repositories_enabled_github_actions_organization_200_response_t *actions_list_selected_repositories_enabled_github_actions_organization_200_response_local_var = malloc(sizeof(actions_list_selected_repositories_enabled_github_actions_organization_200_response_t));
    if (!actions_list_selected_repositories_enabled_github_actions_organization_200_response_local_var) {
        return NULL;
    }
    actions_list_selected_repositories_enabled_github_actions_organization_200_response_local_var->total_count = total_count;
    actions_list_selected_repositories_enabled_github_actions_organization_200_response_local_var->repositories = repositories;

    return actions_list_selected_repositories_enabled_github_actions_organization_200_response_local_var;
}


void actions_list_selected_repositories_enabled_github_actions_organization_200_response_free(actions_list_selected_repositories_enabled_github_actions_organization_200_response_t *actions_list_selected_repositories_enabled_github_actions_organization_200_response) {
    if(NULL == actions_list_selected_repositories_enabled_github_actions_organization_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_list_selected_repositories_enabled_github_actions_organization_200_response->repositories) {
        list_ForEach(listEntry, actions_list_selected_repositories_enabled_github_actions_organization_200_response->repositories) {
            repository_free(listEntry->data);
        }
        list_freeList(actions_list_selected_repositories_enabled_github_actions_organization_200_response->repositories);
        actions_list_selected_repositories_enabled_github_actions_organization_200_response->repositories = NULL;
    }
    free(actions_list_selected_repositories_enabled_github_actions_organization_200_response);
}

cJSON *actions_list_selected_repositories_enabled_github_actions_organization_200_response_convertToJSON(actions_list_selected_repositories_enabled_github_actions_organization_200_response_t *actions_list_selected_repositories_enabled_github_actions_organization_200_response) {
    cJSON *item = cJSON_CreateObject();

    // actions_list_selected_repositories_enabled_github_actions_organization_200_response->total_count
    if (!actions_list_selected_repositories_enabled_github_actions_organization_200_response->total_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_count", actions_list_selected_repositories_enabled_github_actions_organization_200_response->total_count) == NULL) {
    goto fail; //Numeric
    }


    // actions_list_selected_repositories_enabled_github_actions_organization_200_response->repositories
    if (!actions_list_selected_repositories_enabled_github_actions_organization_200_response->repositories) {
        goto fail;
    }
    cJSON *repositories = cJSON_AddArrayToObject(item, "repositories");
    if(repositories == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *repositoriesListEntry;
    if (actions_list_selected_repositories_enabled_github_actions_organization_200_response->repositories) {
    list_ForEach(repositoriesListEntry, actions_list_selected_repositories_enabled_github_actions_organization_200_response->repositories) {
    cJSON *itemLocal = repository_convertToJSON(repositoriesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(repositories, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_list_selected_repositories_enabled_github_actions_organization_200_response_t *actions_list_selected_repositories_enabled_github_actions_organization_200_response_parseFromJSON(cJSON *actions_list_selected_repositories_enabled_github_actions_organization_200_responseJSON){

    actions_list_selected_repositories_enabled_github_actions_organization_200_response_t *actions_list_selected_repositories_enabled_github_actions_organization_200_response_local_var = NULL;

    // define the local list for actions_list_selected_repositories_enabled_github_actions_organization_200_response->repositories
    list_t *repositoriesList = NULL;

    // actions_list_selected_repositories_enabled_github_actions_organization_200_response->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(actions_list_selected_repositories_enabled_github_actions_organization_200_responseJSON, "total_count");
    if (!total_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }

    // actions_list_selected_repositories_enabled_github_actions_organization_200_response->repositories
    cJSON *repositories = cJSON_GetObjectItemCaseSensitive(actions_list_selected_repositories_enabled_github_actions_organization_200_responseJSON, "repositories");
    if (!repositories) {
        goto end;
    }

    
    cJSON *repositories_local_nonprimitive = NULL;
    if(!cJSON_IsArray(repositories)){
        goto end; //nonprimitive container
    }

    repositoriesList = list_createList();

    cJSON_ArrayForEach(repositories_local_nonprimitive,repositories )
    {
        if(!cJSON_IsObject(repositories_local_nonprimitive)){
            goto end;
        }
        repository_t *repositoriesItem = repository_parseFromJSON(repositories_local_nonprimitive);

        list_addElement(repositoriesList, repositoriesItem);
    }


    actions_list_selected_repositories_enabled_github_actions_organization_200_response_local_var = actions_list_selected_repositories_enabled_github_actions_organization_200_response_create (
        total_count->valuedouble,
        repositoriesList
        );

    return actions_list_selected_repositories_enabled_github_actions_organization_200_response_local_var;
end:
    if (repositoriesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, repositoriesList) {
            repository_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(repositoriesList);
        repositoriesList = NULL;
    }
    return NULL;

}
