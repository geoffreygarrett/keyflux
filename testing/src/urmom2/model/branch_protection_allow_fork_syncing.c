#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_protection_allow_fork_syncing.h"



branch_protection_allow_fork_syncing_t *branch_protection_allow_fork_syncing_create(
    int enabled
    ) {
    branch_protection_allow_fork_syncing_t *branch_protection_allow_fork_syncing_local_var = malloc(sizeof(branch_protection_allow_fork_syncing_t));
    if (!branch_protection_allow_fork_syncing_local_var) {
        return NULL;
    }
    branch_protection_allow_fork_syncing_local_var->enabled = enabled;

    return branch_protection_allow_fork_syncing_local_var;
}


void branch_protection_allow_fork_syncing_free(branch_protection_allow_fork_syncing_t *branch_protection_allow_fork_syncing) {
    if(NULL == branch_protection_allow_fork_syncing){
        return ;
    }
    listEntry_t *listEntry;
    free(branch_protection_allow_fork_syncing);
}

cJSON *branch_protection_allow_fork_syncing_convertToJSON(branch_protection_allow_fork_syncing_t *branch_protection_allow_fork_syncing) {
    cJSON *item = cJSON_CreateObject();

    // branch_protection_allow_fork_syncing->enabled
    if(branch_protection_allow_fork_syncing->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", branch_protection_allow_fork_syncing->enabled) == NULL) {
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

branch_protection_allow_fork_syncing_t *branch_protection_allow_fork_syncing_parseFromJSON(cJSON *branch_protection_allow_fork_syncingJSON){

    branch_protection_allow_fork_syncing_t *branch_protection_allow_fork_syncing_local_var = NULL;

    // branch_protection_allow_fork_syncing->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(branch_protection_allow_fork_syncingJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }


    branch_protection_allow_fork_syncing_local_var = branch_protection_allow_fork_syncing_create (
        enabled ? enabled->valueint : 0
        );

    return branch_protection_allow_fork_syncing_local_var;
end:
    return NULL;

}
