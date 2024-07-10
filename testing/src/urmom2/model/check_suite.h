/*
 * check_suite.h
 *
 * A suite of checks performed on the code of a given code change
 */

#ifndef _check_suite_H_
#define _check_suite_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct check_suite_t check_suite_t;

#include "minimal_repository.h"
#include "nullable_integration.h"
#include "pull_request_minimal.h"
#include "simple_commit.h"

// Enum STATUS for check_suite

typedef enum  { github_v3_rest_api_check_suite_STATUS_NULL = 0, github_v3_rest_api_check_suite_STATUS_queued, github_v3_rest_api_check_suite_STATUS_in_progress, github_v3_rest_api_check_suite_STATUS_completed, github_v3_rest_api_check_suite_STATUS_waiting, github_v3_rest_api_check_suite_STATUS_requested, github_v3_rest_api_check_suite_STATUS_pending } github_v3_rest_api_check_suite_STATUS_e;

char* check_suite_status_ToString(github_v3_rest_api_check_suite_STATUS_e status);

github_v3_rest_api_check_suite_STATUS_e check_suite_status_FromString(char* status);

// Enum CONCLUSION for check_suite

typedef enum  { github_v3_rest_api_check_suite_CONCLUSION_NULL = 0, github_v3_rest_api_check_suite_CONCLUSION_success, github_v3_rest_api_check_suite_CONCLUSION_failure, github_v3_rest_api_check_suite_CONCLUSION_neutral, github_v3_rest_api_check_suite_CONCLUSION_cancelled, github_v3_rest_api_check_suite_CONCLUSION_skipped, github_v3_rest_api_check_suite_CONCLUSION_timed_out, github_v3_rest_api_check_suite_CONCLUSION_action_required, github_v3_rest_api_check_suite_CONCLUSION_startup_failure, github_v3_rest_api_check_suite_CONCLUSION_stale, github_v3_rest_api_check_suite_CONCLUSION_null } github_v3_rest_api_check_suite_CONCLUSION_e;

char* check_suite_conclusion_ToString(github_v3_rest_api_check_suite_CONCLUSION_e conclusion);

github_v3_rest_api_check_suite_CONCLUSION_e check_suite_conclusion_FromString(char* conclusion);



typedef struct check_suite_t {
    int id; //numeric
    char *node_id; // string
    char *head_branch; // string
    char *head_sha; // string
    github_v3_rest_api_check_suite_STATUS_e status; //enum
    github_v3_rest_api_check_suite_CONCLUSION_e conclusion; //enum
    char *url; // string
    char *before; // string
    char *after; // string
    list_t *pull_requests; //nonprimitive container
    struct nullable_integration_t *app; //model
    struct minimal_repository_t *repository; //model
    char *created_at; //date time
    char *updated_at; //date time
    struct simple_commit_t *head_commit; //model
    int latest_check_runs_count; //numeric
    char *check_runs_url; // string
    int rerequestable; //boolean
    int runs_rerequestable; //boolean

} check_suite_t;

check_suite_t *check_suite_create(
    int id,
    char *node_id,
    char *head_branch,
    char *head_sha,
    github_v3_rest_api_check_suite_STATUS_e status,
    github_v3_rest_api_check_suite_CONCLUSION_e conclusion,
    char *url,
    char *before,
    char *after,
    list_t *pull_requests,
    nullable_integration_t *app,
    minimal_repository_t *repository,
    char *created_at,
    char *updated_at,
    simple_commit_t *head_commit,
    int latest_check_runs_count,
    char *check_runs_url,
    int rerequestable,
    int runs_rerequestable
);

void check_suite_free(check_suite_t *check_suite);

check_suite_t *check_suite_parseFromJSON(cJSON *check_suiteJSON);

cJSON *check_suite_convertToJSON(check_suite_t *check_suite);

#endif /* _check_suite_H_ */

