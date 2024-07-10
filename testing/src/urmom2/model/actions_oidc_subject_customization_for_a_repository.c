#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_oidc_subject_customization_for_a_repository.h"



actions_oidc_subject_customization_for_a_repository_t *actions_oidc_subject_customization_for_a_repository_create(
    int use_default,
    list_t *include_claim_keys
    ) {
    actions_oidc_subject_customization_for_a_repository_t *actions_oidc_subject_customization_for_a_repository_local_var = malloc(sizeof(actions_oidc_subject_customization_for_a_repository_t));
    if (!actions_oidc_subject_customization_for_a_repository_local_var) {
        return NULL;
    }
    actions_oidc_subject_customization_for_a_repository_local_var->use_default = use_default;
    actions_oidc_subject_customization_for_a_repository_local_var->include_claim_keys = include_claim_keys;

    return actions_oidc_subject_customization_for_a_repository_local_var;
}


void actions_oidc_subject_customization_for_a_repository_free(actions_oidc_subject_customization_for_a_repository_t *actions_oidc_subject_customization_for_a_repository) {
    if(NULL == actions_oidc_subject_customization_for_a_repository){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_oidc_subject_customization_for_a_repository->include_claim_keys) {
        list_ForEach(listEntry, actions_oidc_subject_customization_for_a_repository->include_claim_keys) {
            free(listEntry->data);
        }
        list_freeList(actions_oidc_subject_customization_for_a_repository->include_claim_keys);
        actions_oidc_subject_customization_for_a_repository->include_claim_keys = NULL;
    }
    free(actions_oidc_subject_customization_for_a_repository);
}

cJSON *actions_oidc_subject_customization_for_a_repository_convertToJSON(actions_oidc_subject_customization_for_a_repository_t *actions_oidc_subject_customization_for_a_repository) {
    cJSON *item = cJSON_CreateObject();

    // actions_oidc_subject_customization_for_a_repository->use_default
    if (!actions_oidc_subject_customization_for_a_repository->use_default) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "use_default", actions_oidc_subject_customization_for_a_repository->use_default) == NULL) {
    goto fail; //Bool
    }


    // actions_oidc_subject_customization_for_a_repository->include_claim_keys
    if(actions_oidc_subject_customization_for_a_repository->include_claim_keys) {
    cJSON *include_claim_keys = cJSON_AddArrayToObject(item, "include_claim_keys");
    if(include_claim_keys == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *include_claim_keysListEntry;
    list_ForEach(include_claim_keysListEntry, actions_oidc_subject_customization_for_a_repository->include_claim_keys) {
    if(cJSON_AddStringToObject(include_claim_keys, "", (char*)include_claim_keysListEntry->data) == NULL)
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

actions_oidc_subject_customization_for_a_repository_t *actions_oidc_subject_customization_for_a_repository_parseFromJSON(cJSON *actions_oidc_subject_customization_for_a_repositoryJSON){

    actions_oidc_subject_customization_for_a_repository_t *actions_oidc_subject_customization_for_a_repository_local_var = NULL;

    // define the local list for actions_oidc_subject_customization_for_a_repository->include_claim_keys
    list_t *include_claim_keysList = NULL;

    // actions_oidc_subject_customization_for_a_repository->use_default
    cJSON *use_default = cJSON_GetObjectItemCaseSensitive(actions_oidc_subject_customization_for_a_repositoryJSON, "use_default");
    if (!use_default) {
        goto end;
    }

    
    if(!cJSON_IsBool(use_default))
    {
    goto end; //Bool
    }

    // actions_oidc_subject_customization_for_a_repository->include_claim_keys
    cJSON *include_claim_keys = cJSON_GetObjectItemCaseSensitive(actions_oidc_subject_customization_for_a_repositoryJSON, "include_claim_keys");
    if (include_claim_keys) { 
    cJSON *include_claim_keys_local = NULL;
    if(!cJSON_IsArray(include_claim_keys)) {
        goto end;//primitive container
    }
    include_claim_keysList = list_createList();

    cJSON_ArrayForEach(include_claim_keys_local, include_claim_keys)
    {
        if(!cJSON_IsString(include_claim_keys_local))
        {
            goto end;
        }
        list_addElement(include_claim_keysList , strdup(include_claim_keys_local->valuestring));
    }
    }


    actions_oidc_subject_customization_for_a_repository_local_var = actions_oidc_subject_customization_for_a_repository_create (
        use_default->valueint,
        include_claim_keys ? include_claim_keysList : NULL
        );

    return actions_oidc_subject_customization_for_a_repository_local_var;
end:
    if (include_claim_keysList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, include_claim_keysList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(include_claim_keysList);
        include_claim_keysList = NULL;
    }
    return NULL;

}
