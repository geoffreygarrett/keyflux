#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "check_run_output.h"



check_run_output_t *check_run_output_create(
    char *title,
    char *summary,
    char *text,
    int annotations_count,
    char *annotations_url
    ) {
    check_run_output_t *check_run_output_local_var = malloc(sizeof(check_run_output_t));
    if (!check_run_output_local_var) {
        return NULL;
    }
    check_run_output_local_var->title = title;
    check_run_output_local_var->summary = summary;
    check_run_output_local_var->text = text;
    check_run_output_local_var->annotations_count = annotations_count;
    check_run_output_local_var->annotations_url = annotations_url;

    return check_run_output_local_var;
}


void check_run_output_free(check_run_output_t *check_run_output) {
    if(NULL == check_run_output){
        return ;
    }
    listEntry_t *listEntry;
    if (check_run_output->title) {
        free(check_run_output->title);
        check_run_output->title = NULL;
    }
    if (check_run_output->summary) {
        free(check_run_output->summary);
        check_run_output->summary = NULL;
    }
    if (check_run_output->text) {
        free(check_run_output->text);
        check_run_output->text = NULL;
    }
    if (check_run_output->annotations_url) {
        free(check_run_output->annotations_url);
        check_run_output->annotations_url = NULL;
    }
    free(check_run_output);
}

cJSON *check_run_output_convertToJSON(check_run_output_t *check_run_output) {
    cJSON *item = cJSON_CreateObject();

    // check_run_output->title
    if (!check_run_output->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", check_run_output->title) == NULL) {
    goto fail; //String
    }


    // check_run_output->summary
    if (!check_run_output->summary) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "summary", check_run_output->summary) == NULL) {
    goto fail; //String
    }


    // check_run_output->text
    if (!check_run_output->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", check_run_output->text) == NULL) {
    goto fail; //String
    }


    // check_run_output->annotations_count
    if (!check_run_output->annotations_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "annotations_count", check_run_output->annotations_count) == NULL) {
    goto fail; //Numeric
    }


    // check_run_output->annotations_url
    if (!check_run_output->annotations_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "annotations_url", check_run_output->annotations_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

check_run_output_t *check_run_output_parseFromJSON(cJSON *check_run_outputJSON){

    check_run_output_t *check_run_output_local_var = NULL;

    // check_run_output->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(check_run_outputJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // check_run_output->summary
    cJSON *summary = cJSON_GetObjectItemCaseSensitive(check_run_outputJSON, "summary");
    if (!summary) {
        goto end;
    }

    
    if(!cJSON_IsString(summary))
    {
    goto end; //String
    }

    // check_run_output->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(check_run_outputJSON, "text");
    if (!text) {
        goto end;
    }

    
    if(!cJSON_IsString(text))
    {
    goto end; //String
    }

    // check_run_output->annotations_count
    cJSON *annotations_count = cJSON_GetObjectItemCaseSensitive(check_run_outputJSON, "annotations_count");
    if (!annotations_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(annotations_count))
    {
    goto end; //Numeric
    }

    // check_run_output->annotations_url
    cJSON *annotations_url = cJSON_GetObjectItemCaseSensitive(check_run_outputJSON, "annotations_url");
    if (!annotations_url) {
        goto end;
    }

    
    if(!cJSON_IsString(annotations_url))
    {
    goto end; //String
    }


    check_run_output_local_var = check_run_output_create (
        strdup(title->valuestring),
        strdup(summary->valuestring),
        strdup(text->valuestring),
        annotations_count->valuedouble,
        strdup(annotations_url->valuestring)
        );

    return check_run_output_local_var;
end:
    return NULL;

}
