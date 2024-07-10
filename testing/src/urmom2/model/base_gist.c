#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "base_gist.h"



base_gist_t *base_gist_create(
    char *url,
    char *forks_url,
    char *commits_url,
    char *id,
    char *node_id,
    char *git_pull_url,
    char *git_push_url,
    char *html_url,
    list_t* files,
    int _public,
    char *created_at,
    char *updated_at,
    char *description,
    int comments,
    nullable_simple_user_t *user,
    char *comments_url,
    simple_user_t *owner,
    int truncated,
    list_t *forks,
    list_t *history
    ) {
    base_gist_t *base_gist_local_var = malloc(sizeof(base_gist_t));
    if (!base_gist_local_var) {
        return NULL;
    }
    base_gist_local_var->url = url;
    base_gist_local_var->forks_url = forks_url;
    base_gist_local_var->commits_url = commits_url;
    base_gist_local_var->id = id;
    base_gist_local_var->node_id = node_id;
    base_gist_local_var->git_pull_url = git_pull_url;
    base_gist_local_var->git_push_url = git_push_url;
    base_gist_local_var->html_url = html_url;
    base_gist_local_var->files = files;
    base_gist_local_var->_public = _public;
    base_gist_local_var->created_at = created_at;
    base_gist_local_var->updated_at = updated_at;
    base_gist_local_var->description = description;
    base_gist_local_var->comments = comments;
    base_gist_local_var->user = user;
    base_gist_local_var->comments_url = comments_url;
    base_gist_local_var->owner = owner;
    base_gist_local_var->truncated = truncated;
    base_gist_local_var->forks = forks;
    base_gist_local_var->history = history;

    return base_gist_local_var;
}


void base_gist_free(base_gist_t *base_gist) {
    if(NULL == base_gist){
        return ;
    }
    listEntry_t *listEntry;
    if (base_gist->url) {
        free(base_gist->url);
        base_gist->url = NULL;
    }
    if (base_gist->forks_url) {
        free(base_gist->forks_url);
        base_gist->forks_url = NULL;
    }
    if (base_gist->commits_url) {
        free(base_gist->commits_url);
        base_gist->commits_url = NULL;
    }
    if (base_gist->id) {
        free(base_gist->id);
        base_gist->id = NULL;
    }
    if (base_gist->node_id) {
        free(base_gist->node_id);
        base_gist->node_id = NULL;
    }
    if (base_gist->git_pull_url) {
        free(base_gist->git_pull_url);
        base_gist->git_pull_url = NULL;
    }
    if (base_gist->git_push_url) {
        free(base_gist->git_push_url);
        base_gist->git_push_url = NULL;
    }
    if (base_gist->html_url) {
        free(base_gist->html_url);
        base_gist->html_url = NULL;
    }
    if (base_gist->files) {
        list_ForEach(listEntry, base_gist->files) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(base_gist->files);
        base_gist->files = NULL;
    }
    if (base_gist->created_at) {
        free(base_gist->created_at);
        base_gist->created_at = NULL;
    }
    if (base_gist->updated_at) {
        free(base_gist->updated_at);
        base_gist->updated_at = NULL;
    }
    if (base_gist->description) {
        free(base_gist->description);
        base_gist->description = NULL;
    }
    if (base_gist->user) {
        nullable_simple_user_free(base_gist->user);
        base_gist->user = NULL;
    }
    if (base_gist->comments_url) {
        free(base_gist->comments_url);
        base_gist->comments_url = NULL;
    }
    if (base_gist->owner) {
        simple_user_free(base_gist->owner);
        base_gist->owner = NULL;
    }
    if (base_gist->forks) {
        list_ForEach(listEntry, base_gist->forks) {
            any_type_free(listEntry->data);
        }
        list_freeList(base_gist->forks);
        base_gist->forks = NULL;
    }
    if (base_gist->history) {
        list_ForEach(listEntry, base_gist->history) {
            any_type_free(listEntry->data);
        }
        list_freeList(base_gist->history);
        base_gist->history = NULL;
    }
    free(base_gist);
}

