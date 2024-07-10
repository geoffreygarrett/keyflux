#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "artifact.h"



artifact_t *artifact_create(
    int id,
    char *node_id,
    char *name,
    int size_in_bytes,
    char *url,
    char *archive_download_url,
    int expired,
    char *created_at,
    char *expires_at,
    char *updated_at,
    artifact_workflow_run_t *workflow_run
    ) {
    artifact_t *artifact_local_var = malloc(sizeof(artifact_t));
    if (!artifact_local_var) {
        return NULL;
    }
    artifact_local_var->id = id;
    artifact_local_var->node_id = node_id;
    artifact_local_var->name = name;
    artifact_local_var->size_in_bytes = size_in_bytes;
    artifact_local_var->url = url;
    artifact_local_var->archive_download_url = archive_download_url;
    artifact_local_var->expired = expired;
    artifact_local_var->created_at = created_at;
    artifact_local_var->expires_at = expires_at;
    artifact_local_var->updated_at = updated_at;
    artifact_local_var->workflow_run = workflow_run;

    return artifact_local_var;
}


void artifact_free(artifact_t *artifact) {
    if(NULL == artifact){
        return ;
    }
    listEntry_t *listEntry;
    if (artifact->node_id) {
        free(artifact->node_id);
        artifact->node_id = NULL;
    }
    if (artifact->name) {
        free(artifact->name);
        artifact->name = NULL;
    }
    if (artifact->url) {
        free(artifact->url);
        artifact->url = NULL;
    }
    if (artifact->archive_download_url) {
        free(artifact->archive_download_url);
        artifact->archive_download_url = NULL;
    }
    if (artifact->created_at) {
        free(artifact->created_at);
        artifact->created_at = NULL;
    }
    if (artifact->expires_at) {
        free(artifact->expires_at);
        artifact->expires_at = NULL;
    }
    if (artifact->updated_at) {
        free(artifact->updated_at);
        artifact->updated_at = NULL;
    }
    if (artifact->workflow_run) {
        artifact_workflow_run_free(artifact->workflow_run);
        artifact->workflow_run = NULL;
    }
    free(artifact);
}

cJSON *artifact_convertToJSON(artifact_t *artifact) {
    cJSON *item = cJSON_CreateObject();

    // artifact->id
    if (!artifact->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", artifact->id) == NULL) {
    goto fail; //Numeric
    }


    // artifact->node_id
    if (!artifact->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", artifact->node_id) == NULL) {
    goto fail; //String
    }


    // artifact->name
    if (!artifact->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", artifact->name) == NULL) {
    goto fail; //String
    }


    // artifact->size_in_bytes
    if (!artifact->size_in_bytes) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "size_in_bytes", artifact->size_in_bytes) == NULL) {
    goto fail; //Numeric
    }


    // artifact->url
    if (!artifact->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", artifact->url) == NULL) {
    goto fail; //String
    }


    // artifact->archive_download_url
    if (!artifact->archive_download_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "archive_download_url", artifact->archive_download_url) == NULL) {
    goto fail; //String
    }


    // artifact->expired
    if (!artifact->expired) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "expired", artifact->expired) == NULL) {
    goto fail; //Bool
    }


    // artifact->created_at
    if (!artifact->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", artifact->created_at) == NULL) {
    goto fail; //Date-Time
    }


    // artifact->expires_at
    if (!artifact->expires_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "expires_at", artifact->expires_at) == NULL) {
    goto fail; //Date-Time
    }


    // artifact->updated_at
    if (!artifact->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updated_at", artifact->updated_at) == NULL) {
    goto fail; //Date-Time
    }


    // artifact->workflow_run
    if(artifact->workflow_run) {
    cJSON *workflow_run_local_JSON = artifact_workflow_run_convertToJSON(artifact->workflow_run);
    if(workflow_run_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "workflow_run", workflow_run_local_JSON);
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

artifact_t *artifact_parseFromJSON(cJSON *artifactJSON){

    artifact_t *artifact_local_var = NULL;

    // define the local variable for artifact->workflow_run
    artifact_workflow_run_t *workflow_run_local_nonprim = NULL;

    // artifact->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(artifactJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // artifact->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(artifactJSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // artifact->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(artifactJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // artifact->size_in_bytes
    cJSON *size_in_bytes = cJSON_GetObjectItemCaseSensitive(artifactJSON, "size_in_bytes");
    if (!size_in_bytes) {
        goto end;
    }

    
    if(!cJSON_IsNumber(size_in_bytes))
    {
    goto end; //Numeric
    }

    // artifact->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(artifactJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }

    // artifact->archive_download_url
    cJSON *archive_download_url = cJSON_GetObjectItemCaseSensitive(artifactJSON, "archive_download_url");
    if (!archive_download_url) {
        goto end;
    }

    
    if(!cJSON_IsString(archive_download_url))
    {
    goto end; //String
    }

    // artifact->expired
    cJSON *expired = cJSON_GetObjectItemCaseSensitive(artifactJSON, "expired");
    if (!expired) {
        goto end;
    }

    
    if(!cJSON_IsBool(expired))
    {
    goto end; //Bool
    }

    // artifact->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(artifactJSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }

    // artifact->expires_at
    cJSON *expires_at = cJSON_GetObjectItemCaseSensitive(artifactJSON, "expires_at");
    if (!expires_at) {
        goto end;
    }

    
    if(!cJSON_IsString(expires_at))
    {
    goto end; //DateTime
    }

    // artifact->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(artifactJSON, "updated_at");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }

    // artifact->workflow_run
    cJSON *workflow_run = cJSON_GetObjectItemCaseSensitive(artifactJSON, "workflow_run");
    if (workflow_run) { 
    workflow_run_local_nonprim = artifact_workflow_run_parseFromJSON(workflow_run); //nonprimitive
    }


    artifact_local_var = artifact_create (
        id->valuedouble,
        strdup(node_id->valuestring),
        strdup(name->valuestring),
        size_in_bytes->valuedouble,
        strdup(url->valuestring),
        strdup(archive_download_url->valuestring),
        expired->valueint,
        strdup(created_at->valuestring),
        strdup(expires_at->valuestring),
        strdup(updated_at->valuestring),
        workflow_run ? workflow_run_local_nonprim : NULL
        );

    return artifact_local_var;
end:
    if (workflow_run_local_nonprim) {
        artifact_workflow_run_free(workflow_run_local_nonprim);
        workflow_run_local_nonprim = NULL;
    }
    return NULL;

}
