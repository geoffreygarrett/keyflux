#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authentication_token.h"


char* repository_selectionauthentication_token_ToString(github_v3_rest_api_authentication_token_REPOSITORYSELECTION_e repository_selection) {
    char* repository_selectionArray[] =  { "NULL", "all", "selected" };
	return repository_selectionArray[repository_selection];
}

github_v3_rest_api_authentication_token_REPOSITORYSELECTION_e repository_selectionauthentication_token_FromString(char* repository_selection){
    int stringToReturn = 0;
    char *repository_selectionArray[] =  { "NULL", "all", "selected" };
    size_t sizeofArray = sizeof(repository_selectionArray) / sizeof(repository_selectionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(repository_selection, repository_selectionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

authentication_token_t *authentication_token_create(
    char *token,
    char *expires_at,
    object_t *permissions,
    list_t *repositories,
    char *single_file,
    github_v3_rest_api_authentication_token_REPOSITORYSELECTION_e repository_selection
    ) {
    authentication_token_t *authentication_token_local_var = malloc(sizeof(authentication_token_t));
    if (!authentication_token_local_var) {
        return NULL;
    }
    authentication_token_local_var->token = token;
    authentication_token_local_var->expires_at = expires_at;
    authentication_token_local_var->permissions = permissions;
    authentication_token_local_var->repositories = repositories;
    authentication_token_local_var->single_file = single_file;
    authentication_token_local_var->repository_selection = repository_selection;

    return authentication_token_local_var;
}


void authentication_token_free(authentication_token_t *authentication_token) {
    if(NULL == authentication_token){
        return ;
    }
    listEntry_t *listEntry;
    if (authentication_token->token) {
        free(authentication_token->token);
        authentication_token->token = NULL;
    }
    if (authentication_token->expires_at) {
        free(authentication_token->expires_at);
        authentication_token->expires_at = NULL;
    }
    if (authentication_token->permissions) {
        object_free(authentication_token->permissions);
        authentication_token->permissions = NULL;
    }
    if (authentication_token->repositories) {
        list_ForEach(listEntry, authentication_token->repositories) {
            repository_free(listEntry->data);
        }
        list_freeList(authentication_token->repositories);
        authentication_token->repositories = NULL;
    }
    if (authentication_token->single_file) {
        free(authentication_token->single_file);
        authentication_token->single_file = NULL;
    }
    free(authentication_token);
}

cJSON *authentication_token_convertToJSON(authentication_token_t *authentication_token) {
    cJSON *item = cJSON_CreateObject();

    // authentication_token->token
    if (!authentication_token->token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "token", authentication_token->token) == NULL) {
    goto fail; //String
    }


    // authentication_token->expires_at
    if (!authentication_token->expires_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "expires_at", authentication_token->expires_at) == NULL) {
    goto fail; //Date-Time
    }


    // authentication_token->permissions
    if(authentication_token->permissions) {
    cJSON *permissions_object = object_convertToJSON(authentication_token->permissions);
    if(permissions_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "permissions", permissions_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // authentication_token->repositories
    if(authentication_token->repositories) {
    cJSON *repositories = cJSON_AddArrayToObject(item, "repositories");
    if(repositories == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *repositoriesListEntry;
    if (authentication_token->repositories) {
    list_ForEach(repositoriesListEntry, authentication_token->repositories) {
    cJSON *itemLocal = repository_convertToJSON(repositoriesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(repositories, itemLocal);
    }
    }
    }


    // authentication_token->single_file
    if(authentication_token->single_file) {
    if(cJSON_AddStringToObject(item, "single_file", authentication_token->single_file) == NULL) {
    goto fail; //String
    }
    }


    // authentication_token->repository_selection
    if(authentication_token->repository_selection != github_v3_rest_api_authentication_token_REPOSITORYSELECTION_NULL) {
    if(cJSON_AddStringToObject(item, "repository_selection", repository_selectionauthentication_token_ToString(authentication_token->repository_selection)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

authentication_token_t *authentication_token_parseFromJSON(cJSON *authentication_tokenJSON){

    authentication_token_t *authentication_token_local_var = NULL;

    // define the local list for authentication_token->repositories
    list_t *repositoriesList = NULL;

    // authentication_token->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(authentication_tokenJSON, "token");
    if (!token) {
        goto end;
    }

    
    if(!cJSON_IsString(token))
    {
    goto end; //String
    }

    // authentication_token->expires_at
    cJSON *expires_at = cJSON_GetObjectItemCaseSensitive(authentication_tokenJSON, "expires_at");
    if (!expires_at) {
        goto end;
    }

    
    if(!cJSON_IsString(expires_at))
    {
    goto end; //DateTime
    }

    // authentication_token->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(authentication_tokenJSON, "permissions");
    object_t *permissions_local_object = NULL;
    if (permissions) { 
    permissions_local_object = object_parseFromJSON(permissions); //object
    }

    // authentication_token->repositories
    cJSON *repositories = cJSON_GetObjectItemCaseSensitive(authentication_tokenJSON, "repositories");
    if (repositories) { 
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
    }

    // authentication_token->single_file
    cJSON *single_file = cJSON_GetObjectItemCaseSensitive(authentication_tokenJSON, "single_file");
    if (single_file) { 
    if(!cJSON_IsString(single_file))
    {
    goto end; //String
    }
    }

    // authentication_token->repository_selection
    cJSON *repository_selection = cJSON_GetObjectItemCaseSensitive(authentication_tokenJSON, "repository_selection");
    github_v3_rest_api_authentication_token_REPOSITORYSELECTION_e repository_selectionVariable;
    if (repository_selection) { 
    if(!cJSON_IsString(repository_selection))
    {
    goto end; //Enum
    }
    repository_selectionVariable = repository_selectionauthentication_token_FromString(repository_selection->valuestring);
    }


    authentication_token_local_var = authentication_token_create (
        strdup(token->valuestring),
        strdup(expires_at->valuestring),
        permissions ? permissions_local_object : NULL,
        repositories ? repositoriesList : NULL,
        single_file ? strdup(single_file->valuestring) : NULL,
        repository_selection ? repository_selectionVariable : -1
        );

    return authentication_token_local_var;
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
