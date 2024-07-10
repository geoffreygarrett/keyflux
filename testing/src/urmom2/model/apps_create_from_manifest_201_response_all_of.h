/*
 * apps_create_from_manifest_201_response_all_of.h
 *
 * 
 */

#ifndef _apps_create_from_manifest_201_response_all_of_H_
#define _apps_create_from_manifest_201_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apps_create_from_manifest_201_response_all_of_t apps_create_from_manifest_201_response_all_of_t;

#include "any_type.h"



typedef struct apps_create_from_manifest_201_response_all_of_t {
    char *client_id; // string
    char *client_secret; // string
    char *webhook_secret; // string
    char *pem; // string

} apps_create_from_manifest_201_response_all_of_t;

apps_create_from_manifest_201_response_all_of_t *apps_create_from_manifest_201_response_all_of_create(
    char *client_id,
    char *client_secret,
    char *webhook_secret,
    char *pem
);

void apps_create_from_manifest_201_response_all_of_free(apps_create_from_manifest_201_response_all_of_t *apps_create_from_manifest_201_response_all_of);

apps_create_from_manifest_201_response_all_of_t *apps_create_from_manifest_201_response_all_of_parseFromJSON(cJSON *apps_create_from_manifest_201_response_all_ofJSON);

cJSON *apps_create_from_manifest_201_response_all_of_convertToJSON(apps_create_from_manifest_201_response_all_of_t *apps_create_from_manifest_201_response_all_of);

#endif /* _apps_create_from_manifest_201_response_all_of_H_ */

