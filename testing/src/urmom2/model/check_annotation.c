#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "check_annotation.h"



check_annotation_t *check_annotation_create(
    char *path,
    int start_line,
    int end_line,
    int start_column,
    int end_column,
    char *annotation_level,
    char *title,
    char *message,
    char *raw_details,
    char *blob_href
    ) {
    check_annotation_t *check_annotation_local_var = malloc(sizeof(check_annotation_t));
    if (!check_annotation_local_var) {
        return NULL;
    }
    check_annotation_local_var->path = path;
    check_annotation_local_var->start_line = start_line;
    check_annotation_local_var->end_line = end_line;
    check_annotation_local_var->start_column = start_column;
    check_annotation_local_var->end_column = end_column;
    check_annotation_local_var->annotation_level = annotation_level;
    check_annotation_local_var->title = title;
    check_annotation_local_var->message = message;
    check_annotation_local_var->raw_details = raw_details;
    check_annotation_local_var->blob_href = blob_href;

    return check_annotation_local_var;
}


void check_annotation_free(check_annotation_t *check_annotation) {
    if(NULL == check_annotation){
        return ;
    }
    listEntry_t *listEntry;
    if (check_annotation->path) {
        free(check_annotation->path);
        check_annotation->path = NULL;
    }
    if (check_annotation->annotation_level) {
        free(check_annotation->annotation_level);
        check_annotation->annotation_level = NULL;
    }
    if (check_annotation->title) {
        free(check_annotation->title);
        check_annotation->title = NULL;
    }
    if (check_annotation->message) {
        free(check_annotation->message);
        check_annotation->message = NULL;
    }
    if (check_annotation->raw_details) {
        free(check_annotation->raw_details);
        check_annotation->raw_details = NULL;
    }
    if (check_annotation->blob_href) {
        free(check_annotation->blob_href);
        check_annotation->blob_href = NULL;
    }
    free(check_annotation);
}

cJSON *check_annotation_convertToJSON(check_annotation_t *check_annotation) {
    cJSON *item = cJSON_CreateObject();

    // check_annotation->path
    if (!check_annotation->path) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "path", check_annotation->path) == NULL) {
    goto fail; //String
    }


    // check_annotation->start_line
    if (!check_annotation->start_line) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "start_line", check_annotation->start_line) == NULL) {
    goto fail; //Numeric
    }


    // check_annotation->end_line
    if (!check_annotation->end_line) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "end_line", check_annotation->end_line) == NULL) {
    goto fail; //Numeric
    }


    // check_annotation->start_column
    if (!check_annotation->start_column) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "start_column", check_annotation->start_column) == NULL) {
    goto fail; //Numeric
    }


    // check_annotation->end_column
    if (!check_annotation->end_column) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "end_column", check_annotation->end_column) == NULL) {
    goto fail; //Numeric
    }


    // check_annotation->annotation_level
    if (!check_annotation->annotation_level) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "annotation_level", check_annotation->annotation_level) == NULL) {
    goto fail; //String
    }


    // check_annotation->title
    if (!check_annotation->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", check_annotation->title) == NULL) {
    goto fail; //String
    }


    // check_annotation->message
    if (!check_annotation->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", check_annotation->message) == NULL) {
    goto fail; //String
    }


    // check_annotation->raw_details
    if (!check_annotation->raw_details) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "raw_details", check_annotation->raw_details) == NULL) {
    goto fail; //String
    }


    // check_annotation->blob_href
    if (!check_annotation->blob_href) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "blob_href", check_annotation->blob_href) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

check_annotation_t *check_annotation_parseFromJSON(cJSON *check_annotationJSON){

    check_annotation_t *check_annotation_local_var = NULL;

    // check_annotation->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(check_annotationJSON, "path");
    if (!path) {
        goto end;
    }

    
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }

    // check_annotation->start_line
    cJSON *start_line = cJSON_GetObjectItemCaseSensitive(check_annotationJSON, "start_line");
    if (!start_line) {
        goto end;
    }

    
    if(!cJSON_IsNumber(start_line))
    {
    goto end; //Numeric
    }

    // check_annotation->end_line
    cJSON *end_line = cJSON_GetObjectItemCaseSensitive(check_annotationJSON, "end_line");
    if (!end_line) {
        goto end;
    }

    
    if(!cJSON_IsNumber(end_line))
    {
    goto end; //Numeric
    }

    // check_annotation->start_column
    cJSON *start_column = cJSON_GetObjectItemCaseSensitive(check_annotationJSON, "start_column");
    if (!start_column) {
        goto end;
    }

    
    if(!cJSON_IsNumber(start_column))
    {
    goto end; //Numeric
    }

    // check_annotation->end_column
    cJSON *end_column = cJSON_GetObjectItemCaseSensitive(check_annotationJSON, "end_column");
    if (!end_column) {
        goto end;
    }

    
    if(!cJSON_IsNumber(end_column))
    {
    goto end; //Numeric
    }

    // check_annotation->annotation_level
    cJSON *annotation_level = cJSON_GetObjectItemCaseSensitive(check_annotationJSON, "annotation_level");
    if (!annotation_level) {
        goto end;
    }

    
    if(!cJSON_IsString(annotation_level))
    {
    goto end; //String
    }

    // check_annotation->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(check_annotationJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // check_annotation->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(check_annotationJSON, "message");
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }

    // check_annotation->raw_details
    cJSON *raw_details = cJSON_GetObjectItemCaseSensitive(check_annotationJSON, "raw_details");
    if (!raw_details) {
        goto end;
    }

    
    if(!cJSON_IsString(raw_details))
    {
    goto end; //String
    }

    // check_annotation->blob_href
    cJSON *blob_href = cJSON_GetObjectItemCaseSensitive(check_annotationJSON, "blob_href");
    if (!blob_href) {
        goto end;
    }

    
    if(!cJSON_IsString(blob_href))
    {
    goto end; //String
    }


    check_annotation_local_var = check_annotation_create (
        strdup(path->valuestring),
        start_line->valuedouble,
        end_line->valuedouble,
        start_column->valuedouble,
        end_column->valuedouble,
        strdup(annotation_level->valuestring),
        strdup(title->valuestring),
        strdup(message->valuestring),
        strdup(raw_details->valuestring),
        strdup(blob_href->valuestring)
        );

    return check_annotation_local_var;
end:
    return NULL;

}
