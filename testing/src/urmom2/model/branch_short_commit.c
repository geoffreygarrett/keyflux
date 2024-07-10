#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_short_commit.h"



branch_short_commit_t *branch_short_commit_create(
    char *sha,
    char *url
    ) {
    branch_short_commit_t *branch_short_commit_local_var = malloc(sizeof(branch_short_commit_t));
    if (!branch_short_commit_local_var) {
        return NULL;
    }
    branch_short_commit_local_var->sha = sha;
    branch_short_commit_local_var->url = url;

    return branch_short_commit_local_var;
}


void branch_short_commit_free(branch_short_commit_t *branch_short_commit) {
    if(NULL == branch_short_commit){
        return ;
    }
    listEntry_t *listEntry;
    if (branch_short_commit->sha) {
        free(branch_short_commit->sha);
        branch_short_commit->sha = NULL;
    }
    if (branch_short_commit->url) {
        free(branch_short_commit->url);
        branch_short_commit->url = NULL;
    }
    free(branch_short_commit);
}

cJSON *branch_short_commit_convertToJSON(branch_short_commit_t *branch_short_commit) {
    cJSON *item = cJSON_CreateObject();

    // branch_short_commit->sha
    if (!branch_short_commit->sha) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sha", branch_short_commit->sha) == NULL) {
    goto fail; //String
    }


    // branch_short_commit->url
    if (!branch_short_commit->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", branch_short_commit->url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branch_short_commit_t *branch_short_commit_parseFromJSON(cJSON *branch_short_commitJSON){

    branch_short_commit_t *branch_short_commit_local_var = NULL;

    // branch_short_commit->sha
    cJSON *sha = cJSON_GetObjectItemCaseSensitive(branch_short_commitJSON, "sha");
    if (!sha) {
        goto end;
    }

    
    if(!cJSON_IsString(sha))
    {
    goto end; //String
    }

    // branch_short_commit->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(branch_short_commitJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }


    branch_short_commit_local_var = branch_short_commit_create (
        strdup(sha->valuestring),
        strdup(url->valuestring)
        );

    return branch_short_commit_local_var;
end:
    return NULL;

}
