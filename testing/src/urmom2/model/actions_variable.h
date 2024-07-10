/*
 * actions_variable.h
 *
 * 
 */

#ifndef _actions_variable_H_
#define _actions_variable_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_variable_t actions_variable_t;




typedef struct actions_variable_t {
    char *name; // string
    char *value; // string
    char *created_at; //date time
    char *updated_at; //date time

} actions_variable_t;

actions_variable_t *actions_variable_create(
    char *name,
    char *value,
    char *created_at,
    char *updated_at
);

void actions_variable_free(actions_variable_t *actions_variable);

actions_variable_t *actions_variable_parseFromJSON(cJSON *actions_variableJSON);

cJSON *actions_variable_convertToJSON(actions_variable_t *actions_variable);

#endif /* _actions_variable_H_ */

