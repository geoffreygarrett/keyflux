/*
 * apps_create_from_manifest_201_response.h
 *
 * 
 */

#ifndef _apps_create_from_manifest_201_response_H_
#define _apps_create_from_manifest_201_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apps_create_from_manifest_201_response_t apps_create_from_manifest_201_response_t;

#include "integration_permissions.h"
#include "nullable_simple_user.h"



typedef struct apps_create_from_manifest_201_response_t {
    int id; //numeric
    char *slug; // string
    char *node_id; // string
    struct nullable_simple_user_t *owner; //model
    char *name; // string
    char *description; // string
    char *external_url; // string
    char *html_url; // string
    char *created_at; //date time
    char *updated_at; //date time
    integration_permissions_t *permissions; // custom
    list_t *events; //primitive container
    int installations_count; //numeric
    char *client_id; // string
    char *client_secret; // string
    char *webhook_secret; // string
    char *pem; // string

} apps_create_from_manifest_201_response_t;

apps_create_from_manifest_201_response_t *apps_create_from_manifest_201_response_create(
    int id,
    char *slug,
    char *node_id,
    nullable_simple_user_t *owner,
    char *name,
    char *description,
    char *external_url,
    char *html_url,
    char *created_at,
    char *updated_at,
    integration_permissions_t *permissions,
    list_t *events,
    int installations_count,
    char *client_id,
    char *client_secret,
    char *webhook_secret,
    char *pem
);

void apps_create_from_manifest_201_response_free(apps_create_from_manifest_201_response_t *apps_create_from_manifest_201_response);

apps_create_from_manifest_201_response_t *apps_create_from_manifest_201_response_parseFromJSON(cJSON *apps_create_from_manifest_201_responseJSON);

cJSON *apps_create_from_manifest_201_response_convertToJSON(apps_create_from_manifest_201_response_t *apps_create_from_manifest_201_response);

#endif /* _apps_create_from_manifest_201_response_H_ */

