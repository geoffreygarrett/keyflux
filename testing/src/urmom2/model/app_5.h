/*
 * app_5.h
 *
 * GitHub apps are a new way to extend GitHub. They can be installed directly on organizations and user accounts and granted access to specific repositories. They come with granular permissions and built-in webhooks. GitHub apps are first class actors within GitHub.
 */

#ifndef _app_5_H_
#define _app_5_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct app_5_t app_5_t;

#include "app_1_permissions.h"
#include "user.h"

// Enum EVENTS for app_5

typedef enum  { github_v3_rest_api_app_5_EVENTS_NULL = 0, github_v3_rest_api_app_5_EVENTS_branch_protection_rule, github_v3_rest_api_app_5_EVENTS_check_run, github_v3_rest_api_app_5_EVENTS_check_suite, github_v3_rest_api_app_5_EVENTS_code_scanning_alert, github_v3_rest_api_app_5_EVENTS_commit_comment, github_v3_rest_api_app_5_EVENTS_content_reference, github_v3_rest_api_app_5_EVENTS_create, github_v3_rest_api_app_5_EVENTS__delete, github_v3_rest_api_app_5_EVENTS_deployment, github_v3_rest_api_app_5_EVENTS_deployment_review, github_v3_rest_api_app_5_EVENTS_deployment_status, github_v3_rest_api_app_5_EVENTS_deploy_key, github_v3_rest_api_app_5_EVENTS_discussion, github_v3_rest_api_app_5_EVENTS_discussion_comment, github_v3_rest_api_app_5_EVENTS_fork, github_v3_rest_api_app_5_EVENTS_gollum, github_v3_rest_api_app_5_EVENTS_issues, github_v3_rest_api_app_5_EVENTS_issue_comment, github_v3_rest_api_app_5_EVENTS_label, github_v3_rest_api_app_5_EVENTS_member, github_v3_rest_api_app_5_EVENTS_membership, github_v3_rest_api_app_5_EVENTS_milestone, github_v3_rest_api_app_5_EVENTS_organization, github_v3_rest_api_app_5_EVENTS_org_block, github_v3_rest_api_app_5_EVENTS_page_build, github_v3_rest_api_app_5_EVENTS_project, github_v3_rest_api_app_5_EVENTS_project_card, github_v3_rest_api_app_5_EVENTS_project_column, github_v3_rest_api_app_5_EVENTS__public, github_v3_rest_api_app_5_EVENTS_pull_request, github_v3_rest_api_app_5_EVENTS_pull_request_review, github_v3_rest_api_app_5_EVENTS_pull_request_review_comment, github_v3_rest_api_app_5_EVENTS_push, github_v3_rest_api_app_5_EVENTS_registry_package, github_v3_rest_api_app_5_EVENTS_release, github_v3_rest_api_app_5_EVENTS_repository, github_v3_rest_api_app_5_EVENTS_repository_dispatch, github_v3_rest_api_app_5_EVENTS_secret_scanning_alert, github_v3_rest_api_app_5_EVENTS_star, github_v3_rest_api_app_5_EVENTS_status, github_v3_rest_api_app_5_EVENTS_team, github_v3_rest_api_app_5_EVENTS_team_add, github_v3_rest_api_app_5_EVENTS_watch, github_v3_rest_api_app_5_EVENTS_workflow_dispatch, github_v3_rest_api_app_5_EVENTS_workflow_run, github_v3_rest_api_app_5_EVENTS_workflow_job, github_v3_rest_api_app_5_EVENTS_pull_request_review_thread, github_v3_rest_api_app_5_EVENTS_merge_queue_entry, github_v3_rest_api_app_5_EVENTS_secret_scanning_alert_location, github_v3_rest_api_app_5_EVENTS_merge_group } github_v3_rest_api_app_5_EVENTS_e;

char* app_5_events_ToString(github_v3_rest_api_app_5_EVENTS_e events);

github_v3_rest_api_app_5_EVENTS_e app_5_events_FromString(char* events);



typedef struct app_5_t {
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

} app_5_t;

app_5_t *app_5_create(
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

void app_5_free(app_5_t *app_5);

app_5_t *app_5_parseFromJSON(cJSON *app_5JSON);

cJSON *app_5_convertToJSON(app_5_t *app_5);

#endif /* _app_5_H_ */
