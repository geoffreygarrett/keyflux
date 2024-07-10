#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "check_run_with_simple_check_suite.h"


char* conclusioncheck_run_with_simple_check_suite_ToString(github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_e conclusion) {
    char* conclusionArray[] =  { "NULL", "waiting", "pending", "startup_failure", "stale", "success", "failure", "neutral", "cancelled", "skipped", "timed_out", "action_required" };
	return conclusionArray[conclusion];
}

github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_e conclusioncheck_run_with_simple_check_suite_FromString(char* conclusion){
    int stringToReturn = 0;
    char *conclusionArray[] =  { "NULL", "waiting", "pending", "startup_failure", "stale", "success", "failure", "neutral", "cancelled", "skipped", "timed_out", "action_required" };
    size_t sizeofArray = sizeof(conclusionArray) / sizeof(conclusionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(conclusion, conclusionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* statuscheck_run_with_simple_check_suite_ToString(github_v3_rest_api_check_run_with_simple_check_suite_STATUS_e status) {
    char* statusArray[] =  { "NULL", "queued", "in_progress", "completed", "pending" };
	return statusArray[status];
}

github_v3_rest_api_check_run_with_simple_check_suite_STATUS_e statuscheck_run_with_simple_check_suite_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "queued", "in_progress", "completed", "pending" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

check_run_with_simple_check_suite_t *check_run_with_simple_check_suite_create(
    nullable_integration_t *app,
    simple_check_suite_t *check_suite,
    char *completed_at,
    github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_e conclusion,
    deployment_simple_t *deployment,
    char *details_url,
    char *external_id,
    char *head_sha,
    char *html_url,
    int id,
    char *name,
    char *node_id,
    check_run_with_simple_check_suite_output_t *output,
    list_t *pull_requests,
    char *started_at,
    github_v3_rest_api_check_run_with_simple_check_suite_STATUS_e status,
    char *url
    ) {
    check_run_with_simple_check_suite_t *check_run_with_simple_check_suite_local_var = malloc(sizeof(check_run_with_simple_check_suite_t));
    if (!check_run_with_simple_check_suite_local_var) {
        return NULL;
    }
    check_run_with_simple_check_suite_local_var->app = app;
    check_run_with_simple_check_suite_local_var->check_suite = check_suite;
    check_run_with_simple_check_suite_local_var->completed_at = completed_at;
    check_run_with_simple_check_suite_local_var->conclusion = conclusion;
    check_run_with_simple_check_suite_local_var->deployment = deployment;
    check_run_with_simple_check_suite_local_var->details_url = details_url;
    check_run_with_simple_check_suite_local_var->external_id = external_id;
    check_run_with_simple_check_suite_local_var->head_sha = head_sha;
    check_run_with_simple_check_suite_local_var->html_url = html_url;
    check_run_with_simple_check_suite_local_var->id = id;
    check_run_with_simple_check_suite_local_var->name = name;
    check_run_with_simple_check_suite_local_var->node_id = node_id;
    check_run_with_simple_check_suite_local_var->output = output;
    check_run_with_simple_check_suite_local_var->pull_requests = pull_requests;
    check_run_with_simple_check_suite_local_var->started_at = started_at;
    check_run_with_simple_check_suite_local_var->status = status;
    check_run_with_simple_check_suite_local_var->url = url;

    return check_run_with_simple_check_suite_local_var;
}


void check_run_with_simple_check_suite_free(check_run_with_simple_check_suite_t *check_run_with_simple_check_suite) {
    if(NULL == check_run_with_simple_check_suite){
        return ;
    }
    listEntry_t *listEntry;
    if (check_run_with_simple_check_suite->app) {
        nullable_integration_free(check_run_with_simple_check_suite->app);
        check_run_with_simple_check_suite->app = NULL;
    }
    if (check_run_with_simple_check_suite->check_suite) {
        simple_check_suite_free(check_run_with_simple_check_suite->check_suite);
        check_run_with_simple_check_suite->check_suite = NULL;
    }
    if (check_run_with_simple_check_suite->completed_at) {
        free(check_run_with_simple_check_suite->completed_at);
        check_run_with_simple_check_suite->completed_at = NULL;
    }
    if (check_run_with_simple_check_suite->deployment) {
        deployment_simple_free(check_run_with_simple_check_suite->deployment);
        check_run_with_simple_check_suite->deployment = NULL;
    }
    if (check_run_with_simple_check_suite->details_url) {
        free(check_run_with_simple_check_suite->details_url);
        check_run_with_simple_check_suite->details_url = NULL;
    }
    if (check_run_with_simple_check_suite->external_id) {
        free(check_run_with_simple_check_suite->external_id);
        check_run_with_simple_check_suite->external_id = NULL;
    }
    if (check_run_with_simple_check_suite->head_sha) {
        free(check_run_with_simple_check_suite->head_sha);
        check_run_with_simple_check_suite->head_sha = NULL;
    }
    if (check_run_with_simple_check_suite->html_url) {
        free(check_run_with_simple_check_suite->html_url);
        check_run_with_simple_check_suite->html_url = NULL;
    }
    if (check_run_with_simple_check_suite->name) {
        free(check_run_with_simple_check_suite->name);
        check_run_with_simple_check_suite->name = NULL;
    }
    if (check_run_with_simple_check_suite->node_id) {
        free(check_run_with_simple_check_suite->node_id);
        check_run_with_simple_check_suite->node_id = NULL;
    }
    if (check_run_with_simple_check_suite->output) {
        check_run_with_simple_check_suite_output_free(check_run_with_simple_check_suite->output);
        check_run_with_simple_check_suite->output = NULL;
    }
    if (check_run_with_simple_check_suite->pull_requests) {
        list_ForEach(listEntry, check_run_with_simple_check_suite->pull_requests) {
            pull_request_minimal_free(listEntry->data);
        }
        list_freeList(check_run_with_simple_check_suite->pull_requests);
        check_run_with_simple_check_suite->pull_requests = NULL;
    }
    if (check_run_with_simple_check_suite->started_at) {
        free(check_run_with_simple_check_suite->started_at);
        check_run_with_simple_check_suite->started_at = NULL;
    }
    if (check_run_with_simple_check_suite->url) {
        free(check_run_with_simple_check_suite->url);
        check_run_with_simple_check_suite->url = NULL;
    }
    free(check_run_with_simple_check_suite);
}

cJSON *check_run_with_simple_check_suite_convertToJSON(check_run_with_simple_check_suite_t *check_run_with_simple_check_suite) {
    cJSON *item = cJSON_CreateObject();

    // check_run_with_simple_check_suite->app
    if (!check_run_with_simple_check_suite->app) {
        goto fail;
    }
    cJSON *app_local_JSON = nullable_integration_convertToJSON(check_run_with_simple_check_suite->app);
    if(app_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "app", app_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // check_run_with_simple_check_suite->check_suite
    if (!check_run_with_simple_check_suite->check_suite) {
        goto fail;
    }
    cJSON *check_suite_local_JSON = simple_check_suite_convertToJSON(check_run_with_simple_check_suite->check_suite);
    if(check_suite_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "check_suite", check_suite_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // check_run_with_simple_check_suite->completed_at
    if (!check_run_with_simple_check_suite->completed_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "completed_at", check_run_with_simple_check_suite->completed_at) == NULL) {
    goto fail; //Date-Time
    }


    // check_run_with_simple_check_suite->conclusion
    if (github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_NULL == check_run_with_simple_check_suite->conclusion) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "conclusion", conclusioncheck_run_with_simple_check_suite_ToString(check_run_with_simple_check_suite->conclusion)) == NULL)
    {
    goto fail; //Enum
    }


    // check_run_with_simple_check_suite->deployment
    if(check_run_with_simple_check_suite->deployment) {
    cJSON *deployment_local_JSON = deployment_simple_convertToJSON(check_run_with_simple_check_suite->deployment);
    if(deployment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "deployment", deployment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // check_run_with_simple_check_suite->details_url
    if (!check_run_with_simple_check_suite->details_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "details_url", check_run_with_simple_check_suite->details_url) == NULL) {
    goto fail; //String
    }


    // check_run_with_simple_check_suite->external_id
    if (!check_run_with_simple_check_suite->external_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "external_id", check_run_with_simple_check_suite->external_id) == NULL) {
    goto fail; //String
    }


    // check_run_with_simple_check_suite->head_sha
    if (!check_run_with_simple_check_suite->head_sha) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "head_sha", check_run_with_simple_check_suite->head_sha) == NULL) {
    goto fail; //String
    }


    // check_run_with_simple_check_suite->html_url
    if (!check_run_with_simple_check_suite->html_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "html_url", check_run_with_simple_check_suite->html_url) == NULL) {
    goto fail; //String
    }


    // check_run_with_simple_check_suite->id
    if (!check_run_with_simple_check_suite->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", check_run_with_simple_check_suite->id) == NULL) {
    goto fail; //Numeric
    }


    // check_run_with_simple_check_suite->name
    if (!check_run_with_simple_check_suite->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", check_run_with_simple_check_suite->name) == NULL) {
    goto fail; //String
    }


    // check_run_with_simple_check_suite->node_id
    if (!check_run_with_simple_check_suite->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", check_run_with_simple_check_suite->node_id) == NULL) {
    goto fail; //String
    }


    // check_run_with_simple_check_suite->output
    if (!check_run_with_simple_check_suite->output) {
        goto fail;
    }
    cJSON *output_local_JSON = check_run_with_simple_check_suite_output_convertToJSON(check_run_with_simple_check_suite->output);
    if(output_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "output", output_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // check_run_with_simple_check_suite->pull_requests
    if (!check_run_with_simple_check_suite->pull_requests) {
        goto fail;
    }
    cJSON *pull_requests = cJSON_AddArrayToObject(item, "pull_requests");
    if(pull_requests == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *pull_requestsListEntry;
    if (check_run_with_simple_check_suite->pull_requests) {
    list_ForEach(pull_requestsListEntry, check_run_with_simple_check_suite->pull_requests) {
    cJSON *itemLocal = pull_request_minimal_convertToJSON(pull_requestsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(pull_requests, itemLocal);
    }
    }


    // check_run_with_simple_check_suite->started_at
    if (!check_run_with_simple_check_suite->started_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "started_at", check_run_with_simple_check_suite->started_at) == NULL) {
    goto fail; //Date-Time
    }


    // check_run_with_simple_check_suite->status
    if (github_v3_rest_api_check_run_with_simple_check_suite_STATUS_NULL == check_run_with_simple_check_suite->status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "status", statuscheck_run_with_simple_check_suite_ToString(check_run_with_simple_check_suite->status)) == NULL)
    {
    goto fail; //Enum
    }


    // check_run_with_simple_check_suite->url
    if (!check_run_with_simple_check_suite->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", check_run_with_simple_check_suite->url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

check_run_with_simple_check_suite_t *check_run_with_simple_check_suite_parseFromJSON(cJSON *check_run_with_simple_check_suiteJSON){

    check_run_with_simple_check_suite_t *check_run_with_simple_check_suite_local_var = NULL;

    // define the local variable for check_run_with_simple_check_suite->app
    nullable_integration_t *app_local_nonprim = NULL;

    // define the local variable for check_run_with_simple_check_suite->check_suite
    simple_check_suite_t *check_suite_local_nonprim = NULL;

    // define the local variable for check_run_with_simple_check_suite->deployment
    deployment_simple_t *deployment_local_nonprim = NULL;

    // define the local variable for check_run_with_simple_check_suite->output
    check_run_with_simple_check_suite_output_t *output_local_nonprim = NULL;

    // define the local list for check_run_with_simple_check_suite->pull_requests
    list_t *pull_requestsList = NULL;

    // check_run_with_simple_check_suite->app
    cJSON *app = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "app");
    if (!app) {
        goto end;
    }

    
    app_local_nonprim = nullable_integration_parseFromJSON(app); //nonprimitive

    // check_run_with_simple_check_suite->check_suite
    cJSON *check_suite = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "check_suite");
    if (!check_suite) {
        goto end;
    }

    
    check_suite_local_nonprim = simple_check_suite_parseFromJSON(check_suite); //nonprimitive

    // check_run_with_simple_check_suite->completed_at
    cJSON *completed_at = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "completed_at");
    if (!completed_at) {
        goto end;
    }

    
    if(!cJSON_IsString(completed_at))
    {
    goto end; //DateTime
    }

    // check_run_with_simple_check_suite->conclusion
    cJSON *conclusion = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "conclusion");
    if (!conclusion) {
        goto end;
    }

    github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_e conclusionVariable;
    
    if(!cJSON_IsString(conclusion))
    {
    goto end; //Enum
    }
    conclusionVariable = conclusioncheck_run_with_simple_check_suite_FromString(conclusion->valuestring);

    // check_run_with_simple_check_suite->deployment
    cJSON *deployment = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "deployment");
    if (deployment) { 
    deployment_local_nonprim = deployment_simple_parseFromJSON(deployment); //nonprimitive
    }

    // check_run_with_simple_check_suite->details_url
    cJSON *details_url = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "details_url");
    if (!details_url) {
        goto end;
    }

    
    if(!cJSON_IsString(details_url))
    {
    goto end; //String
    }

    // check_run_with_simple_check_suite->external_id
    cJSON *external_id = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "external_id");
    if (!external_id) {
        goto end;
    }

    
    if(!cJSON_IsString(external_id))
    {
    goto end; //String
    }

    // check_run_with_simple_check_suite->head_sha
    cJSON *head_sha = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "head_sha");
    if (!head_sha) {
        goto end;
    }

    
    if(!cJSON_IsString(head_sha))
    {
    goto end; //String
    }

    // check_run_with_simple_check_suite->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "html_url");
    if (!html_url) {
        goto end;
    }

    
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }

    // check_run_with_simple_check_suite->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // check_run_with_simple_check_suite->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // check_run_with_simple_check_suite->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // check_run_with_simple_check_suite->output
    cJSON *output = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "output");
    if (!output) {
        goto end;
    }

    
    output_local_nonprim = check_run_with_simple_check_suite_output_parseFromJSON(output); //nonprimitive

    // check_run_with_simple_check_suite->pull_requests
    cJSON *pull_requests = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "pull_requests");
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

    // check_run_with_simple_check_suite->started_at
    cJSON *started_at = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "started_at");
    if (!started_at) {
        goto end;
    }

    
    if(!cJSON_IsString(started_at))
    {
    goto end; //DateTime
    }

    // check_run_with_simple_check_suite->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "status");
    if (!status) {
        goto end;
    }

    github_v3_rest_api_check_run_with_simple_check_suite_STATUS_e statusVariable;
    
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = statuscheck_run_with_simple_check_suite_FromString(status->valuestring);

    // check_run_with_simple_check_suite->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suiteJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }


    check_run_with_simple_check_suite_local_var = check_run_with_simple_check_suite_create (
        app_local_nonprim,
        check_suite_local_nonprim,
        strdup(completed_at->valuestring),
        conclusionVariable,
        deployment ? deployment_local_nonprim : NULL,
        strdup(details_url->valuestring),
        strdup(external_id->valuestring),
        strdup(head_sha->valuestring),
        strdup(html_url->valuestring),
        id->valuedouble,
        strdup(name->valuestring),
        strdup(node_id->valuestring),
        output_local_nonprim,
        pull_requestsList,
        strdup(started_at->valuestring),
        statusVariable,
        strdup(url->valuestring)
        );

    return check_run_with_simple_check_suite_local_var;
end:
    if (app_local_nonprim) {
        nullable_integration_free(app_local_nonprim);
        app_local_nonprim = NULL;
    }
    if (check_suite_local_nonprim) {
        simple_check_suite_free(check_suite_local_nonprim);
        check_suite_local_nonprim = NULL;
    }
    if (deployment_local_nonprim) {
        deployment_simple_free(deployment_local_nonprim);
        deployment_local_nonprim = NULL;
    }
    if (output_local_nonprim) {
        check_run_with_simple_check_suite_output_free(output_local_nonprim);
        output_local_nonprim = NULL;
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
    return NULL;

}
