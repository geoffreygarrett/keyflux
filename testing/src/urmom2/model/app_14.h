/*
 * app_14.h
 *
 * GitHub apps are a new way to extend GitHub. They can be installed directly on organizations and user accounts and granted access to specific repositories. They come with granular permissions and built-in webhooks. GitHub apps are first class actors within GitHub.
 */

#ifndef _app_14_H_
#define _app_14_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct app_14_t app_14_t;

#include "app_1_permissions.h"
#include "user.h"

// Enum EVENTS for app_14

typedef enum  { github_v3_rest_api_app_14_EVENTS_NULL = 0, github_v3_rest_api_app_14_EVENTS_branch_protection_rule, github_v3_rest_api_app_14_EVENTS_check_run, github_v3_rest_api_app_14_EVENTS_check_suite, github_v3_rest_api_app_14_EVENTS_code_scanning_alert, github_v3_rest_api_app_14_EVENTS_commit_comment, github_v3_rest_api_app_14_EVENTS_content_reference, github_v3_rest_api_app_14_EVENTS_create, github_v3_rest_api_app_14_EVENTS__delete, github_v3_rest_api_app_14_EVENTS_deployment, github_v3_rest_api_app_14_EVENTS_deployment_review, github_v3_rest_api_app_14_EVENTS_deployment_status, github_v3_rest_api_app_14_EVENTS_deploy_key, github_v3_rest_api_app_14_EVENTS_discussion, github_v3_rest_api_app_14_EVENTS_discussion_comment, github_v3_rest_api_app_14_EVENTS_fork, github_v3_rest_api_app_14_EVENTS_gollum, github_v3_rest_api_app_14_EVENTS_issues, github_v3_rest_api_app_14_EVENTS_issue_comment, github_v3_rest_api_app_14_EVENTS_label, github_v3_rest_api_app_14_EVENTS_member, github_v3_rest_api_app_14_EVENTS_membership, github_v3_rest_api_app_14_EVENTS_milestone, github_v3_rest_api_app_14_EVENTS_organization, github_v3_rest_api_app_14_EVENTS_org_block, github_v3_rest_api_app_14_EVENTS_page_build, github_v3_rest_api_app_14_EVENTS_project, github_v3_rest_api_app_14_EVENTS_project_card, github_v3_rest_api_app_14_EVENTS_project_column, github_v3_rest_api_app_14_EVENTS__public, github_v3_rest_api_app_14_EVENTS_pull_request, github_v3_rest_api_app_14_EVENTS_pull_request_review, github_v3_rest_api_app_14_EVENTS_pull_request_review_comment, github_v3_rest_api_app_14_EVENTS_push, github_v3_rest_api_app_14_EVENTS_registry_package, github_v3_rest_api_app_14_EVENTS_release, github_v3_rest_api_app_14_EVENTS_repository, github_v3_rest_api_app_14_EVENTS_repository_dispatch, github_v3_rest_api_app_14_EVENTS_secret_scanning_alert, github_v3_rest_api_app_14_EVENTS_star, github_v3_rest_api_app_14_EVENTS_status, github_v3_rest_api_app_14_EVENTS_team, github_v3_rest_api_app_14_EVENTS_team_add, github_v3_rest_api_app_14_EVENTS_watch, github_v3_rest_api_app_14_EVENTS_workflow_dispatch, github_v3_rest_api_app_14_EVENTS_workflow_run, github_v3_rest_api_app_14_EVENTS_reminder, github_v3_rest_api_app_14_EVENTS_security_and_analysis } github_v3_rest_api_app_14_EVENTS_e;

char* app_14_events_ToString(github_v3_rest_api_app_14_EVENTS_e events);

github_v3_rest_api_app_14_EVENTS_e app_14_events_FromString(char* events);



typedef struct app_14_t {
    char *created_at; //date time
    char *description; // string
    list_t *events; //primitive container
    char *external_url; // string
    char *html_url; // string
    int id; //numeric
    char *name; // string
    char *node_id; // string
    struct user_t *owner; //model
    struct app_1_permissions_t *permissions; //model
    char *slug; // string
    char *updated_at; //date time

} app_14_t;

app_14_t *app_14_create(
    char *created_at,
    char *description,
    list_t *events,
    char *external_url,
    char *html_url,
    int id,
    char *name,
    char *node_id,
    user_t *owner,
    app_1_permissions_t *permissions,
    char *slug,
    char *updated_at
);

void app_14_free(app_14_t *app_14);

app_14_t *app_14_parseFromJSON(cJSON *app_14JSON);

cJSON *app_14_convertToJSON(app_14_t *app_14);

#endif /* _app_14_H_ */

