#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_with_protection.h"



branch_with_protection_t *branch_with_protection_create(
    char *name,
    commit_t *commit,
    branch_with_protection__links_t *_links,
    int _protected,
    branch_protection_t *protection,
    char *protection_url,
    char *pattern,
    int required_approving_review_count
    ) {
    branch_with_protection_t *branch_with_protection_local_var = malloc(sizeof(branch_with_protection_t));
    if (!branch_with_protection_local_var) {
        return NULL;
    }
    branch_with_protection_local_var->name = name;
    branch_with_protection_local_var->commit = commit;
    branch_with_protection_local_var->_links = _links;
    branch_with_protection_local_var->_protected = _protected;
    branch_with_protection_local_var->protection = protection;
    branch_with_protection_local_var->protection_url = protection_url;
    branch_with_protection_local_var->pattern = pattern;
    branch_with_protection_local_var->required_approving_review_count = required_approving_review_count;

    return branch_with_protection_local_var;
}


void branch_with_protection_free(branch_with_protection_t *branch_with_protection) {
    if(NULL == branch_with_protection){
        return ;
    }
    listEntry_t *listEntry;
    if (branch_with_protection->name) {
        free(branch_with_protection->name);
        branch_with_protection->name = NULL;
    }
    if (branch_with_protection->commit) {
        commit_free(branch_with_protection->commit);
        branch_with_protection->commit = NULL;
    }
    if (branch_with_protection->_links) {
        branch_with_protection__links_free(branch_with_protection->_links);
        branch_with_protection->_links = NULL;
    }
    if (branch_with_protection->protection) {
        branch_protection_free(branch_with_protection->protection);
        branch_with_protection->protection = NULL;
    }
    if (branch_with_protection->protection_url) {
        free(branch_with_protection->protection_url);
        branch_with_protection->protection_url = NULL;
    }
    if (branch_with_protection->pattern) {
        free(branch_with_protection->pattern);
        branch_with_protection->pattern = NULL;
    }
    free(branch_with_protection);
}

cJSON *branch_with_protection_convertToJSON(branch_with_protection_t *branch_with_protection) {
    cJSON *item = cJSON_CreateObject();

    // branch_with_protection->name
    if (!branch_with_protection->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", branch_with_protection->name) == NULL) {
    goto fail; //String
    }


    // branch_with_protection->commit
    if (!branch_with_protection->commit) {
        goto fail;
    }
    cJSON *commit_local_JSON = commit_convertToJSON(branch_with_protection->commit);
    if(commit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "commit", commit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // branch_with_protection->_links
    if (!branch_with_protection->_links) {
        goto fail;
    }
    cJSON *_links_local_JSON = branch_with_protection__links_convertToJSON(branch_with_protection->_links);
    if(_links_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "_links", _links_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // branch_with_protection->_protected
    if (!branch_with_protection->_protected) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "protected", branch_with_protection->_protected) == NULL) {
    goto fail; //Bool
    }


    // branch_with_protection->protection
    if (!branch_with_protection->protection) {
        goto fail;
    }
    cJSON *protection_local_JSON = branch_protection_convertToJSON(branch_with_protection->protection);
    if(protection_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "protection", protection_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // branch_with_protection->protection_url
    if (!branch_with_protection->protection_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "protection_url", branch_with_protection->protection_url) == NULL) {
    goto fail; //String
    }


    // branch_with_protection->pattern
    if(branch_with_protection->pattern) {
    if(cJSON_AddStringToObject(item, "pattern", branch_with_protection->pattern) == NULL) {
    goto fail; //String
    }
    }


    // branch_with_protection->required_approving_review_count
    if(branch_with_protection->required_approving_review_count) {
    if(cJSON_AddNumberToObject(item, "required_approving_review_count", branch_with_protection->required_approving_review_count) == NULL) {
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

branch_with_protection_t *branch_with_protection_parseFromJSON(cJSON *branch_with_protectionJSON){

    branch_with_protection_t *branch_with_protection_local_var = NULL;

    // define the local variable for branch_with_protection->commit
    commit_t *commit_local_nonprim = NULL;

    // define the local variable for branch_with_protection->_links
    branch_with_protection__links_t *_links_local_nonprim = NULL;

    // define the local variable for branch_with_protection->protection
    branch_protection_t *protection_local_nonprim = NULL;

    // branch_with_protection->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(branch_with_protectionJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // branch_with_protection->commit
    cJSON *commit = cJSON_GetObjectItemCaseSensitive(branch_with_protectionJSON, "commit");
    if (!commit) {
        goto end;
    }

    
    commit_local_nonprim = commit_parseFromJSON(commit); //nonprimitive

    // branch_with_protection->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(branch_with_protectionJSON, "_links");
    if (!_links) {
        goto end;
    }

    
    _links_local_nonprim = branch_with_protection__links_parseFromJSON(_links); //nonprimitive

    // branch_with_protection->_protected
    cJSON *_protected = cJSON_GetObjectItemCaseSensitive(branch_with_protectionJSON, "protected");
    if (!_protected) {
        goto end;
    }

    
    if(!cJSON_IsBool(_protected))
    {
    goto end; //Bool
    }

    // branch_with_protection->protection
    cJSON *protection = cJSON_GetObjectItemCaseSensitive(branch_with_protectionJSON, "protection");
    if (!protection) {
        goto end;
    }

    
    protection_local_nonprim = branch_protection_parseFromJSON(protection); //nonprimitive

    // branch_with_protection->protection_url
    cJSON *protection_url = cJSON_GetObjectItemCaseSensitive(branch_with_protectionJSON, "protection_url");
    if (!protection_url) {
        goto end;
    }

    
    if(!cJSON_IsString(protection_url))
    {
    goto end; //String
    }

    // branch_with_protection->pattern
    cJSON *pattern = cJSON_GetObjectItemCaseSensitive(branch_with_protectionJSON, "pattern");
    if (pattern) { 
    if(!cJSON_IsString(pattern))
    {
    goto end; //String
    }
    }

    // branch_with_protection->required_approving_review_count
    cJSON *required_approving_review_count = cJSON_GetObjectItemCaseSensitive(branch_with_protectionJSON, "required_approving_review_count");
    if (required_approving_review_count) { 
    if(!cJSON_IsNumber(required_approving_review_count))
    {
    goto end; //Numeric
    }
    }


    branch_with_protection_local_var = branch_with_protection_create (
        strdup(name->valuestring),
        commit_local_nonprim,
        _links_local_nonprim,
        _protected->valueint,
        protection_local_nonprim,
        strdup(protection_url->valuestring),
        pattern ? strdup(pattern->valuestring) : NULL,
        required_approving_review_count ? required_approving_review_count->valuedouble : 0
        );

    return branch_with_protection_local_var;
end:
    if (commit_local_nonprim) {
        commit_free(commit_local_nonprim);
        commit_local_nonprim = NULL;
    }
    if (_links_local_nonprim) {
        branch_with_protection__links_free(_links_local_nonprim);
        _links_local_nonprim = NULL;
    }
    if (protection_local_nonprim) {
        branch_protection_free(protection_local_nonprim);
        protection_local_nonprim = NULL;
    }
    return NULL;

}
