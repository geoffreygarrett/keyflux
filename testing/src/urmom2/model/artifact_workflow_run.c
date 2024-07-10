#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "artifact_workflow_run.h"



artifact_workflow_run_t *artifact_workflow_run_create(
    int id,
    int repository_id,
    int head_repository_id,
    char *head_branch,
    char *head_sha
    ) {
    artifact_workflow_run_t *artifact_workflow_run_local_var = malloc(sizeof(artifact_workflow_run_t));
    if (!artifact_workflow_run_local_var) {
        return NULL;
    }
    artifact_workflow_run_local_var->id = id;
    artifact_workflow_run_local_var->repository_id = repository_id;
    artifact_workflow_run_local_var->head_repository_id = head_repository_id;
    artifact_workflow_run_local_var->head_branch = head_branch;
    artifact_workflow_run_local_var->head_sha = head_sha;

    return artifact_workflow_run_local_var;
}


void artifact_workflow_run_free(artifact_workflow_run_t *artifact_workflow_run) {
    if(NULL == artifact_workflow_run){
        return ;
    }
    listEntry_t *listEntry;
    if (artifact_workflow_run->head_branch) {
        free(artifact_workflow_run->head_branch);
        artifact_workflow_run->head_branch = NULL;
    }
    if (artifact_workflow_run->head_sha) {
        free(artifact_workflow_run->head_sha);
        artifact_workflow_run->head_sha = NULL;
    }
    free(artifact_workflow_run);
}

cJSON *artifact_workflow_run_convertToJSON(artifact_workflow_run_t *artifact_workflow_run) {
    cJSON *item = cJSON_CreateObject();

    // artifact_workflow_run->id
    if(artifact_workflow_run->id) {
    if(cJSON_AddNumberToObject(item, "id", artifact_workflow_run->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // artifact_workflow_run->repository_id
    if(artifact_workflow_run->repository_id) {
    if(cJSON_AddNumberToObject(item, "repository_id", artifact_workflow_run->repository_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // artifact_workflow_run->head_repository_id
    if(artifact_workflow_run->head_repository_id) {
    if(cJSON_AddNumberToObject(item, "head_repository_id", artifact_workflow_run->head_repository_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // artifact_workflow_run->head_branch
    if(artifact_workflow_run->head_branch) {
    if(cJSON_AddStringToObject(item, "head_branch", artifact_workflow_run->head_branch) == NULL) {
    goto fail; //String
    }
    }


    // artifact_workflow_run->head_sha
    if(artifact_workflow_run->head_sha) {
    if(cJSON_AddStringToObject(item, "head_sha", artifact_workflow_run->head_sha) == NULL) {
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

artifact_workflow_run_t *artifact_workflow_run_parseFromJSON(cJSON *artifact_workflow_runJSON){

    artifact_workflow_run_t *artifact_workflow_run_local_var = NULL;

    // artifact_workflow_run->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(artifact_workflow_runJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // artifact_workflow_run->repository_id
    cJSON *repository_id = cJSON_GetObjectItemCaseSensitive(artifact_workflow_runJSON, "repository_id");
    if (repository_id) { 
    if(!cJSON_IsNumber(repository_id))
    {
    goto end; //Numeric
    }
    }

    // artifact_workflow_run->head_repository_id
    cJSON *head_repository_id = cJSON_GetObjectItemCaseSensitive(artifact_workflow_runJSON, "head_repository_id");
    if (head_repository_id) { 
    if(!cJSON_IsNumber(head_repository_id))
    {
    goto end; //Numeric
    }
    }

    // artifact_workflow_run->head_branch
    cJSON *head_branch = cJSON_GetObjectItemCaseSensitive(artifact_workflow_runJSON, "head_branch");
    if (head_branch) { 
    if(!cJSON_IsString(head_branch))
    {
    goto end; //String
    }
    }

    // artifact_workflow_run->head_sha
    cJSON *head_sha = cJSON_GetObjectItemCaseSensitive(artifact_workflow_runJSON, "head_sha");
    if (head_sha) { 
    if(!cJSON_IsString(head_sha))
    {
    goto end; //String
    }
    }


    artifact_workflow_run_local_var = artifact_workflow_run_create (
        id ? id->valuedouble : 0,
        repository_id ? repository_id->valuedouble : 0,
        head_repository_id ? head_repository_id->valuedouble : 0,
        head_branch ? strdup(head_branch->valuestring) : NULL,
        head_sha ? strdup(head_sha->valuestring) : NULL
        );

    return artifact_workflow_run_local_var;
end:
    return NULL;

}
