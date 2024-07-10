#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "check_run_pull_request_base.h"



check_run_pull_request_base_t *check_run_pull_request_base_create(
    char *ref,
    repo_ref_t *repo,
    char *sha
    ) {
    check_run_pull_request_base_t *check_run_pull_request_base_local_var = malloc(sizeof(check_run_pull_request_base_t));
    if (!check_run_pull_request_base_local_var) {
        return NULL;
    }
    check_run_pull_request_base_local_var->ref = ref;
    check_run_pull_request_base_local_var->repo = repo;
    check_run_pull_request_base_local_var->sha = sha;

    return check_run_pull_request_base_local_var;
}


void check_run_pull_request_base_free(check_run_pull_request_base_t *check_run_pull_request_base) {
    if(NULL == check_run_pull_request_base){
        return ;
    }
    listEntry_t *listEntry;
    if (check_run_pull_request_base->ref) {
        free(check_run_pull_request_base->ref);
        check_run_pull_request_base->ref = NULL;
    }
    if (check_run_pull_request_base->repo) {
        repo_ref_free(check_run_pull_request_base->repo);
        check_run_pull_request_base->repo = NULL;
    }
    if (check_run_pull_request_base->sha) {
        free(check_run_pull_request_base->sha);
        check_run_pull_request_base->sha = NULL;
    }
    free(check_run_pull_request_base);
}

cJSON *check_run_pull_request_base_convertToJSON(check_run_pull_request_base_t *check_run_pull_request_base) {
    cJSON *item = cJSON_CreateObject();

    // check_run_pull_request_base->ref
    if (!check_run_pull_request_base->ref) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ref", check_run_pull_request_base->ref) == NULL) {
    goto fail; //String
    }


    // check_run_pull_request_base->repo
    if (!check_run_pull_request_base->repo) {
        goto fail;
    }
    cJSON *repo_local_JSON = repo_ref_convertToJSON(check_run_pull_request_base->repo);
    if(repo_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "repo", repo_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // check_run_pull_request_base->sha
    if (!check_run_pull_request_base->sha) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sha", check_run_pull_request_base->sha) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

check_run_pull_request_base_t *check_run_pull_request_base_parseFromJSON(cJSON *check_run_pull_request_baseJSON){

    check_run_pull_request_base_t *check_run_pull_request_base_local_var = NULL;

    // define the local variable for check_run_pull_request_base->repo
    repo_ref_t *repo_local_nonprim = NULL;

    // check_run_pull_request_base->ref
    cJSON *ref = cJSON_GetObjectItemCaseSensitive(check_run_pull_request_baseJSON, "ref");
    if (!ref) {
        goto end;
    }

    
    if(!cJSON_IsString(ref))
    {
    goto end; //String
    }

    // check_run_pull_request_base->repo
    cJSON *repo = cJSON_GetObjectItemCaseSensitive(check_run_pull_request_baseJSON, "repo");
    if (!repo) {
        goto end;
    }

    
    repo_local_nonprim = repo_ref_parseFromJSON(repo); //nonprimitive

    // check_run_pull_request_base->sha
    cJSON *sha = cJSON_GetObjectItemCaseSensitive(check_run_pull_request_baseJSON, "sha");
    if (!sha) {
        goto end;
    }

    
    if(!cJSON_IsString(sha))
    {
    goto end; //String
    }


    check_run_pull_request_base_local_var = check_run_pull_request_base_create (
        strdup(ref->valuestring),
        repo_local_nonprim,
        strdup(sha->valuestring)
        );

    return check_run_pull_request_base_local_var;
end:
    if (repo_local_nonprim) {
        repo_ref_free(repo_local_nonprim);
        repo_local_nonprim = NULL;
    }
    return NULL;

}
