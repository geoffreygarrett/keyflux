/*
 * actor.h
 *
 * Actor
 */

#ifndef _actor_H_
#define _actor_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actor_t actor_t;




typedef struct actor_t {
    int id; //numeric
    char *login; // string
    char *display_login; // string
    char *gravatar_id; // string
    char *url; // string
    char *avatar_url; // string

} actor_t;

actor_t *actor_create(
    int id,
    char *login,
    char *display_login,
    char *gravatar_id,
    char *url,
    char *avatar_url
);

void actor_free(actor_t *actor);

actor_t *actor_parseFromJSON(cJSON *actorJSON);

cJSON *actor_convertToJSON(actor_t *actor);

#endif /* _actor_H_ */

