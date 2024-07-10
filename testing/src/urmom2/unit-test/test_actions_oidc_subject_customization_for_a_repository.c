#ifndef actions_oidc_subject_customization_for_a_repository_TEST
#define actions_oidc_subject_customization_for_a_repository_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_oidc_subject_customization_for_a_repository_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_oidc_subject_customization_for_a_repository.h"
actions_oidc_subject_customization_for_a_repository_t* instantiate_actions_oidc_subject_customization_for_a_repository(int include_optional);



actions_oidc_subject_customization_for_a_repository_t* instantiate_actions_oidc_subject_customization_for_a_repository(int include_optional) {
  actions_oidc_subject_customization_for_a_repository_t* actions_oidc_subject_customization_for_a_repository = NULL;
  if (include_optional) {
    actions_oidc_subject_customization_for_a_repository = actions_oidc_subject_customization_for_a_repository_create(
      1,
      list_createList()
    );
  } else {
    actions_oidc_subject_customization_for_a_repository = actions_oidc_subject_customization_for_a_repository_create(
      1,
      list_createList()
    );
  }

  return actions_oidc_subject_customization_for_a_repository;
}


#ifdef actions_oidc_subject_customization_for_a_repository_MAIN

void test_actions_oidc_subject_customization_for_a_repository(int include_optional) {
    actions_oidc_subject_customization_for_a_repository_t* actions_oidc_subject_customization_for_a_repository_1 = instantiate_actions_oidc_subject_customization_for_a_repository(include_optional);

	cJSON* jsonactions_oidc_subject_customization_for_a_repository_1 = actions_oidc_subject_customization_for_a_repository_convertToJSON(actions_oidc_subject_customization_for_a_repository_1);
	printf("actions_oidc_subject_customization_for_a_repository :\n%s\n", cJSON_Print(jsonactions_oidc_subject_customization_for_a_repository_1));
	actions_oidc_subject_customization_for_a_repository_t* actions_oidc_subject_customization_for_a_repository_2 = actions_oidc_subject_customization_for_a_repository_parseFromJSON(jsonactions_oidc_subject_customization_for_a_repository_1);
	cJSON* jsonactions_oidc_subject_customization_for_a_repository_2 = actions_oidc_subject_customization_for_a_repository_convertToJSON(actions_oidc_subject_customization_for_a_repository_2);
	printf("repeating actions_oidc_subject_customization_for_a_repository:\n%s\n", cJSON_Print(jsonactions_oidc_subject_customization_for_a_repository_2));
}

int main() {
  test_actions_oidc_subject_customization_for_a_repository(1);
  test_actions_oidc_subject_customization_for_a_repository(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_oidc_subject_customization_for_a_repository_MAIN
#endif // actions_oidc_subject_customization_for_a_repository_TEST
