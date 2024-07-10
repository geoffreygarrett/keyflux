#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_protection_required_linear_history.h"



branch_protection_required_linear_history_t *branch_protection_required_linear_history_create(
    int enabled
    ) {
    branch_protection_required_linear_history_t *branch_protection_required_linear_history_local_var = malloc(sizeof(branch_protection_required_linear_history_t));
    if (!branch_protection_required_linear_history_local_var) {
        return NULL;
    }
    branch_protection_required_linear_history_local_var->enabled = enabled;

    return branch_protection_required_linear_history_local_var;
}


void branch_protection_required_linear_history_free(branch_protection_required_linear_history_t *branch_protection_required_linear_history) {
    if(NULL == branch_protection_required_linear_history){
        return ;
    }
    listEntry_t *listEntry;
    free(branch_protection_required_linear_history);
}

cJSON *branch_protection_required_linear_history_convertToJSON(branch_protection_required_linear_history_t *branch_protection_required_linear_history) {
    cJSON *item = cJSON_CreateObject();

    // branch_protection_required_linear_history->enabled
    if(branch_protection_required_linear_history->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", branch_protection_required_linear_history->enabled) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branch_protection_required_linear_history_t *branch_protection_required_linear_history_parseFromJSON(cJSON *branch_protection_required_linear_historyJSON){

    branch_protection_required_linear_history_t *branch_protection_required_linear_history_local_var = NULL;

    // branch_protection_required_linear_history->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(branch_protection_required_linear_historyJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }


    branch_protection_required_linear_history_local_var = branch_protection_required_linear_history_create (
        enabled ? enabled->valueint : 0
        );

    return branch_protection_required_linear_history_local_var;
end:
    return NULL;

}
