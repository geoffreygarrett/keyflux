#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branch_restriction_policy.h"



branch_restriction_policy_t *branch_restriction_policy_create(
    char *url,
    char *users_url,
    char *teams_url,
    char *apps_url,
    list_t *users,
    list_t *teams,
    list_t *apps
    ) {
    branch_restriction_policy_t *branch_restriction_policy_local_var = malloc(sizeof(branch_restriction_policy_t));
    if (!branch_restriction_policy_local_var) {
        return NULL;
    }
    branch_restriction_policy_local_var->url = url;
    branch_restriction_policy_local_var->users_url = users_url;
    branch_restriction_policy_local_var->teams_url = teams_url;
    branch_restriction_policy_local_var->apps_url = apps_url;
    branch_restriction_policy_local_var->users = users;
    branch_restriction_policy_local_var->teams = teams;
    branch_restriction_policy_local_var->apps = apps;

    return branch_restriction_policy_local_var;
}


void branch_restriction_policy_free(branch_restriction_policy_t *branch_restriction_policy) {
    if(NULL == branch_restriction_policy){
        return ;
    }
    listEntry_t *listEntry;
    if (branch_restriction_policy->url) {
        free(branch_restriction_policy->url);
        branch_restriction_policy->url = NULL;
    }
    if (branch_restriction_policy->users_url) {
        free(branch_restriction_policy->users_url);
        branch_restriction_policy->users_url = NULL;
    }
    if (branch_restriction_policy->teams_url) {
        free(branch_restriction_policy->teams_url);
        branch_restriction_policy->teams_url = NULL;
    }
    if (branch_restriction_policy->apps_url) {
        free(branch_restriction_policy->apps_url);
        branch_restriction_policy->apps_url = NULL;
    }
    if (branch_restriction_policy->users) {
        list_ForEach(listEntry, branch_restriction_policy->users) {
            branch_restriction_policy_users_inner_free(listEntry->data);
        }
        list_freeList(branch_restriction_policy->users);
        branch_restriction_policy->users = NULL;
    }
    if (branch_restriction_policy->teams) {
        list_ForEach(listEntry, branch_restriction_policy->teams) {
            branch_restriction_policy_teams_inner_free(listEntry->data);
        }
        list_freeList(branch_restriction_policy->teams);
        branch_restriction_policy->teams = NULL;
    }
    if (branch_restriction_policy->apps) {
        list_ForEach(listEntry, branch_restriction_policy->apps) {
            branch_restriction_policy_apps_inner_free(listEntry->data);
        }
        list_freeList(branch_restriction_policy->apps);
        branch_restriction_policy->apps = NULL;
    }
    free(branch_restriction_policy);
}

