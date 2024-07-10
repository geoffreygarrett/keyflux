#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "auto_merge.h"


char* merge_methodauto_merge_ToString(github_v3_rest_api_auto_merge_MERGEMETHOD_e merge_method) {
    char* merge_methodArray[] =  { "NULL", "merge", "squash", "rebase" };
	return merge_methodArray[merge_method];
}

github_v3_rest_api_auto_merge_MERGEMETHOD_e merge_methodauto_merge_FromString(char* merge_method){
    int stringToReturn = 0;
    char *merge_methodArray[] =  { "NULL", "merge", "squash", "rebase" };
    size_t sizeofArray = sizeof(merge_methodArray) / sizeof(merge_methodArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(merge_method, merge_methodArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

auto_merge_t *auto_merge_create(
    simple_user_t *enabled_by,
    github_v3_rest_api_auto_merge_MERGEMETHOD_e merge_method,
    char *commit_title,
    char *commit_message
    ) {
    auto_merge_t *auto_merge_local_var = malloc(sizeof(auto_merge_t));
    if (!auto_merge_local_var) {
        return NULL;
    }
    auto_merge_local_var->enabled_by = enabled_by;
    auto_merge_local_var->merge_method = merge_method;
    auto_merge_local_var->commit_title = commit_title;
    auto_merge_local_var->commit_message = commit_message;

    return auto_merge_local_var;
}


void auto_merge_free(auto_merge_t *auto_merge) {
    if(NULL == auto_merge){
        return ;
    }
    listEntry_t *listEntry;
    if (auto_merge->enabled_by) {
        simple_user_free(auto_merge->enabled_by);
        auto_merge->enabled_by = NULL;
    }
    if (auto_merge->commit_title) {
        free(auto_merge->commit_title);
        auto_merge->commit_title = NULL;
    }
    if (auto_merge->commit_message) {
        free(auto_merge->commit_message);
        auto_merge->commit_message = NULL;
    }
    free(auto_merge);
}

cJSON *auto_merge_convertToJSON(auto_merge_t *auto_merge) {
    cJSON *item = cJSON_CreateObject();

    // auto_merge->enabled_by
    if (!auto_merge->enabled_by) {
        goto fail;
    }
    cJSON *enabled_by_local_JSON = simple_user_convertToJSON(auto_merge->enabled_by);
    if(enabled_by_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "enabled_by", enabled_by_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // auto_merge->merge_method
    if (github_v3_rest_api_auto_merge_MERGEMETHOD_NULL == auto_merge->merge_method) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "merge_method", merge_methodauto_merge_ToString(auto_merge->merge_method)) == NULL)
    {
    goto fail; //Enum
    }


    // auto_merge->commit_title
    if (!auto_merge->commit_title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "commit_title", auto_merge->commit_title) == NULL) {
    goto fail; //String
    }


    // auto_merge->commit_message
    if (!auto_merge->commit_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "commit_message", auto_merge->commit_message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

auto_merge_t *auto_merge_parseFromJSON(cJSON *auto_mergeJSON){

    auto_merge_t *auto_merge_local_var = NULL;

    // define the local variable for auto_merge->enabled_by
    simple_user_t *enabled_by_local_nonprim = NULL;

    // auto_merge->enabled_by
    cJSON *enabled_by = cJSON_GetObjectItemCaseSensitive(auto_mergeJSON, "enabled_by");
    if (!enabled_by) {
        goto end;
    }

    
    enabled_by_local_nonprim = simple_user_parseFromJSON(enabled_by); //nonprimitive

    // auto_merge->merge_method
    cJSON *merge_method = cJSON_GetObjectItemCaseSensitive(auto_mergeJSON, "merge_method");
    if (!merge_method) {
        goto end;
    }

    github_v3_rest_api_auto_merge_MERGEMETHOD_e merge_methodVariable;
    
    if(!cJSON_IsString(merge_method))
    {
    goto end; //Enum
    }
    merge_methodVariable = merge_methodauto_merge_FromString(merge_method->valuestring);

    // auto_merge->commit_title
    cJSON *commit_title = cJSON_GetObjectItemCaseSensitive(auto_mergeJSON, "commit_title");
    if (!commit_title) {
        goto end;
    }

    
    if(!cJSON_IsString(commit_title))
    {
    goto end; //String
    }

    // auto_merge->commit_message
    cJSON *commit_message = cJSON_GetObjectItemCaseSensitive(auto_mergeJSON, "commit_message");
    if (!commit_message) {
        goto end;
    }

    
    if(!cJSON_IsString(commit_message))
    {
    goto end; //String
    }


    auto_merge_local_var = auto_merge_create (
        enabled_by_local_nonprim,
        merge_methodVariable,
        strdup(commit_title->valuestring),
        strdup(commit_message->valuestring)
        );

    return auto_merge_local_var;
end:
    if (enabled_by_local_nonprim) {
        simple_user_free(enabled_by_local_nonprim);
        enabled_by_local_nonprim = NULL;
    }
    return NULL;

}
