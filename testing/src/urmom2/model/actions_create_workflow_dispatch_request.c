#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_create_workflow_dispatch_request.h"



actions_create_workflow_dispatch_request_t *actions_create_workflow_dispatch_request_create(
    char *ref,
    list_t* inputs
    ) {
    actions_create_workflow_dispatch_request_t *actions_create_workflow_dispatch_request_local_var = malloc(sizeof(actions_create_workflow_dispatch_request_t));
    if (!actions_create_workflow_dispatch_request_local_var) {
        return NULL;
    }
    actions_create_workflow_dispatch_request_local_var->ref = ref;
    actions_create_workflow_dispatch_request_local_var->inputs = inputs;

    return actions_create_workflow_dispatch_request_local_var;
}


void actions_create_workflow_dispatch_request_free(actions_create_workflow_dispatch_request_t *actions_create_workflow_dispatch_request) {
    if(NULL == actions_create_workflow_dispatch_request){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_create_workflow_dispatch_request->ref) {
        free(actions_create_workflow_dispatch_request->ref);
        actions_create_workflow_dispatch_request->ref = NULL;
    }
    if (actions_create_workflow_dispatch_request->inputs) {
        list_ForEach(listEntry, actions_create_workflow_dispatch_request->inputs) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(actions_create_workflow_dispatch_request->inputs);
        actions_create_workflow_dispatch_request->inputs = NULL;
    }
    free(actions_create_workflow_dispatch_request);
}

cJSON *actions_create_workflow_dispatch_request_convertToJSON(actions_create_workflow_dispatch_request_t *actions_create_workflow_dispatch_request) {
    cJSON *item = cJSON_CreateObject();

    // actions_create_workflow_dispatch_request->ref
    if (!actions_create_workflow_dispatch_request->ref) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ref", actions_create_workflow_dispatch_request->ref) == NULL) {
    goto fail; //String
    }


    // actions_create_workflow_dispatch_request->inputs
    if(actions_create_workflow_dispatch_request->inputs) {
    cJSON *inputs = cJSON_AddObjectToObject(item, "inputs");
    if(inputs == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = inputs;
    listEntry_t *inputsListEntry;
    if (actions_create_workflow_dispatch_request->inputs) {
    list_ForEach(inputsListEntry, actions_create_workflow_dispatch_request->inputs) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)inputsListEntry->data;
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

actions_create_workflow_dispatch_request_t *actions_create_workflow_dispatch_request_parseFromJSON(cJSON *actions_create_workflow_dispatch_requestJSON){

    actions_create_workflow_dispatch_request_t *actions_create_workflow_dispatch_request_local_var = NULL;

    // define the local map for actions_create_workflow_dispatch_request->inputs
    list_t *inputsList = NULL;

    // actions_create_workflow_dispatch_request->ref
    cJSON *ref = cJSON_GetObjectItemCaseSensitive(actions_create_workflow_dispatch_requestJSON, "ref");
    if (!ref) {
        goto end;
    }

    
    if(!cJSON_IsString(ref))
    {
    goto end; //String
    }

    // actions_create_workflow_dispatch_request->inputs
    cJSON *inputs = cJSON_GetObjectItemCaseSensitive(actions_create_workflow_dispatch_requestJSON, "inputs");
    if (inputs) { 
    cJSON *inputs_local_map = NULL;
    if(!cJSON_IsObject(inputs) && !cJSON_IsNull(inputs))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(inputs))
    {
        inputsList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(inputs_local_map, inputs)
        {
            cJSON *localMapObject = inputs_local_map;
            list_addElement(inputsList , localMapKeyPair);
        }
    }
    }


    actions_create_workflow_dispatch_request_local_var = actions_create_workflow_dispatch_request_create (
        strdup(ref->valuestring),
        inputs ? inputsList : NULL
        );

    return actions_create_workflow_dispatch_request_local_var;
end:
    if (inputsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, inputsList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(inputsList);
        inputsList = NULL;
    }
    return NULL;

}
