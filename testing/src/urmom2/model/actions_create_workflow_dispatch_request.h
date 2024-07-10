/*
 * actions_create_workflow_dispatch_request.h
 *
 * 
 */

#ifndef _actions_create_workflow_dispatch_request_H_
#define _actions_create_workflow_dispatch_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_create_workflow_dispatch_request_t actions_create_workflow_dispatch_request_t;

#include "any_type.h"



typedef struct actions_create_workflow_dispatch_request_t {
    char *ref; // string
    list_t* inputs; //map

} actions_create_workflow_dispatch_request_t;

actions_create_workflow_dispatch_request_t *actions_create_workflow_dispatch_request_create(
    char *ref,
    list_t* inputs
);

void actions_create_workflow_dispatch_request_free(actions_create_workflow_dispatch_request_t *actions_create_workflow_dispatch_request);

actions_create_workflow_dispatch_request_t *actions_create_workflow_dispatch_request_parseFromJSON(cJSON *actions_create_workflow_dispatch_requestJSON);

cJSON *actions_create_workflow_dispatch_request_convertToJSON(actions_create_workflow_dispatch_request_t *actions_create_workflow_dispatch_request);

#endif /* _actions_create_workflow_dispatch_request_H_ */

