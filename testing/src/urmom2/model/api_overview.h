/*
 * api_overview.h
 *
 * Api Overview
 */

#ifndef _api_overview_H_
#define _api_overview_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct api_overview_t api_overview_t;

#include "api_overview_domains.h"
#include "api_overview_ssh_key_fingerprints.h"



typedef struct api_overview_t {
    int verifiable_password_authentication; //boolean
    struct api_overview_ssh_key_fingerprints_t *ssh_key_fingerprints; //model
    list_t *ssh_keys; //primitive container
    list_t *hooks; //primitive container
    list_t *github_enterprise_importer; //primitive container
    list_t *web; //primitive container
    list_t *api; //primitive container
    list_t *git; //primitive container
    list_t *packages; //primitive container
    list_t *pages; //primitive container
    list_t *importer; //primitive container
    list_t *actions; //primitive container
    list_t *actions_macos; //primitive container
    list_t *dependabot; //primitive container
    struct api_overview_domains_t *domains; //model

} api_overview_t;

api_overview_t *api_overview_create(
    int verifiable_password_authentication,
    api_overview_ssh_key_fingerprints_t *ssh_key_fingerprints,
    list_t *ssh_keys,
    list_t *hooks,
    list_t *github_enterprise_importer,
    list_t *web,
    list_t *api,
    list_t *git,
    list_t *packages,
    list_t *pages,
    list_t *importer,
    list_t *actions,
    list_t *actions_macos,
    list_t *dependabot,
    api_overview_domains_t *domains
);

void api_overview_free(api_overview_t *api_overview);

api_overview_t *api_overview_parseFromJSON(cJSON *api_overviewJSON);

cJSON *api_overview_convertToJSON(api_overview_t *api_overview);

#endif /* _api_overview_H_ */

