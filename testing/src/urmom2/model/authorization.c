#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authorization.h"



authorization_t *authorization_create(
    long id,
    char *url,
    list_t *scopes,
    char *token,
    char *token_last_eight,
    char *hashed_token,
    authorization_app_t *app,
    char *note,
    char *note_url,
    char *updated_at,
    char *created_at,
    char *fingerprint,
    nullable_simple_user_t *user,
    nullable_scoped_installation_t *installation,
    char *expires_at
    ) {
    authorization_t *authorization_local_var = malloc(sizeof(authorization_t));
    if (!authorization_local_var) {
        return NULL;
    }
    authorization_local_var->id = id;
    authorization_local_var->url = url;
    authorization_local_var->scopes = scopes;
    authorization_local_var->token = token;
    authorization_local_var->token_last_eight = token_last_eight;
    authorization_local_var->hashed_token = hashed_token;
    authorization_local_var->app = app;
    authorization_local_var->note = note;
    authorization_local_var->note_url = note_url;
    authorization_local_var->updated_at = updated_at;
    authorization_local_var->created_at = created_at;
    authorization_local_var->fingerprint = fingerprint;
    authorization_local_var->user = user;
    authorization_local_var->installation = installation;
    authorization_local_var->expires_at = expires_at;

    return authorization_local_var;
}


void authorization_free(authorization_t *authorization) {
    if(NULL == authorization){
        return ;
    }
    listEntry_t *listEntry;
    if (authorization->url) {
        free(authorization->url);
        authorization->url = NULL;
    }
    if (authorization->scopes) {
        list_ForEach(listEntry, authorization->scopes) {
            free(listEntry->data);
        }
        list_freeList(authorization->scopes);
        authorization->scopes = NULL;
    }
    if (authorization->token) {
        free(authorization->token);
        authorization->token = NULL;
    }
    if (authorization->token_last_eight) {
        free(authorization->token_last_eight);
        authorization->token_last_eight = NULL;
    }
    if (authorization->hashed_token) {
        free(authorization->hashed_token);
        authorization->hashed_token = NULL;
    }
    if (authorization->app) {
        authorization_app_free(authorization->app);
        authorization->app = NULL;
    }
    if (authorization->note) {
        free(authorization->note);
        authorization->note = NULL;
    }
    if (authorization->note_url) {
        free(authorization->note_url);
        authorization->note_url = NULL;
    }
    if (authorization->updated_at) {
        free(authorization->updated_at);
        authorization->updated_at = NULL;
    }
    if (authorization->created_at) {
        free(authorization->created_at);
        authorization->created_at = NULL;
    }
    if (authorization->fingerprint) {
        free(authorization->fingerprint);
        authorization->fingerprint = NULL;
    }
    if (authorization->user) {
        nullable_simple_user_free(authorization->user);
        authorization->user = NULL;
    }
    if (authorization->installation) {
        nullable_scoped_installation_free(authorization->installation);
        authorization->installation = NULL;
    }
    if (authorization->expires_at) {
        free(authorization->expires_at);
        authorization->expires_at = NULL;
    }
    free(authorization);
}

