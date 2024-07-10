/*
 * apps_update_webhook_config_for_app_request.h
 *
 * 
 */

#ifndef _apps_update_webhook_config_for_app_request_H_
#define _apps_update_webhook_config_for_app_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apps_update_webhook_config_for_app_request_t apps_update_webhook_config_for_app_request_t;

#include "webhook_config_insecure_ssl.h"



typedef struct apps_update_webhook_config_for_app_request_t {
    char *url; // string
    char *content_type; // string
    char *secret; // string
    struct webhook_config_insecure_ssl_t *insecure_ssl; //model

} apps_update_webhook_config_for_app_request_t;

apps_update_webhook_config_for_app_request_t *apps_update_webhook_config_for_app_request_create(
    char *url,
    char *content_type,
    char *secret,
    webhook_config_insecure_ssl_t *insecure_ssl
);

void apps_update_webhook_config_for_app_request_free(apps_update_webhook_config_for_app_request_t *apps_update_webhook_config_for_app_request);

apps_update_webhook_config_for_app_request_t *apps_update_webhook_config_for_app_request_parseFromJSON(cJSON *apps_update_webhook_config_for_app_requestJSON);

cJSON *apps_update_webhook_config_for_app_request_convertToJSON(apps_update_webhook_config_for_app_request_t *apps_update_webhook_config_for_app_request);

#endif /* _apps_update_webhook_config_for_app_request_H_ */

