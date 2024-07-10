#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_set_custom_labels_for_self_hosted_runner_for_org_request.h"



actions_set_custom_labels_for_self_hosted_runner_for_org_request_t *actions_set_custom_labels_for_self_hosted_runner_for_org_request_create(
    list_t *labels
    ) {
    actions_set_custom_labels_for_self_hosted_runner_for_org_request_t *actions_set_custom_labels_for_self_hosted_runner_for_org_request_local_var = malloc(sizeof(actions_set_custom_labels_for_self_hosted_runner_for_org_request_t));
    if (!actions_set_custom_labels_for_self_hosted_runner_for_org_request_local_var) {
        return NULL;
    }
    actions_set_custom_labels_for_self_hosted_runner_for_org_request_local_var->labels = labels;

    return actions_set_custom_labels_for_self_hosted_runner_for_org_request_local_var;
}


void actions_set_custom_labels_for_self_hosted_runner_for_org_request_free(actions_set_custom_labels_for_self_hosted_runner_for_org_request_t *actions_set_custom_labels_for_self_hosted_runner_for_org_request) {
    if(NULL == actions_set_custom_labels_for_self_hosted_runner_for_org_request){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_set_custom_labels_for_self_hosted_runner_for_org_request->labels) {
        list_ForEach(listEntry, actions_set_custom_labels_for_self_hosted_runner_for_org_request->labels) {
            free(listEntry->data);
        }
        list_freeList(actions_set_custom_labels_for_self_hosted_runner_for_org_request->labels);
        actions_set_custom_labels_for_self_hosted_runner_for_org_request->labels = NULL;
    }
    free(actions_set_custom_labels_for_self_hosted_runner_for_org_request);
}

cJSON *actions_set_custom_labels_for_self_hosted_runner_for_org_request_convertToJSON(actions_set_custom_labels_for_self_hosted_runner_for_org_request_t *actions_set_custom_labels_for_self_hosted_runner_for_org_request) {
    cJSON *item = cJSON_CreateObject();

    // actions_set_custom_labels_for_self_hosted_runner_for_org_request->labels
    if (!actions_set_custom_labels_for_self_hosted_runner_for_org_request->labels) {
        goto fail;
    }
    cJSON *labels = cJSON_AddArrayToObject(item, "labels");
    if(labels == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *labelsListEntry;
    list_ForEach(labelsListEntry, actions_set_custom_labels_for_self_hosted_runner_for_org_request->labels) {
    if(cJSON_AddStringToObject(labels, "", (char*)labelsListEntry->data) == NULL)
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

actions_set_custom_labels_for_self_hosted_runner_for_org_request_t *actions_set_custom_labels_for_self_hosted_runner_for_org_request_parseFromJSON(cJSON *actions_set_custom_labels_for_self_hosted_runner_for_org_requestJSON){

    actions_set_custom_labels_for_self_hosted_runner_for_org_request_t *actions_set_custom_labels_for_self_hosted_runner_for_org_request_local_var = NULL;

    // define the local list for actions_set_custom_labels_for_self_hosted_runner_for_org_request->labels
    list_t *labelsList = NULL;

    // actions_set_custom_labels_for_self_hosted_runner_for_org_request->labels
    cJSON *labels = cJSON_GetObjectItemCaseSensitive(actions_set_custom_labels_for_self_hosted_runner_for_org_requestJSON, "labels");
    if (!labels) {
        goto end;
    }

    
    cJSON *labels_local = NULL;
    if(!cJSON_IsArray(labels)) {
        goto end;//primitive container
    }
    labelsList = list_createList();

    cJSON_ArrayForEach(labels_local, labels)
    {
        if(!cJSON_IsString(labels_local))
        {
            goto end;
        }
        list_addElement(labelsList , strdup(labels_local->valuestring));
    }


    actions_set_custom_labels_for_self_hosted_runner_for_org_request_local_var = actions_set_custom_labels_for_self_hosted_runner_for_org_request_create (
        labelsList
        );

    return actions_set_custom_labels_for_self_hosted_runner_for_org_request_local_var;
end:
    if (labelsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, labelsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(labelsList);
        labelsList = NULL;
    }
    return NULL;

}