cJSON *authorization_convertToJSON(authorization_t *authorization) {
    cJSON *item = cJSON_CreateObject();

    // authorization->id
    if (!authorization->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", authorization->id) == NULL) {
    goto fail; //Numeric
    }


    // authorization->url
    if (!authorization->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", authorization->url) == NULL) {
    goto fail; //String
    }


    // authorization->scopes
    if (!authorization->scopes) {
        goto fail;
    }
    cJSON *scopes = cJSON_AddArrayToObject(item, "scopes");
    if(scopes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *scopesListEntry;
    list_ForEach(scopesListEntry, authorization->scopes) {
    if(cJSON_AddStringToObject(scopes, "", (char*)scopesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // authorization->token
    if (!authorization->token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "token", authorization->token) == NULL) {
    goto fail; //String
    }


    // authorization->token_last_eight
    if (!authorization->token_last_eight) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "token_last_eight", authorization->token_last_eight) == NULL) {
    goto fail; //String
    }


    // authorization->hashed_token
    if (!authorization->hashed_token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "hashed_token", authorization->hashed_token) == NULL) {
    goto fail; //String
    }


    // authorization->app
    if (!authorization->app) {
        goto fail;
    }
    cJSON *app_local_JSON = authorization_app_convertToJSON(authorization->app);
    if(app_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "app", app_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // authorization->note
    if (!authorization->note) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "note", authorization->note) == NULL) {
    goto fail; //String
    }


    // authorization->note_url
    if (!authorization->note_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "note_url", authorization->note_url) == NULL) {
    goto fail; //String
    }


    // authorization->updated_at
    if (!authorization->updated_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "updated_at", authorization->updated_at) == NULL) {
    goto fail; //Date-Time
    }


    // authorization->created_at
    if (!authorization->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", authorization->created_at) == NULL) {
    goto fail; //Date-Time
    }


    // authorization->fingerprint
    if (!authorization->fingerprint) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "fingerprint", authorization->fingerprint) == NULL) {
    goto fail; //String
    }


    // authorization->user
    if(authorization->user) {
    cJSON *user_local_JSON = nullable_simple_user_convertToJSON(authorization->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // authorization->installation
    if(authorization->installation) {
    cJSON *installation_local_JSON = nullable_scoped_installation_convertToJSON(authorization->installation);
    if(installation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "installation", installation_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // authorization->expires_at
    if (!authorization->expires_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "expires_at", authorization->expires_at) == NULL) {
    goto fail; //Date-Time
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

authorization_t *authorization_parseFromJSON(cJSON *authorizationJSON){

    authorization_t *authorization_local_var = NULL;

    // define the local list for authorization->scopes
    list_t *scopesList = NULL;

    // define the local variable for authorization->app
    authorization_app_t *app_local_nonprim = NULL;

    // define the local variable for authorization->user
    nullable_simple_user_t *user_local_nonprim = NULL;

    // define the local variable for authorization->installation
    nullable_scoped_installation_t *installation_local_nonprim = NULL;

    // authorization->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // authorization->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }

    // authorization->scopes
    cJSON *scopes = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "scopes");
    if (!scopes) {
        goto end;
    }

    
    cJSON *scopes_local = NULL;
    if(!cJSON_IsArray(scopes)) {
        goto end;//primitive container
    }
    scopesList = list_createList();

    cJSON_ArrayForEach(scopes_local, scopes)
    {
        if(!cJSON_IsString(scopes_local))
        {
            goto end;
        }
        list_addElement(scopesList , strdup(scopes_local->valuestring));
    }

    // authorization->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "token");
    if (!token) {
        goto end;
    }

    
    if(!cJSON_IsString(token))
    {
    goto end; //String
    }

    // authorization->token_last_eight
    cJSON *token_last_eight = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "token_last_eight");
    if (!token_last_eight) {
        goto end;
    }

    
    if(!cJSON_IsString(token_last_eight))
    {
    goto end; //String
    }

    // authorization->hashed_token
    cJSON *hashed_token = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "hashed_token");
    if (!hashed_token) {
        goto end;
    }

    
    if(!cJSON_IsString(hashed_token))
    {
    goto end; //String
    }

    // authorization->app
    cJSON *app = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "app");
    if (!app) {
        goto end;
    }

    
    app_local_nonprim = authorization_app_parseFromJSON(app); //nonprimitive

    // authorization->note
    cJSON *note = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "note");
    if (!note) {
        goto end;
    }

    
    if(!cJSON_IsString(note))
    {
    goto end; //String
    }

    // authorization->note_url
    cJSON *note_url = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "note_url");
    if (!note_url) {
        goto end;
    }

    
    if(!cJSON_IsString(note_url))
    {
    goto end; //String
    }

    // authorization->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "updated_at");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //DateTime
    }

    // authorization->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //DateTime
    }

    // authorization->fingerprint
    cJSON *fingerprint = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "fingerprint");
    if (!fingerprint) {
        goto end;
    }

    
    if(!cJSON_IsString(fingerprint))
    {
    goto end; //String
    }

    // authorization->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "user");
    if (user) { 
    user_local_nonprim = nullable_simple_user_parseFromJSON(user); //nonprimitive
    }

    // authorization->installation
    cJSON *installation = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "installation");
    if (installation) { 
    installation_local_nonprim = nullable_scoped_installation_parseFromJSON(installation); //nonprimitive
    }

    // authorization->expires_at
    cJSON *expires_at = cJSON_GetObjectItemCaseSensitive(authorizationJSON, "expires_at");
    if (!expires_at) {
        goto end;
    }

    
    if(!cJSON_IsString(expires_at))
    {
    goto end; //DateTime
    }


    authorization_local_var = authorization_create (
        id->valuedouble,
        strdup(url->valuestring),
        scopesList,
        strdup(token->valuestring),
        strdup(token_last_eight->valuestring),
        strdup(hashed_token->valuestring),
        app_local_nonprim,
        strdup(note->valuestring),
        strdup(note_url->valuestring),
        strdup(updated_at->valuestring),
        strdup(created_at->valuestring),
        strdup(fingerprint->valuestring),
        user ? user_local_nonprim : NULL,
        installation ? installation_local_nonprim : NULL,
        strdup(expires_at->valuestring)
        );

    return authorization_local_var;
end:
    if (scopesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, scopesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(scopesList);
        scopesList = NULL;
    }
    if (app_local_nonprim) {
        authorization_app_free(app_local_nonprim);
        app_local_nonprim = NULL;
    }
    if (user_local_nonprim) {
        nullable_simple_user_free(user_local_nonprim);
        user_local_nonprim = NULL;
    }
    if (installation_local_nonprim) {
        nullable_scoped_installation_free(installation_local_nonprim);
        installation_local_nonprim = NULL;
    }
    return NULL;

}
