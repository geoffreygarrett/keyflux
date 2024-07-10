/*
 * authorization.h
 *
 * The authorization for an OAuth app, GitHub App, or a Personal Access Token.
 */

#ifndef _authorization_H_
#define _authorization_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authorization_t authorization_t;

#include "authorization_app.h"
#include "nullable_scoped_installation.h"
#include "nullable_simple_user.h"



typedef struct authorization_t {
    long id; //numeric
    char *url; // string
    list_t *scopes; //primitive container
    char *token; // string
    char *token_last_eight; // string
    char *hashed_token; // string
    struct authorization_app_t *app; //model
    char *note; // string
    char *note_url; // string
    char *updated_at; //date time
    char *created_at; //date time
    char *fingerprint; // string
    struct nullable_simple_user_t *user; //model
    struct nullable_scoped_installation_t *installation; //model
    char *expires_at; //date time

} authorization_t;

authorization_t *authorization_create(
    long id,
    char *url,
    list_t *scopes,
    char *token,
    char *token_last_eight,
    char *hashed_token,
    authorization_app_t *app,
    char *note,
    char *note_url,
    char *updated_at,
    char *created_at,
    char *fingerprint,
    nullable_simple_user_t *user,
    nullable_scoped_installation_t *installation,
    char *expires_at
);

void authorization_free(authorization_t *authorization);

authorization_t *authorization_parseFromJSON(cJSON *authorizationJSON);

cJSON *authorization_convertToJSON(authorization_t *authorization);

#endif /* _authorization_H_ */

