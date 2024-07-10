#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "app_6.h"


char* eventsapp_6_ToString(github_v3_rest_api_app_6_EVENTS_e events) {
	char *eventsArray[] =  { "NULL", "branch_protection_rule", "check_run", "check_suite", "code_scanning_alert", "commit_comment", "content_reference", "create", "delete", "deployment", "deployment_review", "deployment_status", "deploy_key", "discussion", "discussion_comment", "fork", "gollum", "issues", "issue_comment", "label", "member", "membership", "milestone", "organization", "org_block", "page_build", "project", "project_card", "project_column", "public", "pull_request", "pull_request_review", "pull_request_review_comment", "push", "registry_package", "release", "repository", "repository_dispatch", "secret_scanning_alert", "star", "status", "team", "team_add", "watch", "workflow_dispatch", "workflow_run", "merge_queue_entry", "workflow_job", "pull_request_review_thread", "secret_scanning_alert_location", "merge_group" };
	return eventsArray[events - 1];
}

github_v3_rest_api_app_6_EVENTS_e eventsapp_6_FromString(char* events) {
    int stringToReturn = 0;
    char *eventsArray[] =  { "NULL", "branch_protection_rule", "check_run", "check_suite", "code_scanning_alert", "commit_comment", "content_reference", "create", "delete", "deployment", "deployment_review", "deployment_status", "deploy_key", "discussion", "discussion_comment", "fork", "gollum", "issues", "issue_comment", "label", "member", "membership", "milestone", "organization", "org_block", "page_build", "project", "project_card", "project_column", "public", "pull_request", "pull_request_review", "pull_request_review_comment", "push", "registry_package", "release", "repository", "repository_dispatch", "secret_scanning_alert", "star", "status", "team", "team_add", "watch", "workflow_dispatch", "workflow_run", "merge_queue_entry", "workflow_job", "pull_request_review_thread", "secret_scanning_alert_location", "merge_group" };
    size_t sizeofArray = sizeof(eventsArray) / sizeof(eventsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(events, eventsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

app_6_t *app_6_create(
    char *created_at,
    char *description,
    list_t *events,
    char *external_url,
    char *html_url,
    int id,
    char *name,
    char *node_id,
    user_t *owner,
    app_1_permissions_t *permissions,
    char *slug,
    char *updated_at
    ) {
    app_6_t *app_6_local_var = malloc(sizeof(app_6_t));
    if (!app_6_local_var) {
        return NULL;
    }
    app_6_local_var->created_at = created_at;
    app_6_local_var->description = description;
    app_6_local_var->events = events;
    app_6_local_var->external_url = external_url;
    app_6_local_var->html_url = html_url;
    app_6_local_var->id = id;
    app_6_local_var->name = name;
    app_6_local_var->node_id = node_id;
    app_6_local_var->owner = owner;
    app_6_local_var->permissions = permissions;
    app_6_local_var->slug = slug;
    app_6_local_var->updated_at = updated_at;

    return app_6_local_var;
}


void app_6_free(app_6_t *app_6) {
    if(NULL == app_6){
        return ;
    }
    listEntry_t *listEntry;
    if (app_6->created_at) {
        free(app_6->created_at);
        app_6->created_at = NULL;
    }
    if (app_6->description) {
        free(app_6->description);
        app_6->description = NULL;
    }
    if (app_6->events) {
        list_ForEach(listEntry, app_6->events) {
            free(listEntry->data);
        }
        list_freeList(app_6->events);
        app_6->events = NULL;
    }
    if (app_6->external_url) {
        free(app_6->external_url);
        app_6->external_url = NULL;
    }
    if (app_6->html_url) {
        free(app_6->html_url);
        app_6->html_url = NULL;
    }
    if (app_6->name) {
        free(app_6->name);
        app_6->name = NULL;
    }
    if (app_6->node_id) {
        free(app_6->node_id);
        app_6->node_id = NULL;
    }
    if (app_6->owner) {
        user_free(app_6->owner);
        app_6->owner = NULL;
    }
    if (app_6->permissions) {
        app_1_permissions_free(app_6->permissions);
        app_6->permissions = NULL;
    }
    if (app_6->slug) {
        free(app_6->slug);
        app_6->slug = NULL;
    }
    if (app_6->updated_at) {
        free(app_6->updated_at);
        app_6->updated_at = NULL;
    }
    free(app_6);
}

cJSON *app_6_convertToJSON(app_6_t *app_6) {
    cJSON *item = cJSON_CreateObject();

    // app_6->created_at
    if (!app_6->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", app_6->created_at) == NULL) {
    goto fail; //Date-Time
    }


    // app_6->description
    if (!app_6->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", app_6->description) == NULL) {
    goto fail; //String
    }


    // app_6->events
    if(app_6->events != github_v3_rest_api_app_6_EVENTS_NULL) {
    cJSON *events = cJSON_AddArrayToObject(item, "events");
    if(events == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *eventsListEntry;
    list_ForEach(eventsListEntry, app_6->events) {
    if(cJSON_AddStringToObject(events, "", (char*)eventsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // app_6->external_url
    if (!app_6->external_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "external_url", app_6->external_url) == NULL) {
    goto fail; //String
    }


    // app_6->html_url
    if (!app_6->html_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "html_url", app_6->html_url) == NULL) {
    goto fail; //String
    }


    // app_6->id
    if (!app_6->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", app_6->id) == NULL) {
    goto fail; //Numeric
    }


    // app_6->name
    if (!app_6->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", app_6->name) == NULL) {
    goto fail; //String
    }


    // app_6->node_id
    if (!app_6->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", app_6->node_id) == NULL) {
    goto fail; //String
    }


    // app_6->owner
    if (!app_6->owner) {
        goto fail;
    }
    cJSON *owner_local_JSON = user_convertToJSON(app_6->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // app_6->permissions
    if(app_6->permissions) {
    cJSON *permissions_local_JSON = app_1_permissions_convertToJSON(app_6->permissions);
    if(permissions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "permissions", permissions_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // app_6->slug
    if(app_6->slug) {
    if(cJSON_AddStringToObject(item, "slug", app_6->slug) == NULL) {
    goto fail; //String
    }
    }


    // app_6->updated_at
    if (!app_6->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updated_at", app_6->updated_at) == NULL) {
    goto fail; //Date-Time
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

app_6_t *app_6_parseFromJSON(cJSON *app_6JSON){

    app_6_t *app_6_local_var = NULL;

    // define the local list for app_6->events
    list_t *eventsList = NULL;

    // define the local variable for app_6->owner
    user_t *owner_local_nonprim = NULL;

    // define the local variable for app_6->permissions
    app_1_permissions_t *permissions_local_nonprim = NULL;

    // app_6->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(app_6JSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }

    // app_6->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(app_6JSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // app_6->events
    cJSON *events = cJSON_GetObjectItemCaseSensitive(app_6JSON, "events");
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

    // app_6->external_url
    cJSON *external_url = cJSON_GetObjectItemCaseSensitive(app_6JSON, "external_url");
    if (!external_url) {
        goto end;
    }

    
    if(!cJSON_IsString(external_url))
    {
    goto end; //String
    }

    // app_6->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(app_6JSON, "html_url");
    if (!html_url) {
        goto end;
    }

    
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }

    // app_6->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(app_6JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // app_6->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(app_6JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // app_6->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(app_6JSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // app_6->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(app_6JSON, "owner");
    if (!owner) {
        goto end;
    }

    
    owner_local_nonprim = user_parseFromJSON(owner); //nonprimitive

    // app_6->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(app_6JSON, "permissions");
    if (permissions) { 
    permissions_local_nonprim = app_1_permissions_parseFromJSON(permissions); //nonprimitive
    }

    // app_6->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(app_6JSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug))
    {
    goto end; //String
    }
    }

    // app_6->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(app_6JSON, "updated_at");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }


    app_6_local_var = app_6_create (
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

    return app_6_local_var;
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
        app_1_permissions_free(permissions_local_nonprim);
        permissions_local_nonprim = NULL;
    }
    return NULL;

}
