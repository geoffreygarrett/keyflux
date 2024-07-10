/*
 * added_to_project_issue_event.h
 *
 * Added to Project Issue Event
 */

#ifndef _added_to_project_issue_event_H_
#define _added_to_project_issue_event_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct added_to_project_issue_event_t added_to_project_issue_event_t;

#include "added_to_project_issue_event_project_card.h"
#include "nullable_integration.h"
#include "simple_user.h"



typedef struct added_to_project_issue_event_t {
    int id; //numeric
    char *node_id; // string
    char *url; // string
    struct simple_user_t *actor; //model
    char *event; // string
    char *commit_id; // string
    char *commit_url; // string
    char *created_at; // string
    struct nullable_integration_t *performed_via_github_app; //model
    struct added_to_project_issue_event_project_card_t *project_card; //model

} added_to_project_issue_event_t;

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
);

void added_to_project_issue_event_free(added_to_project_issue_event_t *added_to_project_issue_event);

added_to_project_issue_event_t *added_to_project_issue_event_parseFromJSON(cJSON *added_to_project_issue_eventJSON);

cJSON *added_to_project_issue_event_convertToJSON(added_to_project_issue_event_t *added_to_project_issue_event);

#endif /* _added_to_project_issue_event_H_ */

