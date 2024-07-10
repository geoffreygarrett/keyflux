#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "base_gist_files_value.h"



base_gist_files_value_t *base_gist_files_value_create(
    char *filename,
    char *type,
    char *language,
    char *raw_url,
    int size
    ) {
    base_gist_files_value_t *base_gist_files_value_local_var = malloc(sizeof(base_gist_files_value_t));
    if (!base_gist_files_value_local_var) {
        return NULL;
    }
    base_gist_files_value_local_var->filename = filename;
    base_gist_files_value_local_var->type = type;
    base_gist_files_value_local_var->language = language;
    base_gist_files_value_local_var->raw_url = raw_url;
    base_gist_files_value_local_var->size = size;

    return base_gist_files_value_local_var;
}


void base_gist_files_value_free(base_gist_files_value_t *base_gist_files_value) {
    if(NULL == base_gist_files_value){
        return ;
    }
    listEntry_t *listEntry;
    if (base_gist_files_value->filename) {
        free(base_gist_files_value->filename);
        base_gist_files_value->filename = NULL;
    }
    if (base_gist_files_value->type) {
        free(base_gist_files_value->type);
        base_gist_files_value->type = NULL;
    }
    if (base_gist_files_value->language) {
        free(base_gist_files_value->language);
        base_gist_files_value->language = NULL;
    }
    if (base_gist_files_value->raw_url) {
        free(base_gist_files_value->raw_url);
        base_gist_files_value->raw_url = NULL;
    }
    free(base_gist_files_value);
}

cJSON *base_gist_files_value_convertToJSON(base_gist_files_value_t *base_gist_files_value) {
    cJSON *item = cJSON_CreateObject();

    // base_gist_files_value->filename
    if(base_gist_files_value->filename) {
    if(cJSON_AddStringToObject(item, "filename", base_gist_files_value->filename) == NULL) {
    goto fail; //String
    }
    }


    // base_gist_files_value->type
    if(base_gist_files_value->type) {
    if(cJSON_AddStringToObject(item, "type", base_gist_files_value->type) == NULL) {
    goto fail; //String
    }
    }


    // base_gist_files_value->language
    if(base_gist_files_value->language) {
    if(cJSON_AddStringToObject(item, "language", base_gist_files_value->language) == NULL) {
    goto fail; //String
    }
    }


    // base_gist_files_value->raw_url
    if(base_gist_files_value->raw_url) {
    if(cJSON_AddStringToObject(item, "raw_url", base_gist_files_value->raw_url) == NULL) {
    goto fail; //String
    }
    }


    // base_gist_files_value->size
    if(base_gist_files_value->size) {
    if(cJSON_AddNumberToObject(item, "size", base_gist_files_value->size) == NULL) {
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

base_gist_files_value_t *base_gist_files_value_parseFromJSON(cJSON *base_gist_files_valueJSON){

    base_gist_files_value_t *base_gist_files_value_local_var = NULL;

    // base_gist_files_value->filename
    cJSON *filename = cJSON_GetObjectItemCaseSensitive(base_gist_files_valueJSON, "filename");
    if (filename) { 
    if(!cJSON_IsString(filename))
    {
    goto end; //String
    }
    }

    // base_gist_files_value->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(base_gist_files_valueJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // base_gist_files_value->language
    cJSON *language = cJSON_GetObjectItemCaseSensitive(base_gist_files_valueJSON, "language");
    if (language) { 
    if(!cJSON_IsString(language))
    {
    goto end; //String
    }
    }

    // base_gist_files_value->raw_url
    cJSON *raw_url = cJSON_GetObjectItemCaseSensitive(base_gist_files_valueJSON, "raw_url");
    if (raw_url) { 
    if(!cJSON_IsString(raw_url))
    {
    goto end; //String
    }
    }

    // base_gist_files_value->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(base_gist_files_valueJSON, "size");
    if (size) { 
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    }


    base_gist_files_value_local_var = base_gist_files_value_create (
        filename ? strdup(filename->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL,
        language ? strdup(language->valuestring) : NULL,
        raw_url ? strdup(raw_url->valuestring) : NULL,
        size ? size->valuedouble : 0
        );

    return base_gist_files_value_local_var;
end:
    return NULL;

}
