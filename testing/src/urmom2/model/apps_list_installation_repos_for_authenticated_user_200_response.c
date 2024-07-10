#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apps_list_installation_repos_for_authenticated_user_200_response.h"



apps_list_installation_repos_for_authenticated_user_200_response_t *apps_list_installation_repos_for_authenticated_user_200_response_create(
    int total_count,
    char *repository_selection,
    list_t *repositories
    ) {
    apps_list_installation_repos_for_authenticated_user_200_response_t *apps_list_installation_repos_for_authenticated_user_200_response_local_var = malloc(sizeof(apps_list_installation_repos_for_authenticated_user_200_response_t));
    if (!apps_list_installation_repos_for_authenticated_user_200_response_local_var) {
        return NULL;
    }
    apps_list_installation_repos_for_authenticated_user_200_response_local_var->total_count = total_count;
    apps_list_installation_repos_for_authenticated_user_200_response_local_var->repository_selection = repository_selection;
    apps_list_installation_repos_for_authenticated_user_200_response_local_var->repositories = repositories;

    return apps_list_installation_repos_for_authenticated_user_200_response_local_var;
}


void apps_list_installation_repos_for_authenticated_user_200_response_free(apps_list_installation_repos_for_authenticated_user_200_response_t *apps_list_installation_repos_for_authenticated_user_200_response) {
    if(NULL == apps_list_installation_repos_for_authenticated_user_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (apps_list_installation_repos_for_authenticated_user_200_response->repository_selection) {
        free(apps_list_installation_repos_for_authenticated_user_200_response->repository_selection);
        apps_list_installation_repos_for_authenticated_user_200_response->repository_selection = NULL;
    }
    if (apps_list_installation_repos_for_authenticated_user_200_response->repositories) {
        list_ForEach(listEntry, apps_list_installation_repos_for_authenticated_user_200_response->repositories) {
            repository_free(listEntry->data);
        }
        list_freeList(apps_list_installation_repos_for_authenticated_user_200_response->repositories);
        apps_list_installation_repos_for_authenticated_user_200_response->repositories = NULL;
    }
    free(apps_list_installation_repos_for_authenticated_user_200_response);
}

cJSON *apps_list_installation_repos_for_authenticated_user_200_response_convertToJSON(apps_list_installation_repos_for_authenticated_user_200_response_t *apps_list_installation_repos_for_authenticated_user_200_response) {
    cJSON *item = cJSON_CreateObject();

    // apps_list_installation_repos_for_authenticated_user_200_response->total_count
    if (!apps_list_installation_repos_for_authenticated_user_200_response->total_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_count", apps_list_installation_repos_for_authenticated_user_200_response->total_count) == NULL) {
    goto fail; //Numeric
    }


    // apps_list_installation_repos_for_authenticated_user_200_response->repository_selection
    if(apps_list_installation_repos_for_authenticated_user_200_response->repository_selection) {
    if(cJSON_AddStringToObject(item, "repository_selection", apps_list_installation_repos_for_authenticated_user_200_response->repository_selection) == NULL) {
    goto fail; //String
    }
    }


    // apps_list_installation_repos_for_authenticated_user_200_response->repositories
    if (!apps_list_installation_repos_for_authenticated_user_200_response->repositories) {
        goto fail;
    }
    cJSON *repositories = cJSON_AddArrayToObject(item, "repositories");
    if(repositories == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *repositoriesListEntry;
    if (apps_list_installation_repos_for_authenticated_user_200_response->repositories) {
    list_ForEach(repositoriesListEntry, apps_list_installation_repos_for_authenticated_user_200_response->repositories) {
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

apps_list_installation_repos_for_authenticated_user_200_response_t *apps_list_installation_repos_for_authenticated_user_200_response_parseFromJSON(cJSON *apps_list_installation_repos_for_authenticated_user_200_responseJSON){

    apps_list_installation_repos_for_authenticated_user_200_response_t *apps_list_installation_repos_for_authenticated_user_200_response_local_var = NULL;

    // define the local list for apps_list_installation_repos_for_authenticated_user_200_response->repositories
    list_t *repositoriesList = NULL;

    // apps_list_installation_repos_for_authenticated_user_200_response->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(apps_list_installation_repos_for_authenticated_user_200_responseJSON, "total_count");
    if (!total_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }

    // apps_list_installation_repos_for_authenticated_user_200_response->repository_selection
    cJSON *repository_selection = cJSON_GetObjectItemCaseSensitive(apps_list_installation_repos_for_authenticated_user_200_responseJSON, "repository_selection");
    if (repository_selection) { 
    if(!cJSON_IsString(repository_selection))
    {
    goto end; //String
    }
    }

    // apps_list_installation_repos_for_authenticated_user_200_response->repositories
    cJSON *repositories = cJSON_GetObjectItemCaseSensitive(apps_list_installation_repos_for_authenticated_user_200_responseJSON, "repositories");
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


    apps_list_installation_repos_for_authenticated_user_200_response_local_var = apps_list_installation_repos_for_authenticated_user_200_response_create (
        total_count->valuedouble,
        repository_selection ? strdup(repository_selection->valuestring) : NULL,
        repositoriesList
        );

    return apps_list_installation_repos_for_authenticated_user_200_response_local_var;
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
