/*
 * api_overview_ssh_key_fingerprints.h
 *
 * 
 */

#ifndef _api_overview_ssh_key_fingerprints_H_
#define _api_overview_ssh_key_fingerprints_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct api_overview_ssh_key_fingerprints_t api_overview_ssh_key_fingerprints_t;




typedef struct api_overview_ssh_key_fingerprints_t {
    char *sha256_rsa; // string
    char *sha256_dsa; // string
    char *sha256_ecdsa; // string
    char *sha256_ed25519; // string

} api_overview_ssh_key_fingerprints_t;

api_overview_ssh_key_fingerprints_t *api_overview_ssh_key_fingerprints_create(
    char *sha256_rsa,
    char *sha256_dsa,
    char *sha256_ecdsa,
    char *sha256_ed25519
);

void api_overview_ssh_key_fingerprints_free(api_overview_ssh_key_fingerprints_t *api_overview_ssh_key_fingerprints);

api_overview_ssh_key_fingerprints_t *api_overview_ssh_key_fingerprints_parseFromJSON(cJSON *api_overview_ssh_key_fingerprintsJSON);

cJSON *api_overview_ssh_key_fingerprints_convertToJSON(api_overview_ssh_key_fingerprints_t *api_overview_ssh_key_fingerprints);

#endif /* _api_overview_ssh_key_fingerprints_H_ */

