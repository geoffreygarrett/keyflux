#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_protection_lock_branch.h"



branch_protection_lock_branch_t *branch_protection_lock_branch_create(
    int enabled
    ) {
    branch_protection_lock_branch_t *branch_protection_lock_branch_local_var = malloc(sizeof(branch_protection_lock_branch_t));
    if (!branch_protection_lock_branch_local_var) {
        return NULL;
    }
    branch_protection_lock_branch_local_var->enabled = enabled;

    return branch_protection_lock_branch_local_var;
}


void branch_protection_lock_branch_free(branch_protection_lock_branch_t *branch_protection_lock_branch) {
    if(NULL == branch_protection_lock_branch){
        return ;
    }
    listEntry_t *listEntry;
    free(branch_protection_lock_branch);
}

cJSON *branch_protection_lock_branch_convertToJSON(branch_protection_lock_branch_t *branch_protection_lock_branch) {
    cJSON *item = cJSON_CreateObject();

    // branch_protection_lock_branch->enabled
    if(branch_protection_lock_branch->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", branch_protection_lock_branch->enabled) == NULL) {
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

branch_protection_lock_branch_t *branch_protection_lock_branch_parseFromJSON(cJSON *branch_protection_lock_branchJSON){

    branch_protection_lock_branch_t *branch_protection_lock_branch_local_var = NULL;

    // branch_protection_lock_branch->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(branch_protection_lock_branchJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }


    branch_protection_lock_branch_local_var = branch_protection_lock_branch_create (
        enabled ? enabled->valueint : 0
        );

    return branch_protection_lock_branch_local_var;
end:
    return NULL;

}
