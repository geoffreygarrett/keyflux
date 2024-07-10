#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actions_billing_usage.h"



actions_billing_usage_t *actions_billing_usage_create(
    int total_minutes_used,
    int total_paid_minutes_used,
    int included_minutes,
    actions_billing_usage_minutes_used_breakdown_t *minutes_used_breakdown
    ) {
    actions_billing_usage_t *actions_billing_usage_local_var = malloc(sizeof(actions_billing_usage_t));
    if (!actions_billing_usage_local_var) {
        return NULL;
    }
    actions_billing_usage_local_var->total_minutes_used = total_minutes_used;
    actions_billing_usage_local_var->total_paid_minutes_used = total_paid_minutes_used;
    actions_billing_usage_local_var->included_minutes = included_minutes;
    actions_billing_usage_local_var->minutes_used_breakdown = minutes_used_breakdown;

    return actions_billing_usage_local_var;
}


void actions_billing_usage_free(actions_billing_usage_t *actions_billing_usage) {
    if(NULL == actions_billing_usage){
        return ;
    }
    listEntry_t *listEntry;
    if (actions_billing_usage->minutes_used_breakdown) {
        actions_billing_usage_minutes_used_breakdown_free(actions_billing_usage->minutes_used_breakdown);
        actions_billing_usage->minutes_used_breakdown = NULL;
    }
    free(actions_billing_usage);
}

cJSON *actions_billing_usage_convertToJSON(actions_billing_usage_t *actions_billing_usage) {
    cJSON *item = cJSON_CreateObject();

    // actions_billing_usage->total_minutes_used
    if (!actions_billing_usage->total_minutes_used) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_minutes_used", actions_billing_usage->total_minutes_used) == NULL) {
    goto fail; //Numeric
    }


    // actions_billing_usage->total_paid_minutes_used
    if (!actions_billing_usage->total_paid_minutes_used) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "total_paid_minutes_used", actions_billing_usage->total_paid_minutes_used) == NULL) {
    goto fail; //Numeric
    }


    // actions_billing_usage->included_minutes
    if (!actions_billing_usage->included_minutes) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "included_minutes", actions_billing_usage->included_minutes) == NULL) {
    goto fail; //Numeric
    }


    // actions_billing_usage->minutes_used_breakdown
    if (!actions_billing_usage->minutes_used_breakdown) {
        goto fail;
    }
    cJSON *minutes_used_breakdown_local_JSON = actions_billing_usage_minutes_used_breakdown_convertToJSON(actions_billing_usage->minutes_used_breakdown);
    if(minutes_used_breakdown_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "minutes_used_breakdown", minutes_used_breakdown_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actions_billing_usage_t *actions_billing_usage_parseFromJSON(cJSON *actions_billing_usageJSON){

    actions_billing_usage_t *actions_billing_usage_local_var = NULL;

    // define the local variable for actions_billing_usage->minutes_used_breakdown
    actions_billing_usage_minutes_used_breakdown_t *minutes_used_breakdown_local_nonprim = NULL;

    // actions_billing_usage->total_minutes_used
    cJSON *total_minutes_used = cJSON_GetObjectItemCaseSensitive(actions_billing_usageJSON, "total_minutes_used");
    if (!total_minutes_used) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_minutes_used))
    {
    goto end; //Numeric
    }

    // actions_billing_usage->total_paid_minutes_used
    cJSON *total_paid_minutes_used = cJSON_GetObjectItemCaseSensitive(actions_billing_usageJSON, "total_paid_minutes_used");
    if (!total_paid_minutes_used) {
        goto end;
    }

    
    if(!cJSON_IsNumber(total_paid_minutes_used))
    {
    goto end; //Numeric
    }

    // actions_billing_usage->included_minutes
    cJSON *included_minutes = cJSON_GetObjectItemCaseSensitive(actions_billing_usageJSON, "included_minutes");
    if (!included_minutes) {
        goto end;
    }

    
    if(!cJSON_IsNumber(included_minutes))
    {
    goto end; //Numeric
    }

    // actions_billing_usage->minutes_used_breakdown
    cJSON *minutes_used_breakdown = cJSON_GetObjectItemCaseSensitive(actions_billing_usageJSON, "minutes_used_breakdown");
    if (!minutes_used_breakdown) {
        goto end;
    }

    
    minutes_used_breakdown_local_nonprim = actions_billing_usage_minutes_used_breakdown_parseFromJSON(minutes_used_breakdown); //nonprimitive


    actions_billing_usage_local_var = actions_billing_usage_create (
        total_minutes_used->valuedouble,
        total_paid_minutes_used->valuedouble,
        included_minutes->valuedouble,
        minutes_used_breakdown_local_nonprim
        );

    return actions_billing_usage_local_var;
end:
    if (minutes_used_breakdown_local_nonprim) {
        actions_billing_usage_minutes_used_breakdown_free(minutes_used_breakdown_local_nonprim);
        minutes_used_breakdown_local_nonprim = NULL;
    }
    return NULL;

}