cJSON *base_gist_convertToJSON(base_gist_t *base_gist) {
    cJSON *item = cJSON_CreateObject();

    // base_gist->url
    if (!base_gist->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", base_gist->url) == NULL) {
    goto fail; //String
    }


    // base_gist->forks_url
    if (!base_gist->forks_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "forks_url", base_gist->forks_url) == NULL) {
    goto fail; //String
    }


    // base_gist->commits_url
    if (!base_gist->commits_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "commits_url", base_gist->commits_url) == NULL) {
    goto fail; //String
    }


    // base_gist->id
    if (!base_gist->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", base_gist->id) == NULL) {
    goto fail; //String
    }


    // base_gist->node_id
    if (!base_gist->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", base_gist->node_id) == NULL) {
    goto fail; //String
    }


    // base_gist->git_pull_url
    if (!base_gist->git_pull_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "git_pull_url", base_gist->git_pull_url) == NULL) {
    goto fail; //String
    }


    // base_gist->git_push_url
    if (!base_gist->git_push_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "git_push_url", base_gist->git_push_url) == NULL) {
    goto fail; //String
    }


    // base_gist->html_url
    if (!base_gist->html_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "html_url", base_gist->html_url) == NULL) {
    goto fail; //String
    }


    // base_gist->files
    if (!base_gist->files) {
        goto fail;
    }
    cJSON *files = cJSON_AddObjectToObject(item, "files");
    if(files == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = files;
    listEntry_t *filesListEntry;
    if (base_gist->files) {
    list_ForEach(filesListEntry, base_gist->files) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)filesListEntry->data;
    }
    }


    // base_gist->_public
    if (!base_gist->_public) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "public", base_gist->_public) == NULL) {
    goto fail; //Bool
    }


    // base_gist->created_at
    if (!base_gist->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", base_gist->created_at) == NULL) {
    goto fail; //Date-Time
    }


    // base_gist->updated_at
    if (!base_gist->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updated_at", base_gist->updated_at) == NULL) {
    goto fail; //Date-Time
    }


    // base_gist->description
    if (!base_gist->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", base_gist->description) == NULL) {
    goto fail; //String
    }


    // base_gist->comments
    if (!base_gist->comments) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "comments", base_gist->comments) == NULL) {
    goto fail; //Numeric
    }


    // base_gist->user
    if (!base_gist->user) {
        goto fail;
    }
    cJSON *user_local_JSON = nullable_simple_user_convertToJSON(base_gist->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // base_gist->comments_url
    if (!base_gist->comments_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "comments_url", base_gist->comments_url) == NULL) {
    goto fail; //String
    }


    // base_gist->owner
    if(base_gist->owner) {
    cJSON *owner_local_JSON = simple_user_convertToJSON(base_gist->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // base_gist->truncated
    if(base_gist->truncated) {
    if(cJSON_AddBoolToObject(item, "truncated", base_gist->truncated) == NULL) {
    goto fail; //Bool
    }
    }


    // base_gist->forks
    if(base_gist->forks) {
    cJSON *forks = cJSON_AddArrayToObject(item, "forks");
    if(forks == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *forksListEntry;
    if (base_gist->forks) {
    list_ForEach(forksListEntry, base_gist->forks) {
    cJSON *itemLocal = any_type_convertToJSON(forksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(forks, itemLocal);
    }
    }
    }


    // base_gist->history
    if(base_gist->history) {
    cJSON *history = cJSON_AddArrayToObject(item, "history");
    if(history == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *historyListEntry;
    if (base_gist->history) {
    list_ForEach(historyListEntry, base_gist->history) {
    cJSON *itemLocal = any_type_convertToJSON(historyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(history, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

base_gist_t *base_gist_parseFromJSON(cJSON *base_gistJSON){

    base_gist_t *base_gist_local_var = NULL;

    // define the local map for base_gist->files
    list_t *filesList = NULL;

    // define the local variable for base_gist->user
    nullable_simple_user_t *user_local_nonprim = NULL;

    // define the local variable for base_gist->owner
    simple_user_t *owner_local_nonprim = NULL;

    // define the local list for base_gist->forks
    list_t *forksList = NULL;

    // define the local list for base_gist->history
    list_t *historyList = NULL;

    // base_gist->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }

    // base_gist->forks_url
    cJSON *forks_url = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "forks_url");
    if (!forks_url) {
        goto end;
    }

    
    if(!cJSON_IsString(forks_url))
    {
    goto end; //String
    }

    // base_gist->commits_url
    cJSON *commits_url = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "commits_url");
    if (!commits_url) {
        goto end;
    }

    
    if(!cJSON_IsString(commits_url))
    {
    goto end; //String
    }

    // base_gist->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // base_gist->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // base_gist->git_pull_url
    cJSON *git_pull_url = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "git_pull_url");
    if (!git_pull_url) {
        goto end;
    }

    
    if(!cJSON_IsString(git_pull_url))
    {
    goto end; //String
    }

    // base_gist->git_push_url
    cJSON *git_push_url = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "git_push_url");
    if (!git_push_url) {
        goto end;
    }

    
    if(!cJSON_IsString(git_push_url))
    {
    goto end; //String
    }

    // base_gist->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "html_url");
    if (!html_url) {
        goto end;
    }

    
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }

    // base_gist->files
    cJSON *files = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "files");
    if (!files) {
        goto end;
    }

    

    // The data type of the elements in base_gist->files is currently not supported.


    // base_gist->_public
    cJSON *_public = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "public");
    if (!_public) {
        goto end;
    }

    
    if(!cJSON_IsBool(_public))
    {
    goto end; //Bool
    }

    // base_gist->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }

    // base_gist->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "updated_at");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }

    // base_gist->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // base_gist->comments
    cJSON *comments = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "comments");
    if (!comments) {
        goto end;
    }

    
    if(!cJSON_IsNumber(comments))
    {
    goto end; //Numeric
    }

    // base_gist->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "user");
    if (!user) {
        goto end;
    }

    
    user_local_nonprim = nullable_simple_user_parseFromJSON(user); //nonprimitive

    // base_gist->comments_url
    cJSON *comments_url = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "comments_url");
    if (!comments_url) {
        goto end;
    }

    
    if(!cJSON_IsString(comments_url))
    {
    goto end; //String
    }

    // base_gist->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "owner");
    if (owner) { 
    owner_local_nonprim = simple_user_parseFromJSON(owner); //nonprimitive
    }

    // base_gist->truncated
    cJSON *truncated = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "truncated");
    if (truncated) { 
    if(!cJSON_IsBool(truncated))
    {
    goto end; //Bool
    }
    }

    // base_gist->forks
    cJSON *forks = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "forks");
    if (forks) { 
    cJSON *forks_local_nonprimitive = NULL;
    if(!cJSON_IsArray(forks)){
        goto end; //nonprimitive container
    }

    forksList = list_createList();

    cJSON_ArrayForEach(forks_local_nonprimitive,forks )
    {
        if(!cJSON_IsObject(forks_local_nonprimitive)){
            goto end;
        }
        any_type_t *forksItem = any_type_parseFromJSON(forks_local_nonprimitive);

        list_addElement(forksList, forksItem);
    }
    }

    // base_gist->history
    cJSON *history = cJSON_GetObjectItemCaseSensitive(base_gistJSON, "history");
    if (history) { 
    cJSON *history_local_nonprimitive = NULL;
    if(!cJSON_IsArray(history)){
        goto end; //nonprimitive container
    }

    historyList = list_createList();

    cJSON_ArrayForEach(history_local_nonprimitive,history )
    {
        if(!cJSON_IsObject(history_local_nonprimitive)){
            goto end;
        }
        any_type_t *historyItem = any_type_parseFromJSON(history_local_nonprimitive);

        list_addElement(historyList, historyItem);
    }
    }


    base_gist_local_var = base_gist_create (
        strdup(url->valuestring),
        strdup(forks_url->valuestring),
        strdup(commits_url->valuestring),
        strdup(id->valuestring),
        strdup(node_id->valuestring),
        strdup(git_pull_url->valuestring),
        strdup(git_push_url->valuestring),
        strdup(html_url->valuestring),
        filesList,
        _public->valueint,
        strdup(created_at->valuestring),
        strdup(updated_at->valuestring),
        strdup(description->valuestring),
        comments->valuedouble,
        user_local_nonprim,
        strdup(comments_url->valuestring),
        owner ? owner_local_nonprim : NULL,
        truncated ? truncated->valueint : 0,
        forks ? forksList : NULL,
        history ? historyList : NULL
        );

    return base_gist_local_var;
end:

    // The data type of the elements in base_gist->files is currently not supported.

    if (user_local_nonprim) {
        nullable_simple_user_free(user_local_nonprim);
        user_local_nonprim = NULL;
    }
    if (owner_local_nonprim) {
        simple_user_free(owner_local_nonprim);
        owner_local_nonprim = NULL;
    }
    if (forksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, forksList) {
            any_type_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(forksList);
        forksList = NULL;
    }
    if (historyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, historyList) {
            any_type_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(historyList);
        historyList = NULL;
    }
    return NULL;

}
