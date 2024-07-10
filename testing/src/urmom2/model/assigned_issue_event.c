#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "assigned_issue_event.h"



assigned_issue_event_t *assigned_issue_event_create(
    int id,
    char *node_id,
    char *url,
    simple_user_t *actor,
    char *event,
    char *commit_id,
    char *commit_url,
    char *created_at,
    integration_t *performed_via_github_app,
    simple_user_t *assignee,
    simple_user_t *assigner
    ) {
    assigned_issue_event_t *assigned_issue_event_local_var = malloc(sizeof(assigned_issue_event_t));
    if (!assigned_issue_event_local_var) {
        return NULL;
    }
    assigned_issue_event_local_var->id = id;
    assigned_issue_event_local_var->node_id = node_id;
    assigned_issue_event_local_var->url = url;
    assigned_issue_event_local_var->actor = actor;
    assigned_issue_event_local_var->event = event;
    assigned_issue_event_local_var->commit_id = commit_id;
    assigned_issue_event_local_var->commit_url = commit_url;
    assigned_issue_event_local_var->created_at = created_at;
    assigned_issue_event_local_var->performed_via_github_app = performed_via_github_app;
    assigned_issue_event_local_var->assignee = assignee;
    assigned_issue_event_local_var->assigner = assigner;

    return assigned_issue_event_local_var;
}


void assigned_issue_event_free(assigned_issue_event_t *assigned_issue_event) {
    if(NULL == assigned_issue_event){
        return ;
    }
    listEntry_t *listEntry;
    if (assigned_issue_event->node_id) {
        free(assigned_issue_event->node_id);
        assigned_issue_event->node_id = NULL;
    }
    if (assigned_issue_event->url) {
        free(assigned_issue_event->url);
        assigned_issue_event->url = NULL;
    }
    if (assigned_issue_event->actor) {
        simple_user_free(assigned_issue_event->actor);
        assigned_issue_event->actor = NULL;
    }
    if (assigned_issue_event->event) {
        free(assigned_issue_event->event);
        assigned_issue_event->event = NULL;
    }
    if (assigned_issue_event->commit_id) {
        free(assigned_issue_event->commit_id);
        assigned_issue_event->commit_id = NULL;
    }
    if (assigned_issue_event->commit_url) {
        free(assigned_issue_event->commit_url);
        assigned_issue_event->commit_url = NULL;
    }
    if (assigned_issue_event->created_at) {
        free(assigned_issue_event->created_at);
        assigned_issue_event->created_at = NULL;
    }
    if (assigned_issue_event->performed_via_github_app) {
        integration_free(assigned_issue_event->performed_via_github_app);
        assigned_issue_event->performed_via_github_app = NULL;
    }
    if (assigned_issue_event->assignee) {
        simple_user_free(assigned_issue_event->assignee);
        assigned_issue_event->assignee = NULL;
    }
    if (assigned_issue_event->assigner) {
        simple_user_free(assigned_issue_event->assigner);
        assigned_issue_event->assigner = NULL;
    }
    free(assigned_issue_event);
}

