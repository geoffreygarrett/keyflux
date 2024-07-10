/*
 * check_run.h
 *
 * A check performed on the code of a given code change
 */

#ifndef _check_run_H_
#define _check_run_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct check_run_t check_run_t;

#include "check_run_check_suite.h"
#include "check_run_output.h"
#include "deployment_simple.h"
#include "nullable_integration.h"
#include "pull_request_minimal.h"

// Enum STATUS for check_run

typedef enum  { github_v3_rest_api_check_run_STATUS_NULL = 0, github_v3_rest_api_check_run_STATUS_queued, github_v3_rest_api_check_run_STATUS_in_progress, github_v3_rest_api_check_run_STATUS_completed, github_v3_rest_api_check_run_STATUS_waiting, github_v3_rest_api_check_run_STATUS_requested, github_v3_rest_api_check_run_STATUS_pending } github_v3_rest_api_check_run_STATUS_e;

char* check_run_status_ToString(github_v3_rest_api_check_run_STATUS_e status);

github_v3_rest_api_check_run_STATUS_e check_run_status_FromString(char* status);

// Enum CONCLUSION for check_run

typedef enum  { github_v3_rest_api_check_run_CONCLUSION_NULL = 0, github_v3_rest_api_check_run_CONCLUSION_success, github_v3_rest_api_check_run_CONCLUSION_failure, github_v3_rest_api_check_run_CONCLUSION_neutral, github_v3_rest_api_check_run_CONCLUSION_cancelled, github_v3_rest_api_check_run_CONCLUSION_skipped, github_v3_rest_api_check_run_CONCLUSION_timed_out, github_v3_rest_api_check_run_CONCLUSION_action_required } github_v3_rest_api_check_run_CONCLUSION_e;

char* check_run_conclusion_ToString(github_v3_rest_api_check_run_CONCLUSION_e conclusion);

github_v3_rest_api_check_run_CONCLUSION_e check_run_conclusion_FromString(char* conclusion);



typedef struct check_run_t {
    int id; //numeric
    char *head_sha; // string
    char *node_id; // string
    char *external_id; // string
    char *url; // string
    char *html_url; // string
    char *details_url; // string
    github_v3_rest_api_check_run_STATUS_e status; //enum
    github_v3_rest_api_check_run_CONCLUSION_e conclusion; //enum
    char *started_at; //date time
    char *completed_at; //date time
    struct check_run_output_t *output; //model
    char *name; // string
    struct check_run_check_suite_t *check_suite; //model
    struct nullable_integration_t *app; //model
    list_t *pull_requests; //nonprimitive container
    struct deployment_simple_t *deployment; //model

} check_run_t;

check_run_t *check_run_create(
    int id,
    char *head_sha,
    char *node_id,
    char *external_id,
    char *url,
    char *html_url,
    char *details_url,
    github_v3_rest_api_check_run_STATUS_e status,
    github_v3_rest_api_check_run_CONCLUSION_e conclusion,
    char *started_at,
    char *completed_at,
    check_run_output_t *output,
    char *name,
    check_run_check_suite_t *check_suite,
    nullable_integration_t *app,
    list_t *pull_requests,
    deployment_simple_t *deployment
);

void check_run_free(check_run_t *check_run);

check_run_t *check_run_parseFromJSON(cJSON *check_runJSON);

cJSON *check_run_convertToJSON(check_run_t *check_run);

#endif /* _check_run_H_ */

