#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apps_create_from_manifest_201_response.h"



apps_create_from_manifest_201_response_t *apps_create_from_manifest_201_response_create(
    int id,
    char *slug,
    char *node_id,
    nullable_simple_user_t *owner,
    char *name,
    char *description,
    char *external_url,
    char *html_url,
    char *created_at,
    char *updated_at,
    integration_permissions_t *permissions,
    list_t *events,
    int installations_count,
    char *client_id,
    char *client_secret,
    char *webhook_secret,
    char *pem
    ) {
    apps_create_from_manifest_201_response_t *apps_create_from_manifest_201_response_local_var = malloc(sizeof(apps_create_from_manifest_201_response_t));
    if (!apps_create_from_manifest_201_response_local_var) {
        return NULL;
    }
    apps_create_from_manifest_201_response_local_var->id = id;
    apps_create_from_manifest_201_response_local_var->slug = slug;
    apps_create_from_manifest_201_response_local_var->node_id = node_id;
    apps_create_from_manifest_201_response_local_var->owner = owner;
    apps_create_from_manifest_201_response_local_var->name = name;
    apps_create_from_manifest_201_response_local_var->description = description;
    apps_create_from_manifest_201_response_local_var->external_url = external_url;
    apps_create_from_manifest_201_response_local_var->html_url = html_url;
    apps_create_from_manifest_201_response_local_var->created_at = created_at;
    apps_create_from_manifest_201_response_local_var->updated_at = updated_at;
    apps_create_from_manifest_201_response_local_var->permissions = permissions;
    apps_create_from_manifest_201_response_local_var->events = events;
    apps_create_from_manifest_201_response_local_var->installations_count = installations_count;
    apps_create_from_manifest_201_response_local_var->client_id = client_id;
    apps_create_from_manifest_201_response_local_var->client_secret = client_secret;
    apps_create_from_manifest_201_response_local_var->webhook_secret = webhook_secret;
    apps_create_from_manifest_201_response_local_var->pem = pem;

    return apps_create_from_manifest_201_response_local_var;
}


void apps_create_from_manifest_201_response_free(apps_create_from_manifest_201_response_t *apps_create_from_manifest_201_response) {
    if(NULL == apps_create_from_manifest_201_response){
        return ;
    }
    listEntry_t *listEntry;
    if (apps_create_from_manifest_201_response->slug) {
        free(apps_create_from_manifest_201_response->slug);
        apps_create_from_manifest_201_response->slug = NULL;
    }
    if (apps_create_from_manifest_201_response->node_id) {
        free(apps_create_from_manifest_201_response->node_id);
        apps_create_from_manifest_201_response->node_id = NULL;
    }
    if (apps_create_from_manifest_201_response->owner) {
        nullable_simple_user_free(apps_create_from_manifest_201_response->owner);
        apps_create_from_manifest_201_response->owner = NULL;
    }
    if (apps_create_from_manifest_201_response->name) {
        free(apps_create_from_manifest_201_response->name);
        apps_create_from_manifest_201_response->name = NULL;
    }
    if (apps_create_from_manifest_201_response->description) {
        free(apps_create_from_manifest_201_response->description);
        apps_create_from_manifest_201_response->description = NULL;
    }
    if (apps_create_from_manifest_201_response->external_url) {
        free(apps_create_from_manifest_201_response->external_url);
        apps_create_from_manifest_201_response->external_url = NULL;
    }
    if (apps_create_from_manifest_201_response->html_url) {
        free(apps_create_from_manifest_201_response->html_url);
        apps_create_from_manifest_201_response->html_url = NULL;
    }
    if (apps_create_from_manifest_201_response->created_at) {
        free(apps_create_from_manifest_201_response->created_at);
        apps_create_from_manifest_201_response->created_at = NULL;
    }
    if (apps_create_from_manifest_201_response->updated_at) {
        free(apps_create_from_manifest_201_response->updated_at);
        apps_create_from_manifest_201_response->updated_at = NULL;
    }
    if (apps_create_from_manifest_201_response->permissions) {
        integration_permissions_free(apps_create_from_manifest_201_response->permissions);
        apps_create_from_manifest_201_response->permissions = NULL;
    }
    if (apps_create_from_manifest_201_response->events) {
        list_ForEach(listEntry, apps_create_from_manifest_201_response->events) {
            free(listEntry->data);
        }
        list_freeList(apps_create_from_manifest_201_response->events);
        apps_create_from_manifest_201_response->events = NULL;
    }
    if (apps_create_from_manifest_201_response->client_id) {
        free(apps_create_from_manifest_201_response->client_id);
        apps_create_from_manifest_201_response->client_id = NULL;
    }
    if (apps_create_from_manifest_201_response->client_secret) {
        free(apps_create_from_manifest_201_response->client_secret);
        apps_create_from_manifest_201_response->client_secret = NULL;
    }
    if (apps_create_from_manifest_201_response->webhook_secret) {
        free(apps_create_from_manifest_201_response->webhook_secret);
        apps_create_from_manifest_201_response->webhook_secret = NULL;
    }
    if (apps_create_from_manifest_201_response->pem) {
        free(apps_create_from_manifest_201_response->pem);
        apps_create_from_manifest_201_response->pem = NULL;
    }
    free(apps_create_from_manifest_201_response);
}

