#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_list_repo_organization_secrets_200_response.h"



actions_list_repo_organization_secrets_200_response_t *actions_list_repo_organization_secrets_200_response_create(
    int total_count,
    list_t *secrets
    ) {
    actions_list_repo_organization_secrets_200_response_t *actions_list_repo_organization_secrets_200_response_local_var = malloc(sizeof(actions_list_repo_organization_secrets_200_response_t));
    if (!actions_list_repo_organization_secrets_200_response_local_var) {
        return NULL;
    }
    actions_list_repo_organization_secrets_200_response_local_var->total_count = total_count;
    actions_list_repo_organization_secrets_200_response_local_var->secrets = secrets;

    return actions_list_repo_organization_secrets_200_response_local_var;
}


void actions_list_repo_organization_secrets_200_response_free(actions_list_repo_organization_secrets_200_response_t *actions_list_repo_organization_secrets_200_response) {
    if(NULL == actions_list_repo_organization_secrets_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_list_repo_organization_secrets_200_response->secrets) {
        list_ForEach(listEntry, actions_list_repo_organization_secrets_200_response->secrets) {
            actions_secret_free(listEntry->data);
        }
        list_freeList(actions_list_repo_organization_secrets_200_response->secrets);
        actions_list_repo_organization_secrets_200_response->secrets = NULL;
    }
    free(actions_list_repo_organization_secrets_200_response);
}

cJSON *actions_list_repo_organization_secrets_200_response_convertToJSON(actions_list_repo_organization_secrets_200_response_t *actions_list_repo_organization_secrets_200_response) {
    cJSON *item = cJSON_CreateObject();

    // actions_list_repo_organization_secrets_200_response->total_count
    if (!actions_list_repo_organization_secrets_200_response->total_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_count", actions_list_repo_organization_secrets_200_response->total_count) == NULL) {
    goto fail; //Numeric
    }


    // actions_list_repo_organization_secrets_200_response->secrets
    if (!actions_list_repo_organization_secrets_200_response->secrets) {
        goto fail;
    }
    cJSON *secrets = cJSON_AddArrayToObject(item, "secrets");
    if(secrets == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *secretsListEntry;
    if (actions_list_repo_organization_secrets_200_response->secrets) {
    list_ForEach(secretsListEntry, actions_list_repo_organization_secrets_200_response->secrets) {
    cJSON *itemLocal = actions_secret_convertToJSON(secretsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(secrets, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_list_repo_organization_secrets_200_response_t *actions_list_repo_organization_secrets_200_response_parseFromJSON(cJSON *actions_list_repo_organization_secrets_200_responseJSON){

    actions_list_repo_organization_secrets_200_response_t *actions_list_repo_organization_secrets_200_response_local_var = NULL;

    // define the local list for actions_list_repo_organization_secrets_200_response->secrets
    list_t *secretsList = NULL;

    // actions_list_repo_organization_secrets_200_response->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(actions_list_repo_organization_secrets_200_responseJSON, "total_count");
    if (!total_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }

    // actions_list_repo_organization_secrets_200_response->secrets
    cJSON *secrets = cJSON_GetObjectItemCaseSensitive(actions_list_repo_organization_secrets_200_responseJSON, "secrets");
    if (!secrets) {
        goto end;
    }

    
    cJSON *secrets_local_nonprimitive = NULL;
    if(!cJSON_IsArray(secrets)){
        goto end; //nonprimitive container
    }

    secretsList = list_createList();

    cJSON_ArrayForEach(secrets_local_nonprimitive,secrets )
    {
        if(!cJSON_IsObject(secrets_local_nonprimitive)){
            goto end;
        }
        actions_secret_t *secretsItem = actions_secret_parseFromJSON(secrets_local_nonprimitive);

        list_addElement(secretsList, secretsItem);
    }


    actions_list_repo_organization_secrets_200_response_local_var = actions_list_repo_organization_secrets_200_response_create (
        total_count->valuedouble,
        secretsList
        );

    return actions_list_repo_organization_secrets_200_response_local_var;
end:
    if (secretsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, secretsList) {
            actions_secret_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(secretsList);
        secretsList = NULL;
    }
    return NULL;

}
