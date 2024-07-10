/*
 * authorization_app.h
 *
 * 
 */

#ifndef _authorization_app_H_
#define _authorization_app_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authorization_app_t authorization_app_t;




typedef struct authorization_app_t {
    char *client_id; // string
    char *name; // string
    char *url; // string

} authorization_app_t;

authorization_app_t *authorization_app_create(
    char *client_id,
    char *name,
    char *url
);

void authorization_app_free(authorization_app_t *authorization_app);

authorization_app_t *authorization_app_parseFromJSON(cJSON *authorization_appJSON);

cJSON *authorization_app_convertToJSON(authorization_app_t *authorization_app);

#endif /* _authorization_app_H_ */

