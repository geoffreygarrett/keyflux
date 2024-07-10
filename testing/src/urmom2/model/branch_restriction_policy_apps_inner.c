#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_restriction_policy_apps_inner.h"



branch_restriction_policy_apps_inner_t *branch_restriction_policy_apps_inner_create(
    int id,
    char *slug,
    char *node_id,
    branch_restriction_policy_apps_inner_owner_t *owner,
    char *name,
    char *description,
    char *external_url,
    char *html_url,
    char *created_at,
    char *updated_at,
    branch_restriction_policy_apps_inner_permissions_t *permissions,
    list_t *events
    ) {
    branch_restriction_policy_apps_inner_t *branch_restriction_policy_apps_inner_local_var = malloc(sizeof(branch_restriction_policy_apps_inner_t));
    if (!branch_restriction_policy_apps_inner_local_var) {
        return NULL;
    }
    branch_restriction_policy_apps_inner_local_var->id = id;
    branch_restriction_policy_apps_inner_local_var->slug = slug;
    branch_restriction_policy_apps_inner_local_var->node_id = node_id;
    branch_restriction_policy_apps_inner_local_var->owner = owner;
    branch_restriction_policy_apps_inner_local_var->name = name;
    branch_restriction_policy_apps_inner_local_var->description = description;
    branch_restriction_policy_apps_inner_local_var->external_url = external_url;
    branch_restriction_policy_apps_inner_local_var->html_url = html_url;
    branch_restriction_policy_apps_inner_local_var->created_at = created_at;
    branch_restriction_policy_apps_inner_local_var->updated_at = updated_at;
    branch_restriction_policy_apps_inner_local_var->permissions = permissions;
    branch_restriction_policy_apps_inner_local_var->events = events;

    return branch_restriction_policy_apps_inner_local_var;
}


