#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "check_run_with_simple_check_suite_output.h"



check_run_with_simple_check_suite_output_t *check_run_with_simple_check_suite_output_create(
    int annotations_count,
    char *annotations_url,
    char *summary,
    char *text,
    char *title
    ) {
    check_run_with_simple_check_suite_output_t *check_run_with_simple_check_suite_output_local_var = malloc(sizeof(check_run_with_simple_check_suite_output_t));
    if (!check_run_with_simple_check_suite_output_local_var) {
        return NULL;
    }
    check_run_with_simple_check_suite_output_local_var->annotations_count = annotations_count;
    check_run_with_simple_check_suite_output_local_var->annotations_url = annotations_url;
    check_run_with_simple_check_suite_output_local_var->summary = summary;
    check_run_with_simple_check_suite_output_local_var->text = text;
    check_run_with_simple_check_suite_output_local_var->title = title;

    return check_run_with_simple_check_suite_output_local_var;
}


void check_run_with_simple_check_suite_output_free(check_run_with_simple_check_suite_output_t *check_run_with_simple_check_suite_output) {
    if(NULL == check_run_with_simple_check_suite_output){
        return ;
    }
    listEntry_t *listEntry;
    if (check_run_with_simple_check_suite_output->annotations_url) {
        free(check_run_with_simple_check_suite_output->annotations_url);
        check_run_with_simple_check_suite_output->annotations_url = NULL;
    }
    if (check_run_with_simple_check_suite_output->summary) {
        free(check_run_with_simple_check_suite_output->summary);
        check_run_with_simple_check_suite_output->summary = NULL;
    }
    if (check_run_with_simple_check_suite_output->text) {
        free(check_run_with_simple_check_suite_output->text);
        check_run_with_simple_check_suite_output->text = NULL;
    }
    if (check_run_with_simple_check_suite_output->title) {
        free(check_run_with_simple_check_suite_output->title);
        check_run_with_simple_check_suite_output->title = NULL;
    }
    free(check_run_with_simple_check_suite_output);
}

cJSON *check_run_with_simple_check_suite_output_convertToJSON(check_run_with_simple_check_suite_output_t *check_run_with_simple_check_suite_output) {
    cJSON *item = cJSON_CreateObject();

    // check_run_with_simple_check_suite_output->annotations_count
    if (!check_run_with_simple_check_suite_output->annotations_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "annotations_count", check_run_with_simple_check_suite_output->annotations_count) == NULL) {
    goto fail; //Numeric
    }


    // check_run_with_simple_check_suite_output->annotations_url
    if (!check_run_with_simple_check_suite_output->annotations_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "annotations_url", check_run_with_simple_check_suite_output->annotations_url) == NULL) {
    goto fail; //String
    }


    // check_run_with_simple_check_suite_output->summary
    if (!check_run_with_simple_check_suite_output->summary) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "summary", check_run_with_simple_check_suite_output->summary) == NULL) {
    goto fail; //String
    }


    // check_run_with_simple_check_suite_output->text
    if (!check_run_with_simple_check_suite_output->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", check_run_with_simple_check_suite_output->text) == NULL) {
    goto fail; //String
    }


    // check_run_with_simple_check_suite_output->title
    if (!check_run_with_simple_check_suite_output->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", check_run_with_simple_check_suite_output->title) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

check_run_with_simple_check_suite_output_t *check_run_with_simple_check_suite_output_parseFromJSON(cJSON *check_run_with_simple_check_suite_outputJSON){

    check_run_with_simple_check_suite_output_t *check_run_with_simple_check_suite_output_local_var = NULL;

    // check_run_with_simple_check_suite_output->annotations_count
    cJSON *annotations_count = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suite_outputJSON, "annotations_count");
    if (!annotations_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(annotations_count))
    {
    goto end; //Numeric
    }

    // check_run_with_simple_check_suite_output->annotations_url
    cJSON *annotations_url = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suite_outputJSON, "annotations_url");
    if (!annotations_url) {
        goto end;
    }

    
    if(!cJSON_IsString(annotations_url))
    {
    goto end; //String
    }

    // check_run_with_simple_check_suite_output->summary
    cJSON *summary = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suite_outputJSON, "summary");
    if (!summary) {
        goto end;
    }

    
    if(!cJSON_IsString(summary))
    {
    goto end; //String
    }

    // check_run_with_simple_check_suite_output->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suite_outputJSON, "text");
    if (!text) {
        goto end;
    }

    
    if(!cJSON_IsString(text))
    {
    goto end; //String
    }

    // check_run_with_simple_check_suite_output->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(check_run_with_simple_check_suite_outputJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }


    check_run_with_simple_check_suite_output_local_var = check_run_with_simple_check_suite_output_create (
        annotations_count->valuedouble,
        strdup(annotations_url->valuestring),
        strdup(summary->valuestring),
        strdup(text->valuestring),
        strdup(title->valuestring)
        );

    return check_run_with_simple_check_suite_output_local_var;
end:
    return NULL;

}
