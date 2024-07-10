/*
 * actions_secret.h
 *
 * Set secrets for GitHub Actions.
 */

#ifndef _actions_secret_H_
#define _actions_secret_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_secret_t actions_secret_t;




typedef struct actions_secret_t {
    char *name; // string
    char *created_at; //date time
    char *updated_at; //date time

} actions_secret_t;

actions_secret_t *actions_secret_create(
    char *name,
    char *created_at,
    char *updated_at
);

void actions_secret_free(actions_secret_t *actions_secret);

actions_secret_t *actions_secret_parseFromJSON(cJSON *actions_secretJSON);

cJSON *actions_secret_convertToJSON(actions_secret_t *actions_secret);

#endif /* _actions_secret_H_ */

