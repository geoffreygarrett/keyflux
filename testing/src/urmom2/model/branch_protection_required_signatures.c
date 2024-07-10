#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_protection_required_signatures.h"



branch_protection_required_signatures_t *branch_protection_required_signatures_create(
    char *url,
    int enabled
    ) {
    branch_protection_required_signatures_t *branch_protection_required_signatures_local_var = malloc(sizeof(branch_protection_required_signatures_t));
    if (!branch_protection_required_signatures_local_var) {
        return NULL;
    }
    branch_protection_required_signatures_local_var->url = url;
    branch_protection_required_signatures_local_var->enabled = enabled;

    return branch_protection_required_signatures_local_var;
}


void branch_protection_required_signatures_free(branch_protection_required_signatures_t *branch_protection_required_signatures) {
    if(NULL == branch_protection_required_signatures){
        return ;
    }
    listEntry_t *listEntry;
    if (branch_protection_required_signatures->url) {
        free(branch_protection_required_signatures->url);
        branch_protection_required_signatures->url = NULL;
    }
    free(branch_protection_required_signatures);
}

cJSON *branch_protection_required_signatures_convertToJSON(branch_protection_required_signatures_t *branch_protection_required_signatures) {
    cJSON *item = cJSON_CreateObject();

    // branch_protection_required_signatures->url
    if (!branch_protection_required_signatures->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", branch_protection_required_signatures->url) == NULL) {
    goto fail; //String
    }


    // branch_protection_required_signatures->enabled
    if (!branch_protection_required_signatures->enabled) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "enabled", branch_protection_required_signatures->enabled) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branch_protection_required_signatures_t *branch_protection_required_signatures_parseFromJSON(cJSON *branch_protection_required_signaturesJSON){

    branch_protection_required_signatures_t *branch_protection_required_signatures_local_var = NULL;

    // branch_protection_required_signatures->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(branch_protection_required_signaturesJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }

    // branch_protection_required_signatures->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(branch_protection_required_signaturesJSON, "enabled");
    if (!enabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }


    branch_protection_required_signatures_local_var = branch_protection_required_signatures_create (
        strdup(url->valuestring),
        enabled->valueint
        );

    return branch_protection_required_signatures_local_var;
end:
    return NULL;

}
