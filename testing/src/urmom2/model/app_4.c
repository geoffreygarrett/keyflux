#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "app_4.h"


char* eventsapp_4_ToString(github_v3_rest_api_app_4_EVENTS_e events) {
	char *eventsArray[] =  { "NULL", "branch_protection_rule", "check_run", "check_suite", "code_scanning_alert", "commit_comment", "content_reference", "create", "delete", "deployment", "deployment_review", "deployment_status", "deploy_key", "discussion", "discussion_comment", "fork", "gollum", "issues", "issue_comment", "label", "member", "membership", "milestone", "organization", "org_block", "page_build", "project", "project_card", "project_column", "public", "pull_request", "pull_request_review", "pull_request_review_comment", "push", "registry_package", "release", "repository", "repository_dispatch", "secret_scanning_alert", "star", "status", "team", "team_add", "watch", "workflow_dispatch", "workflow_run", "pull_request_review_thread", "merge_queue_entry", "workflow_job" };
	return eventsArray[events - 1];
}

github_v3_rest_api_app_4_EVENTS_e eventsapp_4_FromString(char* events) {
    int stringToReturn = 0;
    char *eventsArray[] =  { "NULL", "branch_protection_rule", "check_run", "check_suite", "code_scanning_alert", "commit_comment", "content_reference", "create", "delete", "deployment", "deployment_review", "deployment_status", "deploy_key", "discussion", "discussion_comment", "fork", "gollum", "issues", "issue_comment", "label", "member", "membership", "milestone", "organization", "org_block", "page_build", "project", "project_card", "project_column", "public", "pull_request", "pull_request_review", "pull_request_review_comment", "push", "registry_package", "release", "repository", "repository_dispatch", "secret_scanning_alert", "star", "status", "team", "team_add", "watch", "workflow_dispatch", "workflow_run", "pull_request_review_thread", "merge_queue_entry", "workflow_job" };
    size_t sizeofArray = sizeof(eventsArray) / sizeof(eventsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(events, eventsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

app_4_t *app_4_create(
    char *created_at,
    char *description,
    list_t *events,
    char *external_url,
    char *html_url,
    int id,
    char *name,
    char *node_id,
    user_t *owner,
    app_2_permissions_t *permissions,
    char *slug,
    char *updated_at
    ) {
    app_4_t *app_4_local_var = malloc(sizeof(app_4_t));
    if (!app_4_local_var) {
        return NULL;
    }
    app_4_local_var->created_at = created_at;
    app_4_local_var->description = description;
    app_4_local_var->events = events;
    app_4_local_var->external_url = external_url;
    app_4_local_var->html_url = html_url;
    app_4_local_var->id = id;
    app_4_local_var->name = name;
    app_4_local_var->node_id = node_id;
    app_4_local_var->owner = owner;
    app_4_local_var->permissions = permissions;
    app_4_local_var->slug = slug;
    app_4_local_var->updated_at = updated_at;

    return app_4_local_var;
}


void app_4_free(app_4_t *app_4) {
    if(NULL == app_4){
        return ;
    }
    listEntry_t *listEntry;
    if (app_4->created_at) {
        free(app_4->created_at);
        app_4->created_at = NULL;
    }
    if (app_4->description) {
        free(app_4->description);
        app_4->description = NULL;
    }
    if (app_4->events) {
        list_ForEach(listEntry, app_4->events) {
            free(listEntry->data);
        }
        list_freeList(app_4->events);
        app_4->events = NULL;
    }
    if (app_4->external_url) {
        free(app_4->external_url);
        app_4->external_url = NULL;
    }
    if (app_4->html_url) {
        free(app_4->html_url);
        app_4->html_url = NULL;
    }
    if (app_4->name) {
        free(app_4->name);
        app_4->name = NULL;
    }
    if (app_4->node_id) {
        free(app_4->node_id);
        app_4->node_id = NULL;
    }
    if (app_4->owner) {
        user_free(app_4->owner);
        app_4->owner = NULL;
    }
    if (app_4->permissions) {
        app_2_permissions_free(app_4->permissions);
        app_4->permissions = NULL;
    }
    if (app_4->slug) {
        free(app_4->slug);
        app_4->slug = NULL;
    }
    if (app_4->updated_at) {
        free(app_4->updated_at);
        app_4->updated_at = NULL;
    }
    free(app_4);
}

cJSON *app_4_convertToJSON(app_4_t *app_4) {
    cJSON *item = cJSON_CreateObject();

    // app_4->created_at
    if (!app_4->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", app_4->created_at) == NULL) {
    goto fail; //Date-Time
    }


    // app_4->description
    if (!app_4->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", app_4->description) == NULL) {
    goto fail; //String
    }


    // app_4->events
    if(app_4->events != github_v3_rest_api_app_4_EVENTS_NULL) {
    cJSON *events = cJSON_AddArrayToObject(item, "events");
    if(events == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *eventsListEntry;
    list_ForEach(eventsListEntry, app_4->events) {
    if(cJSON_AddStringToObject(events, "", (char*)eventsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // app_4->external_url
    if (!app_4->external_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "external_url", app_4->external_url) == NULL) {
    goto fail; //String
    }


    // app_4->html_url
    if (!app_4->html_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "html_url", app_4->html_url) == NULL) {
    goto fail; //String
    }


    // app_4->id
    if (!app_4->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", app_4->id) == NULL) {
    goto fail; //Numeric
    }


    // app_4->name
    if (!app_4->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", app_4->name) == NULL) {
    goto fail; //String
    }


    // app_4->node_id
    if (!app_4->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", app_4->node_id) == NULL) {
    goto fail; //String
    }


    // app_4->owner
    if (!app_4->owner) {
        goto fail;
    }
    cJSON *owner_local_JSON = user_convertToJSON(app_4->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // app_4->permissions
    if(app_4->permissions) {
    cJSON *permissions_local_JSON = app_2_permissions_convertToJSON(app_4->permissions);
    if(permissions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "permissions", permissions_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // app_4->slug
    if(app_4->slug) {
    if(cJSON_AddStringToObject(item, "slug", app_4->slug) == NULL) {
    goto fail; //String
    }
    }


    // app_4->updated_at
    if (!app_4->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updated_at", app_4->updated_at) == NULL) {
    goto fail; //Date-Time
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

app_4_t *app_4_parseFromJSON(cJSON *app_4JSON){

    app_4_t *app_4_local_var = NULL;

    // define the local list for app_4->events
    list_t *eventsList = NULL;

    // define the local variable for app_4->owner
    user_t *owner_local_nonprim = NULL;

    // define the local variable for app_4->permissions
    app_2_permissions_t *permissions_local_nonprim = NULL;

    // app_4->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(app_4JSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }

    // app_4->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(app_4JSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // app_4->events
    cJSON *events = cJSON_GetObjectItemCaseSensitive(app_4JSON, "events");
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

    // app_4->external_url
    cJSON *external_url = cJSON_GetObjectItemCaseSensitive(app_4JSON, "external_url");
    if (!external_url) {
        goto end;
    }

    
    if(!cJSON_IsString(external_url))
    {
    goto end; //String
    }

    // app_4->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(app_4JSON, "html_url");
    if (!html_url) {
        goto end;
    }

    
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }

    // app_4->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(app_4JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // app_4->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(app_4JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // app_4->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(app_4JSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // app_4->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(app_4JSON, "owner");
    if (!owner) {
        goto end;
    }

    
    owner_local_nonprim = user_parseFromJSON(owner); //nonprimitive

    // app_4->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(app_4JSON, "permissions");
    if (permissions) { 
    permissions_local_nonprim = app_2_permissions_parseFromJSON(permissions); //nonprimitive
    }

    // app_4->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(app_4JSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug))
    {
    goto end; //String
    }
    }

    // app_4->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(app_4JSON, "updated_at");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }


    app_4_local_var = app_4_create (
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

    return app_4_local_var;
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
        app_2_permissions_free(permissions_local_nonprim);
        permissions_local_nonprim = NULL;
    }
    return NULL;

}
