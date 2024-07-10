#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "alert_instance_location.h"



alert_instance_location_t *alert_instance_location_create(
    int end_column,
    int end_line,
    char *path,
    int start_column,
    int start_line
    ) {
    alert_instance_location_t *alert_instance_location_local_var = malloc(sizeof(alert_instance_location_t));
    if (!alert_instance_location_local_var) {
        return NULL;
    }
    alert_instance_location_local_var->end_column = end_column;
    alert_instance_location_local_var->end_line = end_line;
    alert_instance_location_local_var->path = path;
    alert_instance_location_local_var->start_column = start_column;
    alert_instance_location_local_var->start_line = start_line;

    return alert_instance_location_local_var;
}


void alert_instance_location_free(alert_instance_location_t *alert_instance_location) {
    if(NULL == alert_instance_location){
        return ;
    }
    listEntry_t *listEntry;
    if (alert_instance_location->path) {
        free(alert_instance_location->path);
        alert_instance_location->path = NULL;
    }
    free(alert_instance_location);
}

cJSON *alert_instance_location_convertToJSON(alert_instance_location_t *alert_instance_location) {
    cJSON *item = cJSON_CreateObject();

    // alert_instance_location->end_column
    if(alert_instance_location->end_column) {
    if(cJSON_AddNumberToObject(item, "end_column", alert_instance_location->end_column) == NULL) {
    goto fail; //Numeric
    }
    }


    // alert_instance_location->end_line
    if(alert_instance_location->end_line) {
    if(cJSON_AddNumberToObject(item, "end_line", alert_instance_location->end_line) == NULL) {
    goto fail; //Numeric
    }
    }


    // alert_instance_location->path
    if(alert_instance_location->path) {
    if(cJSON_AddStringToObject(item, "path", alert_instance_location->path) == NULL) {
    goto fail; //String
    }
    }


    // alert_instance_location->start_column
    if(alert_instance_location->start_column) {
    if(cJSON_AddNumberToObject(item, "start_column", alert_instance_location->start_column) == NULL) {
    goto fail; //Numeric
    }
    }


    // alert_instance_location->start_line
    if(alert_instance_location->start_line) {
    if(cJSON_AddNumberToObject(item, "start_line", alert_instance_location->start_line) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

alert_instance_location_t *alert_instance_location_parseFromJSON(cJSON *alert_instance_locationJSON){

    alert_instance_location_t *alert_instance_location_local_var = NULL;

    // alert_instance_location->end_column
    cJSON *end_column = cJSON_GetObjectItemCaseSensitive(alert_instance_locationJSON, "end_column");
    if (end_column) { 
    if(!cJSON_IsNumber(end_column))
    {
    goto end; //Numeric
    }
    }

    // alert_instance_location->end_line
    cJSON *end_line = cJSON_GetObjectItemCaseSensitive(alert_instance_locationJSON, "end_line");
    if (end_line) { 
    if(!cJSON_IsNumber(end_line))
    {
    goto end; //Numeric
    }
    }

    // alert_instance_location->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(alert_instance_locationJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }
    }

    // alert_instance_location->start_column
    cJSON *start_column = cJSON_GetObjectItemCaseSensitive(alert_instance_locationJSON, "start_column");
    if (start_column) { 
    if(!cJSON_IsNumber(start_column))
    {
    goto end; //Numeric
    }
    }

    // alert_instance_location->start_line
    cJSON *start_line = cJSON_GetObjectItemCaseSensitive(alert_instance_locationJSON, "start_line");
    if (start_line) { 
    if(!cJSON_IsNumber(start_line))
    {
    goto end; //Numeric
    }
    }


    alert_instance_location_local_var = alert_instance_location_create (
        end_column ? end_column->valuedouble : 0,
        end_line ? end_line->valuedouble : 0,
        path ? strdup(path->valuestring) : NULL,
        start_column ? start_column->valuedouble : 0,
        start_line ? start_line->valuedouble : 0
        );

    return alert_instance_location_local_var;
end:
    return NULL;

}