cJSON *apps_create_from_manifest_201_response_convertToJSON(apps_create_from_manifest_201_response_t *apps_create_from_manifest_201_response) {
    cJSON *item = cJSON_CreateObject();

    // apps_create_from_manifest_201_response->id
    if (!apps_create_from_manifest_201_response->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", apps_create_from_manifest_201_response->id) == NULL) {
    goto fail; //Numeric
    }


    // apps_create_from_manifest_201_response->slug
    if(apps_create_from_manifest_201_response->slug) {
    if(cJSON_AddStringToObject(item, "slug", apps_create_from_manifest_201_response->slug) == NULL) {
    goto fail; //String
    }
    }


    // apps_create_from_manifest_201_response->node_id
    if (!apps_create_from_manifest_201_response->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", apps_create_from_manifest_201_response->node_id) == NULL) {
    goto fail; //String
    }


    // apps_create_from_manifest_201_response->owner
    if (!apps_create_from_manifest_201_response->owner) {
        goto fail;
    }
    cJSON *owner_local_JSON = nullable_simple_user_convertToJSON(apps_create_from_manifest_201_response->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // apps_create_from_manifest_201_response->name
    if (!apps_create_from_manifest_201_response->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", apps_create_from_manifest_201_response->name) == NULL) {
    goto fail; //String
    }


    // apps_create_from_manifest_201_response->description
    if (!apps_create_from_manifest_201_response->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", apps_create_from_manifest_201_response->description) == NULL) {
    goto fail; //String
    }


    // apps_create_from_manifest_201_response->external_url
    if (!apps_create_from_manifest_201_response->external_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "external_url", apps_create_from_manifest_201_response->external_url) == NULL) {
    goto fail; //String
    }


    // apps_create_from_manifest_201_response->html_url
    if (!apps_create_from_manifest_201_response->html_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "html_url", apps_create_from_manifest_201_response->html_url) == NULL) {
    goto fail; //String
    }


    // apps_create_from_manifest_201_response->created_at
    if (!apps_create_from_manifest_201_response->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", apps_create_from_manifest_201_response->created_at) == NULL) {
    goto fail; //Date-Time
    }


    // apps_create_from_manifest_201_response->updated_at
    if (!apps_create_from_manifest_201_response->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updated_at", apps_create_from_manifest_201_response->updated_at) == NULL) {
    goto fail; //Date-Time
    }


    // apps_create_from_manifest_201_response->permissions
    if (!apps_create_from_manifest_201_response->permissions) {
        goto fail;
    }
    cJSON *permissions_local_JSON = integration_permissions_convertToJSON(apps_create_from_manifest_201_response->permissions);
    if(permissions_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "permissions", permissions_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // apps_create_from_manifest_201_response->events
    if (!apps_create_from_manifest_201_response->events) {
        goto fail;
    }
    cJSON *events = cJSON_AddArrayToObject(item, "events");
    if(events == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *eventsListEntry;
    list_ForEach(eventsListEntry, apps_create_from_manifest_201_response->events) {
    if(cJSON_AddStringToObject(events, "", (char*)eventsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // apps_create_from_manifest_201_response->installations_count
    if(apps_create_from_manifest_201_response->installations_count) {
    if(cJSON_AddNumberToObject(item, "installations_count", apps_create_from_manifest_201_response->installations_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // apps_create_from_manifest_201_response->client_id
    if (!apps_create_from_manifest_201_response->client_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "client_id", apps_create_from_manifest_201_response->client_id) == NULL) {
    goto fail; //String
    }


    // apps_create_from_manifest_201_response->client_secret
    if (!apps_create_from_manifest_201_response->client_secret) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "client_secret", apps_create_from_manifest_201_response->client_secret) == NULL) {
    goto fail; //String
    }


    // apps_create_from_manifest_201_response->webhook_secret
    if (!apps_create_from_manifest_201_response->webhook_secret) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "webhook_secret", apps_create_from_manifest_201_response->webhook_secret) == NULL) {
    goto fail; //String
    }


    // apps_create_from_manifest_201_response->pem
    if (!apps_create_from_manifest_201_response->pem) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pem", apps_create_from_manifest_201_response->pem) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

apps_create_from_manifest_201_response_t *apps_create_from_manifest_201_response_parseFromJSON(cJSON *apps_create_from_manifest_201_responseJSON){

    apps_create_from_manifest_201_response_t *apps_create_from_manifest_201_response_local_var = NULL;

    // define the local variable for apps_create_from_manifest_201_response->owner
    nullable_simple_user_t *owner_local_nonprim = NULL;

    // define the local variable for apps_create_from_manifest_201_response->permissions
    integration_permissions_t *permissions_local_nonprim = NULL;

    // define the local list for apps_create_from_manifest_201_response->events
    list_t *eventsList = NULL;

    // apps_create_from_manifest_201_response->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // apps_create_from_manifest_201_response->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug))
    {
    goto end; //String
    }
    }

    // apps_create_from_manifest_201_response->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // apps_create_from_manifest_201_response->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "owner");
    if (!owner) {
        goto end;
    }

    
    owner_local_nonprim = nullable_simple_user_parseFromJSON(owner); //nonprimitive

    // apps_create_from_manifest_201_response->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // apps_create_from_manifest_201_response->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // apps_create_from_manifest_201_response->external_url
    cJSON *external_url = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "external_url");
    if (!external_url) {
        goto end;
    }

    
    if(!cJSON_IsString(external_url))
    {
    goto end; //String
    }

    // apps_create_from_manifest_201_response->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "html_url");
    if (!html_url) {
        goto end;
    }

    
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }

    // apps_create_from_manifest_201_response->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }

    // apps_create_from_manifest_201_response->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "updated_at");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }

    // apps_create_from_manifest_201_response->permissions
    cJSON *permissions = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "permissions");
    if (!permissions) {
        goto end;
    }

    
    permissions_local_nonprim = integration_permissions_parseFromJSON(permissions); //custom

    // apps_create_from_manifest_201_response->events
    cJSON *events = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "events");
    if (!events) {
        goto end;
    }

    
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

    // apps_create_from_manifest_201_response->installations_count
    cJSON *installations_count = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "installations_count");
    if (installations_count) { 
    if(!cJSON_IsNumber(installations_count))
    {
    goto end; //Numeric
    }
    }

    // apps_create_from_manifest_201_response->client_id
    cJSON *client_id = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "client_id");
    if (!client_id) {
        goto end;
    }

    
    if(!cJSON_IsString(client_id))
    {
    goto end; //String
    }

    // apps_create_from_manifest_201_response->client_secret
    cJSON *client_secret = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "client_secret");
    if (!client_secret) {
        goto end;
    }

    
    if(!cJSON_IsString(client_secret))
    {
    goto end; //String
    }

    // apps_create_from_manifest_201_response->webhook_secret
    cJSON *webhook_secret = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "webhook_secret");
    if (!webhook_secret) {
        goto end;
    }

    
    if(!cJSON_IsString(webhook_secret))
    {
    goto end; //String
    }

    // apps_create_from_manifest_201_response->pem
    cJSON *pem = cJSON_GetObjectItemCaseSensitive(apps_create_from_manifest_201_responseJSON, "pem");
    if (!pem) {
        goto end;
    }

    
    if(!cJSON_IsString(pem))
    {
    goto end; //String
    }


    apps_create_from_manifest_201_response_local_var = apps_create_from_manifest_201_response_create (
        id->valuedouble,
        slug ? strdup(slug->valuestring) : NULL,
        strdup(node_id->valuestring),
        owner_local_nonprim,
        strdup(name->valuestring),
        strdup(description->valuestring),
        strdup(external_url->valuestring),
        strdup(html_url->valuestring),
        strdup(created_at->valuestring),
        strdup(updated_at->valuestring),
        permissions_local_nonprim,
        eventsList,
        installations_count ? installations_count->valuedouble : 0,
        strdup(client_id->valuestring),
        strdup(client_secret->valuestring),
        strdup(webhook_secret->valuestring),
        strdup(pem->valuestring)
        );

    return apps_create_from_manifest_201_response_local_var;
end:
    if (owner_local_nonprim) {
        nullable_simple_user_free(owner_local_nonprim);
        owner_local_nonprim = NULL;
    }
    if (permissions_local_nonprim) {
        integration_permissions_free(permissions_local_nonprim);
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
