#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_billing_usage_minutes_used_breakdown.h"



actions_billing_usage_minutes_used_breakdown_t *actions_billing_usage_minutes_used_breakdown_create(
    int ubuntu,
    int macos,
    int windows,
    int ubuntu_4_core,
    int ubuntu_8_core,
    int ubuntu_16_core,
    int ubuntu_32_core,
    int ubuntu_64_core,
    int windows_4_core,
    int windows_8_core,
    int windows_16_core,
    int windows_32_core,
    int windows_64_core,
    int macos_12_core,
    int total
    ) {
    actions_billing_usage_minutes_used_breakdown_t *actions_billing_usage_minutes_used_breakdown_local_var = malloc(sizeof(actions_billing_usage_minutes_used_breakdown_t));
    if (!actions_billing_usage_minutes_used_breakdown_local_var) {
        return NULL;
    }
    actions_billing_usage_minutes_used_breakdown_local_var->ubuntu = ubuntu;
    actions_billing_usage_minutes_used_breakdown_local_var->macos = macos;
    actions_billing_usage_minutes_used_breakdown_local_var->windows = windows;
    actions_billing_usage_minutes_used_breakdown_local_var->ubuntu_4_core = ubuntu_4_core;
    actions_billing_usage_minutes_used_breakdown_local_var->ubuntu_8_core = ubuntu_8_core;
    actions_billing_usage_minutes_used_breakdown_local_var->ubuntu_16_core = ubuntu_16_core;
    actions_billing_usage_minutes_used_breakdown_local_var->ubuntu_32_core = ubuntu_32_core;
    actions_billing_usage_minutes_used_breakdown_local_var->ubuntu_64_core = ubuntu_64_core;
    actions_billing_usage_minutes_used_breakdown_local_var->windows_4_core = windows_4_core;
    actions_billing_usage_minutes_used_breakdown_local_var->windows_8_core = windows_8_core;
    actions_billing_usage_minutes_used_breakdown_local_var->windows_16_core = windows_16_core;
    actions_billing_usage_minutes_used_breakdown_local_var->windows_32_core = windows_32_core;
    actions_billing_usage_minutes_used_breakdown_local_var->windows_64_core = windows_64_core;
    actions_billing_usage_minutes_used_breakdown_local_var->macos_12_core = macos_12_core;
    actions_billing_usage_minutes_used_breakdown_local_var->total = total;

    return actions_billing_usage_minutes_used_breakdown_local_var;
}


void actions_billing_usage_minutes_used_breakdown_free(actions_billing_usage_minutes_used_breakdown_t *actions_billing_usage_minutes_used_breakdown) {
    if(NULL == actions_billing_usage_minutes_used_breakdown){
        return ;
    }
    listEntry_t *listEntry;
    free(actions_billing_usage_minutes_used_breakdown);
}

