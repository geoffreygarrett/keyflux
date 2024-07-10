#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_restriction_policy_teams_inner.h"



branch_restriction_policy_teams_inner_t *branch_restriction_policy_teams_inner_create(
    int id,
    char *node_id,
    char *url,
    char *html_url,
    char *name,
    char *slug,
    char *description,
    char *privacy,
    char *notification_setting,
    char *permission,
    char *members_url,
    char *repositories_url,
    char *parent
    ) {
    branch_restriction_policy_teams_inner_t *branch_restriction_policy_teams_inner_local_var = malloc(sizeof(branch_restriction_policy_teams_inner_t));
    if (!branch_restriction_policy_teams_inner_local_var) {
        return NULL;
    }
    branch_restriction_policy_teams_inner_local_var->id = id;
    branch_restriction_policy_teams_inner_local_var->node_id = node_id;
    branch_restriction_policy_teams_inner_local_var->url = url;
    branch_restriction_policy_teams_inner_local_var->html_url = html_url;
    branch_restriction_policy_teams_inner_local_var->name = name;
    branch_restriction_policy_teams_inner_local_var->slug = slug;
    branch_restriction_policy_teams_inner_local_var->description = description;
    branch_restriction_policy_teams_inner_local_var->privacy = privacy;
    branch_restriction_policy_teams_inner_local_var->notification_setting = notification_setting;
    branch_restriction_policy_teams_inner_local_var->permission = permission;
    branch_restriction_policy_teams_inner_local_var->members_url = members_url;
    branch_restriction_policy_teams_inner_local_var->repositories_url = repositories_url;
    branch_restriction_policy_teams_inner_local_var->parent = parent;

    return branch_restriction_policy_teams_inner_local_var;
}


