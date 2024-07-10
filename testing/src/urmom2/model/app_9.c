#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "app_9.h"


char* eventsapp_9_ToString(github_v3_rest_api_app_9_EVENTS_e events) {
	char *eventsArray[] =  { "NULL", "branch_protection_rule", "check_run", "check_suite", "code_scanning_alert", "commit_comment", "content_reference", "create", "delete", "deployment", "deployment_review", "deployment_status", "deploy_key", "discussion", "discussion_comment", "fork", "gollum", "issues", "issue_comment", "label", "member", "membership", "milestone", "organization", "org_block", "page_build", "project", "project_card", "project_column", "public", "pull_request", "pull_request_review", "pull_request_review_comment", "push", "registry_package", "release", "repository", "repository_dispatch", "secret_scanning_alert", "star", "status", "team", "team_add", "watch", "workflow_dispatch", "workflow_run", "security_and_analysis", "reminder", "pull_request_review_thread" };
	return eventsArray[events - 1];
}

github_v3_rest_api_app_9_EVENTS_e eventsapp_9_FromString(char* events) {
    int stringToReturn = 0;
    char *eventsArray[] =  { "NULL", "branch_protection_rule", "check_run", "check_suite", "code_scanning_alert", "commit_comment", "content_reference", "create", "delete", "deployment", "deployment_review", "deployment_status", "deploy_key", "discussion", "discussion_comment", "fork", "gollum", "issues", "issue_comment", "label", "member", "membership", "milestone", "organization", "org_block", "page_build", "project", "project_card", "project_column", "public", "pull_request", "pull_request_review", "pull_request_review_comment", "push", "registry_package", "release", "repository", "repository_dispatch", "secret_scanning_alert", "star", "status", "team", "team_add", "watch", "workflow_dispatch", "workflow_run", "security_and_analysis", "reminder", "pull_request_review_thread" };
    size_t sizeofArray = sizeof(eventsArray) / sizeof(eventsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(events, eventsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

app_9_t *app_9_create(
    char *created_at,
    char *description,
    list_t *events,
    char *external_url,
    char *html_url,
    int id,
    char *name,
    char *node_id,
    user_t *owner,
    app_permissions_t *permissions,
    char *slug,
    char *updated_at
    ) {
    app_9_t *app_9_local_var = malloc(sizeof(app_9_t));
    if (!app_9_local_var) {
        return NULL;
    }
    app_9_local_var->created_at = created_at;
    app_9_local_var->description = description;
    app_9_local_var->events = events;
    app_9_local_var->external_url = external_url;
    app_9_local_var->html_url = html_url;
    app_9_local_var->id = id;
    app_9_local_var->name = name;
    app_9_local_var->node_id = node_id;
    app_9_local_var->owner = owner;
    app_9_local_var->permissions = permissions;
    app_9_local_var->slug = slug;
    app_9_local_var->updated_at = updated_at;

    return app_9_local_var;
}


void app_9_free(app_9_t *app_9) {
    if(NULL == app_9){
        return ;
    }
    listEntry_t *listEntry;
    if (app_9->created_at) {
        free(app_9->created_at);
        app_9->created_at = NULL;
    }
    if (app_9->description) {
        free(app_9->description);
        app_9->description = NULL;
    }
    if (app_9->events) {
        list_ForEach(listEntry, app_9->events) {
            free(listEntry->data);
        }
        list_freeList(app_9->events);
        app_9->events = NULL;
    }
    if (app_9->external_url) {
        free(app_9->external_url);
        app_9->external_url = NULL;
    }
    if (app_9->html_url) {
        free(app_9->html_url);
        app_9->html_url = NULL;
    }
    if (app_9->name) {
        free(app_9->name);
        app_9->name = NULL;
    }
    if (app_9->node_id) {
        free(app_9->node_id);
        app_9->node_id = NULL;
    }
    if (app_9->owner) {
        user_free(app_9->owner);
        app_9->owner = NULL;
    }
    if (app_9->permissions) {
        app_permissions_free(app_9->permissions);
        app_9->permissions = NULL;
    }
    if (app_9->slug) {
        free(app_9->slug);
        app_9->slug = NULL;
    }
    if (app_9->updated_at) {
        free(app_9->updated_at);
        app_9->updated_at = NULL;
    }
    free(app_9);
}

cJSON *app_9_convertToJSON(app_9_t *app_9) {
    cJSON *item = cJSON_CreateObject();

    // app_9->created_at
    if (!app_9->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", app_9->created_at) == NULL) {
    goto fail; //Date-Time
    }


    // app_9->description
    if (!app_9->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", app_9->description) == NULL) {
    goto fail; //String
    }


    // app_9->events
    if(app_9->events != github_v3_rest_api_app_9_EVENTS_NULL) {
    cJSON *events = cJSON_AddArrayToObject(item, "events");
    if(events == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *eventsListEntry;
    list_ForEach(eventsListEntry, app_9->events) {
    if(cJSON_AddStringToObject(events, "", (char*)eventsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // app_9->external_url
    if (!app_9->external_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "external_url", app_9->external_url) == NULL) {
    goto fail; //String
    }


    // app_9->html_url
    if (!app_9->html_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "html_url", app_9->html_url) == NULL) {
    goto fail; //String
    }


    // app_9->id
    if (!app_9->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", app_9->id) == NULL) {
    goto fail; //Numeric
    }


    // app_9->name
    if (!app_9->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", app_9->name) == NULL) {
    goto fail; //String
    }


    // app_9->node_id
    if (!app_9->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", app_9->node_id) == NULL) {
    goto fail; //String
    }


    // app_9->owner
    if (!app_9->owner) {
        goto fail;
    }
    cJSON *owner_local_JSON = user_convertToJSON(app_9->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // app_9->permissions
    if(app_9->permissions) {
    cJSON *permissions_local_JSON = app_permissions_convertToJSON(app_9->permissions);
    if(permissions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "permissions", permissions_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // app_9->slug
    if(app_9->slug) {
    if(cJSON_AddStringToObject(item, "slug", app_9->slug) == NULL) {
    goto fail; //String
    }
    }


    // app_9->updated_at
    if (!app_9->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updated_at", app_9->updated_at) == NULL) {
    goto fail; //Date-Time
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

app_9_t *app_9_parseFromJSON(cJSON *app_9JSON){

    app_9_t *app_9_local_var = NULL;

    // define the local list for app_9->events
    list_t *eventsList = NULL;

    // define the local variable for app_9->owner
    user_t *owner_local_nonprim = NULL;

    // define the local variable for app_9->permissions
    app_permissions_t *permissions_local_nonprim = NULL;

    // app_9->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(app_9JSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }

    // app_9->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(app_9JSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // app_9->events
    cJSON *events = cJSON_GetObjectItemCaseSensitive(app_9JSON, "events");
    if (events) { 
    cJSON *events_local = NULL;
    if(!cJSON_IsArray(events)) {
        goto end;//primitive container
    }
    eventsList = list_createList();

    cJSON_ArrayForEach(events_local, events)
    {
        if(!cJSON_IsString(events_local))
        {
            goto end;
        }
        list_addElement(eventsList , strdup(events_local->valuestring));
    }
    }

    // app_9->external_url
    cJSON *external_url = cJSON_GetObjectItemCaseSensitive(app_9JSON, "external_url");
    if (!external_url) {
        goto end;
    }

    
    if(!cJSON_IsString(external_url))
    {
    goto end; //String
    }

    // app_9->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(app_9JSON, "html_url");
    if (!html_url) {
        goto end;
    }

    
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }

    // app_9->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(app_9JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // app_9->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(app_9JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // app_9->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(app_9JSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // app_9->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(app_9JSON, "owner");
    if (!owner) {
        goto end;
    }

    
    owner_local_nonprim = user_parseFromJSON(owner); //nonprimitive

    // app_9->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(app_9JSON, "permissions");
    if (permissions) { 
    permissions_local_nonprim = app_permissions_parseFromJSON(permissions); //nonprimitive
    }

    // app_9->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(app_9JSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug))
    {
    goto end; //String
    }
    }

    // app_9->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(app_9JSON, "updated_at");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }


    app_9_local_var = app_9_create (
        strdup(created_at->valuestring),
        strdup(description->valuestring),
        events ? eventsList : NULL,
        strdup(external_url->valuestring),
        strdup(html_url->valuestring),
        id->valuedouble,
        strdup(name->valuestring),
        strdup(node_id->valuestring),
        owner_local_nonprim,
        permissions ? permissions_local_nonprim : NULL,
        slug ? strdup(slug->valuestring) : NULL,
        strdup(updated_at->valuestring)
        );

    return app_9_local_var;
end:
    if (eventsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, eventsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(eventsList);
        eventsList = NULL;
    }
    if (owner_local_nonprim) {
        user_free(owner_local_nonprim);
        owner_local_nonprim = NULL;
    }
    if (permissions_local_nonprim) {
        app_permissions_free(permissions_local_nonprim);
        permissions_local_nonprim = NULL;
    }
    return NULL;

}
