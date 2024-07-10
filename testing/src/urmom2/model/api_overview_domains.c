#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "api_overview_domains.h"



api_overview_domains_t *api_overview_domains_create(
    list_t *website,
    list_t *codespaces,
    list_t *copilot,
    list_t *packages,
    list_t *actions
    ) {
    api_overview_domains_t *api_overview_domains_local_var = malloc(sizeof(api_overview_domains_t));
    if (!api_overview_domains_local_var) {
        return NULL;
    }
    api_overview_domains_local_var->website = website;
    api_overview_domains_local_var->codespaces = codespaces;
    api_overview_domains_local_var->copilot = copilot;
    api_overview_domains_local_var->packages = packages;
    api_overview_domains_local_var->actions = actions;

    return api_overview_domains_local_var;
}


void api_overview_domains_free(api_overview_domains_t *api_overview_domains) {
    if(NULL == api_overview_domains){
        return ;
    }
    listEntry_t *listEntry;
    if (api_overview_domains->website) {
        list_ForEach(listEntry, api_overview_domains->website) {
            free(listEntry->data);
        }
        list_freeList(api_overview_domains->website);
        api_overview_domains->website = NULL;
    }
    if (api_overview_domains->codespaces) {
        list_ForEach(listEntry, api_overview_domains->codespaces) {
            free(listEntry->data);
        }
        list_freeList(api_overview_domains->codespaces);
        api_overview_domains->codespaces = NULL;
    }
    if (api_overview_domains->copilot) {
        list_ForEach(listEntry, api_overview_domains->copilot) {
            free(listEntry->data);
        }
        list_freeList(api_overview_domains->copilot);
        api_overview_domains->copilot = NULL;
    }
    if (api_overview_domains->packages) {
        list_ForEach(listEntry, api_overview_domains->packages) {
            free(listEntry->data);
        }
        list_freeList(api_overview_domains->packages);
        api_overview_domains->packages = NULL;
    }
    if (api_overview_domains->actions) {
        list_ForEach(listEntry, api_overview_domains->actions) {
            free(listEntry->data);
        }
        list_freeList(api_overview_domains->actions);
        api_overview_domains->actions = NULL;
    }
    free(api_overview_domains);
}

cJSON *api_overview_domains_convertToJSON(api_overview_domains_t *api_overview_domains) {
    cJSON *item = cJSON_CreateObject();

    // api_overview_domains->website
    if(api_overview_domains->website) {
    cJSON *website = cJSON_AddArrayToObject(item, "website");
    if(website == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *websiteListEntry;
    list_ForEach(websiteListEntry, api_overview_domains->website) {
    if(cJSON_AddStringToObject(website, "", (char*)websiteListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview_domains->codespaces
    if(api_overview_domains->codespaces) {
    cJSON *codespaces = cJSON_AddArrayToObject(item, "codespaces");
    if(codespaces == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *codespacesListEntry;
    list_ForEach(codespacesListEntry, api_overview_domains->codespaces) {
    if(cJSON_AddStringToObject(codespaces, "", (char*)codespacesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview_domains->copilot
    if(api_overview_domains->copilot) {
    cJSON *copilot = cJSON_AddArrayToObject(item, "copilot");
    if(copilot == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *copilotListEntry;
    list_ForEach(copilotListEntry, api_overview_domains->copilot) {
    if(cJSON_AddStringToObject(copilot, "", (char*)copilotListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview_domains->packages
    if(api_overview_domains->packages) {
    cJSON *packages = cJSON_AddArrayToObject(item, "packages");
    if(packages == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *packagesListEntry;
    list_ForEach(packagesListEntry, api_overview_domains->packages) {
    if(cJSON_AddStringToObject(packages, "", (char*)packagesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // api_overview_domains->actions
    if(api_overview_domains->actions) {
    cJSON *actions = cJSON_AddArrayToObject(item, "actions");
    if(actions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *actionsListEntry;
    list_ForEach(actionsListEntry, api_overview_domains->actions) {
    if(cJSON_AddStringToObject(actions, "", (char*)actionsListEntry->data) == NULL)
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

api_overview_domains_t *api_overview_domains_parseFromJSON(cJSON *api_overview_domainsJSON){

    api_overview_domains_t *api_overview_domains_local_var = NULL;

    // define the local list for api_overview_domains->website
    list_t *websiteList = NULL;

    // define the local list for api_overview_domains->codespaces
    list_t *codespacesList = NULL;

    // define the local list for api_overview_domains->copilot
    list_t *copilotList = NULL;

    // define the local list for api_overview_domains->packages
    list_t *packagesList = NULL;

    // define the local list for api_overview_domains->actions
    list_t *actionsList = NULL;

    // api_overview_domains->website
    cJSON *website = cJSON_GetObjectItemCaseSensitive(api_overview_domainsJSON, "website");
    if (website) { 
    cJSON *website_local = NULL;
    if(!cJSON_IsArray(website)) {
        goto end;//primitive container
    }
    websiteList = list_createList();

    cJSON_ArrayForEach(website_local, website)
    {
        if(!cJSON_IsString(website_local))
        {
            goto end;
        }
        list_addElement(websiteList , strdup(website_local->valuestring));
    }
    }

    // api_overview_domains->codespaces
    cJSON *codespaces = cJSON_GetObjectItemCaseSensitive(api_overview_domainsJSON, "codespaces");
    if (codespaces) { 
    cJSON *codespaces_local = NULL;
    if(!cJSON_IsArray(codespaces)) {
        goto end;//primitive container
    }
    codespacesList = list_createList();

    cJSON_ArrayForEach(codespaces_local, codespaces)
    {
        if(!cJSON_IsString(codespaces_local))
        {
            goto end;
        }
        list_addElement(codespacesList , strdup(codespaces_local->valuestring));
    }
    }

    // api_overview_domains->copilot
    cJSON *copilot = cJSON_GetObjectItemCaseSensitive(api_overview_domainsJSON, "copilot");
    if (copilot) { 
    cJSON *copilot_local = NULL;
    if(!cJSON_IsArray(copilot)) {
        goto end;//primitive container
    }
    copilotList = list_createList();

    cJSON_ArrayForEach(copilot_local, copilot)
    {
        if(!cJSON_IsString(copilot_local))
        {
            goto end;
        }
        list_addElement(copilotList , strdup(copilot_local->valuestring));
    }
    }

    // api_overview_domains->packages
    cJSON *packages = cJSON_GetObjectItemCaseSensitive(api_overview_domainsJSON, "packages");
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

    // api_overview_domains->actions
    cJSON *actions = cJSON_GetObjectItemCaseSensitive(api_overview_domainsJSON, "actions");
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


    api_overview_domains_local_var = api_overview_domains_create (
        website ? websiteList : NULL,
        codespaces ? codespacesList : NULL,
        copilot ? copilotList : NULL,
        packages ? packagesList : NULL,
        actions ? actionsList : NULL
        );

    return api_overview_domains_local_var;
end:
    if (websiteList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, websiteList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(websiteList);
        websiteList = NULL;
    }
    if (codespacesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, codespacesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(codespacesList);
        codespacesList = NULL;
    }
    if (copilotList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, copilotList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(copilotList);
        copilotList = NULL;
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
    if (actionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, actionsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(actionsList);
        actionsList = NULL;
    }
    return NULL;

}
