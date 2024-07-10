/*
 * check_automated_security_fixes.h
 *
 * Check Automated Security Fixes
 */

#ifndef _check_automated_security_fixes_H_
#define _check_automated_security_fixes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct check_automated_security_fixes_t check_automated_security_fixes_t;




typedef struct check_automated_security_fixes_t {
    int enabled; //boolean
    int paused; //boolean

} check_automated_security_fixes_t;

check_automated_security_fixes_t *check_automated_security_fixes_create(
    int enabled,
    int paused
);

void check_automated_security_fixes_free(check_automated_security_fixes_t *check_automated_security_fixes);

check_automated_security_fixes_t *check_automated_security_fixes_parseFromJSON(cJSON *check_automated_security_fixesJSON);

cJSON *check_automated_security_fixes_convertToJSON(check_automated_security_fixes_t *check_automated_security_fixes);

#endif /* _check_automated_security_fixes_H_ */

