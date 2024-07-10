#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_get_workflow_workflow_id_parameter.h"



actions_get_workflow_workflow_id_parameter_t *actions_get_workflow_workflow_id_parameter_create(
    ) {
    actions_get_workflow_workflow_id_parameter_t *actions_get_workflow_workflow_id_parameter_local_var = malloc(sizeof(actions_get_workflow_workflow_id_parameter_t));
    if (!actions_get_workflow_workflow_id_parameter_local_var) {
        return NULL;
    }

    return actions_get_workflow_workflow_id_parameter_local_var;
}


void actions_get_workflow_workflow_id_parameter_free(actions_get_workflow_workflow_id_parameter_t *actions_get_workflow_workflow_id_parameter) {
    if(NULL == actions_get_workflow_workflow_id_parameter){
        return ;
    }
    listEntry_t *listEntry;
    free(actions_get_workflow_workflow_id_parameter);
}

cJSON *actions_get_workflow_workflow_id_parameter_convertToJSON(actions_get_workflow_workflow_id_parameter_t *actions_get_workflow_workflow_id_parameter) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_get_workflow_workflow_id_parameter_t *actions_get_workflow_workflow_id_parameter_parseFromJSON(cJSON *actions_get_workflow_workflow_id_parameterJSON){

    actions_get_workflow_workflow_id_parameter_t *actions_get_workflow_workflow_id_parameter_local_var = NULL;


    actions_get_workflow_workflow_id_parameter_local_var = actions_get_workflow_workflow_id_parameter_create (
        );

    return actions_get_workflow_workflow_id_parameter_local_var;
end:
    return NULL;

}