void branch_restriction_policy_apps_inner_free(branch_restriction_policy_apps_inner_t *branch_restriction_policy_apps_inner) {
    if(NULL == branch_restriction_policy_apps_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (branch_restriction_policy_apps_inner->slug) {
        free(branch_restriction_policy_apps_inner->slug);
        branch_restriction_policy_apps_inner->slug = NULL;
    }
    if (branch_restriction_policy_apps_inner->node_id) {
        free(branch_restriction_policy_apps_inner->node_id);
        branch_restriction_policy_apps_inner->node_id = NULL;
    }
    if (branch_restriction_policy_apps_inner->owner) {
        branch_restriction_policy_apps_inner_owner_free(branch_restriction_policy_apps_inner->owner);
        branch_restriction_policy_apps_inner->owner = NULL;
    }
    if (branch_restriction_policy_apps_inner->name) {
        free(branch_restriction_policy_apps_inner->name);
        branch_restriction_policy_apps_inner->name = NULL;
    }
    if (branch_restriction_policy_apps_inner->description) {
        free(branch_restriction_policy_apps_inner->description);
        branch_restriction_policy_apps_inner->description = NULL;
    }
    if (branch_restriction_policy_apps_inner->external_url) {
        free(branch_restriction_policy_apps_inner->external_url);
        branch_restriction_policy_apps_inner->external_url = NULL;
    }
    if (branch_restriction_policy_apps_inner->html_url) {
        free(branch_restriction_policy_apps_inner->html_url);
        branch_restriction_policy_apps_inner->html_url = NULL;
    }
    if (branch_restriction_policy_apps_inner->created_at) {
        free(branch_restriction_policy_apps_inner->created_at);
        branch_restriction_policy_apps_inner->created_at = NULL;
    }
    if (branch_restriction_policy_apps_inner->updated_at) {
        free(branch_restriction_policy_apps_inner->updated_at);
        branch_restriction_policy_apps_inner->updated_at = NULL;
    }
    if (branch_restriction_policy_apps_inner->permissions) {
        branch_restriction_policy_apps_inner_permissions_free(branch_restriction_policy_apps_inner->permissions);
        branch_restriction_policy_apps_inner->permissions = NULL;
    }
    if (branch_restriction_policy_apps_inner->events) {
        list_ForEach(listEntry, branch_restriction_policy_apps_inner->events) {
            free(listEntry->data);
        }
        list_freeList(branch_restriction_policy_apps_inner->events);
        branch_restriction_policy_apps_inner->events = NULL;
    }
    free(branch_restriction_policy_apps_inner);
}

cJSON *branch_restriction_policy_apps_inner_convertToJSON(branch_restriction_policy_apps_inner_t *branch_restriction_policy_apps_inner) {
    cJSON *item = cJSON_CreateObject();

    // branch_restriction_policy_apps_inner->id
    if(branch_restriction_policy_apps_inner->id) {
    if(cJSON_AddNumberToObject(item, "id", branch_restriction_policy_apps_inner->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // branch_restriction_policy_apps_inner->slug
    if(branch_restriction_policy_apps_inner->slug) {
    if(cJSON_AddStringToObject(item, "slug", branch_restriction_policy_apps_inner->slug) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner->node_id
    if(branch_restriction_policy_apps_inner->node_id) {
    if(cJSON_AddStringToObject(item, "node_id", branch_restriction_policy_apps_inner->node_id) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner->owner
    if(branch_restriction_policy_apps_inner->owner) {
    cJSON *owner_local_JSON = branch_restriction_policy_apps_inner_owner_convertToJSON(branch_restriction_policy_apps_inner->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_restriction_policy_apps_inner->name
    if(branch_restriction_policy_apps_inner->name) {
    if(cJSON_AddStringToObject(item, "name", branch_restriction_policy_apps_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner->description
    if(branch_restriction_policy_apps_inner->description) {
    if(cJSON_AddStringToObject(item, "description", branch_restriction_policy_apps_inner->description) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner->external_url
    if(branch_restriction_policy_apps_inner->external_url) {
    if(cJSON_AddStringToObject(item, "external_url", branch_restriction_policy_apps_inner->external_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner->html_url
    if(branch_restriction_policy_apps_inner->html_url) {
    if(cJSON_AddStringToObject(item, "html_url", branch_restriction_policy_apps_inner->html_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner->created_at
    if(branch_restriction_policy_apps_inner->created_at) {
    if(cJSON_AddStringToObject(item, "created_at", branch_restriction_policy_apps_inner->created_at) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner->updated_at
    if(branch_restriction_policy_apps_inner->updated_at) {
    if(cJSON_AddStringToObject(item, "updated_at", branch_restriction_policy_apps_inner->updated_at) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner->permissions
    if(branch_restriction_policy_apps_inner->permissions) {
    cJSON *permissions_local_JSON = branch_restriction_policy_apps_inner_permissions_convertToJSON(branch_restriction_policy_apps_inner->permissions);
    if(permissions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "permissions", permissions_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branch_restriction_policy_apps_inner->events
    if(branch_restriction_policy_apps_inner->events) {
    cJSON *events = cJSON_AddArrayToObject(item, "events");
    if(events == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *eventsListEntry;
    list_ForEach(eventsListEntry, branch_restriction_policy_apps_inner->events) {
    if(cJSON_AddStringToObject(events, "", (char*)eventsListEntry->data) == NULL)
    {
        goto fail;
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

branch_restriction_policy_apps_inner_t *branch_restriction_policy_apps_inner_parseFromJSON(cJSON *branch_restriction_policy_apps_innerJSON){

    branch_restriction_policy_apps_inner_t *branch_restriction_policy_apps_inner_local_var = NULL;

    // define the local variable for branch_restriction_policy_apps_inner->owner
    branch_restriction_policy_apps_inner_owner_t *owner_local_nonprim = NULL;

    // define the local variable for branch_restriction_policy_apps_inner->permissions
    branch_restriction_policy_apps_inner_permissions_t *permissions_local_nonprim = NULL;

    // define the local list for branch_restriction_policy_apps_inner->events
    list_t *eventsList = NULL;

    // branch_restriction_policy_apps_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_innerJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // branch_restriction_policy_apps_inner->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_innerJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_innerJSON, "node_id");
    if (node_id) { 
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_innerJSON, "owner");
    if (owner) { 
    owner_local_nonprim = branch_restriction_policy_apps_inner_owner_parseFromJSON(owner); //nonprimitive
    }

    // branch_restriction_policy_apps_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_innerJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_innerJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner->external_url
    cJSON *external_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_innerJSON, "external_url");
    if (external_url) { 
    if(!cJSON_IsString(external_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_innerJSON, "html_url");
    if (html_url) { 
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_innerJSON, "created_at");
    if (created_at) { 
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_innerJSON, "updated_at");
    if (updated_at) { 
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_innerJSON, "permissions");
    if (permissions) { 
    permissions_local_nonprim = branch_restriction_policy_apps_inner_permissions_parseFromJSON(permissions); //nonprimitive
    }

    // branch_restriction_policy_apps_inner->events
    cJSON *events = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_innerJSON, "events");
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


    branch_restriction_policy_apps_inner_local_var = branch_restriction_policy_apps_inner_create (
        id ? id->valuedouble : 0,
        slug ? strdup(slug->valuestring) : NULL,
        node_id ? strdup(node_id->valuestring) : NULL,
        owner ? owner_local_nonprim : NULL,
        name ? strdup(name->valuestring) : NULL,
        description ? strdup(description->valuestring) : NULL,
        external_url ? strdup(external_url->valuestring) : NULL,
        html_url ? strdup(html_url->valuestring) : NULL,
        created_at ? strdup(created_at->valuestring) : NULL,
        updated_at ? strdup(updated_at->valuestring) : NULL,
        permissions ? permissions_local_nonprim : NULL,
        events ? eventsList : NULL
        );

    return branch_restriction_policy_apps_inner_local_var;
end:
    if (owner_local_nonprim) {
        branch_restriction_policy_apps_inner_owner_free(owner_local_nonprim);
        owner_local_nonprim = NULL;
    }
    if (permissions_local_nonprim) {
        branch_restriction_policy_apps_inner_permissions_free(permissions_local_nonprim);
        permissions_local_nonprim = NULL;
    }
    if (eventsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, eventsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(eventsList);
        eventsList = NULL;
    }
    return NULL;

}
