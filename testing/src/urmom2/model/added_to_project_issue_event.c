#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "added_to_project_issue_event.h"



added_to_project_issue_event_t *added_to_project_issue_event_create(
    int id,
    char *node_id,
    char *url,
    simple_user_t *actor,
    char *event,
    char *commit_id,
    char *commit_url,
    char *created_at,
    nullable_integration_t *performed_via_github_app,
    added_to_project_issue_event_project_card_t *project_card
    ) {
    added_to_project_issue_event_t *added_to_project_issue_event_local_var = malloc(sizeof(added_to_project_issue_event_t));
    if (!added_to_project_issue_event_local_var) {
        return NULL;
    }
    added_to_project_issue_event_local_var->id = id;
    added_to_project_issue_event_local_var->node_id = node_id;
    added_to_project_issue_event_local_var->url = url;
    added_to_project_issue_event_local_var->actor = actor;
    added_to_project_issue_event_local_var->event = event;
    added_to_project_issue_event_local_var->commit_id = commit_id;
    added_to_project_issue_event_local_var->commit_url = commit_url;
    added_to_project_issue_event_local_var->created_at = created_at;
    added_to_project_issue_event_local_var->performed_via_github_app = performed_via_github_app;
    added_to_project_issue_event_local_var->project_card = project_card;

    return added_to_project_issue_event_local_var;
}


void added_to_project_issue_event_free(added_to_project_issue_event_t *added_to_project_issue_event) {
    if(NULL == added_to_project_issue_event){
        return ;
    }
    listEntry_t *listEntry;
    if (added_to_project_issue_event->node_id) {
        free(added_to_project_issue_event->node_id);
        added_to_project_issue_event->node_id = NULL;
    }
    if (added_to_project_issue_event->url) {
        free(added_to_project_issue_event->url);
        added_to_project_issue_event->url = NULL;
    }
    if (added_to_project_issue_event->actor) {
        simple_user_free(added_to_project_issue_event->actor);
        added_to_project_issue_event->actor = NULL;
    }
    if (added_to_project_issue_event->event) {
        free(added_to_project_issue_event->event);
        added_to_project_issue_event->event = NULL;
    }
    if (added_to_project_issue_event->commit_id) {
        free(added_to_project_issue_event->commit_id);
        added_to_project_issue_event->commit_id = NULL;
    }
    if (added_to_project_issue_event->commit_url) {
        free(added_to_project_issue_event->commit_url);
        added_to_project_issue_event->commit_url = NULL;
    }
    if (added_to_project_issue_event->created_at) {
        free(added_to_project_issue_event->created_at);
        added_to_project_issue_event->created_at = NULL;
    }
    if (added_to_project_issue_event->performed_via_github_app) {
        nullable_integration_free(added_to_project_issue_event->performed_via_github_app);
        added_to_project_issue_event->performed_via_github_app = NULL;
    }
    if (added_to_project_issue_event->project_card) {
        added_to_project_issue_event_project_card_free(added_to_project_issue_event->project_card);
        added_to_project_issue_event->project_card = NULL;
    }
    free(added_to_project_issue_event);
}

