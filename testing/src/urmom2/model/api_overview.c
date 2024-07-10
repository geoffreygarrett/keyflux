#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "api_overview.h"



api_overview_t *api_overview_create(
    int verifiable_password_authentication,
    api_overview_ssh_key_fingerprints_t *ssh_key_fingerprints,
    list_t *ssh_keys,
    list_t *hooks,
    list_t *github_enterprise_importer,
    list_t *web,
    list_t *api,
    list_t *git,
    list_t *packages,
    list_t *pages,
    list_t *importer,
    list_t *actions,
    list_t *actions_macos,
    list_t *dependabot,
    api_overview_domains_t *domains
    ) {
    api_overview_t *api_overview_local_var = malloc(sizeof(api_overview_t));
    if (!api_overview_local_var) {
        return NULL;
    }
    api_overview_local_var->verifiable_password_authentication = verifiable_password_authentication;
    api_overview_local_var->ssh_key_fingerprints = ssh_key_fingerprints;
    api_overview_local_var->ssh_keys = ssh_keys;
    api_overview_local_var->hooks = hooks;
    api_overview_local_var->github_enterprise_importer = github_enterprise_importer;
    api_overview_local_var->web = web;
    api_overview_local_var->api = api;
    api_overview_local_var->git = git;
    api_overview_local_var->packages = packages;
    api_overview_local_var->pages = pages;
    api_overview_local_var->importer = importer;
    api_overview_local_var->actions = actions;
    api_overview_local_var->actions_macos = actions_macos;
    api_overview_local_var->dependabot = dependabot;
    api_overview_local_var->domains = domains;

    return api_overview_local_var;
}


void api_overview_free(api_overview_t *api_overview) {
    if(NULL == api_overview){
        return ;
    }
    listEntry_t *listEntry;
    if (api_overview->ssh_key_fingerprints) {
        api_overview_ssh_key_fingerprints_free(api_overview->ssh_key_fingerprints);
        api_overview->ssh_key_fingerprints = NULL;
    }
    if (api_overview->ssh_keys) {
        list_ForEach(listEntry, api_overview->ssh_keys) {
            free(listEntry->data);
        }
        list_freeList(api_overview->ssh_keys);
        api_overview->ssh_keys = NULL;
    }
    if (api_overview->hooks) {
        list_ForEach(listEntry, api_overview->hooks) {
            free(listEntry->data);
        }
        list_freeList(api_overview->hooks);
        api_overview->hooks = NULL;
    }
    if (api_overview->github_enterprise_importer) {
        list_ForEach(listEntry, api_overview->github_enterprise_importer) {
            free(listEntry->data);
        }
        list_freeList(api_overview->github_enterprise_importer);
        api_overview->github_enterprise_importer = NULL;
    }
    if (api_overview->web) {
        list_ForEach(listEntry, api_overview->web) {
            free(listEntry->data);
        }
        list_freeList(api_overview->web);
        api_overview->web = NULL;
    }
    if (api_overview->api) {
        list_ForEach(listEntry, api_overview->api) {
            free(listEntry->data);
        }
        list_freeList(api_overview->api);
        api_overview->api = NULL;
    }
    if (api_overview->git) {
        list_ForEach(listEntry, api_overview->git) {
            free(listEntry->data);
        }
        list_freeList(api_overview->git);
        api_overview->git = NULL;
    }
    if (api_overview->packages) {
        list_ForEach(listEntry, api_overview->packages) {
            free(listEntry->data);
        }
        list_freeList(api_overview->packages);
        api_overview->packages = NULL;
    }
    if (api_overview->pages) {
        list_ForEach(listEntry, api_overview->pages) {
            free(listEntry->data);
        }
        list_freeList(api_overview->pages);
        api_overview->pages = NULL;
    }
    if (api_overview->importer) {
        list_ForEach(listEntry, api_overview->importer) {
            free(listEntry->data);
        }
        list_freeList(api_overview->importer);
        api_overview->importer = NULL;
    }
    if (api_overview->actions) {
        list_ForEach(listEntry, api_overview->actions) {
            free(listEntry->data);
        }
        list_freeList(api_overview->actions);
        api_overview->actions = NULL;
    }
    if (api_overview->actions_macos) {
        list_ForEach(listEntry, api_overview->actions_macos) {
            free(listEntry->data);
        }
        list_freeList(api_overview->actions_macos);
        api_overview->actions_macos = NULL;
    }
    if (api_overview->dependabot) {
        list_ForEach(listEntry, api_overview->dependabot) {
            free(listEntry->data);
        }
        list_freeList(api_overview->dependabot);
        api_overview->dependabot = NULL;
    }
    if (api_overview->domains) {
        api_overview_domains_free(api_overview->domains);
        api_overview->domains = NULL;
    }
    free(api_overview);
}

