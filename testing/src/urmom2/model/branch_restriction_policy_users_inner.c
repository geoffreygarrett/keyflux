#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_restriction_policy_users_inner.h"



branch_restriction_policy_users_inner_t *branch_restriction_policy_users_inner_create(
    char *login,
    long id,
    char *node_id,
    char *avatar_url,
    char *gravatar_id,
    char *url,
    char *html_url,
    char *followers_url,
    char *following_url,
    char *gists_url,
    char *starred_url,
    char *subscriptions_url,
    char *organizations_url,
    char *repos_url,
    char *events_url,
    char *received_events_url,
    char *type,
    int site_admin
    ) {
    branch_restriction_policy_users_inner_t *branch_restriction_policy_users_inner_local_var = malloc(sizeof(branch_restriction_policy_users_inner_t));
    if (!branch_restriction_policy_users_inner_local_var) {
        return NULL;
    }
    branch_restriction_policy_users_inner_local_var->login = login;
    branch_restriction_policy_users_inner_local_var->id = id;
    branch_restriction_policy_users_inner_local_var->node_id = node_id;
    branch_restriction_policy_users_inner_local_var->avatar_url = avatar_url;
    branch_restriction_policy_users_inner_local_var->gravatar_id = gravatar_id;
    branch_restriction_policy_users_inner_local_var->url = url;
    branch_restriction_policy_users_inner_local_var->html_url = html_url;
    branch_restriction_policy_users_inner_local_var->followers_url = followers_url;
    branch_restriction_policy_users_inner_local_var->following_url = following_url;
    branch_restriction_policy_users_inner_local_var->gists_url = gists_url;
    branch_restriction_policy_users_inner_local_var->starred_url = starred_url;
    branch_restriction_policy_users_inner_local_var->subscriptions_url = subscriptions_url;
    branch_restriction_policy_users_inner_local_var->organizations_url = organizations_url;
    branch_restriction_policy_users_inner_local_var->repos_url = repos_url;
    branch_restriction_policy_users_inner_local_var->events_url = events_url;
    branch_restriction_policy_users_inner_local_var->received_events_url = received_events_url;
    branch_restriction_policy_users_inner_local_var->type = type;
    branch_restriction_policy_users_inner_local_var->site_admin = site_admin;

    return branch_restriction_policy_users_inner_local_var;
}