void branch_restriction_policy_teams_inner_free(branch_restriction_policy_teams_inner_t *branch_restriction_policy_teams_inner) {
    if(NULL == branch_restriction_policy_teams_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (branch_restriction_policy_teams_inner->node_id) {
        free(branch_restriction_policy_teams_inner->node_id);
        branch_restriction_policy_teams_inner->node_id = NULL;
    }
    if (branch_restriction_policy_teams_inner->url) {
        free(branch_restriction_policy_teams_inner->url);
        branch_restriction_policy_teams_inner->url = NULL;
    }
    if (branch_restriction_policy_teams_inner->html_url) {
        free(branch_restriction_policy_teams_inner->html_url);
        branch_restriction_policy_teams_inner->html_url = NULL;
    }
    if (branch_restriction_policy_teams_inner->name) {
        free(branch_restriction_policy_teams_inner->name);
        branch_restriction_policy_teams_inner->name = NULL;
    }
    if (branch_restriction_policy_teams_inner->slug) {
        free(branch_restriction_policy_teams_inner->slug);
        branch_restriction_policy_teams_inner->slug = NULL;
    }
    if (branch_restriction_policy_teams_inner->description) {
        free(branch_restriction_policy_teams_inner->description);
        branch_restriction_policy_teams_inner->description = NULL;
    }
    if (branch_restriction_policy_teams_inner->privacy) {
        free(branch_restriction_policy_teams_inner->privacy);
        branch_restriction_policy_teams_inner->privacy = NULL;
    }
    if (branch_restriction_policy_teams_inner->notification_setting) {
        free(branch_restriction_policy_teams_inner->notification_setting);
        branch_restriction_policy_teams_inner->notification_setting = NULL;
    }
    if (branch_restriction_policy_teams_inner->permission) {
        free(branch_restriction_policy_teams_inner->permission);
        branch_restriction_policy_teams_inner->permission = NULL;
    }
    if (branch_restriction_policy_teams_inner->members_url) {
        free(branch_restriction_policy_teams_inner->members_url);
        branch_restriction_policy_teams_inner->members_url = NULL;
    }
    if (branch_restriction_policy_teams_inner->repositories_url) {
        free(branch_restriction_policy_teams_inner->repositories_url);
        branch_restriction_policy_teams_inner->repositories_url = NULL;
    }
    if (branch_restriction_policy_teams_inner->parent) {
        free(branch_restriction_policy_teams_inner->parent);
        branch_restriction_policy_teams_inner->parent = NULL;
    }
    free(branch_restriction_policy_teams_inner);
}

cJSON *branch_restriction_policy_teams_inner_convertToJSON(branch_restriction_policy_teams_inner_t *branch_restriction_policy_teams_inner) {
    cJSON *item = cJSON_CreateObject();

    // branch_restriction_policy_teams_inner->id
    if(branch_restriction_policy_teams_inner->id) {
    if(cJSON_AddNumberToObject(item, "id", branch_restriction_policy_teams_inner->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // branch_restriction_policy_teams_inner->node_id
    if(branch_restriction_policy_teams_inner->node_id) {
    if(cJSON_AddStringToObject(item, "node_id", branch_restriction_policy_teams_inner->node_id) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_teams_inner->url
    if(branch_restriction_policy_teams_inner->url) {
    if(cJSON_AddStringToObject(item, "url", branch_restriction_policy_teams_inner->url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_teams_inner->html_url
    if(branch_restriction_policy_teams_inner->html_url) {
    if(cJSON_AddStringToObject(item, "html_url", branch_restriction_policy_teams_inner->html_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_teams_inner->name
    if(branch_restriction_policy_teams_inner->name) {
    if(cJSON_AddStringToObject(item, "name", branch_restriction_policy_teams_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_teams_inner->slug
    if(branch_restriction_policy_teams_inner->slug) {
    if(cJSON_AddStringToObject(item, "slug", branch_restriction_policy_teams_inner->slug) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_teams_inner->description
    if(branch_restriction_policy_teams_inner->description) {
    if(cJSON_AddStringToObject(item, "description", branch_restriction_policy_teams_inner->description) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_teams_inner->privacy
    if(branch_restriction_policy_teams_inner->privacy) {
    if(cJSON_AddStringToObject(item, "privacy", branch_restriction_policy_teams_inner->privacy) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_teams_inner->notification_setting
    if(branch_restriction_policy_teams_inner->notification_setting) {
    if(cJSON_AddStringToObject(item, "notification_setting", branch_restriction_policy_teams_inner->notification_setting) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_teams_inner->permission
    if(branch_restriction_policy_teams_inner->permission) {
    if(cJSON_AddStringToObject(item, "permission", branch_restriction_policy_teams_inner->permission) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_teams_inner->members_url
    if(branch_restriction_policy_teams_inner->members_url) {
    if(cJSON_AddStringToObject(item, "members_url", branch_restriction_policy_teams_inner->members_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_teams_inner->repositories_url
    if(branch_restriction_policy_teams_inner->repositories_url) {
    if(cJSON_AddStringToObject(item, "repositories_url", branch_restriction_policy_teams_inner->repositories_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_teams_inner->parent
    if(branch_restriction_policy_teams_inner->parent) {
    if(cJSON_AddStringToObject(item, "parent", branch_restriction_policy_teams_inner->parent) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branch_restriction_policy_teams_inner_t *branch_restriction_policy_teams_inner_parseFromJSON(cJSON *branch_restriction_policy_teams_innerJSON){

    branch_restriction_policy_teams_inner_t *branch_restriction_policy_teams_inner_local_var = NULL;

    // branch_restriction_policy_teams_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // branch_restriction_policy_teams_inner->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "node_id");
    if (node_id) { 
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_teams_inner->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_teams_inner->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "html_url");
    if (html_url) { 
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_teams_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_teams_inner->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_teams_inner->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_teams_inner->privacy
    cJSON *privacy = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "privacy");
    if (privacy) { 
    if(!cJSON_IsString(privacy))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_teams_inner->notification_setting
    cJSON *notification_setting = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "notification_setting");
    if (notification_setting) { 
    if(!cJSON_IsString(notification_setting))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_teams_inner->permission
    cJSON *permission = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "permission");
    if (permission) { 
    if(!cJSON_IsString(permission))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_teams_inner->members_url
    cJSON *members_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "members_url");
    if (members_url) { 
    if(!cJSON_IsString(members_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_teams_inner->repositories_url
    cJSON *repositories_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "repositories_url");
    if (repositories_url) { 
    if(!cJSON_IsString(repositories_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_teams_inner->parent
    cJSON *parent = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_teams_innerJSON, "parent");
    if (parent) { 
    if(!cJSON_IsString(parent))
    {
    goto end; //String
    }
    }


    branch_restriction_policy_teams_inner_local_var = branch_restriction_policy_teams_inner_create (
        id ? id->valuedouble : 0,
        node_id ? strdup(node_id->valuestring) : NULL,
        url ? strdup(url->valuestring) : NULL,
        html_url ? strdup(html_url->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        slug ? strdup(slug->valuestring) : NULL,
        description ? strdup(description->valuestring) : NULL,
        privacy ? strdup(privacy->valuestring) : NULL,
        notification_setting ? strdup(notification_setting->valuestring) : NULL,
        permission ? strdup(permission->valuestring) : NULL,
        members_url ? strdup(members_url->valuestring) : NULL,
        repositories_url ? strdup(repositories_url->valuestring) : NULL,
        parent ? strdup(parent->valuestring) : NULL
        );

    return branch_restriction_policy_teams_inner_local_var;
end:
    return NULL;

}
