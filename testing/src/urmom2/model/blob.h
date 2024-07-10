/*
 * blob.h
 *
 * Blob
 */

#ifndef _blob_H_
#define _blob_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blob_t blob_t;




typedef struct blob_t {
    char *content; // string
    char *encoding; // string
    char *url; // string
    char *sha; // string
    int size; //numeric
    char *node_id; // string
    char *highlighted_content; // string

} blob_t;

blob_t *blob_create(
    char *content,
    char *encoding,
    char *url,
    char *sha,
    int size,
    char *node_id,
    char *highlighted_content
);

void blob_free(blob_t *blob);

blob_t *blob_parseFromJSON(cJSON *blobJSON);

cJSON *blob_convertToJSON(blob_t *blob);

#endif /* _blob_H_ */

