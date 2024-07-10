#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_restriction_policy_apps_inner_owner.h"



branch_restriction_policy_apps_inner_owner_t *branch_restriction_policy_apps_inner_owner_create(
    char *login,
    int id,
    char *node_id,
    char *url,
    char *repos_url,
    char *events_url,
    char *hooks_url,
    char *issues_url,
    char *members_url,
    char *public_members_url,
    char *avatar_url,
    char *description,
    char *gravatar_id,
    char *html_url,
    char *followers_url,
    char *following_url,
    char *gists_url,
    char *starred_url,
    char *subscriptions_url,
    char *organizations_url,
    char *received_events_url,
    char *type,
    int site_admin
    ) {
    branch_restriction_policy_apps_inner_owner_t *branch_restriction_policy_apps_inner_owner_local_var = malloc(sizeof(branch_restriction_policy_apps_inner_owner_t));
    if (!branch_restriction_policy_apps_inner_owner_local_var) {
        return NULL;
    }
    branch_restriction_policy_apps_inner_owner_local_var->login = login;
    branch_restriction_policy_apps_inner_owner_local_var->id = id;
    branch_restriction_policy_apps_inner_owner_local_var->node_id = node_id;
    branch_restriction_policy_apps_inner_owner_local_var->url = url;
    branch_restriction_policy_apps_inner_owner_local_var->repos_url = repos_url;
    branch_restriction_policy_apps_inner_owner_local_var->events_url = events_url;
    branch_restriction_policy_apps_inner_owner_local_var->hooks_url = hooks_url;
    branch_restriction_policy_apps_inner_owner_local_var->issues_url = issues_url;
    branch_restriction_policy_apps_inner_owner_local_var->members_url = members_url;
    branch_restriction_policy_apps_inner_owner_local_var->public_members_url = public_members_url;
    branch_restriction_policy_apps_inner_owner_local_var->avatar_url = avatar_url;
    branch_restriction_policy_apps_inner_owner_local_var->description = description;
    branch_restriction_policy_apps_inner_owner_local_var->gravatar_id = gravatar_id;
    branch_restriction_policy_apps_inner_owner_local_var->html_url = html_url;
    branch_restriction_policy_apps_inner_owner_local_var->followers_url = followers_url;
    branch_restriction_policy_apps_inner_owner_local_var->following_url = following_url;
    branch_restriction_policy_apps_inner_owner_local_var->gists_url = gists_url;
    branch_restriction_policy_apps_inner_owner_local_var->starred_url = starred_url;
    branch_restriction_policy_apps_inner_owner_local_var->subscriptions_url = subscriptions_url;
    branch_restriction_policy_apps_inner_owner_local_var->organizations_url = organizations_url;
    branch_restriction_policy_apps_inner_owner_local_var->received_events_url = received_events_url;
    branch_restriction_policy_apps_inner_owner_local_var->type = type;
    branch_restriction_policy_apps_inner_owner_local_var->site_admin = site_admin;

    return branch_restriction_policy_apps_inner_owner_local_var;
}


