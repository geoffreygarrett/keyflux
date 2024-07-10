#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_short.h"



branch_short_t *branch_short_create(
    char *name,
    branch_short_commit_t *commit,
    int _protected
    ) {
    branch_short_t *branch_short_local_var = malloc(sizeof(branch_short_t));
    if (!branch_short_local_var) {
        return NULL;
    }
    branch_short_local_var->name = name;
    branch_short_local_var->commit = commit;
    branch_short_local_var->_protected = _protected;

    return branch_short_local_var;
}


void branch_short_free(branch_short_t *branch_short) {
    if(NULL == branch_short){
        return ;
    }
    listEntry_t *listEntry;
    if (branch_short->name) {
        free(branch_short->name);
        branch_short->name = NULL;
    }
    if (branch_short->commit) {
        branch_short_commit_free(branch_short->commit);
        branch_short->commit = NULL;
    }
    free(branch_short);
}

cJSON *branch_short_convertToJSON(branch_short_t *branch_short) {
    cJSON *item = cJSON_CreateObject();

    // branch_short->name
    if (!branch_short->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", branch_short->name) == NULL) {
    goto fail; //String
    }


    // branch_short->commit
    if (!branch_short->commit) {
        goto fail;
    }
    cJSON *commit_local_JSON = branch_short_commit_convertToJSON(branch_short->commit);
    if(commit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "commit", commit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // branch_short->_protected
    if (!branch_short->_protected) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "protected", branch_short->_protected) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branch_short_t *branch_short_parseFromJSON(cJSON *branch_shortJSON){

    branch_short_t *branch_short_local_var = NULL;

    // define the local variable for branch_short->commit
    branch_short_commit_t *commit_local_nonprim = NULL;

    // branch_short->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(branch_shortJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // branch_short->commit
    cJSON *commit = cJSON_GetObjectItemCaseSensitive(branch_shortJSON, "commit");
    if (!commit) {
        goto end;
    }

    
    commit_local_nonprim = branch_short_commit_parseFromJSON(commit); //nonprimitive

    // branch_short->_protected
    cJSON *_protected = cJSON_GetObjectItemCaseSensitive(branch_shortJSON, "protected");
    if (!_protected) {
        goto end;
    }

    
    if(!cJSON_IsBool(_protected))
    {
    goto end; //Bool
    }


    branch_short_local_var = branch_short_create (
        strdup(name->valuestring),
        commit_local_nonprim,
        _protected->valueint
        );

    return branch_short_local_var;
end:
    if (commit_local_nonprim) {
        branch_short_commit_free(commit_local_nonprim);
        commit_local_nonprim = NULL;
    }
    return NULL;

}
