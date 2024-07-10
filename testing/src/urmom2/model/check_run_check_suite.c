#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "check_run_check_suite.h"



check_run_check_suite_t *check_run_check_suite_create(
    int id
    ) {
    check_run_check_suite_t *check_run_check_suite_local_var = malloc(sizeof(check_run_check_suite_t));
    if (!check_run_check_suite_local_var) {
        return NULL;
    }
    check_run_check_suite_local_var->id = id;

    return check_run_check_suite_local_var;
}


void check_run_check_suite_free(check_run_check_suite_t *check_run_check_suite) {
    if(NULL == check_run_check_suite){
        return ;
    }
    listEntry_t *listEntry;
    free(check_run_check_suite);
}

cJSON *check_run_check_suite_convertToJSON(check_run_check_suite_t *check_run_check_suite) {
    cJSON *item = cJSON_CreateObject();

    // check_run_check_suite->id
    if (!check_run_check_suite->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", check_run_check_suite->id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

check_run_check_suite_t *check_run_check_suite_parseFromJSON(cJSON *check_run_check_suiteJSON){

    check_run_check_suite_t *check_run_check_suite_local_var = NULL;

    // check_run_check_suite->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(check_run_check_suiteJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }


    check_run_check_suite_local_var = check_run_check_suite_create (
        id->valuedouble
        );

    return check_run_check_suite_local_var;
end:
    return NULL;

}
