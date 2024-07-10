#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apps_scope_token_request.h"



apps_scope_token_request_t *apps_scope_token_request_create(
    char *access_token,
    char *target,
    int target_id,
    list_t *repositories,
    list_t *repository_ids,
    app_permissions_t *permissions
    ) {
    apps_scope_token_request_t *apps_scope_token_request_local_var = malloc(sizeof(apps_scope_token_request_t));
    if (!apps_scope_token_request_local_var) {
        return NULL;
    }
    apps_scope_token_request_local_var->access_token = access_token;
    apps_scope_token_request_local_var->target = target;
    apps_scope_token_request_local_var->target_id = target_id;
    apps_scope_token_request_local_var->repositories = repositories;
    apps_scope_token_request_local_var->repository_ids = repository_ids;
    apps_scope_token_request_local_var->permissions = permissions;

    return apps_scope_token_request_local_var;
}


void apps_scope_token_request_free(apps_scope_token_request_t *apps_scope_token_request) {
    if(NULL == apps_scope_token_request){
        return ;
    }
    listEntry_t *listEntry;
    if (apps_scope_token_request->access_token) {
        free(apps_scope_token_request->access_token);
        apps_scope_token_request->access_token = NULL;
    }
    if (apps_scope_token_request->target) {
        free(apps_scope_token_request->target);
        apps_scope_token_request->target = NULL;
    }
    if (apps_scope_token_request->repositories) {
        list_ForEach(listEntry, apps_scope_token_request->repositories) {
            free(listEntry->data);
        }
        list_freeList(apps_scope_token_request->repositories);
        apps_scope_token_request->repositories = NULL;
    }
    if (apps_scope_token_request->repository_ids) {
        list_ForEach(listEntry, apps_scope_token_request->repository_ids) {
            free(listEntry->data);
        }
        list_freeList(apps_scope_token_request->repository_ids);
        apps_scope_token_request->repository_ids = NULL;
    }
    if (apps_scope_token_request->permissions) {
        app_permissions_free(apps_scope_token_request->permissions);
        apps_scope_token_request->permissions = NULL;
    }
    free(apps_scope_token_request);
}

cJSON *apps_scope_token_request_convertToJSON(apps_scope_token_request_t *apps_scope_token_request) {
    cJSON *item = cJSON_CreateObject();

    // apps_scope_token_request->access_token
    if (!apps_scope_token_request->access_token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "access_token", apps_scope_token_request->access_token) == NULL) {
    goto fail; //String
    }


    // apps_scope_token_request->target
    if(apps_scope_token_request->target) {
    if(cJSON_AddStringToObject(item, "target", apps_scope_token_request->target) == NULL) {
    goto fail; //String
    }
    }


    // apps_scope_token_request->target_id
    if(apps_scope_token_request->target_id) {
    if(cJSON_AddNumberToObject(item, "target_id", apps_scope_token_request->target_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // apps_scope_token_request->repositories
    if(apps_scope_token_request->repositories) {
    cJSON *repositories = cJSON_AddArrayToObject(item, "repositories");
    if(repositories == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *repositoriesListEntry;
    list_ForEach(repositoriesListEntry, apps_scope_token_request->repositories) {
    if(cJSON_AddStringToObject(repositories, "", (char*)repositoriesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // apps_scope_token_request->repository_ids
    if(apps_scope_token_request->repository_ids) {
    cJSON *repository_ids = cJSON_AddArrayToObject(item, "repository_ids");
    if(repository_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *repository_idsListEntry;
    list_ForEach(repository_idsListEntry, apps_scope_token_request->repository_ids) {
    if(cJSON_AddNumberToObject(repository_ids, "", *(double *)repository_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // apps_scope_token_request->permissions
    if(apps_scope_token_request->permissions) {
    cJSON *permissions_local_JSON = app_permissions_convertToJSON(apps_scope_token_request->permissions);
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

apps_scope_token_request_t *apps_scope_token_request_parseFromJSON(cJSON *apps_scope_token_requestJSON){

    apps_scope_token_request_t *apps_scope_token_request_local_var = NULL;

    // define the local list for apps_scope_token_request->repositories
    list_t *repositoriesList = NULL;

    // define the local list for apps_scope_token_request->repository_ids
    list_t *repository_idsList = NULL;

    // define the local variable for apps_scope_token_request->permissions
    app_permissions_t *permissions_local_nonprim = NULL;

    // apps_scope_token_request->access_token
    cJSON *access_token = cJSON_GetObjectItemCaseSensitive(apps_scope_token_requestJSON, "access_token");
    if (!access_token) {
        goto end;
    }

    
    if(!cJSON_IsString(access_token))
    {
    goto end; //String
    }

    // apps_scope_token_request->target
    cJSON *target = cJSON_GetObjectItemCaseSensitive(apps_scope_token_requestJSON, "target");
    if (target) { 
    if(!cJSON_IsString(target))
    {
    goto end; //String
    }
    }

    // apps_scope_token_request->target_id
    cJSON *target_id = cJSON_GetObjectItemCaseSensitive(apps_scope_token_requestJSON, "target_id");
    if (target_id) { 
    if(!cJSON_IsNumber(target_id))
    {
    goto end; //Numeric
    }
    }

    // apps_scope_token_request->repositories
    cJSON *repositories = cJSON_GetObjectItemCaseSensitive(apps_scope_token_requestJSON, "repositories");
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

    // apps_scope_token_request->repository_ids
    cJSON *repository_ids = cJSON_GetObjectItemCaseSensitive(apps_scope_token_requestJSON, "repository_ids");
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

    // apps_scope_token_request->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(apps_scope_token_requestJSON, "permissions");
    if (permissions) { 
    permissions_local_nonprim = app_permissions_parseFromJSON(permissions); //nonprimitive
    }


    apps_scope_token_request_local_var = apps_scope_token_request_create (
        strdup(access_token->valuestring),
        target ? strdup(target->valuestring) : NULL,
        target_id ? target_id->valuedouble : 0,
        repositories ? repositoriesList : NULL,
        repository_ids ? repository_idsList : NULL,
        permissions ? permissions_local_nonprim : NULL
        );

    return apps_scope_token_request_local_var;
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
