/*
 * artifact_workflow_run.h
 *
 * 
 */

#ifndef _artifact_workflow_run_H_
#define _artifact_workflow_run_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct artifact_workflow_run_t artifact_workflow_run_t;




typedef struct artifact_workflow_run_t {
    int id; //numeric
    int repository_id; //numeric
    int head_repository_id; //numeric
    char *head_branch; // string
    char *head_sha; // string

} artifact_workflow_run_t;

artifact_workflow_run_t *artifact_workflow_run_create(
    int id,
    int repository_id,
    int head_repository_id,
    char *head_branch,
    char *head_sha
);

void artifact_workflow_run_free(artifact_workflow_run_t *artifact_workflow_run);

artifact_workflow_run_t *artifact_workflow_run_parseFromJSON(cJSON *artifact_workflow_runJSON);

cJSON *artifact_workflow_run_convertToJSON(artifact_workflow_run_t *artifact_workflow_run);

#endif /* _artifact_workflow_run_H_ */

