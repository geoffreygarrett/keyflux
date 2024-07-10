#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "check_automated_security_fixes.h"



check_automated_security_fixes_t *check_automated_security_fixes_create(
    int enabled,
    int paused
    ) {
    check_automated_security_fixes_t *check_automated_security_fixes_local_var = malloc(sizeof(check_automated_security_fixes_t));
    if (!check_automated_security_fixes_local_var) {
        return NULL;
    }
    check_automated_security_fixes_local_var->enabled = enabled;
    check_automated_security_fixes_local_var->paused = paused;

    return check_automated_security_fixes_local_var;
}


void check_automated_security_fixes_free(check_automated_security_fixes_t *check_automated_security_fixes) {
    if(NULL == check_automated_security_fixes){
        return ;
    }
    listEntry_t *listEntry;
    free(check_automated_security_fixes);
}

cJSON *check_automated_security_fixes_convertToJSON(check_automated_security_fixes_t *check_automated_security_fixes) {
    cJSON *item = cJSON_CreateObject();

    // check_automated_security_fixes->enabled
    if (!check_automated_security_fixes->enabled) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "enabled", check_automated_security_fixes->enabled) == NULL) {
    goto fail; //Bool
    }


    // check_automated_security_fixes->paused
    if (!check_automated_security_fixes->paused) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "paused", check_automated_security_fixes->paused) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

check_automated_security_fixes_t *check_automated_security_fixes_parseFromJSON(cJSON *check_automated_security_fixesJSON){

    check_automated_security_fixes_t *check_automated_security_fixes_local_var = NULL;

    // check_automated_security_fixes->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(check_automated_security_fixesJSON, "enabled");
    if (!enabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }

    // check_automated_security_fixes->paused
    cJSON *paused = cJSON_GetObjectItemCaseSensitive(check_automated_security_fixesJSON, "paused");
    if (!paused) {
        goto end;
    }

    
    if(!cJSON_IsBool(paused))
    {
    goto end; //Bool
    }


    check_automated_security_fixes_local_var = check_automated_security_fixes_create (
        enabled->valueint,
        paused->valueint
        );

    return check_automated_security_fixes_local_var;
end:
    return NULL;

}
