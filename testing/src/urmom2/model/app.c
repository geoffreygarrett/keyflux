#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "app.h"


char* eventsapp_ToString(github_v3_rest_api_app_EVENTS_e events) {
	char *eventsArray[] =  { "NULL", "branch_protection_rule", "check_run", "check_suite", "code_scanning_alert", "commit_comment", "content_reference", "create", "delete", "deployment", "deployment_review", "deployment_status", "deploy_key", "discussion", "discussion_comment", "fork", "gollum", "issues", "issue_comment", "label", "member", "membership", "milestone", "organization", "org_block", "page_build", "project", "project_card", "project_column", "public", "pull_request", "pull_request_review", "pull_request_review_comment", "push", "registry_package", "release", "repository", "repository_dispatch", "secret_scanning_alert", "star", "status", "team", "team_add", "watch", "workflow_dispatch", "workflow_run", "reminder", "pull_request_review_thread" };
	return eventsArray[events - 1];
}

github_v3_rest_api_app_EVENTS_e eventsapp_FromString(char* events) {
    int stringToReturn = 0;
    char *eventsArray[] =  { "NULL", "branch_protection_rule", "check_run", "check_suite", "code_scanning_alert", "commit_comment", "content_reference", "create", "delete", "deployment", "deployment_review", "deployment_status", "deploy_key", "discussion", "discussion_comment", "fork", "gollum", "issues", "issue_comment", "label", "member", "membership", "milestone", "organization", "org_block", "page_build", "project", "project_card", "project_column", "public", "pull_request", "pull_request_review", "pull_request_review_comment", "push", "registry_package", "release", "repository", "repository_dispatch", "secret_scanning_alert", "star", "status", "team", "team_add", "watch", "workflow_dispatch", "workflow_run", "reminder", "pull_request_review_thread" };
    size_t sizeofArray = sizeof(eventsArray) / sizeof(eventsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(events, eventsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

app_t *app_create(
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
    app_t *app_local_var = malloc(sizeof(app_t));
    if (!app_local_var) {
        return NULL;
    }
    app_local_var->created_at = created_at;
    app_local_var->description = description;
    app_local_var->events = events;
    app_local_var->external_url = external_url;
    app_local_var->html_url = html_url;
    app_local_var->id = id;
    app_local_var->name = name;
    app_local_var->node_id = node_id;
    app_local_var->owner = owner;
    app_local_var->permissions = permissions;
    app_local_var->slug = slug;
    app_local_var->updated_at = updated_at;

    return app_local_var;
}


void app_free(app_t *app) {
    if(NULL == app){
        return ;
    }
    listEntry_t *listEntry;
    if (app->created_at) {
        free(app->created_at);
        app->created_at = NULL;
    }
    if (app->description) {
        free(app->description);
        app->description = NULL;
    }
    if (app->events) {
        list_ForEach(listEntry, app->events) {
            free(listEntry->data);
        }
        list_freeList(app->events);
        app->events = NULL;
    }
    if (app->external_url) {
        free(app->external_url);
        app->external_url = NULL;
    }
    if (app->html_url) {
        free(app->html_url);
        app->html_url = NULL;
    }
    if (app->name) {
        free(app->name);
        app->name = NULL;
    }
    if (app->node_id) {
        free(app->node_id);
        app->node_id = NULL;
    }
    if (app->owner) {
        user_free(app->owner);
        app->owner = NULL;
    }
    if (app->permissions) {
        app_permissions_free(app->permissions);
        app->permissions = NULL;
    }
    if (app->slug) {
        free(app->slug);
        app->slug = NULL;
    }
    if (app->updated_at) {
        free(app->updated_at);
        app->updated_at = NULL;
    }
    free(app);
}

cJSON *app_convertToJSON(app_t *app) {
    cJSON *item = cJSON_CreateObject();

    // app->created_at
    if (!app->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", app->created_at) == NULL) {
    goto fail; //Date-Time
    }


    // app->description
    if (!app->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", app->description) == NULL) {
    goto fail; //String
    }


    // app->events
    if(app->events != github_v3_rest_api_app_EVENTS_NULL) {
    cJSON *events = cJSON_AddArrayToObject(item, "events");
    if(events == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *eventsListEntry;
    list_ForEach(eventsListEntry, app->events) {
    if(cJSON_AddStringToObject(events, "", (char*)eventsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // app->external_url
    if (!app->external_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "external_url", app->external_url) == NULL) {
    goto fail; //String
    }


    // app->html_url
    if (!app->html_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "html_url", app->html_url) == NULL) {
    goto fail; //String
    }


    // app->id
    if (!app->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", app->id) == NULL) {
    goto fail; //Numeric
    }


    // app->name
    if (!app->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", app->name) == NULL) {
    goto fail; //String
    }


    // app->node_id
    if (!app->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", app->node_id) == NULL) {
    goto fail; //String
    }


    // app->owner
    if (!app->owner) {
        goto fail;
    }
    cJSON *owner_local_JSON = user_convertToJSON(app->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // app->permissions
    if(app->permissions) {
    cJSON *permissions_local_JSON = app_permissions_convertToJSON(app->permissions);
    if(permissions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "permissions", permissions_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // app->slug
    if(app->slug) {
    if(cJSON_AddStringToObject(item, "slug", app->slug) == NULL) {
    goto fail; //String
    }
    }


    // app->updated_at
    if (!app->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updated_at", app->updated_at) == NULL) {
    goto fail; //Date-Time
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

app_t *app_parseFromJSON(cJSON *appJSON){

    app_t *app_local_var = NULL;

    // define the local list for app->events
    list_t *eventsList = NULL;

    // define the local variable for app->owner
    user_t *owner_local_nonprim = NULL;

    // define the local variable for app->permissions
    app_permissions_t *permissions_local_nonprim = NULL;

    // app->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(appJSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }

    // app->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(appJSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // app->events
    cJSON *events = cJSON_GetObjectItemCaseSensitive(appJSON, "events");
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

    // app->external_url
    cJSON *external_url = cJSON_GetObjectItemCaseSensitive(appJSON, "external_url");
    if (!external_url) {
        goto end;
    }

    
    if(!cJSON_IsString(external_url))
    {
    goto end; //String
    }

    // app->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(appJSON, "html_url");
    if (!html_url) {
        goto end;
    }

    
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }

    // app->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(appJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // app->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(appJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // app->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(appJSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // app->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(appJSON, "owner");
    if (!owner) {
        goto end;
    }

    
    owner_local_nonprim = user_parseFromJSON(owner); //nonprimitive

    // app->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(appJSON, "permissions");
    if (permissions) { 
    permissions_local_nonprim = app_permissions_parseFromJSON(permissions); //nonprimitive
    }

    // app->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(appJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug))
    {
    goto end; //String
    }
    }

    // app->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(appJSON, "updated_at");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }


    app_local_var = app_create (
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

    return app_local_var;
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
