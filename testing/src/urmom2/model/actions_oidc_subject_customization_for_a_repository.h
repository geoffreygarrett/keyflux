/*
 * actions_oidc_subject_customization_for_a_repository.h
 *
 * Actions OIDC subject customization for a repository
 */

#ifndef _actions_oidc_subject_customization_for_a_repository_H_
#define _actions_oidc_subject_customization_for_a_repository_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct actions_oidc_subject_customization_for_a_repository_t actions_oidc_subject_customization_for_a_repository_t;




typedef struct actions_oidc_subject_customization_for_a_repository_t {
    int use_default; //boolean
    list_t *include_claim_keys; //primitive container

} actions_oidc_subject_customization_for_a_repository_t;

actions_oidc_subject_customization_for_a_repository_t *actions_oidc_subject_customization_for_a_repository_create(
    int use_default,
    list_t *include_claim_keys
);

void actions_oidc_subject_customization_for_a_repository_free(actions_oidc_subject_customization_for_a_repository_t *actions_oidc_subject_customization_for_a_repository);

actions_oidc_subject_customization_for_a_repository_t *actions_oidc_subject_customization_for_a_repository_parseFromJSON(cJSON *actions_oidc_subject_customization_for_a_repositoryJSON);

cJSON *actions_oidc_subject_customization_for_a_repository_convertToJSON(actions_oidc_subject_customization_for_a_repository_t *actions_oidc_subject_customization_for_a_repository);

#endif /* _actions_oidc_subject_customization_for_a_repository_H_ */

