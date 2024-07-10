#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_list_labels_for_self_hosted_runner_for_org_200_response.h"



actions_list_labels_for_self_hosted_runner_for_org_200_response_t *actions_list_labels_for_self_hosted_runner_for_org_200_response_create(
    int total_count,
    list_t *labels
    ) {
    actions_list_labels_for_self_hosted_runner_for_org_200_response_t *actions_list_labels_for_self_hosted_runner_for_org_200_response_local_var = malloc(sizeof(actions_list_labels_for_self_hosted_runner_for_org_200_response_t));
    if (!actions_list_labels_for_self_hosted_runner_for_org_200_response_local_var) {
        return NULL;
    }
    actions_list_labels_for_self_hosted_runner_for_org_200_response_local_var->total_count = total_count;
    actions_list_labels_for_self_hosted_runner_for_org_200_response_local_var->labels = labels;

    return actions_list_labels_for_self_hosted_runner_for_org_200_response_local_var;
}


void actions_list_labels_for_self_hosted_runner_for_org_200_response_free(actions_list_labels_for_self_hosted_runner_for_org_200_response_t *actions_list_labels_for_self_hosted_runner_for_org_200_response) {
    if(NULL == actions_list_labels_for_self_hosted_runner_for_org_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_list_labels_for_self_hosted_runner_for_org_200_response->labels) {
        list_ForEach(listEntry, actions_list_labels_for_self_hosted_runner_for_org_200_response->labels) {
            runner_label_free(listEntry->data);
        }
        list_freeList(actions_list_labels_for_self_hosted_runner_for_org_200_response->labels);
        actions_list_labels_for_self_hosted_runner_for_org_200_response->labels = NULL;
    }
    free(actions_list_labels_for_self_hosted_runner_for_org_200_response);
}

cJSON *actions_list_labels_for_self_hosted_runner_for_org_200_response_convertToJSON(actions_list_labels_for_self_hosted_runner_for_org_200_response_t *actions_list_labels_for_self_hosted_runner_for_org_200_response) {
    cJSON *item = cJSON_CreateObject();

    // actions_list_labels_for_self_hosted_runner_for_org_200_response->total_count
    if (!actions_list_labels_for_self_hosted_runner_for_org_200_response->total_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_count", actions_list_labels_for_self_hosted_runner_for_org_200_response->total_count) == NULL) {
    goto fail; //Numeric
    }


    // actions_list_labels_for_self_hosted_runner_for_org_200_response->labels
    if (!actions_list_labels_for_self_hosted_runner_for_org_200_response->labels) {
        goto fail;
    }
    cJSON *labels = cJSON_AddArrayToObject(item, "labels");
    if(labels == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *labelsListEntry;
    if (actions_list_labels_for_self_hosted_runner_for_org_200_response->labels) {
    list_ForEach(labelsListEntry, actions_list_labels_for_self_hosted_runner_for_org_200_response->labels) {
    cJSON *itemLocal = runner_label_convertToJSON(labelsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(labels, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_list_labels_for_self_hosted_runner_for_org_200_response_t *actions_list_labels_for_self_hosted_runner_for_org_200_response_parseFromJSON(cJSON *actions_list_labels_for_self_hosted_runner_for_org_200_responseJSON){

    actions_list_labels_for_self_hosted_runner_for_org_200_response_t *actions_list_labels_for_self_hosted_runner_for_org_200_response_local_var = NULL;

    // define the local list for actions_list_labels_for_self_hosted_runner_for_org_200_response->labels
    list_t *labelsList = NULL;

    // actions_list_labels_for_self_hosted_runner_for_org_200_response->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(actions_list_labels_for_self_hosted_runner_for_org_200_responseJSON, "total_count");
    if (!total_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }

    // actions_list_labels_for_self_hosted_runner_for_org_200_response->labels
    cJSON *labels = cJSON_GetObjectItemCaseSensitive(actions_list_labels_for_self_hosted_runner_for_org_200_responseJSON, "labels");
    if (!labels) {
        goto end;
    }

    
    cJSON *labels_local_nonprimitive = NULL;
    if(!cJSON_IsArray(labels)){
        goto end; //nonprimitive container
    }

    labelsList = list_createList();

    cJSON_ArrayForEach(labels_local_nonprimitive,labels )
    {
        if(!cJSON_IsObject(labels_local_nonprimitive)){
            goto end;
        }
        runner_label_t *labelsItem = runner_label_parseFromJSON(labels_local_nonprimitive);

        list_addElement(labelsList, labelsItem);
    }


    actions_list_labels_for_self_hosted_runner_for_org_200_response_local_var = actions_list_labels_for_self_hosted_runner_for_org_200_response_create (
        total_count->valuedouble,
        labelsList
        );

    return actions_list_labels_for_self_hosted_runner_for_org_200_response_local_var;
end:
    if (labelsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, labelsList) {
            runner_label_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(labelsList);
        labelsList = NULL;
    }
    return NULL;

}
