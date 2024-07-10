/*
 * branch_protection_required_linear_history.h
 *
 * 
 */

#ifndef _branch_protection_required_linear_history_H_
#define _branch_protection_required_linear_history_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branch_protection_required_linear_history_t branch_protection_required_linear_history_t;




typedef struct branch_protection_required_linear_history_t {
    int enabled; //boolean

} branch_protection_required_linear_history_t;

branch_protection_required_linear_history_t *branch_protection_required_linear_history_create(
    int enabled
);

void branch_protection_required_linear_history_free(branch_protection_required_linear_history_t *branch_protection_required_linear_history);

branch_protection_required_linear_history_t *branch_protection_required_linear_history_parseFromJSON(cJSON *branch_protection_required_linear_historyJSON);

cJSON *branch_protection_required_linear_history_convertToJSON(branch_protection_required_linear_history_t *branch_protection_required_linear_history);

#endif /* _branch_protection_required_linear_history_H_ */

