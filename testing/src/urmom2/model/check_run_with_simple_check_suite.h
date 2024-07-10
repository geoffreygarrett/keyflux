/*
 * check_run_with_simple_check_suite.h
 *
 * A check performed on the code of a given code change
 */

#ifndef _check_run_with_simple_check_suite_H_
#define _check_run_with_simple_check_suite_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct check_run_with_simple_check_suite_t check_run_with_simple_check_suite_t;

#include "check_run_with_simple_check_suite_output.h"
#include "deployment_simple.h"
#include "nullable_integration.h"
#include "pull_request_minimal.h"
#include "simple_check_suite.h"

// Enum CONCLUSION for check_run_with_simple_check_suite

typedef enum  { github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_NULL = 0, github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_waiting, github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_pending, github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_startup_failure, github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_stale, github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_success, github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_failure, github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_neutral, github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_cancelled, github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_skipped, github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_timed_out, github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_action_required } github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_e;

char* check_run_with_simple_check_suite_conclusion_ToString(github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_e conclusion);

github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_e check_run_with_simple_check_suite_conclusion_FromString(char* conclusion);

// Enum STATUS for check_run_with_simple_check_suite

typedef enum  { github_v3_rest_api_check_run_with_simple_check_suite_STATUS_NULL = 0, github_v3_rest_api_check_run_with_simple_check_suite_STATUS_queued, github_v3_rest_api_check_run_with_simple_check_suite_STATUS_in_progress, github_v3_rest_api_check_run_with_simple_check_suite_STATUS_completed, github_v3_rest_api_check_run_with_simple_check_suite_STATUS_pending } github_v3_rest_api_check_run_with_simple_check_suite_STATUS_e;

char* check_run_with_simple_check_suite_status_ToString(github_v3_rest_api_check_run_with_simple_check_suite_STATUS_e status);

github_v3_rest_api_check_run_with_simple_check_suite_STATUS_e check_run_with_simple_check_suite_status_FromString(char* status);



typedef struct check_run_with_simple_check_suite_t {
    struct nullable_integration_t *app; //model
    struct simple_check_suite_t *check_suite; //model
    char *completed_at; //date time
    github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_e conclusion; //enum
    struct deployment_simple_t *deployment; //model
    char *details_url; // string
    char *external_id; // string
    char *head_sha; // string
    char *html_url; // string
    int id; //numeric
    char *name; // string
    char *node_id; // string
    struct check_run_with_simple_check_suite_output_t *output; //model
    list_t *pull_requests; //nonprimitive container
    char *started_at; //date time
    github_v3_rest_api_check_run_with_simple_check_suite_STATUS_e status; //enum
    char *url; // string

} check_run_with_simple_check_suite_t;

check_run_with_simple_check_suite_t *check_run_with_simple_check_suite_create(
    nullable_integration_t *app,
    simple_check_suite_t *check_suite,
    char *completed_at,
    github_v3_rest_api_check_run_with_simple_check_suite_CONCLUSION_e conclusion,
    deployment_simple_t *deployment,
    char *details_url,
    char *external_id,
    char *head_sha,
    char *html_url,
    int id,
    char *name,
    char *node_id,
    check_run_with_simple_check_suite_output_t *output,
    list_t *pull_requests,
    char *started_at,
    github_v3_rest_api_check_run_with_simple_check_suite_STATUS_e status,
    char *url
);

void check_run_with_simple_check_suite_free(check_run_with_simple_check_suite_t *check_run_with_simple_check_suite);

check_run_with_simple_check_suite_t *check_run_with_simple_check_suite_parseFromJSON(cJSON *check_run_with_simple_check_suiteJSON);

cJSON *check_run_with_simple_check_suite_convertToJSON(check_run_with_simple_check_suite_t *check_run_with_simple_check_suite);

#endif /* _check_run_with_simple_check_suite_H_ */