cJSON *branch_restriction_policy_convertToJSON(branch_restriction_policy_t *branch_restriction_policy) {
    cJSON *item = cJSON_CreateObject();

    // branch_restriction_policy->url
    if (!branch_restriction_policy->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", branch_restriction_policy->url) == NULL) {
    goto fail; //String
    }


    // branch_restriction_policy->users_url
    if (!branch_restriction_policy->users_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "users_url", branch_restriction_policy->users_url) == NULL) {
    goto fail; //String
    }


    // branch_restriction_policy->teams_url
    if (!branch_restriction_policy->teams_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "teams_url", branch_restriction_policy->teams_url) == NULL) {
    goto fail; //String
    }


    // branch_restriction_policy->apps_url
    if (!branch_restriction_policy->apps_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "apps_url", branch_restriction_policy->apps_url) == NULL) {
    goto fail; //String
    }


    // branch_restriction_policy->users
    if (!branch_restriction_policy->users) {
        goto fail;
    }
    cJSON *users = cJSON_AddArrayToObject(item, "users");
    if(users == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *usersListEntry;
    if (branch_restriction_policy->users) {
    list_ForEach(usersListEntry, branch_restriction_policy->users) {
    cJSON *itemLocal = branch_restriction_policy_users_inner_convertToJSON(usersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(users, itemLocal);
    }
    }


    // branch_restriction_policy->teams
    if (!branch_restriction_policy->teams) {
        goto fail;
    }
    cJSON *teams = cJSON_AddArrayToObject(item, "teams");
    if(teams == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *teamsListEntry;
    if (branch_restriction_policy->teams) {
    list_ForEach(teamsListEntry, branch_restriction_policy->teams) {
    cJSON *itemLocal = branch_restriction_policy_teams_inner_convertToJSON(teamsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(teams, itemLocal);
    }
    }


    // branch_restriction_policy->apps
    if (!branch_restriction_policy->apps) {
        goto fail;
    }
    cJSON *apps = cJSON_AddArrayToObject(item, "apps");
    if(apps == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *appsListEntry;
    if (branch_restriction_policy->apps) {
    list_ForEach(appsListEntry, branch_restriction_policy->apps) {
    cJSON *itemLocal = branch_restriction_policy_apps_inner_convertToJSON(appsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(apps, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

branch_restriction_policy_t *branch_restriction_policy_parseFromJSON(cJSON *branch_restriction_policyJSON){

    branch_restriction_policy_t *branch_restriction_policy_local_var = NULL;

    // define the local list for branch_restriction_policy->users
    list_t *usersList = NULL;

    // define the local list for branch_restriction_policy->teams
    list_t *teamsList = NULL;

    // define the local list for branch_restriction_policy->apps
    list_t *appsList = NULL;

    // branch_restriction_policy->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policyJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }

    // branch_restriction_policy->users_url
    cJSON *users_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policyJSON, "users_url");
    if (!users_url) {
        goto end;
    }

    
    if(!cJSON_IsString(users_url))
    {
    goto end; //String
    }

    // branch_restriction_policy->teams_url
    cJSON *teams_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policyJSON, "teams_url");
    if (!teams_url) {
        goto end;
    }

    
    if(!cJSON_IsString(teams_url))
    {
    goto end; //String
    }

    // branch_restriction_policy->apps_url
    cJSON *apps_url = cJSON_GetObjectItemCaseSensitive(branch_restriction_policyJSON, "apps_url");
    if (!apps_url) {
        goto end;
    }

    
    if(!cJSON_IsString(apps_url))
    {
    goto end; //String
    }

    // branch_restriction_policy->users
    cJSON *users = cJSON_GetObjectItemCaseSensitive(branch_restriction_policyJSON, "users");
    if (!users) {
        goto end;
    }

    
    cJSON *users_local_nonprimitive = NULL;
    if(!cJSON_IsArray(users)){
        goto end; //nonprimitive container
    }

    usersList = list_createList();

    cJSON_ArrayForEach(users_local_nonprimitive,users )
    {
        if(!cJSON_IsObject(users_local_nonprimitive)){
            goto end;
        }
        branch_restriction_policy_users_inner_t *usersItem = branch_restriction_policy_users_inner_parseFromJSON(users_local_nonprimitive);

        list_addElement(usersList, usersItem);
    }

    // branch_restriction_policy->teams
    cJSON *teams = cJSON_GetObjectItemCaseSensitive(branch_restriction_policyJSON, "teams");
    if (!teams) {
        goto end;
    }

    
    cJSON *teams_local_nonprimitive = NULL;
    if(!cJSON_IsArray(teams)){
        goto end; //nonprimitive container
    }

    teamsList = list_createList();

    cJSON_ArrayForEach(teams_local_nonprimitive,teams )
    {
        if(!cJSON_IsObject(teams_local_nonprimitive)){
            goto end;
        }
        branch_restriction_policy_teams_inner_t *teamsItem = branch_restriction_policy_teams_inner_parseFromJSON(teams_local_nonprimitive);

        list_addElement(teamsList, teamsItem);
    }

    // branch_restriction_policy->apps
    cJSON *apps = cJSON_GetObjectItemCaseSensitive(branch_restriction_policyJSON, "apps");
    if (!apps) {
        goto end;
    }

    
    cJSON *apps_local_nonprimitive = NULL;
    if(!cJSON_IsArray(apps)){
        goto end; //nonprimitive container
    }

    appsList = list_createList();

    cJSON_ArrayForEach(apps_local_nonprimitive,apps )
    {
        if(!cJSON_IsObject(apps_local_nonprimitive)){
            goto end;
        }
        branch_restriction_policy_apps_inner_t *appsItem = branch_restriction_policy_apps_inner_parseFromJSON(apps_local_nonprimitive);

        list_addElement(appsList, appsItem);
    }


    branch_restriction_policy_local_var = branch_restriction_policy_create (
        strdup(url->valuestring),
        strdup(users_url->valuestring),
        strdup(teams_url->valuestring),
        strdup(apps_url->valuestring),
        usersList,
        teamsList,
        appsList
        );

    return branch_restriction_policy_local_var;
end:
    if (usersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, usersList) {
            branch_restriction_policy_users_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(usersList);
        usersList = NULL;
    }
    if (teamsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, teamsList) {
            branch_restriction_policy_teams_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(teamsList);
        teamsList = NULL;
    }
    if (appsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, appsList) {
            branch_restriction_policy_apps_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(appsList);
        appsList = NULL;
    }
    return NULL;

}
