#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_list_artifacts_for_repo_200_response.h"



actions_list_artifacts_for_repo_200_response_t *actions_list_artifacts_for_repo_200_response_create(
    int total_count,
    list_t *artifacts
    ) {
    actions_list_artifacts_for_repo_200_response_t *actions_list_artifacts_for_repo_200_response_local_var = malloc(sizeof(actions_list_artifacts_for_repo_200_response_t));
    if (!actions_list_artifacts_for_repo_200_response_local_var) {
        return NULL;
    }
    actions_list_artifacts_for_repo_200_response_local_var->total_count = total_count;
    actions_list_artifacts_for_repo_200_response_local_var->artifacts = artifacts;

    return actions_list_artifacts_for_repo_200_response_local_var;
}


void actions_list_artifacts_for_repo_200_response_free(actions_list_artifacts_for_repo_200_response_t *actions_list_artifacts_for_repo_200_response) {
    if(NULL == actions_list_artifacts_for_repo_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_list_artifacts_for_repo_200_response->artifacts) {
        list_ForEach(listEntry, actions_list_artifacts_for_repo_200_response->artifacts) {
            artifact_free(listEntry->data);
        }
        list_freeList(actions_list_artifacts_for_repo_200_response->artifacts);
        actions_list_artifacts_for_repo_200_response->artifacts = NULL;
    }
    free(actions_list_artifacts_for_repo_200_response);
}

cJSON *actions_list_artifacts_for_repo_200_response_convertToJSON(actions_list_artifacts_for_repo_200_response_t *actions_list_artifacts_for_repo_200_response) {
    cJSON *item = cJSON_CreateObject();

    // actions_list_artifacts_for_repo_200_response->total_count
    if (!actions_list_artifacts_for_repo_200_response->total_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_count", actions_list_artifacts_for_repo_200_response->total_count) == NULL) {
    goto fail; //Numeric
    }


    // actions_list_artifacts_for_repo_200_response->artifacts
    if (!actions_list_artifacts_for_repo_200_response->artifacts) {
        goto fail;
    }
    cJSON *artifacts = cJSON_AddArrayToObject(item, "artifacts");
    if(artifacts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *artifactsListEntry;
    if (actions_list_artifacts_for_repo_200_response->artifacts) {
    list_ForEach(artifactsListEntry, actions_list_artifacts_for_repo_200_response->artifacts) {
    cJSON *itemLocal = artifact_convertToJSON(artifactsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(artifacts, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_list_artifacts_for_repo_200_response_t *actions_list_artifacts_for_repo_200_response_parseFromJSON(cJSON *actions_list_artifacts_for_repo_200_responseJSON){

    actions_list_artifacts_for_repo_200_response_t *actions_list_artifacts_for_repo_200_response_local_var = NULL;

    // define the local list for actions_list_artifacts_for_repo_200_response->artifacts
    list_t *artifactsList = NULL;

    // actions_list_artifacts_for_repo_200_response->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(actions_list_artifacts_for_repo_200_responseJSON, "total_count");
    if (!total_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }

    // actions_list_artifacts_for_repo_200_response->artifacts
    cJSON *artifacts = cJSON_GetObjectItemCaseSensitive(actions_list_artifacts_for_repo_200_responseJSON, "artifacts");
    if (!artifacts) {
        goto end;
    }

    
    cJSON *artifacts_local_nonprimitive = NULL;
    if(!cJSON_IsArray(artifacts)){
        goto end; //nonprimitive container
    }

    artifactsList = list_createList();

    cJSON_ArrayForEach(artifacts_local_nonprimitive,artifacts )
    {
        if(!cJSON_IsObject(artifacts_local_nonprimitive)){
            goto end;
        }
        artifact_t *artifactsItem = artifact_parseFromJSON(artifacts_local_nonprimitive);

        list_addElement(artifactsList, artifactsItem);
    }


    actions_list_artifacts_for_repo_200_response_local_var = actions_list_artifacts_for_repo_200_response_create (
        total_count->valuedouble,
        artifactsList
        );

    return actions_list_artifacts_for_repo_200_response_local_var;
end:
    if (artifactsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, artifactsList) {
            artifact_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(artifactsList);
        artifactsList = NULL;
    }
    return NULL;

}
