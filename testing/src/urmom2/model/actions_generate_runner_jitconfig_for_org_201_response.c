#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_generate_runner_jitconfig_for_org_201_response.h"



actions_generate_runner_jitconfig_for_org_201_response_t *actions_generate_runner_jitconfig_for_org_201_response_create(
    runner_t *runner,
    char *encoded_jit_config
    ) {
    actions_generate_runner_jitconfig_for_org_201_response_t *actions_generate_runner_jitconfig_for_org_201_response_local_var = malloc(sizeof(actions_generate_runner_jitconfig_for_org_201_response_t));
    if (!actions_generate_runner_jitconfig_for_org_201_response_local_var) {
        return NULL;
    }
    actions_generate_runner_jitconfig_for_org_201_response_local_var->runner = runner;
    actions_generate_runner_jitconfig_for_org_201_response_local_var->encoded_jit_config = encoded_jit_config;

    return actions_generate_runner_jitconfig_for_org_201_response_local_var;
}


void actions_generate_runner_jitconfig_for_org_201_response_free(actions_generate_runner_jitconfig_for_org_201_response_t *actions_generate_runner_jitconfig_for_org_201_response) {
    if(NULL == actions_generate_runner_jitconfig_for_org_201_response){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_generate_runner_jitconfig_for_org_201_response->runner) {
        runner_free(actions_generate_runner_jitconfig_for_org_201_response->runner);
        actions_generate_runner_jitconfig_for_org_201_response->runner = NULL;
    }
    if (actions_generate_runner_jitconfig_for_org_201_response->encoded_jit_config) {
        free(actions_generate_runner_jitconfig_for_org_201_response->encoded_jit_config);
        actions_generate_runner_jitconfig_for_org_201_response->encoded_jit_config = NULL;
    }
    free(actions_generate_runner_jitconfig_for_org_201_response);
}

cJSON *actions_generate_runner_jitconfig_for_org_201_response_convertToJSON(actions_generate_runner_jitconfig_for_org_201_response_t *actions_generate_runner_jitconfig_for_org_201_response) {
    cJSON *item = cJSON_CreateObject();

    // actions_generate_runner_jitconfig_for_org_201_response->runner
    if (!actions_generate_runner_jitconfig_for_org_201_response->runner) {
        goto fail;
    }
    cJSON *runner_local_JSON = runner_convertToJSON(actions_generate_runner_jitconfig_for_org_201_response->runner);
    if(runner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "runner", runner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // actions_generate_runner_jitconfig_for_org_201_response->encoded_jit_config
    if (!actions_generate_runner_jitconfig_for_org_201_response->encoded_jit_config) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "encoded_jit_config", actions_generate_runner_jitconfig_for_org_201_response->encoded_jit_config) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_generate_runner_jitconfig_for_org_201_response_t *actions_generate_runner_jitconfig_for_org_201_response_parseFromJSON(cJSON *actions_generate_runner_jitconfig_for_org_201_responseJSON){

    actions_generate_runner_jitconfig_for_org_201_response_t *actions_generate_runner_jitconfig_for_org_201_response_local_var = NULL;

    // define the local variable for actions_generate_runner_jitconfig_for_org_201_response->runner
    runner_t *runner_local_nonprim = NULL;

    // actions_generate_runner_jitconfig_for_org_201_response->runner
    cJSON *runner = cJSON_GetObjectItemCaseSensitive(actions_generate_runner_jitconfig_for_org_201_responseJSON, "runner");
    if (!runner) {
        goto end;
    }

    
    runner_local_nonprim = runner_parseFromJSON(runner); //nonprimitive

    // actions_generate_runner_jitconfig_for_org_201_response->encoded_jit_config
    cJSON *encoded_jit_config = cJSON_GetObjectItemCaseSensitive(actions_generate_runner_jitconfig_for_org_201_responseJSON, "encoded_jit_config");
    if (!encoded_jit_config) {
        goto end;
    }

    
    if(!cJSON_IsString(encoded_jit_config))
    {
    goto end; //String
    }


    actions_generate_runner_jitconfig_for_org_201_response_local_var = actions_generate_runner_jitconfig_for_org_201_response_create (
        runner_local_nonprim,
        strdup(encoded_jit_config->valuestring)
        );

    return actions_generate_runner_jitconfig_for_org_201_response_local_var;
end:
    if (runner_local_nonprim) {
        runner_free(runner_local_nonprim);
        runner_local_nonprim = NULL;
    }
    return NULL;

}
