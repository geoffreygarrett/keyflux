/*
 * authentication_token.h
 *
 * Authentication Token
 */

#ifndef _authentication_token_H_
#define _authentication_token_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authentication_token_t authentication_token_t;

#include "object.h"
#include "repository.h"

// Enum REPOSITORYSELECTION for authentication_token

typedef enum  { github_v3_rest_api_authentication_token_REPOSITORYSELECTION_NULL = 0, github_v3_rest_api_authentication_token_REPOSITORYSELECTION_all, github_v3_rest_api_authentication_token_REPOSITORYSELECTION_selected } github_v3_rest_api_authentication_token_REPOSITORYSELECTION_e;

char* authentication_token_repository_selection_ToString(github_v3_rest_api_authentication_token_REPOSITORYSELECTION_e repository_selection);

github_v3_rest_api_authentication_token_REPOSITORYSELECTION_e authentication_token_repository_selection_FromString(char* repository_selection);



typedef struct authentication_token_t {
    char *token; // string
    char *expires_at; //date time
    object_t *permissions; //object
    list_t *repositories; //nonprimitive container
    char *single_file; // string
    github_v3_rest_api_authentication_token_REPOSITORYSELECTION_e repository_selection; //enum

} authentication_token_t;

authentication_token_t *authentication_token_create(
    char *token,
    char *expires_at,
    object_t *permissions,
    list_t *repositories,
    char *single_file,
    github_v3_rest_api_authentication_token_REPOSITORYSELECTION_e repository_selection
);

void authentication_token_free(authentication_token_t *authentication_token);

authentication_token_t *authentication_token_parseFromJSON(cJSON *authentication_tokenJSON);

cJSON *authentication_token_convertToJSON(authentication_token_t *authentication_token);

#endif /* _authentication_token_H_ */

