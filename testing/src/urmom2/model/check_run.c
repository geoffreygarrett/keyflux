#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "check_run.h"


char* statuscheck_run_ToString(github_v3_rest_api_check_run_STATUS_e status) {
    char* statusArray[] =  { "NULL", "queued", "in_progress", "completed", "waiting", "requested", "pending" };
	return statusArray[status];
}

github_v3_rest_api_check_run_STATUS_e statuscheck_run_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "queued", "in_progress", "completed", "waiting", "requested", "pending" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* conclusioncheck_run_ToString(github_v3_rest_api_check_run_CONCLUSION_e conclusion) {
    char* conclusionArray[] =  { "NULL", "success", "failure", "neutral", "cancelled", "skipped", "timed_out", "action_required" };
	return conclusionArray[conclusion];
}

github_v3_rest_api_check_run_CONCLUSION_e conclusioncheck_run_FromString(char* conclusion){
    int stringToReturn = 0;
    char *conclusionArray[] =  { "NULL", "success", "failure", "neutral", "cancelled", "skipped", "timed_out", "action_required" };
    size_t sizeofArray = sizeof(conclusionArray) / sizeof(conclusionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(conclusion, conclusionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

check_run_t *check_run_create(
    int id,
    char *head_sha,
    char *node_id,
    char *external_id,
    char *url,
    char *html_url,
    char *details_url,
    github_v3_rest_api_check_run_STATUS_e status,
    github_v3_rest_api_check_run_CONCLUSION_e conclusion,
    char *started_at,
    char *completed_at,
    check_run_output_t *output,
    char *name,
    check_run_check_suite_t *check_suite,
    nullable_integration_t *app,
    list_t *pull_requests,
    deployment_simple_t *deployment
    ) {
    check_run_t *check_run_local_var = malloc(sizeof(check_run_t));
    if (!check_run_local_var) {
        return NULL;
    }
    check_run_local_var->id = id;
    check_run_local_var->head_sha = head_sha;
    check_run_local_var->node_id = node_id;
    check_run_local_var->external_id = external_id;
    check_run_local_var->url = url;
    check_run_local_var->html_url = html_url;
    check_run_local_var->details_url = details_url;
    check_run_local_var->status = status;
    check_run_local_var->conclusion = conclusion;
    check_run_local_var->started_at = started_at;
    check_run_local_var->completed_at = completed_at;
    check_run_local_var->output = output;
    check_run_local_var->name = name;
    check_run_local_var->check_suite = check_suite;
    check_run_local_var->app = app;
    check_run_local_var->pull_requests = pull_requests;
    check_run_local_var->deployment = deployment;

    return check_run_local_var;
}


void check_run_free(check_run_t *check_run) {
    if(NULL == check_run){
        return ;
    }
    listEntry_t *listEntry;
    if (check_run->head_sha) {
        free(check_run->head_sha);
        check_run->head_sha = NULL;
    }
    if (check_run->node_id) {
        free(check_run->node_id);
        check_run->node_id = NULL;
    }
    if (check_run->external_id) {
        free(check_run->external_id);
        check_run->external_id = NULL;
    }
    if (check_run->url) {
        free(check_run->url);
        check_run->url = NULL;
    }
    if (check_run->html_url) {
        free(check_run->html_url);
        check_run->html_url = NULL;
    }
    if (check_run->details_url) {
        free(check_run->details_url);
        check_run->details_url = NULL;
    }
    if (check_run->started_at) {
        free(check_run->started_at);
        check_run->started_at = NULL;
    }
    if (check_run->completed_at) {
        free(check_run->completed_at);
        check_run->completed_at = NULL;
    }
    if (check_run->output) {
        check_run_output_free(check_run->output);
        check_run->output = NULL;
    }
    if (check_run->name) {
        free(check_run->name);
        check_run->name = NULL;
    }
    if (check_run->check_suite) {
        check_run_check_suite_free(check_run->check_suite);
        check_run->check_suite = NULL;
    }
    if (check_run->app) {
        nullable_integration_free(check_run->app);
        check_run->app = NULL;
    }
    if (check_run->pull_requests) {
        list_ForEach(listEntry, check_run->pull_requests) {
            pull_request_minimal_free(listEntry->data);
        }
        list_freeList(check_run->pull_requests);
        check_run->pull_requests = NULL;
    }
    if (check_run->deployment) {
        deployment_simple_free(check_run->deployment);
        check_run->deployment = NULL;
    }
    free(check_run);
}

cJSON *check_run_convertToJSON(check_run_t *check_run) {
    cJSON *item = cJSON_CreateObject();

    // check_run->id
    if (!check_run->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", check_run->id) == NULL) {
    goto fail; //Numeric
    }


    // check_run->head_sha
    if (!check_run->head_sha) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "head_sha", check_run->head_sha) == NULL) {
    goto fail; //String
    }


    // check_run->node_id
    if (!check_run->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", check_run->node_id) == NULL) {
    goto fail; //String
    }


    // check_run->external_id
    if (!check_run->external_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "external_id", check_run->external_id) == NULL) {
    goto fail; //String
    }


    // check_run->url
    if (!check_run->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", check_run->url) == NULL) {
    goto fail; //String
    }


    // check_run->html_url
    if (!check_run->html_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "html_url", check_run->html_url) == NULL) {
    goto fail; //String
    }


    // check_run->details_url
    if (!check_run->details_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "details_url", check_run->details_url) == NULL) {
    goto fail; //String
    }


    // check_run->status
    if (github_v3_rest_api_check_run_STATUS_NULL == check_run->status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "status", statuscheck_run_ToString(check_run->status)) == NULL)
    {
    goto fail; //Enum
    }


    // check_run->conclusion
    if (github_v3_rest_api_check_run_CONCLUSION_NULL == check_run->conclusion) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "conclusion", conclusioncheck_run_ToString(check_run->conclusion)) == NULL)
    {
    goto fail; //Enum
    }


    // check_run->started_at
    if (!check_run->started_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "started_at", check_run->started_at) == NULL) {
    goto fail; //Date-Time
    }


    // check_run->completed_at
    if (!check_run->completed_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "completed_at", check_run->completed_at) == NULL) {
    goto fail; //Date-Time
    }


    // check_run->output
    if (!check_run->output) {
        goto fail;
    }
    cJSON *output_local_JSON = check_run_output_convertToJSON(check_run->output);
    if(output_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "output", output_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // check_run->name
    if (!check_run->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", check_run->name) == NULL) {
    goto fail; //String
    }


    // check_run->check_suite
    if (!check_run->check_suite) {
        goto fail;
    }
    cJSON *check_suite_local_JSON = check_run_check_suite_convertToJSON(check_run->check_suite);
    if(check_suite_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "check_suite", check_suite_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // check_run->app
    if (!check_run->app) {
        goto fail;
    }
    cJSON *app_local_JSON = nullable_integration_convertToJSON(check_run->app);
    if(app_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "app", app_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // check_run->pull_requests
    if (!check_run->pull_requests) {
        goto fail;
    }
    cJSON *pull_requests = cJSON_AddArrayToObject(item, "pull_requests");
    if(pull_requests == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *pull_requestsListEntry;
    if (check_run->pull_requests) {
    list_ForEach(pull_requestsListEntry, check_run->pull_requests) {
    cJSON *itemLocal = pull_request_minimal_convertToJSON(pull_requestsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(pull_requests, itemLocal);
    }
    }


    // check_run->deployment
    if(check_run->deployment) {
    cJSON *deployment_local_JSON = deployment_simple_convertToJSON(check_run->deployment);
    if(deployment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "deployment", deployment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

check_run_t *check_run_parseFromJSON(cJSON *check_runJSON){

    check_run_t *check_run_local_var = NULL;

    // define the local variable for check_run->output
    check_run_output_t *output_local_nonprim = NULL;

    // define the local variable for check_run->check_suite
    check_run_check_suite_t *check_suite_local_nonprim = NULL;

    // define the local variable for check_run->app
    nullable_integration_t *app_local_nonprim = NULL;

    // define the local list for check_run->pull_requests
    list_t *pull_requestsList = NULL;

    // define the local variable for check_run->deployment
    deployment_simple_t *deployment_local_nonprim = NULL;

    // check_run->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(check_runJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // check_run->head_sha
    cJSON *head_sha = cJSON_GetObjectItemCaseSensitive(check_runJSON, "head_sha");
    if (!head_sha) {
        goto end;
    }

    
    if(!cJSON_IsString(head_sha))
    {
    goto end; //String
    }

    // check_run->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(check_runJSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // check_run->external_id
    cJSON *external_id = cJSON_GetObjectItemCaseSensitive(check_runJSON, "external_id");
    if (!external_id) {
        goto end;
    }

    
    if(!cJSON_IsString(external_id))
    {
    goto end; //String
    }

    // check_run->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(check_runJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }

    // check_run->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(check_runJSON, "html_url");
    if (!html_url) {
        goto end;
    }

    
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }

    // check_run->details_url
    cJSON *details_url = cJSON_GetObjectItemCaseSensitive(check_runJSON, "details_url");
    if (!details_url) {
        goto end;
    }

    
    if(!cJSON_IsString(details_url))
    {
    goto end; //String
    }

    // check_run->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(check_runJSON, "status");
    if (!status) {
        goto end;
    }

    github_v3_rest_api_check_run_STATUS_e statusVariable;
    
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = statuscheck_run_FromString(status->valuestring);

    // check_run->conclusion
    cJSON *conclusion = cJSON_GetObjectItemCaseSensitive(check_runJSON, "conclusion");
    if (!conclusion) {
        goto end;
    }

    github_v3_rest_api_check_run_CONCLUSION_e conclusionVariable;
    
    if(!cJSON_IsString(conclusion))
    {
    goto end; //Enum
    }
    conclusionVariable = conclusioncheck_run_FromString(conclusion->valuestring);

    // check_run->started_at
    cJSON *started_at = cJSON_GetObjectItemCaseSensitive(check_runJSON, "started_at");
    if (!started_at) {
        goto end;
    }

    
    if(!cJSON_IsString(started_at))
    {
    goto end; //DateTime
    }

    // check_run->completed_at
    cJSON *completed_at = cJSON_GetObjectItemCaseSensitive(check_runJSON, "completed_at");
    if (!completed_at) {
        goto end;
    }

    
    if(!cJSON_IsString(completed_at))
    {
    goto end; //DateTime
    }

    // check_run->output
    cJSON *output = cJSON_GetObjectItemCaseSensitive(check_runJSON, "output");
    if (!output) {
        goto end;
    }

    
    output_local_nonprim = check_run_output_parseFromJSON(output); //nonprimitive

    // check_run->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(check_runJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // check_run->check_suite
    cJSON *check_suite = cJSON_GetObjectItemCaseSensitive(check_runJSON, "check_suite");
    if (!check_suite) {
        goto end;
    }

    
    check_suite_local_nonprim = check_run_check_suite_parseFromJSON(check_suite); //nonprimitive

    // check_run->app
    cJSON *app = cJSON_GetObjectItemCaseSensitive(check_runJSON, "app");
    if (!app) {
        goto end;
    }

    
    app_local_nonprim = nullable_integration_parseFromJSON(app); //nonprimitive

    // check_run->pull_requests
    cJSON *pull_requests = cJSON_GetObjectItemCaseSensitive(check_runJSON, "pull_requests");
    if (!pull_requests) {
        goto end;
    }

    
    cJSON *pull_requests_local_nonprimitive = NULL;
    if(!cJSON_IsArray(pull_requests)){
        goto end; //nonprimitive container
    }

    pull_requestsList = list_createList();

    cJSON_ArrayForEach(pull_requests_local_nonprimitive,pull_requests )
    {
        if(!cJSON_IsObject(pull_requests_local_nonprimitive)){
            goto end;
        }
        pull_request_minimal_t *pull_requestsItem = pull_request_minimal_parseFromJSON(pull_requests_local_nonprimitive);

        list_addElement(pull_requestsList, pull_requestsItem);
    }

    // check_run->deployment
    cJSON *deployment = cJSON_GetObjectItemCaseSensitive(check_runJSON, "deployment");
    if (deployment) { 
    deployment_local_nonprim = deployment_simple_parseFromJSON(deployment); //nonprimitive
    }


    check_run_local_var = check_run_create (
        id->valuedouble,
        strdup(head_sha->valuestring),
        strdup(node_id->valuestring),
        strdup(external_id->valuestring),
        strdup(url->valuestring),
        strdup(html_url->valuestring),
        strdup(details_url->valuestring),
        statusVariable,
        conclusionVariable,
        strdup(started_at->valuestring),
        strdup(completed_at->valuestring),
        output_local_nonprim,
        strdup(name->valuestring),
        check_suite_local_nonprim,
        app_local_nonprim,
        pull_requestsList,
        deployment ? deployment_local_nonprim : NULL
        );

    return check_run_local_var;
end:
    if (output_local_nonprim) {
        check_run_output_free(output_local_nonprim);
        output_local_nonprim = NULL;
    }
    if (check_suite_local_nonprim) {
        check_run_check_suite_free(check_suite_local_nonprim);
        check_suite_local_nonprim = NULL;
    }
    if (app_local_nonprim) {
        nullable_integration_free(app_local_nonprim);
        app_local_nonprim = NULL;
    }
    if (pull_requestsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, pull_requestsList) {
            pull_request_minimal_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(pull_requestsList);
        pull_requestsList = NULL;
    }
    if (deployment_local_nonprim) {
        deployment_simple_free(deployment_local_nonprim);
        deployment_local_nonprim = NULL;
    }
    return NULL;

}
