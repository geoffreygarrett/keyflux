/*
 * api_overview_domains.h
 *
 * 
 */

#ifndef _api_overview_domains_H_
#define _api_overview_domains_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct api_overview_domains_t api_overview_domains_t;




typedef struct api_overview_domains_t {
    list_t *website; //primitive container
    list_t *codespaces; //primitive container
    list_t *copilot; //primitive container
    list_t *packages; //primitive container
    list_t *actions; //primitive container

} api_overview_domains_t;

api_overview_domains_t *api_overview_domains_create(
    list_t *website,
    list_t *codespaces,
    list_t *copilot,
    list_t *packages,
    list_t *actions
);

void api_overview_domains_free(api_overview_domains_t *api_overview_domains);

api_overview_domains_t *api_overview_domains_parseFromJSON(cJSON *api_overview_domainsJSON);

cJSON *api_overview_domains_convertToJSON(api_overview_domains_t *api_overview_domains);

#endif /* _api_overview_domains_H_ */

