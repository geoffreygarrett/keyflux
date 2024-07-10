/*
 * app_4.h
 *
 * GitHub apps are a new way to extend GitHub. They can be installed directly on organizations and user accounts and granted access to specific repositories. They come with granular permissions and built-in webhooks. GitHub apps are first class actors within GitHub.
 */

#ifndef _app_4_H_
#define _app_4_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct app_4_t app_4_t;

#include "app_2_permissions.h"
#include "user.h"

// Enum EVENTS for app_4

typedef enum  { github_v3_rest_api_app_4_EVENTS_NULL = 0, github_v3_rest_api_app_4_EVENTS_branch_protection_rule, github_v3_rest_api_app_4_EVENTS_check_run, github_v3_rest_api_app_4_EVENTS_check_suite, github_v3_rest_api_app_4_EVENTS_code_scanning_alert, github_v3_rest_api_app_4_EVENTS_commit_comment, github_v3_rest_api_app_4_EVENTS_content_reference, github_v3_rest_api_app_4_EVENTS_create, github_v3_rest_api_app_4_EVENTS__delete, github_v3_rest_api_app_4_EVENTS_deployment, github_v3_rest_api_app_4_EVENTS_deployment_review, github_v3_rest_api_app_4_EVENTS_deployment_status, github_v3_rest_api_app_4_EVENTS_deploy_key, github_v3_rest_api_app_4_EVENTS_discussion, github_v3_rest_api_app_4_EVENTS_discussion_comment, github_v3_rest_api_app_4_EVENTS_fork, github_v3_rest_api_app_4_EVENTS_gollum, github_v3_rest_api_app_4_EVENTS_issues, github_v3_rest_api_app_4_EVENTS_issue_comment, github_v3_rest_api_app_4_EVENTS_label, github_v3_rest_api_app_4_EVENTS_member, github_v3_rest_api_app_4_EVENTS_membership, github_v3_rest_api_app_4_EVENTS_milestone, github_v3_rest_api_app_4_EVENTS_organization, github_v3_rest_api_app_4_EVENTS_org_block, github_v3_rest_api_app_4_EVENTS_page_build, github_v3_rest_api_app_4_EVENTS_project, github_v3_rest_api_app_4_EVENTS_project_card, github_v3_rest_api_app_4_EVENTS_project_column, github_v3_rest_api_app_4_EVENTS__public, github_v3_rest_api_app_4_EVENTS_pull_request, github_v3_rest_api_app_4_EVENTS_pull_request_review, github_v3_rest_api_app_4_EVENTS_pull_request_review_comment, github_v3_rest_api_app_4_EVENTS_push, github_v3_rest_api_app_4_EVENTS_registry_package, github_v3_rest_api_app_4_EVENTS_release, github_v3_rest_api_app_4_EVENTS_repository, github_v3_rest_api_app_4_EVENTS_repository_dispatch, github_v3_rest_api_app_4_EVENTS_secret_scanning_alert, github_v3_rest_api_app_4_EVENTS_star, github_v3_rest_api_app_4_EVENTS_status, github_v3_rest_api_app_4_EVENTS_team, github_v3_rest_api_app_4_EVENTS_team_add, github_v3_rest_api_app_4_EVENTS_watch, github_v3_rest_api_app_4_EVENTS_workflow_dispatch, github_v3_rest_api_app_4_EVENTS_workflow_run, github_v3_rest_api_app_4_EVENTS_pull_request_review_thread, github_v3_rest_api_app_4_EVENTS_merge_queue_entry, github_v3_rest_api_app_4_EVENTS_workflow_job } github_v3_rest_api_app_4_EVENTS_e;

char* app_4_events_ToString(github_v3_rest_api_app_4_EVENTS_e events);

github_v3_rest_api_app_4_EVENTS_e app_4_events_FromString(char* events);



typedef struct app_4_t {
    char *created_at; //date time
    char *description; // string
    list_t *events; //primitive container
    char *external_url; // string
    char *html_url; // string
    int id; //numeric
    char *name; // string
    char *node_id; // string
    struct user_t *owner; //model
    struct app_2_permissions_t *permissions; //model
    char *slug; // string
    char *updated_at; //date time

} app_4_t;

app_4_t *app_4_create(
    char *created_at,
    char *description,
    list_t *events,
    char *external_url,
    char *html_url,
    int id,
    char *name,
    char *node_id,
    user_t *owner,
    app_2_permissions_t *permissions,
    char *slug,
    char *updated_at
);

void app_4_free(app_4_t *app_4);

app_4_t *app_4_parseFromJSON(cJSON *app_4JSON);

cJSON *app_4_convertToJSON(app_4_t *app_4);

#endif /* _app_4_H_ */