void branch_restriction_policy_apps_inner_owner_free(branch_restriction_policy_apps_inner_owner_t *branch_restriction_policy_apps_inner_owner) {
    if(NULL == branch_restriction_policy_apps_inner_owner){
        return ;
    }
    listEntry_t *listEntry;
    if (branch_restriction_policy_apps_inner_owner->login) {
        free(branch_restriction_policy_apps_inner_owner->login);
        branch_restriction_policy_apps_inner_owner->login = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->node_id) {
        free(branch_restriction_policy_apps_inner_owner->node_id);
        branch_restriction_policy_apps_inner_owner->node_id = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->url) {
        free(branch_restriction_policy_apps_inner_owner->url);
        branch_restriction_policy_apps_inner_owner->url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->repos_url) {
        free(branch_restriction_policy_apps_inner_owner->repos_url);
        branch_restriction_policy_apps_inner_owner->repos_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->events_url) {
        free(branch_restriction_policy_apps_inner_owner->events_url);
        branch_restriction_policy_apps_inner_owner->events_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->hooks_url) {
        free(branch_restriction_policy_apps_inner_owner->hooks_url);
        branch_restriction_policy_apps_inner_owner->hooks_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->issues_url) {
        free(branch_restriction_policy_apps_inner_owner->issues_url);
        branch_restriction_policy_apps_inner_owner->issues_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->members_url) {
        free(branch_restriction_policy_apps_inner_owner->members_url);
        branch_restriction_policy_apps_inner_owner->members_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->public_members_url) {
        free(branch_restriction_policy_apps_inner_owner->public_members_url);
        branch_restriction_policy_apps_inner_owner->public_members_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->avatar_url) {
        free(branch_restriction_policy_apps_inner_owner->avatar_url);
        branch_restriction_policy_apps_inner_owner->avatar_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->description) {
        free(branch_restriction_policy_apps_inner_owner->description);
        branch_restriction_policy_apps_inner_owner->description = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->gravatar_id) {
        free(branch_restriction_policy_apps_inner_owner->gravatar_id);
        branch_restriction_policy_apps_inner_owner->gravatar_id = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->html_url) {
        free(branch_restriction_policy_apps_inner_owner->html_url);
        branch_restriction_policy_apps_inner_owner->html_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->followers_url) {
        free(branch_restriction_policy_apps_inner_owner->followers_url);
        branch_restriction_policy_apps_inner_owner->followers_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->following_url) {
        free(branch_restriction_policy_apps_inner_owner->following_url);
        branch_restriction_policy_apps_inner_owner->following_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->gists_url) {
        free(branch_restriction_policy_apps_inner_owner->gists_url);
        branch_restriction_policy_apps_inner_owner->gists_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->starred_url) {
        free(branch_restriction_policy_apps_inner_owner->starred_url);
        branch_restriction_policy_apps_inner_owner->starred_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->subscriptions_url) {
        free(branch_restriction_policy_apps_inner_owner->subscriptions_url);
        branch_restriction_policy_apps_inner_owner->subscriptions_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->organizations_url) {
        free(branch_restriction_policy_apps_inner_owner->organizations_url);
        branch_restriction_policy_apps_inner_owner->organizations_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->received_events_url) {
        free(branch_restriction_policy_apps_inner_owner->received_events_url);
        branch_restriction_policy_apps_inner_owner->received_events_url = NULL;
    }
    if (branch_restriction_policy_apps_inner_owner->type) {
        free(branch_restriction_policy_apps_inner_owner->type);
        branch_restriction_policy_apps_inner_owner->type = NULL;
    }
    free(branch_restriction_policy_apps_inner_owner);
}