cJSON *api_overview_convertToJSON(api_overview_t *api_overview) {
    cJSON *item = cJSON_CreateObject();

    // api_overview->verifiable_password_authentication
    if (!api_overview->verifiable_password_authentication) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "verifiable_password_authentication", api_overview->verifiable_password_authentication) == NULL) {
    goto fail; //Bool
    }


    // api_overview->ssh_key_fingerprints
    if(api_overview->ssh_key_fingerprints) {
    cJSON *ssh_key_fingerprints_local_JSON = api_overview_ssh_key_fingerprints_convertToJSON(api_overview->ssh_key_fingerprints);
    if(ssh_key_fingerprints_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ssh_key_fingerprints", ssh_key_fingerprints_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // api_overview->ssh_keys
    if(api_overview->ssh_keys) {
    cJSON *ssh_keys = cJSON_AddArrayToObject(item, "ssh_keys");
    if(ssh_keys == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *ssh_keysListEntry;
    list_ForEach(ssh_keysListEntry, api_overview->ssh_keys) {
    if(cJSON_AddStringToObject(ssh_keys, "", (char*)ssh_keysListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview->hooks
    if(api_overview->hooks) {
    cJSON *hooks = cJSON_AddArrayToObject(item, "hooks");
    if(hooks == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *hooksListEntry;
    list_ForEach(hooksListEntry, api_overview->hooks) {
    if(cJSON_AddStringToObject(hooks, "", (char*)hooksListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview->github_enterprise_importer
    if(api_overview->github_enterprise_importer) {
    cJSON *github_enterprise_importer = cJSON_AddArrayToObject(item, "github_enterprise_importer");
    if(github_enterprise_importer == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *github_enterprise_importerListEntry;
    list_ForEach(github_enterprise_importerListEntry, api_overview->github_enterprise_importer) {
    if(cJSON_AddStringToObject(github_enterprise_importer, "", (char*)github_enterprise_importerListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview->web
    if(api_overview->web) {
    cJSON *web = cJSON_AddArrayToObject(item, "web");
    if(web == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *webListEntry;
    list_ForEach(webListEntry, api_overview->web) {
    if(cJSON_AddStringToObject(web, "", (char*)webListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview->api
    if(api_overview->api) {
    cJSON *api = cJSON_AddArrayToObject(item, "api");
    if(api == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *apiListEntry;
    list_ForEach(apiListEntry, api_overview->api) {
    if(cJSON_AddStringToObject(api, "", (char*)apiListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview->git
    if(api_overview->git) {
    cJSON *git = cJSON_AddArrayToObject(item, "git");
    if(git == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *gitListEntry;
    list_ForEach(gitListEntry, api_overview->git) {
    if(cJSON_AddStringToObject(git, "", (char*)gitListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview->packages
    if(api_overview->packages) {
    cJSON *packages = cJSON_AddArrayToObject(item, "packages");
    if(packages == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *packagesListEntry;
    list_ForEach(packagesListEntry, api_overview->packages) {
    if(cJSON_AddStringToObject(packages, "", (char*)packagesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview->pages
    if(api_overview->pages) {
    cJSON *pages = cJSON_AddArrayToObject(item, "pages");
    if(pages == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *pagesListEntry;
    list_ForEach(pagesListEntry, api_overview->pages) {
    if(cJSON_AddStringToObject(pages, "", (char*)pagesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview->importer
    if(api_overview->importer) {
    cJSON *importer = cJSON_AddArrayToObject(item, "importer");
    if(importer == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *importerListEntry;
    list_ForEach(importerListEntry, api_overview->importer) {
    if(cJSON_AddStringToObject(importer, "", (char*)importerListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview->actions
    if(api_overview->actions) {
    cJSON *actions = cJSON_AddArrayToObject(item, "actions");
    if(actions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *actionsListEntry;
    list_ForEach(actionsListEntry, api_overview->actions) {
    if(cJSON_AddStringToObject(actions, "", (char*)actionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview->actions_macos
    if(api_overview->actions_macos) {
    cJSON *actions_macos = cJSON_AddArrayToObject(item, "actions_macos");
    if(actions_macos == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *actions_macosListEntry;
    list_ForEach(actions_macosListEntry, api_overview->actions_macos) {
    if(cJSON_AddStringToObject(actions_macos, "", (char*)actions_macosListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview->dependabot
    if(api_overview->dependabot) {
    cJSON *dependabot = cJSON_AddArrayToObject(item, "dependabot");
    if(dependabot == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *dependabotListEntry;
    list_ForEach(dependabotListEntry, api_overview->dependabot) {
    if(cJSON_AddStringToObject(dependabot, "", (char*)dependabotListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview->domains
    if(api_overview->domains) {
    cJSON *domains_local_JSON = api_overview_domains_convertToJSON(api_overview->domains);
    if(domains_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "domains", domains_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

api_overview_t *api_overview_parseFromJSON(cJSON *api_overviewJSON){

    api_overview_t *api_overview_local_var = NULL;

    // define the local variable for api_overview->ssh_key_fingerprints
    api_overview_ssh_key_fingerprints_t *ssh_key_fingerprints_local_nonprim = NULL;

    // define the local list for api_overview->ssh_keys
    list_t *ssh_keysList = NULL;

    // define the local list for api_overview->hooks
    list_t *hooksList = NULL;

    // define the local list for api_overview->github_enterprise_importer
    list_t *github_enterprise_importerList = NULL;

    // define the local list for api_overview->web
    list_t *webList = NULL;

    // define the local list for api_overview->api
    list_t *apiList = NULL;

    // define the local list for api_overview->git
    list_t *gitList = NULL;

    // define the local list for api_overview->packages
    list_t *packagesList = NULL;

    // define the local list for api_overview->pages
    list_t *pagesList = NULL;

    // define the local list for api_overview->importer
    list_t *importerList = NULL;

    // define the local list for api_overview->actions
    list_t *actionsList = NULL;

    // define the local list for api_overview->actions_macos
    list_t *actions_macosList = NULL;

    // define the local list for api_overview->dependabot
    list_t *dependabotList = NULL;

    // define the local variable for api_overview->domains
    api_overview_domains_t *domains_local_nonprim = NULL;

    // api_overview->verifiable_password_authentication
    cJSON *verifiable_password_authentication = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "verifiable_password_authentication");
    if (!verifiable_password_authentication) {
        goto end;
    }

    
    if(!cJSON_IsBool(verifiable_password_authentication))
    {
    goto end; //Bool
    }

    // api_overview->ssh_key_fingerprints
    cJSON *ssh_key_fingerprints = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "ssh_key_fingerprints");
    if (ssh_key_fingerprints) { 
    ssh_key_fingerprints_local_nonprim = api_overview_ssh_key_fingerprints_parseFromJSON(ssh_key_fingerprints); //nonprimitive
    }

    // api_overview->ssh_keys
    cJSON *ssh_keys = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "ssh_keys");
    if (ssh_keys) { 
    cJSON *ssh_keys_local = NULL;
    if(!cJSON_IsArray(ssh_keys)) {
        goto end;//primitive container
    }
    ssh_keysList = list_createList();

    cJSON_ArrayForEach(ssh_keys_local, ssh_keys)
    {
        if(!cJSON_IsString(ssh_keys_local))
        {
            goto end;
        }
        list_addElement(ssh_keysList , strdup(ssh_keys_local->valuestring));
    }
    }

    // api_overview->hooks
    cJSON *hooks = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "hooks");
    if (hooks) { 
    cJSON *hooks_local = NULL;
    if(!cJSON_IsArray(hooks)) {
        goto end;//primitive container
    }
    hooksList = list_createList();

    cJSON_ArrayForEach(hooks_local, hooks)
    {
        if(!cJSON_IsString(hooks_local))
        {
            goto end;
        }
        list_addElement(hooksList , strdup(hooks_local->valuestring));
    }
    }

    // api_overview->github_enterprise_importer
    cJSON *github_enterprise_importer = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "github_enterprise_importer");
    if (github_enterprise_importer) { 
    cJSON *github_enterprise_importer_local = NULL;
    if(!cJSON_IsArray(github_enterprise_importer)) {
        goto end;//primitive container
    }
    github_enterprise_importerList = list_createList();

    cJSON_ArrayForEach(github_enterprise_importer_local, github_enterprise_importer)
    {
        if(!cJSON_IsString(github_enterprise_importer_local))
        {
            goto end;
        }
        list_addElement(github_enterprise_importerList , strdup(github_enterprise_importer_local->valuestring));
    }
    }

    // api_overview->web
    cJSON *web = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "web");
    if (web) { 
    cJSON *web_local = NULL;
    if(!cJSON_IsArray(web)) {
        goto end;//primitive container
    }
    webList = list_createList();

    cJSON_ArrayForEach(web_local, web)
    {
        if(!cJSON_IsString(web_local))
        {
            goto end;
        }
        list_addElement(webList , strdup(web_local->valuestring));
    }
    }

    // api_overview->api
    cJSON *api = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "api");
    if (api) { 
    cJSON *api_local = NULL;
    if(!cJSON_IsArray(api)) {
        goto end;//primitive container
    }
    apiList = list_createList();

    cJSON_ArrayForEach(api_local, api)
    {
        if(!cJSON_IsString(api_local))
        {
            goto end;
        }
        list_addElement(apiList , strdup(api_local->valuestring));
    }
    }

    // api_overview->git
    cJSON *git = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "git");
    if (git) { 
    cJSON *git_local = NULL;
    if(!cJSON_IsArray(git)) {
        goto end;//primitive container
    }
    gitList = list_createList();

    cJSON_ArrayForEach(git_local, git)
    {
        if(!cJSON_IsString(git_local))
        {
            goto end;
        }
        list_addElement(gitList , strdup(git_local->valuestring));
    }
    }

    // api_overview->packages
    cJSON *packages = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "packages");
    if (packages) { 
    cJSON *packages_local = NULL;
    if(!cJSON_IsArray(packages)) {
        goto end;//primitive container
    }
    packagesList = list_createList();

    cJSON_ArrayForEach(packages_local, packages)
    {
        if(!cJSON_IsString(packages_local))
        {
            goto end;
        }
        list_addElement(packagesList , strdup(packages_local->valuestring));
    }
    }

    // api_overview->pages
    cJSON *pages = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "pages");
    if (pages) { 
    cJSON *pages_local = NULL;
    if(!cJSON_IsArray(pages)) {
        goto end;//primitive container
    }
    pagesList = list_createList();

    cJSON_ArrayForEach(pages_local, pages)
    {
        if(!cJSON_IsString(pages_local))
        {
            goto end;
        }
        list_addElement(pagesList , strdup(pages_local->valuestring));
    }
    }

    // api_overview->importer
    cJSON *importer = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "importer");
    if (importer) { 
    cJSON *importer_local = NULL;
    if(!cJSON_IsArray(importer)) {
        goto end;//primitive container
    }
    importerList = list_createList();

    cJSON_ArrayForEach(importer_local, importer)
    {
        if(!cJSON_IsString(importer_local))
        {
            goto end;
        }
        list_addElement(importerList , strdup(importer_local->valuestring));
    }
    }

    // api_overview->actions
    cJSON *actions = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "actions");
    if (actions) { 
    cJSON *actions_local = NULL;
    if(!cJSON_IsArray(actions)) {
        goto end;//primitive container
    }
    actionsList = list_createList();

    cJSON_ArrayForEach(actions_local, actions)
    {
        if(!cJSON_IsString(actions_local))
        {
            goto end;
        }
        list_addElement(actionsList , strdup(actions_local->valuestring));
    }
    }

    // api_overview->actions_macos
    cJSON *actions_macos = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "actions_macos");
    if (actions_macos) { 
    cJSON *actions_macos_local = NULL;
    if(!cJSON_IsArray(actions_macos)) {
        goto end;//primitive container
    }
    actions_macosList = list_createList();

    cJSON_ArrayForEach(actions_macos_local, actions_macos)
    {
        if(!cJSON_IsString(actions_macos_local))
        {
            goto end;
        }
        list_addElement(actions_macosList , strdup(actions_macos_local->valuestring));
    }
    }

    // api_overview->dependabot
    cJSON *dependabot = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "dependabot");
    if (dependabot) { 
    cJSON *dependabot_local = NULL;
    if(!cJSON_IsArray(dependabot)) {
        goto end;//primitive container
    }
    dependabotList = list_createList();

    cJSON_ArrayForEach(dependabot_local, dependabot)
    {
        if(!cJSON_IsString(dependabot_local))
        {
            goto end;
        }
        list_addElement(dependabotList , strdup(dependabot_local->valuestring));
    }
    }

    // api_overview->domains
    cJSON *domains = cJSON_GetObjectItemCaseSensitive(api_overviewJSON, "domains");
    if (domains) { 
    domains_local_nonprim = api_overview_domains_parseFromJSON(domains); //nonprimitive
    }


    api_overview_local_var = api_overview_create (
        verifiable_password_authentication->valueint,
        ssh_key_fingerprints ? ssh_key_fingerprints_local_nonprim : NULL,
        ssh_keys ? ssh_keysList : NULL,
        hooks ? hooksList : NULL,
        github_enterprise_importer ? github_enterprise_importerList : NULL,
        web ? webList : NULL,
        api ? apiList : NULL,
        git ? gitList : NULL,
        packages ? packagesList : NULL,
        pages ? pagesList : NULL,
        importer ? importerList : NULL,
        actions ? actionsList : NULL,
        actions_macos ? actions_macosList : NULL,
        dependabot ? dependabotList : NULL,
        domains ? domains_local_nonprim : NULL
        );

    return api_overview_local_var;
end:
    if (ssh_key_fingerprints_local_nonprim) {
        api_overview_ssh_key_fingerprints_free(ssh_key_fingerprints_local_nonprim);
        ssh_key_fingerprints_local_nonprim = NULL;
    }
    if (ssh_keysList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ssh_keysList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(ssh_keysList);
        ssh_keysList = NULL;
    }
    if (hooksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, hooksList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(hooksList);
        hooksList = NULL;
    }
    if (github_enterprise_importerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, github_enterprise_importerList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(github_enterprise_importerList);
        github_enterprise_importerList = NULL;
    }
    if (webList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, webList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(webList);
        webList = NULL;
    }
    if (apiList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, apiList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(apiList);
        apiList = NULL;
    }
    if (gitList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, gitList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(gitList);
        gitList = NULL;
    }
    if (packagesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, packagesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(packagesList);
        packagesList = NULL;
    }
    if (pagesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, pagesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(pagesList);
        pagesList = NULL;
    }
    if (importerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, importerList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(importerList);
        importerList = NULL;
    }
    if (actionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, actionsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(actionsList);
        actionsList = NULL;
    }
    if (actions_macosList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, actions_macosList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(actions_macosList);
        actions_macosList = NULL;
    }
    if (dependabotList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, dependabotList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dependabotList);
        dependabotList = NULL;
    }
    if (domains_local_nonprim) {
        api_overview_domains_free(domains_local_nonprim);
        domains_local_nonprim = NULL;
    }
    return NULL;

}
