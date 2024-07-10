#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blob.h"



blob_t *blob_create(
    char *content,
    char *encoding,
    char *url,
    char *sha,
    int size,
    char *node_id,
    char *highlighted_content
    ) {
    blob_t *blob_local_var = malloc(sizeof(blob_t));
    if (!blob_local_var) {
        return NULL;
    }
    blob_local_var->content = content;
    blob_local_var->encoding = encoding;
    blob_local_var->url = url;
    blob_local_var->sha = sha;
    blob_local_var->size = size;
    blob_local_var->node_id = node_id;
    blob_local_var->highlighted_content = highlighted_content;

    return blob_local_var;
}


void blob_free(blob_t *blob) {
    if(NULL == blob){
        return ;
    }
    listEntry_t *listEntry;
    if (blob->content) {
        free(blob->content);
        blob->content = NULL;
    }
    if (blob->encoding) {
        free(blob->encoding);
        blob->encoding = NULL;
    }
    if (blob->url) {
        free(blob->url);
        blob->url = NULL;
    }
    if (blob->sha) {
        free(blob->sha);
        blob->sha = NULL;
    }
    if (blob->node_id) {
        free(blob->node_id);
        blob->node_id = NULL;
    }
    if (blob->highlighted_content) {
        free(blob->highlighted_content);
        blob->highlighted_content = NULL;
    }
    free(blob);
}

cJSON *blob_convertToJSON(blob_t *blob) {
    cJSON *item = cJSON_CreateObject();

    // blob->content
    if (!blob->content) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "content", blob->content) == NULL) {
    goto fail; //String
    }


    // blob->encoding
    if (!blob->encoding) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "encoding", blob->encoding) == NULL) {
    goto fail; //String
    }


    // blob->url
    if (!blob->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", blob->url) == NULL) {
    goto fail; //String
    }


    // blob->sha
    if (!blob->sha) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sha", blob->sha) == NULL) {
    goto fail; //String
    }


    // blob->size
    if (!blob->size) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "size", blob->size) == NULL) {
    goto fail; //Numeric
    }


    // blob->node_id
    if (!blob->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", blob->node_id) == NULL) {
    goto fail; //String
    }


    // blob->highlighted_content
    if(blob->highlighted_content) {
    if(cJSON_AddStringToObject(item, "highlighted_content", blob->highlighted_content) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

blob_t *blob_parseFromJSON(cJSON *blobJSON){

    blob_t *blob_local_var = NULL;

    // blob->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(blobJSON, "content");
    if (!content) {
        goto end;
    }

    
    if(!cJSON_IsString(content))
    {
    goto end; //String
    }

    // blob->encoding
    cJSON *encoding = cJSON_GetObjectItemCaseSensitive(blobJSON, "encoding");
    if (!encoding) {
        goto end;
    }

    
    if(!cJSON_IsString(encoding))
    {
    goto end; //String
    }

    // blob->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(blobJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }

    // blob->sha
    cJSON *sha = cJSON_GetObjectItemCaseSensitive(blobJSON, "sha");
    if (!sha) {
        goto end;
    }

    
    if(!cJSON_IsString(sha))
    {
    goto end; //String
    }

    // blob->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(blobJSON, "size");
    if (!size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }

    // blob->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(blobJSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // blob->highlighted_content
    cJSON *highlighted_content = cJSON_GetObjectItemCaseSensitive(blobJSON, "highlighted_content");
    if (highlighted_content) { 
    if(!cJSON_IsString(highlighted_content))
    {
    goto end; //String
    }
    }


    blob_local_var = blob_create (
        strdup(content->valuestring),
        strdup(encoding->valuestring),
        strdup(url->valuestring),
        strdup(sha->valuestring),
        size->valuedouble,
        strdup(node_id->valuestring),
        highlighted_content ? strdup(highlighted_content->valuestring) : NULL
        );

    return blob_local_var;
end:
    return NULL;

}
