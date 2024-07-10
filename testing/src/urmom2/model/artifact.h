/*
 * artifact.h
 *
 * An artifact
 */

#ifndef _artifact_H_
#define _artifact_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct artifact_t artifact_t;

#include "artifact_workflow_run.h"



typedef struct artifact_t {
    int id; //numeric
    char *node_id; // string
    char *name; // string
    int size_in_bytes; //numeric
    char *url; // string
    char *archive_download_url; // string
    int expired; //boolean
    char *created_at; //date time
    char *expires_at; //date time
    char *updated_at; //date time
    struct artifact_workflow_run_t *workflow_run; //model

} artifact_t;

artifact_t *artifact_create(
    int id,
    char *node_id,
    char *name,
    int size_in_bytes,
    char *url,
    char *archive_download_url,
    int expired,
    char *created_at,
    char *expires_at,
    char *updated_at,
    artifact_workflow_run_t *workflow_run
);

void artifact_free(artifact_t *artifact);

artifact_t *artifact_parseFromJSON(cJSON *artifactJSON);

cJSON *artifact_convertToJSON(artifact_t *artifact);

#endif /* _artifact_H_ */

