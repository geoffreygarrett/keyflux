#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apps_create_installation_access_token_request.h"



apps_create_installation_access_token_request_t *apps_create_installation_access_token_request_create(
    list_t *repositories,
    list_t *repository_ids,
    app_permissions_t *permissions
    ) {
    apps_create_installation_access_token_request_t *apps_create_installation_access_token_request_local_var = malloc(sizeof(apps_create_installation_access_token_request_t));
    if (!apps_create_installation_access_token_request_local_var) {
        return NULL;
    }
    apps_create_installation_access_token_request_local_var->repositories = repositories;
    apps_create_installation_access_token_request_local_var->repository_ids = repository_ids;
    apps_create_installation_access_token_request_local_var->permissions = permissions;

    return apps_create_installation_access_token_request_local_var;
}


void apps_create_installation_access_token_request_free(apps_create_installation_access_token_request_t *apps_create_installation_access_token_request) {
    if(NULL == apps_create_installation_access_token_request){
        return ;
    }
    listEntry_t *listEntry;
    if (apps_create_installation_access_token_request->repositories) {
        list_ForEach(listEntry, apps_create_installation_access_token_request->repositories) {
            free(listEntry->data);
        }
        list_freeList(apps_create_installation_access_token_request->repositories);
        apps_create_installation_access_token_request->repositories = NULL;
    }
    if (apps_create_installation_access_token_request->repository_ids) {
        list_ForEach(listEntry, apps_create_installation_access_token_request->repository_ids) {
            free(listEntry->data);
        }
        list_freeList(apps_create_installation_access_token_request->repository_ids);
        apps_create_installation_access_token_request->repository_ids = NULL;
    }
    if (apps_create_installation_access_token_request->permissions) {
        app_permissions_free(apps_create_installation_access_token_request->permissions);
        apps_create_installation_access_token_request->permissions = NULL;
    }
    free(apps_create_installation_access_token_request);
}

cJSON *apps_create_installation_access_token_request_convertToJSON(apps_create_installation_access_token_request_t *apps_create_installation_access_token_request) {
    cJSON *item = cJSON_CreateObject();

    // apps_create_installation_access_token_request->repositories
    if(apps_create_installation_access_token_request->repositories) {
    cJSON *repositories = cJSON_AddArrayToObject(item, "repositories");
    if(repositories == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *repositoriesListEntry;
    list_ForEach(repositoriesListEntry, apps_create_installation_access_token_request->repositories) {
    if(cJSON_AddStringToObject(repositories, "", (char*)repositoriesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // apps_create_installation_access_token_request->repository_ids
    if(apps_create_installation_access_token_request->repository_ids) {
    cJSON *repository_ids = cJSON_AddArrayToObject(item, "repository_ids");
    if(repository_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *repository_idsListEntry;
    list_ForEach(repository_idsListEntry, apps_create_installation_access_token_request->repository_ids) {
    if(cJSON_AddNumberToObject(repository_ids, "", *(double *)repository_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // apps_create_installation_access_token_request->permissions
    if(apps_create_installation_access_token_request->permissions) {
    cJSON *permissions_local_JSON = app_permissions_convertToJSON(apps_create_installation_access_token_request->permissions);
    if(permissions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "permissions", permissions_local_JSON);
    if(item->child == NULL) {
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

apps_create_installation_access_token_request_t *apps_create_installation_access_token_request_parseFromJSON(cJSON *apps_create_installation_access_token_requestJSON){

    apps_create_installation_access_token_request_t *apps_create_installation_access_token_request_local_var = NULL;

    // define the local list for apps_create_installation_access_token_request->repositories
    list_t *repositoriesList = NULL;

    // define the local list for apps_create_installation_access_token_request->repository_ids
    list_t *repository_idsList = NULL;

    // define the local variable for apps_create_installation_access_token_request->permissions
    app_permissions_t *permissions_local_nonprim = NULL;

    // apps_create_installation_access_token_request->repositories
    cJSON *repositories = cJSON_GetObjectItemCaseSensitive(apps_create_installation_access_token_requestJSON, "repositories");
    if (repositories) { 
    cJSON *repositories_local = NULL;
    if(!cJSON_IsArray(repositories)) {
        goto end;//primitive container
    }
    repositoriesList = list_createList();

    cJSON_ArrayForEach(repositories_local, repositories)
    {
        if(!cJSON_IsString(repositories_local))
        {
            goto end;
        }
        list_addElement(repositoriesList , strdup(repositories_local->valuestring));
    }
    }

    // apps_create_installation_access_token_request->repository_ids
    cJSON *repository_ids = cJSON_GetObjectItemCaseSensitive(apps_create_installation_access_token_requestJSON, "repository_ids");
    if (repository_ids) { 
    cJSON *repository_ids_local = NULL;
    if(!cJSON_IsArray(repository_ids)) {
        goto end;//primitive container
    }
    repository_idsList = list_createList();

    cJSON_ArrayForEach(repository_ids_local, repository_ids)
    {
        if(!cJSON_IsNumber(repository_ids_local))
        {
            goto end;
        }
        double *repository_ids_local_value = (double *)calloc(1, sizeof(double));
        if(!repository_ids_local_value)
        {
            goto end;
        }
        *repository_ids_local_value = repository_ids_local->valuedouble;
        list_addElement(repository_idsList , repository_ids_local_value);
    }
    }

    // apps_create_installation_access_token_request->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(apps_create_installation_access_token_requestJSON, "permissions");
    if (permissions) { 
    permissions_local_nonprim = app_permissions_parseFromJSON(permissions); //nonprimitive
    }


    apps_create_installation_access_token_request_local_var = apps_create_installation_access_token_request_create (
        repositories ? repositoriesList : NULL,
        repository_ids ? repository_idsList : NULL,
        permissions ? permissions_local_nonprim : NULL
        );

    return apps_create_installation_access_token_request_local_var;
end:
    if (repositoriesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, repositoriesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(repositoriesList);
        repositoriesList = NULL;
    }
    if (repository_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, repository_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(repository_idsList);
        repository_idsList = NULL;
    }
    if (permissions_local_nonprim) {
        app_permissions_free(permissions_local_nonprim);
        permissions_local_nonprim = NULL;
    }
    return NULL;

}