cJSON *branch_restriction_policy_apps_inner_owner_convertToJSON(branch_restriction_policy_apps_inner_owner_t *branch_restriction_policy_apps_inner_owner) {
    cJSON *item = cJSON_CreateObject();

    // branch_restriction_policy_apps_inner_owner->login
    if(branch_restriction_policy_apps_inner_owner->login) {
    if(cJSON_AddStringToObject(item, "login", branch_restriction_policy_apps_inner_owner->login) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->id
    if(branch_restriction_policy_apps_inner_owner->id) {
    if(cJSON_AddNumberToObject(item, "id", branch_restriction_policy_apps_inner_owner->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // branch_restriction_policy_apps_inner_owner->node_id
    if(branch_restriction_policy_apps_inner_owner->node_id) {
    if(cJSON_AddStringToObject(item, "node_id", branch_restriction_policy_apps_inner_owner->node_id) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->url
    if(branch_restriction_policy_apps_inner_owner->url) {
    if(cJSON_AddStringToObject(item, "url", branch_restriction_policy_apps_inner_owner->url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->repos_url
    if(branch_restriction_policy_apps_inner_owner->repos_url) {
    if(cJSON_AddStringToObject(item, "repos_url", branch_restriction_policy_apps_inner_owner->repos_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->events_url
    if(branch_restriction_policy_apps_inner_owner->events_url) {
    if(cJSON_AddStringToObject(item, "events_url", branch_restriction_policy_apps_inner_owner->events_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->hooks_url
    if(branch_restriction_policy_apps_inner_owner->hooks_url) {
    if(cJSON_AddStringToObject(item, "hooks_url", branch_restriction_policy_apps_inner_owner->hooks_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->issues_url
    if(branch_restriction_policy_apps_inner_owner->issues_url) {
    if(cJSON_AddStringToObject(item, "issues_url", branch_restriction_policy_apps_inner_owner->issues_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->members_url
    if(branch_restriction_policy_apps_inner_owner->members_url) {
    if(cJSON_AddStringToObject(item, "members_url", branch_restriction_policy_apps_inner_owner->members_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->public_members_url
    if(branch_restriction_policy_apps_inner_owner->public_members_url) {
    if(cJSON_AddStringToObject(item, "public_members_url", branch_restriction_policy_apps_inner_owner->public_members_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->avatar_url
    if(branch_restriction_policy_apps_inner_owner->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatar_url", branch_restriction_policy_apps_inner_owner->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->description
    if(branch_restriction_policy_apps_inner_owner->description) {
    if(cJSON_AddStringToObject(item, "description", branch_restriction_policy_apps_inner_owner->description) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->gravatar_id
    if(branch_restriction_policy_apps_inner_owner->gravatar_id) {
    if(cJSON_AddStringToObject(item, "gravatar_id", branch_restriction_policy_apps_inner_owner->gravatar_id) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->html_url
    if(branch_restriction_policy_apps_inner_owner->html_url) {
    if(cJSON_AddStringToObject(item, "html_url", branch_restriction_policy_apps_inner_owner->html_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->followers_url
    if(branch_restriction_policy_apps_inner_owner->followers_url) {
    if(cJSON_AddStringToObject(item, "followers_url", branch_restriction_policy_apps_inner_owner->followers_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->following_url
    if(branch_restriction_policy_apps_inner_owner->following_url) {
    if(cJSON_AddStringToObject(item, "following_url", branch_restriction_policy_apps_inner_owner->following_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->gists_url
    if(branch_restriction_policy_apps_inner_owner->gists_url) {
    if(cJSON_AddStringToObject(item, "gists_url", branch_restriction_policy_apps_inner_owner->gists_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->starred_url
    if(branch_restriction_policy_apps_inner_owner->starred_url) {
    if(cJSON_AddStringToObject(item, "starred_url", branch_restriction_policy_apps_inner_owner->starred_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->subscriptions_url
    if(branch_restriction_policy_apps_inner_owner->subscriptions_url) {
    if(cJSON_AddStringToObject(item, "subscriptions_url", branch_restriction_policy_apps_inner_owner->subscriptions_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->organizations_url
    if(branch_restriction_policy_apps_inner_owner->organizations_url) {
    if(cJSON_AddStringToObject(item, "organizations_url", branch_restriction_policy_apps_inner_owner->organizations_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->received_events_url
    if(branch_restriction_policy_apps_inner_owner->received_events_url) {
    if(cJSON_AddStringToObject(item, "received_events_url", branch_restriction_policy_apps_inner_owner->received_events_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->type
    if(branch_restriction_policy_apps_inner_owner->type) {
    if(cJSON_AddStringToObject(item, "type", branch_restriction_policy_apps_inner_owner->type) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_apps_inner_owner->site_admin
    if(branch_restriction_policy_apps_inner_owner->site_admin) {
    if(cJSON_AddBoolToObject(item, "site_admin", branch_restriction_policy_apps_inner_owner->site_admin) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branch_restriction_policy_apps_inner_owner_t *branch_restriction_policy_apps_inner_owner_parseFromJSON(cJSON *branch_restriction_policy_apps_inner_ownerJSON){

    branch_restriction_policy_apps_inner_owner_t *branch_restriction_policy_apps_inner_owner_local_var = NULL;

    // branch_restriction_policy_apps_inner_owner->login
    cJSON *login = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "login");
    if (login) { 
    if(!cJSON_IsString(login))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // branch_restriction_policy_apps_inner_owner->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "node_id");
    if (node_id) { 
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->repos_url
    cJSON *repos_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "repos_url");
    if (repos_url) { 
    if(!cJSON_IsString(repos_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->events_url
    cJSON *events_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "events_url");
    if (events_url) { 
    if(!cJSON_IsString(events_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->hooks_url
    cJSON *hooks_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "hooks_url");
    if (hooks_url) { 
    if(!cJSON_IsString(hooks_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->issues_url
    cJSON *issues_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "issues_url");
    if (issues_url) { 
    if(!cJSON_IsString(issues_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->members_url
    cJSON *members_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "members_url");
    if (members_url) { 
    if(!cJSON_IsString(members_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->public_members_url
    cJSON *public_members_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "public_members_url");
    if (public_members_url) { 
    if(!cJSON_IsString(public_members_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "avatar_url");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->gravatar_id
    cJSON *gravatar_id = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "gravatar_id");
    if (gravatar_id) { 
    if(!cJSON_IsString(gravatar_id))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "html_url");
    if (html_url) { 
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->followers_url
    cJSON *followers_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "followers_url");
    if (followers_url) { 
    if(!cJSON_IsString(followers_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->following_url
    cJSON *following_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "following_url");
    if (following_url) { 
    if(!cJSON_IsString(following_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->gists_url
    cJSON *gists_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "gists_url");
    if (gists_url) { 
    if(!cJSON_IsString(gists_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->starred_url
    cJSON *starred_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "starred_url");
    if (starred_url) { 
    if(!cJSON_IsString(starred_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->subscriptions_url
    cJSON *subscriptions_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "subscriptions_url");
    if (subscriptions_url) { 
    if(!cJSON_IsString(subscriptions_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->organizations_url
    cJSON *organizations_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "organizations_url");
    if (organizations_url) { 
    if(!cJSON_IsString(organizations_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->received_events_url
    cJSON *received_events_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "received_events_url");
    if (received_events_url) { 
    if(!cJSON_IsString(received_events_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_apps_inner_owner->site_admin
    cJSON *site_admin = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_apps_inner_ownerJSON, "site_admin");
    if (site_admin) { 
    if(!cJSON_IsBool(site_admin))
    {
    goto end; //Bool
    }
    }


    branch_restriction_policy_apps_inner_owner_local_var = branch_restriction_policy_apps_inner_owner_create (
        login ? strdup(login->valuestring) : NULL,
        id ? id->valuedouble : 0,
        node_id ? strdup(node_id->valuestring) : NULL,
        url ? strdup(url->valuestring) : NULL,
        repos_url ? strdup(repos_url->valuestring) : NULL,
        events_url ? strdup(events_url->valuestring) : NULL,
        hooks_url ? strdup(hooks_url->valuestring) : NULL,
        issues_url ? strdup(issues_url->valuestring) : NULL,
        members_url ? strdup(members_url->valuestring) : NULL,
        public_members_url ? strdup(public_members_url->valuestring) : NULL,
        avatar_url ? strdup(avatar_url->valuestring) : NULL,
        description ? strdup(description->valuestring) : NULL,
        gravatar_id ? strdup(gravatar_id->valuestring) : NULL,
        html_url ? strdup(html_url->valuestring) : NULL,
        followers_url ? strdup(followers_url->valuestring) : NULL,
        following_url ? strdup(following_url->valuestring) : NULL,
        gists_url ? strdup(gists_url->valuestring) : NULL,
        starred_url ? strdup(starred_url->valuestring) : NULL,
        subscriptions_url ? strdup(subscriptions_url->valuestring) : NULL,
        organizations_url ? strdup(organizations_url->valuestring) : NULL,
        received_events_url ? strdup(received_events_url->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL,
        site_admin ? site_admin->valueint : 0
        );

    return branch_restriction_policy_apps_inner_owner_local_var;
end:
    return NULL;

}
