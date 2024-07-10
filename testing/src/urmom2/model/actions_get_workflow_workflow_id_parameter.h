/*
 * actions_get_workflow_workflow_id_parameter.h
 *
 * 
 */

#ifndef _actions_get_workflow_workflow_id_parameter_H_
#define _actions_get_workflow_workflow_id_parameter_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_get_workflow_workflow_id_parameter_t actions_get_workflow_workflow_id_parameter_t;




typedef struct actions_get_workflow_workflow_id_parameter_t {

} actions_get_workflow_workflow_id_parameter_t;

actions_get_workflow_workflow_id_parameter_t *actions_get_workflow_workflow_id_parameter_create(
);

void actions_get_workflow_workflow_id_parameter_free(actions_get_workflow_workflow_id_parameter_t *actions_get_workflow_workflow_id_parameter);

actions_get_workflow_workflow_id_parameter_t *actions_get_workflow_workflow_id_parameter_parseFromJSON(cJSON *actions_get_workflow_workflow_id_parameterJSON);

cJSON *actions_get_workflow_workflow_id_parameter_convertToJSON(actions_get_workflow_workflow_id_parameter_t *actions_get_workflow_workflow_id_parameter);

#endif /* _actions_get_workflow_workflow_id_parameter_H_ */

