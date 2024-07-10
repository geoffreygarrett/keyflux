#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "app_13.h"


char* eventsapp_13_ToString(github_v3_rest_api_app_13_EVENTS_e events) {
	char *eventsArray[] =  { "NULL", "branch_protection_rule", "check_run", "check_suite", "code_scanning_alert", "commit_comment", "content_reference", "create", "delete", "deployment", "deployment_review", "deployment_status", "deploy_key", "discussion", "discussion_comment", "fork", "gollum", "issues", "issue_comment", "label", "member", "membership", "milestone", "organization", "org_block", "page_build", "project", "project_card", "project_column", "public", "pull_request", "pull_request_review", "pull_request_review_comment", "push", "registry_package", "release", "repository", "repository_dispatch", "secret_scanning_alert", "star", "status", "team", "team_add", "watch", "workflow_dispatch", "workflow_run", "pull_request_review_thread", "reminder" };
	return eventsArray[events - 1];
}

github_v3_rest_api_app_13_EVENTS_e eventsapp_13_FromString(char* events) {
    int stringToReturn = 0;
    char *eventsArray[] =  { "NULL", "branch_protection_rule", "check_run", "check_suite", "code_scanning_alert", "commit_comment", "content_reference", "create", "delete", "deployment", "deployment_review", "deployment_status", "deploy_key", "discussion", "discussion_comment", "fork", "gollum", "issues", "issue_comment", "label", "member", "membership", "milestone", "organization", "org_block", "page_build", "project", "project_card", "project_column", "public", "pull_request", "pull_request_review", "pull_request_review_comment", "push", "registry_package", "release", "repository", "repository_dispatch", "secret_scanning_alert", "star", "status", "team", "team_add", "watch", "workflow_dispatch", "workflow_run", "pull_request_review_thread", "reminder" };
    size_t sizeofArray = sizeof(eventsArray) / sizeof(eventsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(events, eventsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

app_13_t *app_13_create(
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
    app_13_t *app_13_local_var = malloc(sizeof(app_13_t));
    if (!app_13_local_var) {
        return NULL;
    }
    app_13_local_var->created_at = created_at;
    app_13_local_var->description = description;
    app_13_local_var->events = events;
    app_13_local_var->external_url = external_url;
    app_13_local_var->html_url = html_url;
    app_13_local_var->id = id;
    app_13_local_var->name = name;
    app_13_local_var->node_id = node_id;
    app_13_local_var->owner = owner;
    app_13_local_var->permissions = permissions;
    app_13_local_var->slug = slug;
    app_13_local_var->updated_at = updated_at;

    return app_13_local_var;
}


void app_13_free(app_13_t *app_13) {
    if(NULL == app_13){
        return ;
    }
    listEntry_t *listEntry;
    if (app_13->created_at) {
        free(app_13->created_at);
        app_13->created_at = NULL;
    }
    if (app_13->description) {
        free(app_13->description);
        app_13->description = NULL;
    }
    if (app_13->events) {
        list_ForEach(listEntry, app_13->events) {
            free(listEntry->data);
        }
        list_freeList(app_13->events);
        app_13->events = NULL;
    }
    if (app_13->external_url) {
        free(app_13->external_url);
        app_13->external_url = NULL;
    }
    if (app_13->html_url) {
        free(app_13->html_url);
        app_13->html_url = NULL;
    }
    if (app_13->name) {
        free(app_13->name);
        app_13->name = NULL;
    }
    if (app_13->node_id) {
        free(app_13->node_id);
        app_13->node_id = NULL;
    }
    if (app_13->owner) {
        user_free(app_13->owner);
        app_13->owner = NULL;
    }
    if (app_13->permissions) {
        app_permissions_free(app_13->permissions);
        app_13->permissions = NULL;
    }
    if (app_13->slug) {
        free(app_13->slug);
        app_13->slug = NULL;
    }
    if (app_13->updated_at) {
        free(app_13->updated_at);
        app_13->updated_at = NULL;
    }
    free(app_13);
}

cJSON *app_13_convertToJSON(app_13_t *app_13) {
    cJSON *item = cJSON_CreateObject();

    // app_13->created_at
    if (!app_13->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", app_13->created_at) == NULL) {
    goto fail; //Date-Time
    }


    // app_13->description
    if (!app_13->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", app_13->description) == NULL) {
    goto fail; //String
    }


    // app_13->events
    if(app_13->events != github_v3_rest_api_app_13_EVENTS_NULL) {
    cJSON *events = cJSON_AddArrayToObject(item, "events");
    if(events == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *eventsListEntry;
    list_ForEach(eventsListEntry, app_13->events) {
    if(cJSON_AddStringToObject(events, "", (char*)eventsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // app_13->external_url
    if (!app_13->external_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "external_url", app_13->external_url) == NULL) {
    goto fail; //String
    }


    // app_13->html_url
    if (!app_13->html_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "html_url", app_13->html_url) == NULL) {
    goto fail; //String
    }


    // app_13->id
    if (!app_13->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", app_13->id) == NULL) {
    goto fail; //Numeric
    }


    // app_13->name
    if (!app_13->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", app_13->name) == NULL) {
    goto fail; //String
    }


    // app_13->node_id
    if (!app_13->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", app_13->node_id) == NULL) {
    goto fail; //String
    }


    // app_13->owner
    if (!app_13->owner) {
        goto fail;
    }
    cJSON *owner_local_JSON = user_convertToJSON(app_13->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // app_13->permissions
    if(app_13->permissions) {
    cJSON *permissions_local_JSON = app_permissions_convertToJSON(app_13->permissions);
    if(permissions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "permissions", permissions_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // app_13->slug
    if(app_13->slug) {
    if(cJSON_AddStringToObject(item, "slug", app_13->slug) == NULL) {
    goto fail; //String
    }
    }


    // app_13->updated_at
    if (!app_13->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updated_at", app_13->updated_at) == NULL) {
    goto fail; //Date-Time
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

app_13_t *app_13_parseFromJSON(cJSON *app_13JSON){

    app_13_t *app_13_local_var = NULL;

    // define the local list for app_13->events
    list_t *eventsList = NULL;

    // define the local variable for app_13->owner
    user_t *owner_local_nonprim = NULL;

    // define the local variable for app_13->permissions
    app_permissions_t *permissions_local_nonprim = NULL;

    // app_13->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(app_13JSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }

    // app_13->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(app_13JSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // app_13->events
    cJSON *events = cJSON_GetObjectItemCaseSensitive(app_13JSON, "events");
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

    // app_13->external_url
    cJSON *external_url = cJSON_GetObjectItemCaseSensitive(app_13JSON, "external_url");
    if (!external_url) {
        goto end;
    }

    
    if(!cJSON_IsString(external_url))
    {
    goto end; //String
    }

    // app_13->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(app_13JSON, "html_url");
    if (!html_url) {
        goto end;
    }

    
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }

    // app_13->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(app_13JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // app_13->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(app_13JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // app_13->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(app_13JSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // app_13->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(app_13JSON, "owner");
    if (!owner) {
        goto end;
    }

    
    owner_local_nonprim = user_parseFromJSON(owner); //nonprimitive

    // app_13->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(app_13JSON, "permissions");
    if (permissions) { 
    permissions_local_nonprim = app_permissions_parseFromJSON(permissions); //nonprimitive
    }

    // app_13->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(app_13JSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug))
    {
    goto end; //String
    }
    }

    // app_13->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(app_13JSON, "updated_at");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }


    app_13_local_var = app_13_create (
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

    return app_13_local_var;
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
