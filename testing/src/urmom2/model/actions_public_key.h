/*
 * actions_public_key.h
 *
 * The public key used for setting Actions Secrets.
 */

#ifndef _actions_public_key_H_
#define _actions_public_key_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_public_key_t actions_public_key_t;




typedef struct actions_public_key_t {
    char *key_id; // string
    char *key; // string
    int id; //numeric
    char *url; // string
    char *title; // string
    char *created_at; // string

} actions_public_key_t;

actions_public_key_t *actions_public_key_create(
    char *key_id,
    char *key,
    int id,
    char *url,
    char *title,
    char *created_at
);

void actions_public_key_free(actions_public_key_t *actions_public_key);

actions_public_key_t *actions_public_key_parseFromJSON(cJSON *actions_public_keyJSON);

cJSON *actions_public_key_convertToJSON(actions_public_key_t *actions_public_key);

#endif /* _actions_public_key_H_ */

