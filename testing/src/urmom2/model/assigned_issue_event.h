/*
 * assigned_issue_event.h
 *
 * Assigned Issue Event
 */

#ifndef _assigned_issue_event_H_
#define _assigned_issue_event_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct assigned_issue_event_t assigned_issue_event_t;

#include "integration.h"
#include "simple_user.h"



typedef struct assigned_issue_event_t {
    int id; //numeric
    char *node_id; // string
    char *url; // string
    struct simple_user_t *actor; //model
    char *event; // string
    char *commit_id; // string
    char *commit_url; // string
    char *created_at; // string
    struct integration_t *performed_via_github_app; //model
    struct simple_user_t *assignee; //model
    struct simple_user_t *assigner; //model

} assigned_issue_event_t;

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
);

void assigned_issue_event_free(assigned_issue_event_t *assigned_issue_event);

assigned_issue_event_t *assigned_issue_event_parseFromJSON(cJSON *assigned_issue_eventJSON);

cJSON *assigned_issue_event_convertToJSON(assigned_issue_event_t *assigned_issue_event);

#endif /* _assigned_issue_event_H_ */