void branch_restriction_policy_users_inner_free(branch_restriction_policy_users_inner_t *branch_restriction_policy_users_inner) {
    if(NULL == branch_restriction_policy_users_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (branch_restriction_policy_users_inner->login) {
        free(branch_restriction_policy_users_inner->login);
        branch_restriction_policy_users_inner->login = NULL;
    }
    if (branch_restriction_policy_users_inner->node_id) {
        free(branch_restriction_policy_users_inner->node_id);
        branch_restriction_policy_users_inner->node_id = NULL;
    }
    if (branch_restriction_policy_users_inner->avatar_url) {
        free(branch_restriction_policy_users_inner->avatar_url);
        branch_restriction_policy_users_inner->avatar_url = NULL;
    }
    if (branch_restriction_policy_users_inner->gravatar_id) {
        free(branch_restriction_policy_users_inner->gravatar_id);
        branch_restriction_policy_users_inner->gravatar_id = NULL;
    }
    if (branch_restriction_policy_users_inner->url) {
        free(branch_restriction_policy_users_inner->url);
        branch_restriction_policy_users_inner->url = NULL;
    }
    if (branch_restriction_policy_users_inner->html_url) {
        free(branch_restriction_policy_users_inner->html_url);
        branch_restriction_policy_users_inner->html_url = NULL;
    }
    if (branch_restriction_policy_users_inner->followers_url) {
        free(branch_restriction_policy_users_inner->followers_url);
        branch_restriction_policy_users_inner->followers_url = NULL;
    }
    if (branch_restriction_policy_users_inner->following_url) {
        free(branch_restriction_policy_users_inner->following_url);
        branch_restriction_policy_users_inner->following_url = NULL;
    }
    if (branch_restriction_policy_users_inner->gists_url) {
        free(branch_restriction_policy_users_inner->gists_url);
        branch_restriction_policy_users_inner->gists_url = NULL;
    }
    if (branch_restriction_policy_users_inner->starred_url) {
        free(branch_restriction_policy_users_inner->starred_url);
        branch_restriction_policy_users_inner->starred_url = NULL;
    }
    if (branch_restriction_policy_users_inner->subscriptions_url) {
        free(branch_restriction_policy_users_inner->subscriptions_url);
        branch_restriction_policy_users_inner->subscriptions_url = NULL;
    }
    if (branch_restriction_policy_users_inner->organizations_url) {
        free(branch_restriction_policy_users_inner->organizations_url);
        branch_restriction_policy_users_inner->organizations_url = NULL;
    }
    if (branch_restriction_policy_users_inner->repos_url) {
        free(branch_restriction_policy_users_inner->repos_url);
        branch_restriction_policy_users_inner->repos_url = NULL;
    }
    if (branch_restriction_policy_users_inner->events_url) {
        free(branch_restriction_policy_users_inner->events_url);
        branch_restriction_policy_users_inner->events_url = NULL;
    }
    if (branch_restriction_policy_users_inner->received_events_url) {
        free(branch_restriction_policy_users_inner->received_events_url);
        branch_restriction_policy_users_inner->received_events_url = NULL;
    }
    if (branch_restriction_policy_users_inner->type) {
        free(branch_restriction_policy_users_inner->type);
        branch_restriction_policy_users_inner->type = NULL;
    }
    free(branch_restriction_policy_users_inner);
}

cJSON *branch_restriction_policy_users_inner_convertToJSON(branch_restriction_policy_users_inner_t *branch_restriction_policy_users_inner) {
    cJSON *item = cJSON_CreateObject();

    // branch_restriction_policy_users_inner->login
    if(branch_restriction_policy_users_inner->login) {
    if(cJSON_AddStringToObject(item, "login", branch_restriction_policy_users_inner->login) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->id
    if(branch_restriction_policy_users_inner->id) {
    if(cJSON_AddNumberToObject(item, "id", branch_restriction_policy_users_inner->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // branch_restriction_policy_users_inner->node_id
    if(branch_restriction_policy_users_inner->node_id) {
    if(cJSON_AddStringToObject(item, "node_id", branch_restriction_policy_users_inner->node_id) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->avatar_url
    if(branch_restriction_policy_users_inner->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatar_url", branch_restriction_policy_users_inner->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->gravatar_id
    if(branch_restriction_policy_users_inner->gravatar_id) {
    if(cJSON_AddStringToObject(item, "gravatar_id", branch_restriction_policy_users_inner->gravatar_id) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->url
    if(branch_restriction_policy_users_inner->url) {
    if(cJSON_AddStringToObject(item, "url", branch_restriction_policy_users_inner->url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->html_url
    if(branch_restriction_policy_users_inner->html_url) {
    if(cJSON_AddStringToObject(item, "html_url", branch_restriction_policy_users_inner->html_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->followers_url
    if(branch_restriction_policy_users_inner->followers_url) {
    if(cJSON_AddStringToObject(item, "followers_url", branch_restriction_policy_users_inner->followers_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->following_url
    if(branch_restriction_policy_users_inner->following_url) {
    if(cJSON_AddStringToObject(item, "following_url", branch_restriction_policy_users_inner->following_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->gists_url
    if(branch_restriction_policy_users_inner->gists_url) {
    if(cJSON_AddStringToObject(item, "gists_url", branch_restriction_policy_users_inner->gists_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->starred_url
    if(branch_restriction_policy_users_inner->starred_url) {
    if(cJSON_AddStringToObject(item, "starred_url", branch_restriction_policy_users_inner->starred_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->subscriptions_url
    if(branch_restriction_policy_users_inner->subscriptions_url) {
    if(cJSON_AddStringToObject(item, "subscriptions_url", branch_restriction_policy_users_inner->subscriptions_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->organizations_url
    if(branch_restriction_policy_users_inner->organizations_url) {
    if(cJSON_AddStringToObject(item, "organizations_url", branch_restriction_policy_users_inner->organizations_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->repos_url
    if(branch_restriction_policy_users_inner->repos_url) {
    if(cJSON_AddStringToObject(item, "repos_url", branch_restriction_policy_users_inner->repos_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->events_url
    if(branch_restriction_policy_users_inner->events_url) {
    if(cJSON_AddStringToObject(item, "events_url", branch_restriction_policy_users_inner->events_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->received_events_url
    if(branch_restriction_policy_users_inner->received_events_url) {
    if(cJSON_AddStringToObject(item, "received_events_url", branch_restriction_policy_users_inner->received_events_url) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->type
    if(branch_restriction_policy_users_inner->type) {
    if(cJSON_AddStringToObject(item, "type", branch_restriction_policy_users_inner->type) == NULL) {
    goto fail; //String
    }
    }


    // branch_restriction_policy_users_inner->site_admin
    if(branch_restriction_policy_users_inner->site_admin) {
    if(cJSON_AddBoolToObject(item, "site_admin", branch_restriction_policy_users_inner->site_admin) == NULL) {
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

branch_restriction_policy_users_inner_t *branch_restriction_policy_users_inner_parseFromJSON(cJSON *branch_restriction_policy_users_innerJSON){

    branch_restriction_policy_users_inner_t *branch_restriction_policy_users_inner_local_var = NULL;

    // branch_restriction_policy_users_inner->login
    cJSON *login = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "login");
    if (login) { 
    if(!cJSON_IsString(login))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // branch_restriction_policy_users_inner->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "node_id");
    if (node_id) { 
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "avatar_url");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->gravatar_id
    cJSON *gravatar_id = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "gravatar_id");
    if (gravatar_id) { 
    if(!cJSON_IsString(gravatar_id))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->html_url
    cJSON *html_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "html_url");
    if (html_url) { 
    if(!cJSON_IsString(html_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->followers_url
    cJSON *followers_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "followers_url");
    if (followers_url) { 
    if(!cJSON_IsString(followers_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->following_url
    cJSON *following_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "following_url");
    if (following_url) { 
    if(!cJSON_IsString(following_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->gists_url
    cJSON *gists_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "gists_url");
    if (gists_url) { 
    if(!cJSON_IsString(gists_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->starred_url
    cJSON *starred_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "starred_url");
    if (starred_url) { 
    if(!cJSON_IsString(starred_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->subscriptions_url
    cJSON *subscriptions_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "subscriptions_url");
    if (subscriptions_url) { 
    if(!cJSON_IsString(subscriptions_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->organizations_url
    cJSON *organizations_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "organizations_url");
    if (organizations_url) { 
    if(!cJSON_IsString(organizations_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->repos_url
    cJSON *repos_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "repos_url");
    if (repos_url) { 
    if(!cJSON_IsString(repos_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->events_url
    cJSON *events_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "events_url");
    if (events_url) { 
    if(!cJSON_IsString(events_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->received_events_url
    cJSON *received_events_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "received_events_url");
    if (received_events_url) { 
    if(!cJSON_IsString(received_events_url))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // branch_restriction_policy_users_inner->site_admin
    cJSON *site_admin = cJSON_GetObjectItemCaseSensitive(branch_restriction_policy_users_innerJSON, "site_admin");
    if (site_admin) { 
    if(!cJSON_IsBool(site_admin))
    {
    goto end; //Bool
    }
    }


    branch_restriction_policy_users_inner_local_var = branch_restriction_policy_users_inner_create (
        login ? strdup(login->valuestring) : NULL,
        id ? id->valuedouble : 0,
        node_id ? strdup(node_id->valuestring) : NULL,
        avatar_url ? strdup(avatar_url->valuestring) : NULL,
        gravatar_id ? strdup(gravatar_id->valuestring) : NULL,
        url ? strdup(url->valuestring) : NULL,
        html_url ? strdup(html_url->valuestring) : NULL,
        followers_url ? strdup(followers_url->valuestring) : NULL,
        following_url ? strdup(following_url->valuestring) : NULL,
        gists_url ? strdup(gists_url->valuestring) : NULL,
        starred_url ? strdup(starred_url->valuestring) : NULL,
        subscriptions_url ? strdup(subscriptions_url->valuestring) : NULL,
        organizations_url ? strdup(organizations_url->valuestring) : NULL,
        repos_url ? strdup(repos_url->valuestring) : NULL,
        events_url ? strdup(events_url->valuestring) : NULL,
        received_events_url ? strdup(received_events_url->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL,
        site_admin ? site_admin->valueint : 0
        );

    return branch_restriction_policy_users_inner_local_var;
end:
    return NULL;

}