cJSON *assigned_issue_event_convertToJSON(assigned_issue_event_t *assigned_issue_event) {
    cJSON *item = cJSON_CreateObject();

    // assigned_issue_event->id
    if (!assigned_issue_event->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", assigned_issue_event->id) == NULL) {
    goto fail; //Numeric
    }


    // assigned_issue_event->node_id
    if (!assigned_issue_event->node_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "node_id", assigned_issue_event->node_id) == NULL) {
    goto fail; //String
    }


    // assigned_issue_event->url
    if (!assigned_issue_event->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", assigned_issue_event->url) == NULL) {
    goto fail; //String
    }


    // assigned_issue_event->actor
    if (!assigned_issue_event->actor) {
        goto fail;
    }
    cJSON *actor_local_JSON = simple_user_convertToJSON(assigned_issue_event->actor);
    if(actor_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "actor", actor_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // assigned_issue_event->event
    if (!assigned_issue_event->event) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "event", assigned_issue_event->event) == NULL) {
    goto fail; //String
    }


    // assigned_issue_event->commit_id
    if (!assigned_issue_event->commit_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "commit_id", assigned_issue_event->commit_id) == NULL) {
    goto fail; //String
    }


    // assigned_issue_event->commit_url
    if (!assigned_issue_event->commit_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "commit_url", assigned_issue_event->commit_url) == NULL) {
    goto fail; //String
    }


    // assigned_issue_event->created_at
    if (!assigned_issue_event->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", assigned_issue_event->created_at) == NULL) {
    goto fail; //String
    }


    // assigned_issue_event->performed_via_github_app
    if (!assigned_issue_event->performed_via_github_app) {
        goto fail;
    }
    cJSON *performed_via_github_app_local_JSON = integration_convertToJSON(assigned_issue_event->performed_via_github_app);
    if(performed_via_github_app_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "performed_via_github_app", performed_via_github_app_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // assigned_issue_event->assignee
    if (!assigned_issue_event->assignee) {
        goto fail;
    }
    cJSON *assignee_local_JSON = simple_user_convertToJSON(assigned_issue_event->assignee);
    if(assignee_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "assignee", assignee_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // assigned_issue_event->assigner
    if (!assigned_issue_event->assigner) {
        goto fail;
    }
    cJSON *assigner_local_JSON = simple_user_convertToJSON(assigned_issue_event->assigner);
    if(assigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "assigner", assigner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

assigned_issue_event_t *assigned_issue_event_parseFromJSON(cJSON *assigned_issue_eventJSON){

    assigned_issue_event_t *assigned_issue_event_local_var = NULL;

    // define the local variable for assigned_issue_event->actor
    simple_user_t *actor_local_nonprim = NULL;

    // define the local variable for assigned_issue_event->performed_via_github_app
    integration_t *performed_via_github_app_local_nonprim = NULL;

    // define the local variable for assigned_issue_event->assignee
    simple_user_t *assignee_local_nonprim = NULL;

    // define the local variable for assigned_issue_event->assigner
    simple_user_t *assigner_local_nonprim = NULL;

    // assigned_issue_event->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(assigned_issue_eventJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // assigned_issue_event->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(assigned_issue_eventJSON, "node_id");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // assigned_issue_event->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(assigned_issue_eventJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }

    // assigned_issue_event->actor
    cJSON *actor = cJSON_GetObjectItemCaseSensitive(assigned_issue_eventJSON, "actor");
    if (!actor) {
        goto end;
    }

    
    actor_local_nonprim = simple_user_parseFromJSON(actor); //nonprimitive

    // assigned_issue_event->event
    cJSON *event = cJSON_GetObjectItemCaseSensitive(assigned_issue_eventJSON, "event");
    if (!event) {
        goto end;
    }

    
    if(!cJSON_IsString(event))
    {
    goto end; //String
    }

    // assigned_issue_event->commit_id
    cJSON *commit_id = cJSON_GetObjectItemCaseSensitive(assigned_issue_eventJSON, "commit_id");
    if (!commit_id) {
        goto end;
    }

    
    if(!cJSON_IsString(commit_id))
    {
    goto end; //String
    }

    // assigned_issue_event->commit_url
    cJSON *commit_url = cJSON_GetObjectItemCaseSensitive(assigned_issue_eventJSON, "commit_url");
    if (!commit_url) {
        goto end;
    }

    
    if(!cJSON_IsString(commit_url))
    {
    goto end; //String
    }

    // assigned_issue_event->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(assigned_issue_eventJSON, "created_at");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // assigned_issue_event->performed_via_github_app
    cJSON *performed_via_github_app = cJSON_GetObjectItemCaseSensitive(assigned_issue_eventJSON, "performed_via_github_app");
    if (!performed_via_github_app) {
        goto end;
    }

    
    performed_via_github_app_local_nonprim = integration_parseFromJSON(performed_via_github_app); //nonprimitive

    // assigned_issue_event->assignee
    cJSON *assignee = cJSON_GetObjectItemCaseSensitive(assigned_issue_eventJSON, "assignee");
    if (!assignee) {
        goto end;
    }

    
    assignee_local_nonprim = simple_user_parseFromJSON(assignee); //nonprimitive

    // assigned_issue_event->assigner
    cJSON *assigner = cJSON_GetObjectItemCaseSensitive(assigned_issue_eventJSON, "assigner");
    if (!assigner) {
        goto end;
    }

    
    assigner_local_nonprim = simple_user_parseFromJSON(assigner); //nonprimitive


    assigned_issue_event_local_var = assigned_issue_event_create (
        id->valuedouble,
        strdup(node_id->valuestring),
        strdup(url->valuestring),
        actor_local_nonprim,
        strdup(event->valuestring),
        strdup(commit_id->valuestring),
        strdup(commit_url->valuestring),
        strdup(created_at->valuestring),
        performed_via_github_app_local_nonprim,
        assignee_local_nonprim,
        assigner_local_nonprim
        );

    return assigned_issue_event_local_var;
end:
    if (actor_local_nonprim) {
        simple_user_free(actor_local_nonprim);
        actor_local_nonprim = NULL;
    }
    if (performed_via_github_app_local_nonprim) {
        integration_free(performed_via_github_app_local_nonprim);
        performed_via_github_app_local_nonprim = NULL;
    }
    if (assignee_local_nonprim) {
        simple_user_free(assignee_local_nonprim);
        assignee_local_nonprim = NULL;
    }
    if (assigner_local_nonprim) {
        simple_user_free(assigner_local_nonprim);
        assigner_local_nonprim = NULL;
    }
    return NULL;

}
