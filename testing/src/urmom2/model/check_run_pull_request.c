#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "check_run_pull_request.h"



check_run_pull_request_t *check_run_pull_request_create(
    check_run_pull_request_base_t *base,
    check_run_pull_request_base_t *head,
    int id,
    int number,
    char *url
    ) {
    check_run_pull_request_t *check_run_pull_request_local_var = malloc(sizeof(check_run_pull_request_t));
    if (!check_run_pull_request_local_var) {
        return NULL;
    }
    check_run_pull_request_local_var->base = base;
    check_run_pull_request_local_var->head = head;
    check_run_pull_request_local_var->id = id;
    check_run_pull_request_local_var->number = number;
    check_run_pull_request_local_var->url = url;

    return check_run_pull_request_local_var;
}


void check_run_pull_request_free(check_run_pull_request_t *check_run_pull_request) {
    if(NULL == check_run_pull_request){
        return ;
    }
    listEntry_t *listEntry;
    if (check_run_pull_request->base) {
        check_run_pull_request_base_free(check_run_pull_request->base);
        check_run_pull_request->base = NULL;
    }
    if (check_run_pull_request->head) {
        check_run_pull_request_base_free(check_run_pull_request->head);
        check_run_pull_request->head = NULL;
    }
    if (check_run_pull_request->url) {
        free(check_run_pull_request->url);
        check_run_pull_request->url = NULL;
    }
    free(check_run_pull_request);
}

cJSON *check_run_pull_request_convertToJSON(check_run_pull_request_t *check_run_pull_request) {
    cJSON *item = cJSON_CreateObject();

    // check_run_pull_request->base
    if (!check_run_pull_request->base) {
        goto fail;
    }
    cJSON *base_local_JSON = check_run_pull_request_base_convertToJSON(check_run_pull_request->base);
    if(base_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "base", base_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // check_run_pull_request->head
    if (!check_run_pull_request->head) {
        goto fail;
    }
    cJSON *head_local_JSON = check_run_pull_request_base_convertToJSON(check_run_pull_request->head);
    if(head_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "head", head_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // check_run_pull_request->id
    if (!check_run_pull_request->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", check_run_pull_request->id) == NULL) {
    goto fail; //Numeric
    }


    // check_run_pull_request->number
    if (!check_run_pull_request->number) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "number", check_run_pull_request->number) == NULL) {
    goto fail; //Numeric
    }


    // check_run_pull_request->url
    if (!check_run_pull_request->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", check_run_pull_request->url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

check_run_pull_request_t *check_run_pull_request_parseFromJSON(cJSON *check_run_pull_requestJSON){

    check_run_pull_request_t *check_run_pull_request_local_var = NULL;

    // define the local variable for check_run_pull_request->base
    check_run_pull_request_base_t *base_local_nonprim = NULL;

    // define the local variable for check_run_pull_request->head
    check_run_pull_request_base_t *head_local_nonprim = NULL;

    // check_run_pull_request->base
    cJSON *base = cJSON_GetObjectItemCaseSensitive(check_run_pull_requestJSON, "base");
    if (!base) {
        goto end;
    }

    
    base_local_nonprim = check_run_pull_request_base_parseFromJSON(base); //nonprimitive

    // check_run_pull_request->head
    cJSON *head = cJSON_GetObjectItemCaseSensitive(check_run_pull_requestJSON, "head");
    if (!head) {
        goto end;
    }

    
    head_local_nonprim = check_run_pull_request_base_parseFromJSON(head); //nonprimitive

    // check_run_pull_request->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(check_run_pull_requestJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // check_run_pull_request->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(check_run_pull_requestJSON, "number");
    if (!number) {
        goto end;
    }

    
    if(!cJSON_IsNumber(number))
    {
    goto end; //Numeric
    }

    // check_run_pull_request->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(check_run_pull_requestJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }


    check_run_pull_request_local_var = check_run_pull_request_create (
        base_local_nonprim,
        head_local_nonprim,
        id->valuedouble,
        number->valuedouble,
        strdup(url->valuestring)
        );

    return check_run_pull_request_local_var;
end:
    if (base_local_nonprim) {
        check_run_pull_request_base_free(base_local_nonprim);
        base_local_nonprim = NULL;
    }
    if (head_local_nonprim) {
        check_run_pull_request_base_free(head_local_nonprim);
        head_local_nonprim = NULL;
    }
    return NULL;

}
