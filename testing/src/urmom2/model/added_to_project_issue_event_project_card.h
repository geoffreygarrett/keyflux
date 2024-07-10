/*
 * added_to_project_issue_event_project_card.h
 *
 * 
 */

#ifndef _added_to_project_issue_event_project_card_H_
#define _added_to_project_issue_event_project_card_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct added_to_project_issue_event_project_card_t added_to_project_issue_event_project_card_t;




typedef struct added_to_project_issue_event_project_card_t {
    int id; //numeric
    char *url; // string
    int project_id; //numeric
    char *project_url; // string
    char *column_name; // string
    char *previous_column_name; // string

} added_to_project_issue_event_project_card_t;

added_to_project_issue_event_project_card_t *added_to_project_issue_event_project_card_create(
    int id,
    char *url,
    int project_id,
    char *project_url,
    char *column_name,
    char *previous_column_name
);

void added_to_project_issue_event_project_card_free(added_to_project_issue_event_project_card_t *added_to_project_issue_event_project_card);

added_to_project_issue_event_project_card_t *added_to_project_issue_event_project_card_parseFromJSON(cJSON *added_to_project_issue_event_project_cardJSON);

cJSON *added_to_project_issue_event_project_card_convertToJSON(added_to_project_issue_event_project_card_t *added_to_project_issue_event_project_card);

#endif /* _added_to_project_issue_event_project_card_H_ */

