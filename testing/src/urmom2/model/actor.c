#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "actor.h"



actor_t *actor_create(
    int id,
    char *login,
    char *display_login,
    char *gravatar_id,
    char *url,
    char *avatar_url
    ) {
    actor_t *actor_local_var = malloc(sizeof(actor_t));
    if (!actor_local_var) {
        return NULL;
    }
    actor_local_var->id = id;
    actor_local_var->login = login;
    actor_local_var->display_login = display_login;
    actor_local_var->gravatar_id = gravatar_id;
    actor_local_var->url = url;
    actor_local_var->avatar_url = avatar_url;

    return actor_local_var;
}


void actor_free(actor_t *actor) {
    if(NULL == actor){
        return ;
    }
    listEntry_t *listEntry;
    if (actor->login) {
        free(actor->login);
        actor->login = NULL;
    }
    if (actor->display_login) {
        free(actor->display_login);
        actor->display_login = NULL;
    }
    if (actor->gravatar_id) {
        free(actor->gravatar_id);
        actor->gravatar_id = NULL;
    }
    if (actor->url) {
        free(actor->url);
        actor->url = NULL;
    }
    if (actor->avatar_url) {
        free(actor->avatar_url);
        actor->avatar_url = NULL;
    }
    free(actor);
}

cJSON *actor_convertToJSON(actor_t *actor) {
    cJSON *item = cJSON_CreateObject();

    // actor->id
    if (!actor->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", actor->id) == NULL) {
    goto fail; //Numeric
    }


    // actor->login
    if (!actor->login) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "login", actor->login) == NULL) {
    goto fail; //String
    }


    // actor->display_login
    if(actor->display_login) {
    if(cJSON_AddStringToObject(item, "display_login", actor->display_login) == NULL) {
    goto fail; //String
    }
    }


    // actor->gravatar_id
    if (!actor->gravatar_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "gravatar_id", actor->gravatar_id) == NULL) {
    goto fail; //String
    }


    // actor->url
    if (!actor->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", actor->url) == NULL) {
    goto fail; //String
    }


    // actor->avatar_url
    if (!actor->avatar_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "avatar_url", actor->avatar_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

actor_t *actor_parseFromJSON(cJSON *actorJSON){

    actor_t *actor_local_var = NULL;

    // actor->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(actorJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // actor->login
    cJSON *login = cJSON_GetObjectItemCaseSensitive(actorJSON, "login");
    if (!login) {
        goto end;
    }

    
    if(!cJSON_IsString(login))
    {
    goto end; //String
    }

    // actor->display_login
    cJSON *display_login = cJSON_GetObjectItemCaseSensitive(actorJSON, "display_login");
    if (display_login) { 
    if(!cJSON_IsString(display_login))
    {
    goto end; //String
    }
    }

    // actor->gravatar_id
    cJSON *gravatar_id = cJSON_GetObjectItemCaseSensitive(actorJSON, "gravatar_id");
    if (!gravatar_id) {
        goto end;
    }

    
    if(!cJSON_IsString(gravatar_id))
    {
    goto end; //String
    }

    // actor->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(actorJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }

    // actor->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(actorJSON, "avatar_url");
    if (!avatar_url) {
        goto end;
    }

    
    if(!cJSON_IsString(avatar_url))
    {
    goto end; //String
    }


    actor_local_var = actor_create (
        id->valuedouble,
        strdup(login->valuestring),
        display_login ? strdup(display_login->valuestring) : NULL,
        strdup(gravatar_id->valuestring),
        strdup(url->valuestring),
        strdup(avatar_url->valuestring)
        );

    return actor_local_var;
end:
    return NULL;

}
