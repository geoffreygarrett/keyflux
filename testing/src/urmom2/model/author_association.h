/*
 * author_association.h
 *
 * How the author is associated with the repository.
 */

#ifndef _author_association_H_
#define _author_association_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct author_association_t author_association_t;


// Enum  for author_association

typedef enum { github_v3_rest_api_author_association__NULL = 0, github_v3_rest_api_author_association__COLLABORATOR, github_v3_rest_api_author_association__CONTRIBUTOR, github_v3_rest_api_author_association__FIRST_TIMER, github_v3_rest_api_author_association__FIRST_TIME_CONTRIBUTOR, github_v3_rest_api_author_association__MANNEQUIN, github_v3_rest_api_author_association__MEMBER, github_v3_rest_api_author_association__NONE, github_v3_rest_api_author_association__OWNER } github_v3_rest_api_author_association__e;

char* author_association_author_association_ToString(github_v3_rest_api_author_association__e author_association);

github_v3_rest_api_author_association__e author_association_author_association_FromString(char* author_association);

//cJSON *author_association_author_association_convertToJSON(github_v3_rest_api_author_association__e author_association);

//github_v3_rest_api_author_association__e author_association_author_association_parseFromJSON(cJSON *author_associationJSON);

#endif /* _author_association_H_ */

