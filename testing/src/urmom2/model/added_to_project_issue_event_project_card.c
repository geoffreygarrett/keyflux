#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "added_to_project_issue_event_project_card.h"



added_to_project_issue_event_project_card_t *added_to_project_issue_event_project_card_create(
    int id,
    char *url,
    int project_id,
    char *project_url,
    char *column_name,
    char *previous_column_name
    ) {
    added_to_project_issue_event_project_card_t *added_to_project_issue_event_project_card_local_var = malloc(sizeof(added_to_project_issue_event_project_card_t));
    if (!added_to_project_issue_event_project_card_local_var) {
        return NULL;
    }
    added_to_project_issue_event_project_card_local_var->id = id;
    added_to_project_issue_event_project_card_local_var->url = url;
    added_to_project_issue_event_project_card_local_var->project_id = project_id;
    added_to_project_issue_event_project_card_local_var->project_url = project_url;
    added_to_project_issue_event_project_card_local_var->column_name = column_name;
    added_to_project_issue_event_project_card_local_var->previous_column_name = previous_column_name;

    return added_to_project_issue_event_project_card_local_var;
}


void added_to_project_issue_event_project_card_free(added_to_project_issue_event_project_card_t *added_to_project_issue_event_project_card) {
    if(NULL == added_to_project_issue_event_project_card){
        return ;
    }
    listEntry_t *listEntry;
    if (added_to_project_issue_event_project_card->url) {
        free(added_to_project_issue_event_project_card->url);
        added_to_project_issue_event_project_card->url = NULL;
    }
    if (added_to_project_issue_event_project_card->project_url) {
        free(added_to_project_issue_event_project_card->project_url);
        added_to_project_issue_event_project_card->project_url = NULL;
    }
    if (added_to_project_issue_event_project_card->column_name) {
        free(added_to_project_issue_event_project_card->column_name);
        added_to_project_issue_event_project_card->column_name = NULL;
    }
    if (added_to_project_issue_event_project_card->previous_column_name) {
        free(added_to_project_issue_event_project_card->previous_column_name);
        added_to_project_issue_event_project_card->previous_column_name = NULL;
    }
    free(added_to_project_issue_event_project_card);
}

cJSON *added_to_project_issue_event_project_card_convertToJSON(added_to_project_issue_event_project_card_t *added_to_project_issue_event_project_card) {
    cJSON *item = cJSON_CreateObject();

    // added_to_project_issue_event_project_card->id
    if (!added_to_project_issue_event_project_card->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", added_to_project_issue_event_project_card->id) == NULL) {
    goto fail; //Numeric
    }


    // added_to_project_issue_event_project_card->url
    if (!added_to_project_issue_event_project_card->url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "url", added_to_project_issue_event_project_card->url) == NULL) {
    goto fail; //String
    }


    // added_to_project_issue_event_project_card->project_id
    if (!added_to_project_issue_event_project_card->project_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "project_id", added_to_project_issue_event_project_card->project_id) == NULL) {
    goto fail; //Numeric
    }


    // added_to_project_issue_event_project_card->project_url
    if (!added_to_project_issue_event_project_card->project_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "project_url", added_to_project_issue_event_project_card->project_url) == NULL) {
    goto fail; //String
    }


    // added_to_project_issue_event_project_card->column_name
    if (!added_to_project_issue_event_project_card->column_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "column_name", added_to_project_issue_event_project_card->column_name) == NULL) {
    goto fail; //String
    }


    // added_to_project_issue_event_project_card->previous_column_name
    if(added_to_project_issue_event_project_card->previous_column_name) {
    if(cJSON_AddStringToObject(item, "previous_column_name", added_to_project_issue_event_project_card->previous_column_name) == NULL) {
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

added_to_project_issue_event_project_card_t *added_to_project_issue_event_project_card_parseFromJSON(cJSON *added_to_project_issue_event_project_cardJSON){

    added_to_project_issue_event_project_card_t *added_to_project_issue_event_project_card_local_var = NULL;

    // added_to_project_issue_event_project_card->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_event_project_cardJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }

    // added_to_project_issue_event_project_card->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_event_project_cardJSON, "url");
    if (!url) {
        goto end;
    }

    
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }

    // added_to_project_issue_event_project_card->project_id
    cJSON *project_id = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_event_project_cardJSON, "project_id");
    if (!project_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(project_id))
    {
    goto end; //Numeric
    }

    // added_to_project_issue_event_project_card->project_url
    cJSON *project_url = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_event_project_cardJSON, "project_url");
    if (!project_url) {
        goto end;
    }

    
    if(!cJSON_IsString(project_url))
    {
    goto end; //String
    }

    // added_to_project_issue_event_project_card->column_name
    cJSON *column_name = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_event_project_cardJSON, "column_name");
    if (!column_name) {
        goto end;
    }

    
    if(!cJSON_IsString(column_name))
    {
    goto end; //String
    }

    // added_to_project_issue_event_project_card->previous_column_name
    cJSON *previous_column_name = cJSON_GetObjectItemCaseSensitive(added_to_project_issue_event_project_cardJSON, "previous_column_name");
    if (previous_column_name) { 
    if(!cJSON_IsString(previous_column_name))
    {
    goto end; //String
    }
    }


    added_to_project_issue_event_project_card_local_var = added_to_project_issue_event_project_card_create (
        id->valuedouble,
        strdup(url->valuestring),
        project_id->valuedouble,
        strdup(project_url->valuestring),
        strdup(column_name->valuestring),
        previous_column_name ? strdup(previous_column_name->valuestring) : NULL
        );

    return added_to_project_issue_event_project_card_local_var;
end:
    return NULL;

}