cJSON *actions_billing_usage_minutes_used_breakdown_convertToJSON(actions_billing_usage_minutes_used_breakdown_t *actions_billing_usage_minutes_used_breakdown) {
    cJSON *item = cJSON_CreateObject();

    // actions_billing_usage_minutes_used_breakdown->ubuntu
    if(actions_billing_usage_minutes_used_breakdown->ubuntu) {
    if(cJSON_AddNumberToObject(item, "UBUNTU", actions_billing_usage_minutes_used_breakdown->ubuntu) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->macos
    if(actions_billing_usage_minutes_used_breakdown->macos) {
    if(cJSON_AddNumberToObject(item, "MACOS", actions_billing_usage_minutes_used_breakdown->macos) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->windows
    if(actions_billing_usage_minutes_used_breakdown->windows) {
    if(cJSON_AddNumberToObject(item, "WINDOWS", actions_billing_usage_minutes_used_breakdown->windows) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->ubuntu_4_core
    if(actions_billing_usage_minutes_used_breakdown->ubuntu_4_core) {
    if(cJSON_AddNumberToObject(item, "ubuntu_4_core", actions_billing_usage_minutes_used_breakdown->ubuntu_4_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->ubuntu_8_core
    if(actions_billing_usage_minutes_used_breakdown->ubuntu_8_core) {
    if(cJSON_AddNumberToObject(item, "ubuntu_8_core", actions_billing_usage_minutes_used_breakdown->ubuntu_8_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->ubuntu_16_core
    if(actions_billing_usage_minutes_used_breakdown->ubuntu_16_core) {
    if(cJSON_AddNumberToObject(item, "ubuntu_16_core", actions_billing_usage_minutes_used_breakdown->ubuntu_16_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->ubuntu_32_core
    if(actions_billing_usage_minutes_used_breakdown->ubuntu_32_core) {
    if(cJSON_AddNumberToObject(item, "ubuntu_32_core", actions_billing_usage_minutes_used_breakdown->ubuntu_32_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->ubuntu_64_core
    if(actions_billing_usage_minutes_used_breakdown->ubuntu_64_core) {
    if(cJSON_AddNumberToObject(item, "ubuntu_64_core", actions_billing_usage_minutes_used_breakdown->ubuntu_64_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->windows_4_core
    if(actions_billing_usage_minutes_used_breakdown->windows_4_core) {
    if(cJSON_AddNumberToObject(item, "windows_4_core", actions_billing_usage_minutes_used_breakdown->windows_4_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->windows_8_core
    if(actions_billing_usage_minutes_used_breakdown->windows_8_core) {
    if(cJSON_AddNumberToObject(item, "windows_8_core", actions_billing_usage_minutes_used_breakdown->windows_8_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->windows_16_core
    if(actions_billing_usage_minutes_used_breakdown->windows_16_core) {
    if(cJSON_AddNumberToObject(item, "windows_16_core", actions_billing_usage_minutes_used_breakdown->windows_16_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->windows_32_core
    if(actions_billing_usage_minutes_used_breakdown->windows_32_core) {
    if(cJSON_AddNumberToObject(item, "windows_32_core", actions_billing_usage_minutes_used_breakdown->windows_32_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->windows_64_core
    if(actions_billing_usage_minutes_used_breakdown->windows_64_core) {
    if(cJSON_AddNumberToObject(item, "windows_64_core", actions_billing_usage_minutes_used_breakdown->windows_64_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->macos_12_core
    if(actions_billing_usage_minutes_used_breakdown->macos_12_core) {
    if(cJSON_AddNumberToObject(item, "macos_12_core", actions_billing_usage_minutes_used_breakdown->macos_12_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // actions_billing_usage_minutes_used_breakdown->total
    if(actions_billing_usage_minutes_used_breakdown->total) {
    if(cJSON_AddNumberToObject(item, "total", actions_billing_usage_minutes_used_breakdown->total) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_billing_usage_minutes_used_breakdown_t *actions_billing_usage_minutes_used_breakdown_parseFromJSON(cJSON *actions_billing_usage_minutes_used_breakdownJSON){

    actions_billing_usage_minutes_used_breakdown_t *actions_billing_usage_minutes_used_breakdown_local_var = NULL;

    // actions_billing_usage_minutes_used_breakdown->ubuntu
    cJSON *ubuntu = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "UBUNTU");
    if (ubuntu) { 
    if(!cJSON_IsNumber(ubuntu))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->macos
    cJSON *macos = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "MACOS");
    if (macos) { 
    if(!cJSON_IsNumber(macos))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->windows
    cJSON *windows = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "WINDOWS");
    if (windows) { 
    if(!cJSON_IsNumber(windows))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->ubuntu_4_core
    cJSON *ubuntu_4_core = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "ubuntu_4_core");
    if (ubuntu_4_core) { 
    if(!cJSON_IsNumber(ubuntu_4_core))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->ubuntu_8_core
    cJSON *ubuntu_8_core = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "ubuntu_8_core");
    if (ubuntu_8_core) { 
    if(!cJSON_IsNumber(ubuntu_8_core))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->ubuntu_16_core
    cJSON *ubuntu_16_core = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "ubuntu_16_core");
    if (ubuntu_16_core) { 
    if(!cJSON_IsNumber(ubuntu_16_core))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->ubuntu_32_core
    cJSON *ubuntu_32_core = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "ubuntu_32_core");
    if (ubuntu_32_core) { 
    if(!cJSON_IsNumber(ubuntu_32_core))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->ubuntu_64_core
    cJSON *ubuntu_64_core = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "ubuntu_64_core");
    if (ubuntu_64_core) { 
    if(!cJSON_IsNumber(ubuntu_64_core))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->windows_4_core
    cJSON *windows_4_core = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "windows_4_core");
    if (windows_4_core) { 
    if(!cJSON_IsNumber(windows_4_core))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->windows_8_core
    cJSON *windows_8_core = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "windows_8_core");
    if (windows_8_core) { 
    if(!cJSON_IsNumber(windows_8_core))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->windows_16_core
    cJSON *windows_16_core = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "windows_16_core");
    if (windows_16_core) { 
    if(!cJSON_IsNumber(windows_16_core))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->windows_32_core
    cJSON *windows_32_core = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "windows_32_core");
    if (windows_32_core) { 
    if(!cJSON_IsNumber(windows_32_core))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->windows_64_core
    cJSON *windows_64_core = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "windows_64_core");
    if (windows_64_core) { 
    if(!cJSON_IsNumber(windows_64_core))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->macos_12_core
    cJSON *macos_12_core = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "macos_12_core");
    if (macos_12_core) { 
    if(!cJSON_IsNumber(macos_12_core))
    {
    goto end; //Numeric
    }
    }

    // actions_billing_usage_minutes_used_breakdown->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(actions_billing_usage_minutes_used_breakdownJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }


    actions_billing_usage_minutes_used_breakdown_local_var = actions_billing_usage_minutes_used_breakdown_create (
        ubuntu ? ubuntu->valuedouble : 0,
        macos ? macos->valuedouble : 0,
        windows ? windows->valuedouble : 0,
        ubuntu_4_core ? ubuntu_4_core->valuedouble : 0,
        ubuntu_8_core ? ubuntu_8_core->valuedouble : 0,
        ubuntu_16_core ? ubuntu_16_core->valuedouble : 0,
        ubuntu_32_core ? ubuntu_32_core->valuedouble : 0,
        ubuntu_64_core ? ubuntu_64_core->valuedouble : 0,
        windows_4_core ? windows_4_core->valuedouble : 0,
        windows_8_core ? windows_8_core->valuedouble : 0,
        windows_16_core ? windows_16_core->valuedouble : 0,
        windows_32_core ? windows_32_core->valuedouble : 0,
        windows_64_core ? windows_64_core->valuedouble : 0,
        macos_12_core ? macos_12_core->valuedouble : 0,
        total ? total->valuedouble : 0
        );

    return actions_billing_usage_minutes_used_breakdown_local_var;
end:
    return NULL;

}
