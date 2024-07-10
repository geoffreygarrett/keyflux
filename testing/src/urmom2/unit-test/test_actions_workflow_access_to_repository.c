#ifndef actions_workflow_access_to_repository_TEST
#define actions_workflow_access_to_repository_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define actions_workflow_access_to_repository_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/actions_workflow_access_to_repository.h"
actions_workflow_access_to_repository_t* instantiate_actions_workflow_access_to_repository(int include_optional);



actions_workflow_access_to_repository_t* instantiate_actions_workflow_access_to_repository(int include_optional) {
  actions_workflow_access_to_repository_t* actions_workflow_access_to_repository = NULL;
  if (include_optional) {
    actions_workflow_access_to_repository = actions_workflow_access_to_repository_create(
      github_v3_rest_api_actions_workflow_access_to_repository_ACCESSLEVEL_none
    );
  } else {
    actions_workflow_access_to_repository = actions_workflow_access_to_repository_create(
      github_v3_rest_api_actions_workflow_access_to_repository_ACCESSLEVEL_none
    );
  }

  return actions_workflow_access_to_repository;
}


#ifdef actions_workflow_access_to_repository_MAIN

void test_actions_workflow_access_to_repository(int include_optional) {
    actions_workflow_access_to_repository_t* actions_workflow_access_to_repository_1 = instantiate_actions_workflow_access_to_repository(include_optional);

	cJSON* jsonactions_workflow_access_to_repository_1 = actions_workflow_access_to_repository_convertToJSON(actions_workflow_access_to_repository_1);
	printf("actions_workflow_access_to_repository :\n%s\n", cJSON_Print(jsonactions_workflow_access_to_repository_1));
	actions_workflow_access_to_repository_t* actions_workflow_access_to_repository_2 = actions_workflow_access_to_repository_parseFromJSON(jsonactions_workflow_access_to_repository_1);
	cJSON* jsonactions_workflow_access_to_repository_2 = actions_workflow_access_to_repository_convertToJSON(actions_workflow_access_to_repository_2);
	printf("repeating actions_workflow_access_to_repository:\n%s\n", cJSON_Print(jsonactions_workflow_access_to_repository_2));
}

int main() {
  test_actions_workflow_access_to_repository(1);
  test_actions_workflow_access_to_repository(0);

  printf("Hello world \n");
  return 0;
}

#endif // actions_workflow_access_to_repository_MAIN
#endif // actions_workflow_access_to_repository_TEST
