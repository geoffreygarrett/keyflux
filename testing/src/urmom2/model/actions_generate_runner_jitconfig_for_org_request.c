#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_generate_runner_jitconfig_for_org_request.h"



actions_generate_runner_jitconfig_for_org_request_t *actions_generate_runner_jitconfig_for_org_request_create(
    char *name,
    int runner_group_id,
    list_t *labels,
    char *work_folder
    ) {
    actions_generate_runner_jitconfig_for_org_request_t *actions_generate_runner_jitconfig_for_org_request_local_var = malloc(sizeof(actions_generate_runner_jitconfig_for_org_request_t));
    if (!actions_generate_runner_jitconfig_for_org_request_local_var) {
        return NULL;
    }
    actions_generate_runner_jitconfig_for_org_request_local_var->name = name;
    actions_generate_runner_jitconfig_for_org_request_local_var->runner_group_id = runner_group_id;
    actions_generate_runner_jitconfig_for_org_request_local_var->labels = labels;
    actions_generate_runner_jitconfig_for_org_request_local_var->work_folder = work_folder;

    return actions_generate_runner_jitconfig_for_org_request_local_var;
}


void actions_generate_runner_jitconfig_for_org_request_free(actions_generate_runner_jitconfig_for_org_request_t *actions_generate_runner_jitconfig_for_org_request) {
    if(NULL == actions_generate_runner_jitconfig_for_org_request){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_generate_runner_jitconfig_for_org_request->name) {
        free(actions_generate_runner_jitconfig_for_org_request->name);
        actions_generate_runner_jitconfig_for_org_request->name = NULL;
    }
    if (actions_generate_runner_jitconfig_for_org_request->labels) {
        list_ForEach(listEntry, actions_generate_runner_jitconfig_for_org_request->labels) {
            free(listEntry->data);
        }
        list_freeList(actions_generate_runner_jitconfig_for_org_request->labels);
        actions_generate_runner_jitconfig_for_org_request->labels = NULL;
    }
    if (actions_generate_runner_jitconfig_for_org_request->work_folder) {
        free(actions_generate_runner_jitconfig_for_org_request->work_folder);
        actions_generate_runner_jitconfig_for_org_request->work_folder = NULL;
    }
    free(actions_generate_runner_jitconfig_for_org_request);
}

cJSON *actions_generate_runner_jitconfig_for_org_request_convertToJSON(actions_generate_runner_jitconfig_for_org_request_t *actions_generate_runner_jitconfig_for_org_request) {
    cJSON *item = cJSON_CreateObject();

    // actions_generate_runner_jitconfig_for_org_request->name
    if (!actions_generate_runner_jitconfig_for_org_request->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", actions_generate_runner_jitconfig_for_org_request->name) == NULL) {
    goto fail; //String
    }


    // actions_generate_runner_jitconfig_for_org_request->runner_group_id
    if (!actions_generate_runner_jitconfig_for_org_request->runner_group_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "runner_group_id", actions_generate_runner_jitconfig_for_org_request->runner_group_id) == NULL) {
    goto fail; //Numeric
    }


    // actions_generate_runner_jitconfig_for_org_request->labels
    if (!actions_generate_runner_jitconfig_for_org_request->labels) {
        goto fail;
    }
    cJSON *labels = cJSON_AddArrayToObject(item, "labels");
    if(labels == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *labelsListEntry;
    list_ForEach(labelsListEntry, actions_generate_runner_jitconfig_for_org_request->labels) {
    if(cJSON_AddStringToObject(labels, "", (char*)labelsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // actions_generate_runner_jitconfig_for_org_request->work_folder
    if(actions_generate_runner_jitconfig_for_org_request->work_folder) {
    if(cJSON_AddStringToObject(item, "work_folder", actions_generate_runner_jitconfig_for_org_request->work_folder) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_generate_runner_jitconfig_for_org_request_t *actions_generate_runner_jitconfig_for_org_request_parseFromJSON(cJSON *actions_generate_runner_jitconfig_for_org_requestJSON){

    actions_generate_runner_jitconfig_for_org_request_t *actions_generate_runner_jitconfig_for_org_request_local_var = NULL;

    // define the local list for actions_generate_runner_jitconfig_for_org_request->labels
    list_t *labelsList = NULL;

    // actions_generate_runner_jitconfig_for_org_request->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(actions_generate_runner_jitconfig_for_org_requestJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // actions_generate_runner_jitconfig_for_org_request->runner_group_id
    cJSON *runner_group_id = cJSON_GetObjectItemCaseSensitive(actions_generate_runner_jitconfig_for_org_requestJSON, "runner_group_id");
    if (!runner_group_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(runner_group_id))
    {
    goto end; //Numeric
    }

    // actions_generate_runner_jitconfig_for_org_request->labels
    cJSON *labels = cJSON_GetObjectItemCaseSensitive(actions_generate_runner_jitconfig_for_org_requestJSON, "labels");
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

    // actions_generate_runner_jitconfig_for_org_request->work_folder
    cJSON *work_folder = cJSON_GetObjectItemCaseSensitive(actions_generate_runner_jitconfig_for_org_requestJSON, "work_folder");
    if (work_folder) { 
    if(!cJSON_IsString(work_folder))
    {
    goto end; //String
    }
    }


    actions_generate_runner_jitconfig_for_org_request_local_var = actions_generate_runner_jitconfig_for_org_request_create (
        strdup(name->valuestring),
        runner_group_id->valuedouble,
        labelsList,
        work_folder ? strdup(work_folder->valuestring) : NULL
        );

    return actions_generate_runner_jitconfig_for_org_request_local_var;
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
