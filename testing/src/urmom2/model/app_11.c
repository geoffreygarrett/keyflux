#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "app_11.h"


char* eventsapp_11_ToString(github_v3_rest_api_app_11_EVENTS_e events) {
	char *eventsArray[] =  { "NULL", "branch_protection_rule", "check_run", "check_suite", "code_scanning_alert", "commit_comment", "content_reference", "create", "delete", "deployment", "deployment_review", "deployment_status", "deploy_key", "discussion", "discussion_comment", "fork", "gollum", "issues", "issue_comment", "label", "member", "membership", "milestone", "organization", "org_block", "page_build", "project", "project_card", "project_column", "public", "pull_request", "pull_request_review", "pull_request_review_comment", "push", "registry_package", "release", "repository", "repository_dispatch", "secret_scanning_alert", "star", "status", "team", "team_add", "watch", "workflow_dispatch", "workflow_run" };
	return eventsArray[events - 1];
}

github_v3_rest_api_app_11_EVENTS_e eventsapp_11_FromString(char* events) {
    int stringToReturn = 0;
    char *eventsArray[] =  { "NULL", "branch_protection_rule", "check_run", "check_suite", "code_scanning_alert", "commit_comment", "content_reference", "create", "delete", "deployment", "deployment_review", "deployment_status", "deploy_key", "discussion", "discussion_comment", "fork", "gollum", "issues", "issue_comment", "label", "member", "membership", "milestone", "organization", "org_block", "page_build", "project", "project_card", "project_column", "public", "pull_request", "pull_request_review", "pull_request_review_comment", "push", "registry_package", "release", "repository", "repository_dispatch", "secret_scanning_alert", "star", "status", "team", "team_add", "watch", "workflow_dispatch", "workflow_run" };
    size_t sizeofArray = sizeof(eventsArray) / sizeof(eventsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(events, eventsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

app_11_t *app_11_create(
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
    app_11_t *app_11_local_var = malloc(sizeof(app_11_t));
    if (!app_11_local_var) {
        return NULL;
    }
    app_11_local_var->created_at = created_at;
    app_11_local_var->description = description;
    app_11_local_var->events = events;
    app_11_local_var->external_url = external_url;
    app_11_local_var->html_url = html_url;
    app_11_local_var->id = id;
    app_11_local_var->name = name;
    app_11_local_var->node_id = node_id;
    app_11_local_var->owner = owner;
    app_11_local_var->permissions = permissions;
    app_11_local_var->slug = slug;
    app_11_local_var->updated_at = updated_at;

    return app_11_local_var;
}


void app_11_free(app_11_t *app_11) {
    if(NULL == app_11){
        return ;
    }
    listEntry_t *listEntry;
    if (app_11->created_at) {
        free(app_11->created_at);
        app_11->created_at = NULL;
    }
    if (app_11->description) {
        free(app_11->description);
        app_11->description = NULL;
    }
    if (app_11->events) {
        list_ForEach(listEntry, app_11->events) {
            free(listEntry->data);
        }
        list_freeList(app_11->events);
        app_11->events = NULL;
    }
    if (app_11->external_url) {
        free(app_11->external_url);
        app_11->external_url = NULL;
    }
    if (app_11->html_url) {
        free(app_11->html_url);
        app_11->html_url = NULL;
    }
    if (app_11->name) {
        free(app_11->name);
        app_11->name = NULL;
    }
    if (app_11->node_id) {
        free(app_11->node_id);
        app_11->node_id = NULL;
    }
    if (app_11->owner) {
        user_free(app_11->owner);
        app_11->owner = NULL;
    }
    if (app_11->permissions) {
        app_permissions_free(app_11->permissions);
        app_11->permissions = NULL;
    }
    if (app_11->slug) {
        free(app_11->slug);
        app_11->slug = NULL;
    }
    if (app_11->updated_at) {
        free(app_11->updated_at);
        app_11->updated_at = NULL;
    }
    free(app_11);
}

cJSON *app_11_convertToJSON(app_11_t *app_11) {
    cJSON *item = cJSON_CreateObject();

    // app_11->created_at
    if (!app_11->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", app_11->created_at) == NULL) {
    goto fail; //Date-Time
    }


    // app_11->description
    if (!app_11->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", app_11->description) == NULL) {
    goto fail; //String
    }


    // app_11->events
    if(app_11->events != github_v3_rest_api_app_11_EVENTS_NULL) {
    cJSON *events = cJSON_AddArrayToObject(item, "events");
    if(events == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *eventsListEntry;
    list_ForEach(eventsListEntry, app_11->events) {
    if(cJSON_AddStringToObject(events, "", (char*)eventsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // app_11->external_url
    if (!app_11->external_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "external_url", app_11->external_url) == NULL) {
    goto fail; //String
    }


    // app_11->html_url
    if (!app_11->html_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "html_url", app_11->html_url) == NULL) {
    goto fail; //String
    }


    // app_11->id
    if (!app_11->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", app_11->id) == NULL) {
    goto fail; //Numeric
    }


    // app_11->name
    if (!app_11->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", app_11->name) == NULL) {
    goto fail; //String
    }


    // app_11->node_id
    if (!app_11->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", app_11->node_id) == NULL) {
    goto fail; //String
    }


    // app_11->owner
    if (!app_11->owner) {
        goto fail;
    }
    cJSON *owner_local_JSON = user_convertToJSON(app_11->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // app_11->permissions
    if(app_11->permissions) {
    cJSON *permissions_local_JSON = app_permissions_convertToJSON(app_11->permissions);
    if(permissions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "permissions", permissions_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // app_11->slug
    if(app_11->slug) {
    if(cJSON_AddStringToObject(item, "slug", app_11->slug) == NULL) {
    goto fail; //String
    }
    }


    // app_11->updated_at
    if (!app_11->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updated_at", app_11->updated_at) == NULL) {
    goto fail; //Date-Time
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

app_11_t *app_11_parseFromJSON(cJSON *app_11JSON){

    app_11_t *app_11_local_var = NULL;

    // define the local list for app_11->events
    list_t *eventsList = NULL;

    // define the local variable for app_11->owner
    user_t *owner_local_nonprim = NULL;

    // define the local variable for app_11->permissions
    app_permissions_t *permissions_local_nonprim = NULL;

    // app_11->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(app_11JSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }

    // app_11->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(app_11JSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // app_11->events
    cJSON *events = cJSON_GetObjectItemCaseSensitive(app_11JSON, "events");
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

    // app_11->external_url
    cJSON *external_url = cJSON_GetObjectItemCaseSensitive(app_11JSON, "external_url");
    if (!external_url) {
        goto end;
    }

    
    if(!cJSON_IsString(external_url))
    {
    goto end; //String
    }

    // app_11->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(app_11JSON, "html_url");
    if (!html_url) {
        goto end;
    }

    
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }

    // app_11->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(app_11JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // app_11->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(app_11JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // app_11->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(app_11JSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // app_11->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(app_11JSON, "owner");
    if (!owner) {
        goto end;
    }

    
    owner_local_nonprim = user_parseFromJSON(owner); //nonprimitive

    // app_11->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(app_11JSON, "permissions");
    if (permissions) { 
    permissions_local_nonprim = app_permissions_parseFromJSON(permissions); //nonprimitive
    }

    // app_11->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(app_11JSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug))
    {
    goto end; //String
    }
    }

    // app_11->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(app_11JSON, "updated_at");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }


    app_11_local_var = app_11_create (
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

    return app_11_local_var;
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