cJSON *added_to_project_issue_event_convertToJSON(added_to_project_issue_event_t *added_to_project_issue_event) {
    cJSON *item = cJSON_CreateObject();

    // added_to_project_issue_event->id
    if (!added_to_project_issue_event->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", added_to_project_issue_event->id) == NULL) {
    goto fail; //Numeric
    }


    // added_to_project_issue_event->node_id
    if (!added_to_project_issue_event->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", added_to_project_issue_event->node_id) == NULL) {
    goto fail; //String
    }


    // added_to_project_issue_event->url
    if (!added_to_project_issue_event->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", added_to_project_issue_event->url) == NULL) {
    goto fail; //String
    }


    // added_to_project_issue_event->actor
    if (!added_to_project_issue_event->actor) {
        goto fail;
    }
    cJSON *actor_local_JSON = simple_user_convertToJSON(added_to_project_issue_event->actor);
    if(actor_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "actor", actor_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // added_to_project_issue_event->event
    if (!added_to_project_issue_event->event) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "event", added_to_project_issue_event->event) == NULL) {
    goto fail; //String
    }


    // added_to_project_issue_event->commit_id
    if (!added_to_project_issue_event->commit_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "commit_id", added_to_project_issue_event->commit_id) == NULL) {
    goto fail; //String
    }


    // added_to_project_issue_event->commit_url
    if (!added_to_project_issue_event->commit_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "commit_url", added_to_project_issue_event->commit_url) == NULL) {
    goto fail; //String
    }


    // added_to_project_issue_event->created_at
    if (!added_to_project_issue_event->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", added_to_project_issue_event->created_at) == NULL) {
    goto fail; //String
    }


    // added_to_project_issue_event->performed_via_github_app
    if (!added_to_project_issue_event->performed_via_github_app) {
        goto fail;
    }
    cJSON *performed_via_github_app_local_JSON = nullable_integration_convertToJSON(added_to_project_issue_event->performed_via_github_app);
    if(performed_via_github_app_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "performed_via_github_app", performed_via_github_app_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // added_to_project_issue_event->project_card
    if(added_to_project_issue_event->project_card) {
    cJSON *project_card_local_JSON = added_to_project_issue_event_project_card_convertToJSON(added_to_project_issue_event->project_card);
    if(project_card_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "project_card", project_card_local_JSON);
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

added_to_project_issue_event_t *added_to_project_issue_event_parseFromJSON(cJSON *added_to_project_issue_eventJSON){

    added_to_project_issue_event_t *added_to_project_issue_event_local_var = NULL;

    // define the local variable for added_to_project_issue_event->actor
    simple_user_t *actor_local_nonprim = NULL;

    // define the local variable for added_to_project_issue_event->performed_via_github_app
    nullable_integration_t *performed_via_github_app_local_nonprim = NULL;

    // define the local variable for added_to_project_issue_event->project_card
    added_to_project_issue_event_project_card_t *project_card_local_nonprim = NULL;

    // added_to_project_issue_event->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_eventJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // added_to_project_issue_event->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_eventJSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // added_to_project_issue_event->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_eventJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }

    // added_to_project_issue_event->actor
    cJSON *actor = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_eventJSON, "actor");
    if (!actor) {
        goto end;
    }

    
    actor_local_nonprim = simple_user_parseFromJSON(actor); //nonprimitive

    // added_to_project_issue_event->event
    cJSON *event = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_eventJSON, "event");
    if (!event) {
        goto end;
    }

    
    if(!cJSON_IsString(event))
    {
    goto end; //String
    }

    // added_to_project_issue_event->commit_id
    cJSON *commit_id = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_eventJSON, "commit_id");
    if (!commit_id) {
        goto end;
    }

    
    if(!cJSON_IsString(commit_id))
    {
    goto end; //String
    }

    // added_to_project_issue_event->commit_url
    cJSON *commit_url = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_eventJSON, "commit_url");
    if (!commit_url) {
        goto end;
    }

    
    if(!cJSON_IsString(commit_url))
    {
    goto end; //String
    }

    // added_to_project_issue_event->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_eventJSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // added_to_project_issue_event->performed_via_github_app
    cJSON *performed_via_github_app = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_eventJSON, "performed_via_github_app");
    if (!performed_via_github_app) {
        goto end;
    }

    
    performed_via_github_app_local_nonprim = nullable_integration_parseFromJSON(performed_via_github_app); //nonprimitive

    // added_to_project_issue_event->project_card
    cJSON *project_card = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_eventJSON, "project_card");
    if (project_card) { 
    project_card_local_nonprim = added_to_project_issue_event_project_card_parseFromJSON(project_card); //nonprimitive
    }


    added_to_project_issue_event_local_var = added_to_project_issue_event_create (
        id->valuedouble,
        strdup(node_id->valuestring),
        strdup(url->valuestring),
        actor_local_nonprim,
        strdup(event->valuestring),
        strdup(commit_id->valuestring),
        strdup(commit_url->valuestring),
        strdup(created_at->valuestring),
        performed_via_github_app_local_nonprim,
        project_card ? project_card_local_nonprim : NULL
        );

    return added_to_project_issue_event_local_var;
end:
    if (actor_local_nonprim) {
        simple_user_free(actor_local_nonprim);
        actor_local_nonprim = NULL;
    }
    if (performed_via_github_app_local_nonprim) {
        nullable_integration_free(performed_via_github_app_local_nonprim);
        performed_via_github_app_local_nonprim = NULL;
    }
    if (project_card_local_nonprim) {
        added_to_project_issue_event_project_card_free(project_card_local_nonprim);
        project_card_local_nonprim = NULL;
    }
    return NULL;

}
