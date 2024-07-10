/*
 * branch_protection_required_signatures.h
 *
 * 
 */

#ifndef _branch_protection_required_signatures_H_
#define _branch_protection_required_signatures_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_protection_required_signatures_t branch_protection_required_signatures_t;




typedef struct branch_protection_required_signatures_t {
    char *url; // string
    int enabled; //boolean

} branch_protection_required_signatures_t;

branch_protection_required_signatures_t *branch_protection_required_signatures_create(
    char *url,
    int enabled
);

void branch_protection_required_signatures_free(branch_protection_required_signatures_t *branch_protection_required_signatures);

branch_protection_required_signatures_t *branch_protection_required_signatures_parseFromJSON(cJSON *branch_protection_required_signaturesJSON);

cJSON *branch_protection_required_signatures_convertToJSON(branch_protection_required_signatures_t *branch_protection_required_signatures);

#endif /* _branch_protection_required_signatures_H_ */

